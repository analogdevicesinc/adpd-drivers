/**
    ***************************************************************************
    * @file     AdpdDrv.c
    * @author   ADI
    * @version  V2.0
    * @date     20-July-2016
    * @brief    Reference design device driver to access ADI ADPD chip.
    ***************************************************************************
*/
/******************************************************************************
*                                                                             *
    License Agreement
*                                                                             *
    Copyright (c) 2016 Analog Devices Inc.
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted (subject to the limitations in the disclaimer
    below) provided that the following conditions are met:
*                                                                             *
    Redistributions of source code must retain the above copyright notice,
    this list of conditions and the following disclaimer.
*                                                                             *
*                                                                             *
    Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.
*                                                                             *
*                                                                             *
    Neither the name of Analog Devices, Inc. nor the names of its contributors
    may be used to endorse or promote products derived from this software
    without specific prior written permission.
*                                                                             *
    NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY
    THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
    CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT
    NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
    A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
    OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
    EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
    PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
    OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
    OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
    ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*                                                                             *
*                                                                             *
    This software is intended for use with the ADPD and derivative parts
    only
*                                                                             *
******************************************************************************/

/******************************************************************************
* Version 0.9, Sept 24, 2014                                                  *
*   Change FIFO filled threshold                                              *
* Version 1.0, Oct 01, 2014                                                   *
*   Add efuse function                                                        *
* Version 1.1, Oct 29, 2014                                                   *
*   Add timestamp output                                                      *
* Version 1.2, Nov 21, 2014                                                   *
*   Created MCU_HAL_I2C_TxRx() and use it here                                *
*   Added set to Idle mode in Open/close driver                               *
*   Enable to read FIFO from ISR                                              *
* Version 1.3, Jan 28, 2015                                                   *
*   Fixed bug with time stamp and FIFO watermark                              *
* Version 1.4, Feb 28, 2015                                                   *
*   Added device reset and FIFO overflow indicator in debug mode              *
* Version 1.4.1, Apr 2, 2015                                                  *
*   Fixed bug with timestamp when the watermark is greater than 1             *
* Version 1.5, Apr 30, 2015                                                   *
*   Added support for the R4 in summation mode and channel 1 only             *
* Version 1.6, Apr 30, 2015                                                   *
*   Added support for the Digital Intergration mode.                          *
*   Added flush soft buffer when FIFO is flushed.                             *
* Version 1.7, Jun 17, 2015                                                   *
*   Renamed MCU_HAL_I2C_TxRx() to ADPD_I2C_TxRx()                             *
*   Renamed MCU_HAL_I2C_Transmit()() to ADPD_I2C_Transmit()                   *
*   Removed GPIO_Pin argument from AdpdISR                                    *
* Version 2.0, July 20, 2016                                                  *
*   Simplified the driver code by moving the ring buffer to the application   *
*   New functions and API added
*   Support for ADPD105/6/7 added                                             *
******************************************************************************/

/* ------------------------- Includes -------------------------------------- */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include "AdpdDrv.h"

#include "Common.h"
/* ------------------------- Defines  --------------------------------------- */

// #define AdpdISR(s)                    HAL_GPIO_EXTI_Callback(s)
// #define DEBUG_MODE_LED             // use LED for debugging
#define INTERRUPT_ENABLE
#define CLR_HFIFO_SAMPLE
#define DEVICE_ID_516           0x0516

#ifdef INTERRUPT_ENABLE
/*  Interrupt pin is enabled
Define INT_ENA as 0 to disable it */
#define INT_ENA ((0x1) << 2)
/*  Interrupt pin is set as always driven
Define INT_DRV as 2 if multiple devices need to share the INT pin */
#define INT_DRV ((0x0) << 1)
/*  Interrupt polarity is set as active low
Define INT_POL as 0 for active high */
#define INT_POL ((0x1) << 0)
#endif


/* ------------------------- Public Function Prototypes -------------------- */
uint32_t* AdpdDrvGetDebugInfo();
void AdpdDrvSetIsrReadDataFromFIFO(uint8_t nEnableSet);
static void (*gpfnADPDCallBack)();
extern void AdpdDeviceReset();

/* ------------------------- Private variables ----------------------------- */
static uint8_t gnAdpdDataSetSize = 0, gnAdpdFifoWaterMark = 1;
static volatile  uint8_t gnIRQHappen;
static ADPDDrv_Operation_Slot_t gnSlotMode_A = (ADPDDrv_Operation_Slot_t) 0;
static ADPDDrv_Operation_Slot_t gnSlotMode_B = (ADPDDrv_Operation_Slot_t) 0;
static uint32_t gnAccessCnt[5];
static uint8_t gnFifoLevel;
static uint8_t gnAdpdDataSetSize_A, gnAdpdDataSetSize_B, gnChannelSize_A,
       gnChannelSize_B, gnBytesPerSample_A,gnBytesPerSample_B;
static uint16_t gnDeviceID;

#ifndef NDEBUG
static uint32_t gnOverFlowCnt = 0;
#endif  // NDEBUG
/* ------------------------- Private Function Prototypes ------------------- */
static void Init(void);
static int16_t SetAdpdIdleMode(void);
static int16_t SetInterruptControl(void);
static int16_t AdpdDrvSetInterrupt(uint16_t nIntMask);

/** @addtogroup Adpd_Driver  ADPD
  Source file contains driver task for wearable device framework.
  This will read data from senor devices and put them into data buffers.
  @{
 */

#ifndef NOTUSED
/** @brief  Open Driver, setting up the interrupt and I2C lines
  *
  * @param  addr 32-bit register address
  * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
int16_t AdpdDrvOpenDriver()
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
#ifndef NDEBUG
	gnOverFlowCnt = 0;
#endif  // NDEBUG
	nRetCode = AdpdDrvRegRead(0x8, &gnDeviceID);
	nRetCode |= SetAdpdIdleMode();
	Init();
	nRetCode |= AdpdDrvSetInterrupt(FIFO_INT_EN);  // Default mode
	nRetCode |= SetInterruptControl();
	return nRetCode;
}

/** @brief  Close Driver, Clear up before existing
  *
  * @param  None
  * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
int16_t AdpdDrvCloseDriver(void)
{
#ifndef NDEBUG
	debug("FIFO Full = %i\r\n", gnOverFlowCnt);
#endif  // NDEBUG
	return SetAdpdIdleMode();
}

#endif  // NOTUSED

/** @brief  Synchronous register write to the ADPD
  *
  * @param  nAddr 16-bit register address
  * @param  nRegValue 16-bit register data value
  * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
int16_t AdpdDrvRegWrite(uint16_t nAddr, uint16_t nRegValue)
{
	uint8_t anI2cData[3];
	anI2cData[0] = (uint8_t)nAddr;
	anI2cData[1] = (uint8_t)(nRegValue >> 8);
	anI2cData[2] = (uint8_t)(nRegValue);

#ifdef ADPD_SPI
	uint8_t pTxData[3];
	pTxData[0] = (anI2cData[0] << 1 ) | ADPD_SPI_WRITE
	             ;             // To set the last bit high for write operation
	pTxData[1] = anI2cData[1];
	pTxData[2] = anI2cData[2];

	if (ADPD_SPI_Transmit(pTxData, 3)!= ADI_HAL_OK) {
		return ADPDDrv_ERROR;
	}
#else

	/**
	    The first argument to the function ADPD_I2C_Transmit is the register
	    address of the ADPD device and the 16 bits data value to be written to the
	    device register.
	    The 1st argument to the function ADPD_I2C_Transmit is the pointer to the
	    buffer of the size of three bytes in which first byte is the register
	    address of the ADPD device.
	    The second and the third bytes are the 16 bits data value to be written
	    to the device register
	    The 2nd argument is the size of the buffer in bytes (3 bytes).
	    ADPD_I2C_Transmit() should be implemented in such a way that it transmits
	    the data from anI2cData buffer of size specified in the second argument.
	*/
	if (ADPD_I2C_Transmit((uint8_t *) anI2cData, 3) != ADI_HAL_OK) {
		return ADPDDrv_ERROR;
	}
#endif //ADPD_SPI
	return ADPDDrv_SUCCESS;
}

/** @brief  Synchronous register read from the ADPD
  *
  * @param  nAddr 16-bit register address
  * @param  *pnData Pointer to 16-bit register data value
  * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
int16_t AdpdDrvRegRead(uint16_t nAddr, uint16_t *pnData)
{
	uint8_t nRegAddr, anRxData[2];
	nRegAddr = (uint8_t)nAddr;

#ifdef ADPD_SPI
	uint8_t pTxData[1];
	pTxData[0] = ( nRegAddr << 1) |
	             ADPD_SPI_READ;  //   reset the last bit for read operation

	if (ADPD_SPI_Receive(pTxData, anRxData, 1, 2)!= ADI_HAL_OK) {
		return ADPDDrv_ERROR;
	}
#else

	/**
	    The first argument to the function is the the register address of the
	    ADPD device from where the data is to be read.
	    The 2nd argument is the pointer to the buffer of received data.
	    The size of this buffer should be equal to the number of data requested.
	    The 3rd argument is the size of requested data in bytes.
	    ADPD_I2C_TxRx() should be implemented in such a way that it transmits
	    the register address from the first argument and receives the data
	    specified by the address in the second argument. The received data will
	    be of size specified by 3rd argument.
	*/
	if (ADPD_I2C_TxRx(&nRegAddr, (uint8_t *) anRxData, 2) != ADI_HAL_OK) {
		return ADPDDrv_ERROR;
	}
#endif  //ADPD_SPI

	*pnData = (anRxData[0] << 8) + anRxData[1];
	return ADPDDrv_SUCCESS;
}

/** @brief  Set Adpd operating mode, clear FIFO if needed
  *
  * @param  nOpMode 8-bit operating mode
  * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
int16_t AdpdDrvSetOperationMode(uint8_t nOpMode)
{
	uint8_t nLoopCnt = 0;
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nTemp;
	// uint16_t nRegValue1, nRegValue2;  // regValue1, nRegValue2;
	nRetCode = AdpdDrvRegWrite(REG_FIFO_CLK, FIFO_CLK_EN);      // set clock ON
	if (nOpMode == ADPDDrv_MODE_IDLE) {
		nRetCode = SetAdpdIdleMode();
	} else if (nOpMode == ADPDDrv_MODE_PAUSE) {
		nRetCode = AdpdDrvRegWrite(REG_OP_MODE, OP_PAUSE_MODE);    // set Pause
	} else if (nOpMode == ADPDDrv_MODE_SAMPLE) {
		nRetCode = AdpdDrvRegWrite(REG_I2CS_CTL_MATCH,
		                           (((gnAdpdFifoWaterMark * gnAdpdDataSetSize) - 1) << 7));
		nRetCode |= AdpdDrvRegWrite(REG_OP_MODE, OP_PAUSE_MODE);  // set Pause
		// enable FIFO clock
		nRetCode |= AdpdDrvRegWrite(REG_FIFO_CLK, FIFO_CLK_EN);
#ifdef CLR_HFIFO_SAMPLE
		nRetCode |= AdpdDrvRegRead(REG_DATA_BUFFER,
		                           &nTemp); // Read 2 bytes dummy FIFO data
		nRetCode |= AdpdDrvRegWrite(REG_INT_STATUS, FIFO_CLR | IRQ_CLR_ALL);
#endif
		// set GO
		nRetCode |= AdpdDrvRegWrite(REG_OP_MODE, OP_RUN_MODE);
	} else {
		nRetCode = ADPDDrv_ERROR;
	}
	if (gnDeviceID != DEVICE_ID_516)
		// nRetCode |= AdpdDrvRegWrite(REG_FIFO_CLK, FIFO_CLK_DIS);   // clock OFF
		nRetCode |= AdpdDrvRegWrite(REG_TEST_PD, 0x0242);
	for (nLoopCnt = 0; nLoopCnt < 5; nLoopCnt++) {
		gnAccessCnt[nLoopCnt] = 0;
	}
	return nRetCode;
}


/** @brief  Select operation time nSlot
  *
  * @param  nSlotA 8-bit time nSlot
  * @param  nSlotB 8-bit time nSlot
  * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
int16_t AdpdDrvSetSlot(uint8_t nSlotA, uint8_t nSlotB)
{
	uint16_t nRegValue;
	if (AdpdDrvRegRead(REG_OP_MODE_CFG, &nRegValue) != ADPDDrv_SUCCESS) {
		return ADPDDrv_ERROR;
	}
	gnSlotMode_A = (ADPDDrv_Operation_Slot_t)nSlotA;
	gnSlotMode_B = (ADPDDrv_Operation_Slot_t)nSlotB;
	nRegValue &= SLOT_MASK;
	if (nSlotA == ADPDDrv_SLOT_OFF) {
		gnAdpdDataSetSize_A = 0;
		gnChannelSize_A = 0;
		gnBytesPerSample_A = 0;
	} else if (nSlotA == ADPDDrv_4CH_16) {
		nRegValue |= SLOT_A_MODE;
		gnAdpdDataSetSize_A = SLOT_A_DATA_SIZE;
		gnChannelSize_A = 4;
		gnBytesPerSample_A = 2;
	} else if (nSlotA == ADPDDrv_4CH_32) {
		nRegValue |= SLOT_A_MODE_32;
		gnAdpdDataSetSize_A = SLOT_B_DATA_SIZE_32;
		gnChannelSize_A = 4;
		gnBytesPerSample_A = 4;
	} else if (nSlotA == ADPDDrv_SUM_16) {
		nRegValue |= SLOT_A_MODE_SUM16;
		gnAdpdDataSetSize_A = SLOT_B_DATA_SIZE_SUM16;
		gnChannelSize_A = 1;
		gnBytesPerSample_A = 2;
	} else if (nSlotA == ADPDDrv_SUM_32) {
		nRegValue |= SLOT_A_MODE_R4_SUM;
		gnAdpdDataSetSize_A = SLOT_A_DATA_SIZE_R4_SUM;
		gnChannelSize_A = 1;
		gnBytesPerSample_A = 4;
	} else if (nSlotA == ADPDDrv_DIM1_16) {
		nRegValue |= SLOT_A_D1_16;
		gnAdpdDataSetSize_A = SLOT_A_DATA_SIZE_D1_16;
		gnChannelSize_A = 1;
		gnBytesPerSample_A = 2;
	} else if (nSlotA == ADPDDrv_DIM2_32) {
		nRegValue |= SLOT_A_D2_32;
		gnAdpdDataSetSize_A = SLOT_A_DATA_SIZE_D2_32;
		gnChannelSize_A = 2;
		gnBytesPerSample_A = 4;
	} else {
		return ADPDDrv_ERROR;
	}

	if (nSlotB == ADPDDrv_SLOT_OFF) {
		gnAdpdDataSetSize_B = 0;
		gnChannelSize_B = 0;
		gnBytesPerSample_B = 0;
	} else if (nSlotB == ADPDDrv_4CH_16) {
		nRegValue |= SLOT_B_MODE;
		gnAdpdDataSetSize_B = SLOT_B_DATA_SIZE;
		gnChannelSize_B = 4;
		gnBytesPerSample_B = 2;
	} else if (nSlotB == ADPDDrv_4CH_32) {
		nRegValue |= SLOT_B_MODE_32;
		gnAdpdDataSetSize_B = SLOT_B_DATA_SIZE_32;
		gnChannelSize_B = 4;
		gnBytesPerSample_B = 4;
	} else if (nSlotB == ADPDDrv_SUM_16) {
		nRegValue |= SLOT_B_MODE_SUM16;
		gnAdpdDataSetSize_B = SLOT_B_DATA_SIZE_SUM16;
		gnChannelSize_B = 1;
		gnBytesPerSample_B = 2;
	} else if (nSlotB == ADPDDrv_SUM_32) {
		nRegValue |= SLOT_B_MODE_R4_SUM;
		gnAdpdDataSetSize_B = SLOT_B_DATA_SIZE_R4_SUM;
		gnChannelSize_B = 1;
		gnBytesPerSample_B = 4;
	} else if (nSlotB == ADPDDrv_DIM1_16) {
		nRegValue |= SLOT_B_D1_16;
		gnAdpdDataSetSize_B = SLOT_B_DATA_SIZE_D1_16;
		gnChannelSize_B = 1;
		gnBytesPerSample_B = 2;
	} else if (nSlotB == ADPDDrv_DIM2_32) {
		nRegValue |= SLOT_B_D2_32;
		gnAdpdDataSetSize_B = SLOT_B_DATA_SIZE_D2_32;
		gnChannelSize_B = 2;
		gnBytesPerSample_B = 4;
	} else {
		return ADPDDrv_ERROR;
	}
	AdpdDrvRegWrite(REG_OP_MODE_CFG, nRegValue);
	gnAdpdDataSetSize = gnAdpdDataSetSize_A + gnAdpdDataSetSize_B;
	return ADPDDrv_SUCCESS;
}

//  #endif

/** @brief  Register data ready callback
  *
  * @param  pfADPDDataReady  Function Pointer callback for the reg data
  * @return None
  */
void AdpdDrvDataReadyCallback(void (*pfADPDDataReady)())
{
	gpfnADPDCallBack = pfADPDDataReady;
}

/** @brief  ADPD interrupt service routine
  * @param  None
  * @return None
  */

void AdpdISR()
{
	if (gpfnADPDCallBack != NULL) {
		(*gpfnADPDCallBack)();
	}
	gnAccessCnt[0]++;
}

/** @brief  Debug function. Read out debug info
  * @param  None
  * @return uint32_t* Debug info pointer
  */
uint32_t* AdpdDrvGetDebugInfo()
{
	return gnAccessCnt;
}

/** @brief ADPD Set parameter
  *
  * @param eCommand command for Watermark value
  * @param nValue DataSet Size to be set
  * @return @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
int16_t AdpdDrvSetParameter(AdpdCommandStruct eCommand, uint16_t nValue)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	if (eCommand == ADPD_WATERMARKING) {
		nRetCode = AdpdDrvRegWrite(REG_I2CS_CTL_MATCH,
		                           (((nValue * gnAdpdDataSetSize) - 1) << 7));
		gnAdpdFifoWaterMark = nValue;
	} else {
		return ADPDDrv_ERROR;
	}
	return nRetCode;
}

/** @brief ADPD Get parameter
  *
  * @param eCommand for Watermark value
  * @param pnValue DataSet Size to be get
  * @return None
  */
int16_t AdpdDrvGetParameter(AdpdCommandStruct eCommand, uint16_t *pnValue)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nStatData;
	uint16_t nRegValue1, nRegValue2;

	if (eCommand == ADPD_WATERMARKING) {
		*pnValue = gnAdpdFifoWaterMark;

	} else if (eCommand == ADPD_FIFOLEVEL) {
		nRetCode |= AdpdDrvRegRead(REG_INT_STATUS, &nStatData);
		gnFifoLevel = nStatData >> 8;
		*pnValue = gnFifoLevel;

	} else if (eCommand == ADPD_TIMEGAP) {
		nRetCode |= AdpdDrvRegRead(REG_SAMPLING_FREQ, &nRegValue1);
		nRetCode |= AdpdDrvRegRead(REG_DEC_MODE, &nRegValue2);
		nRegValue2 = (nRegValue2 & 0xF0) >> 4;
		nRegValue2 = 1 << nRegValue2;
		*pnValue = ((nRegValue1 * nRegValue2) >> 3);

	} else if (eCommand == ADPD_DATASIZEA) {
		*pnValue = gnAdpdDataSetSize_A;
	} else if (eCommand == ADPD_DATASIZEB) {
		*pnValue = gnAdpdDataSetSize_B;
	} else if (eCommand == ADPD_SLOTMODEA) {
		*pnValue = gnSlotMode_A;
	} else if (eCommand == ADPD_SLOTMODEB) {
		*pnValue = gnSlotMode_B;
	} else {
		return ADPDDrv_ERROR;
	}

	return nRetCode;
}

/** @brief Driver Initialization.
  *
  * @param  None
  * @return None
  */
static void Init(void)
{
	if (gnSlotMode_A == 0) {
		gnSlotMode_A = ADPDDrv_4CH_16;
		gnAdpdDataSetSize_A = SLOT_A_DATA_SIZE;
	}
	if (gnSlotMode_B == 0) {
		gnSlotMode_B = ADPDDrv_4CH_16;
		gnAdpdDataSetSize_B = SLOT_B_DATA_SIZE;
	}
	gnAdpdDataSetSize = gnAdpdDataSetSize_A + gnAdpdDataSetSize_B;
}

/** @brief Read data out from Adpd FIFO
  *
  * @param  pollMode pollMode 1=continue polling.
  * @param nDataSetSize DataSet Size to be get
  * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
int16_t AdpdDrvReadFifoData(uint8_t *pnData, uint16_t nDataSetSize)
{
	uint8_t nGetFifoData, nAddr;
#ifdef ADPD_SPI
	uint8_t pTxData[1];
#endif //ADPD_SPI
#ifndef NDEBUG
	if (gnFifoLevel >= 128) {
		gnOverFlowCnt++;
	}
#endif  // NDEBUG
	if (gnDeviceID != DEVICE_ID_516) {
		if (gnFifoLevel >= nDataSetSize) {
			nGetFifoData = 1;
			AdpdDrvRegWrite(REG_TEST_PD, 0x343);
			AdpdDrvRegWrite(REG_TEST_PD, 0xF4F);
		} else {
			nGetFifoData = 0;
		}
	}
	if (gnFifoLevel >= nDataSetSize) {
		gnAccessCnt[2]++;
		nAddr = REG_DATA_BUFFER;

#ifdef ADPD_SPI
		pTxData[0] = (nAddr << 1) | ADPD_SPI_READ;
		if (ADPD_SPI_Receive(pTxData, pnData, 1, nDataSetSize)!= ADI_HAL_OK) {
			return ADPDDrv_ERROR;
		}
#else

		/**
		    The first argument to the function is the the register (FIFO) address
		    of the ADPD device from where the data is to be read.
		    The 2nd argument is the pointer to the buffer of received data.
		    The size of this buffer should be equal to the number of data requested.
		    The 3rd argument is the size of requested data in bytes.
		    ADPD_I2C_TxRx() should be implemented in such a way that it transmits
		    the register address from the first argument and receives the data
		    specified by the address in the second argument. The received data will
		    be of size gnAdpdDataSetSize.
		*/
		if (ADPD_I2C_TxRx((uint8_t*) &nAddr, pnData,
		                  nDataSetSize) != ADI_HAL_OK) {
			return ADPDDrv_ERROR;
		}
#endif // ADPD_SPI
	}
	if (gnDeviceID != DEVICE_ID_516) {
		if (nGetFifoData == 1) {
			// AdpdDrvRegWrite(REG_FIFO_CLK, FIFO_CLK_DIS);  // disable FIFO clock
			AdpdDrvRegWrite(REG_TEST_PD, 0x0242);
		}
	}
	return ADPDDrv_SUCCESS;
}

/** @brief Read all Efuse Register
  *
  * @param  *pReg_Values Pointer to a 16-bit register data value
  * @param  nSize Number of register values to be read
  * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
int16_t AdpdDrvEfuseRead(uint16_t *pReg_Values, uint8_t nSize)
{
	uint8_t nRegLoopCount;
	uint16_t nReg_Value, clk32K, clkfifo;
	AdpdDrvRegRead(REG_OSC32K, &clk32K);
	AdpdDrvRegWrite(REG_OSC32K, clk32K | 0x80);
	MCU_HAL_Delay(10);  // Need to check whether this delay is sufficient
	AdpdDrvRegRead(REG_FIFO_CLK, &clkfifo);
	AdpdDrvRegWrite(REG_FIFO_CLK, clkfifo | 1);
	AdpdDrvRegWrite(REG_EFUSE_CTRL, 0x0003);
	AdpdDrvRegRead(REG_EFUSE_STATUS0, &nReg_Value);
	AdpdDrvRegRead(REG_EFUSE_STATUS0, &nReg_Value);
	nRegLoopCount = 0;
	if ((nReg_Value & 0x7) == 0x4) {
		for (; nRegLoopCount < nSize; nRegLoopCount++) {
			AdpdDrvRegRead(0x70 + nRegLoopCount, &pReg_Values[nRegLoopCount]);
		}
	}
	AdpdDrvRegWrite(REG_EFUSE_CTRL, 0x0);
	AdpdDrvRegWrite(REG_OSC32K, clk32K);
	AdpdDrvRegWrite(REG_FIFO_CLK, clkfifo);
	if (nRegLoopCount == 0) {
		return ADPDDrv_ERROR;
	}
	return ADPDDrv_SUCCESS;
}



/** @brief  Read Efuse module types
  *
  * @param  *moduletype Pointer to a 16-bit register data value
  * @param  size Number of register values to be read
  * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
int16_t AdpdDrvEfuseModuleTypeRead(uint16_t *moduletype)
{
	return AdpdDrvEfuseRead(moduletype, 1);
}

/** @brief Read Efuse module names
  *
  * @param  None
  * @return uint8_t* Name of the module
  */
uint8_t* AdpdDrvEfuseModuleNameRead()
{
	uint16_t moduletype;
	AdpdDrvEfuseModuleTypeRead(&moduletype);
	switch (moduletype) {
	case 1:
		return ("153GGRI");
	case 2:
		return ("163URI");
	case 3:
		return ("163URIR2");
	case 4:
		return ("163URIR3");
	case 5:
		return ("174GGI");
	default:
		return ("153GGRI");  // unknown device is detected
		// or efuse not programmed
	}
}



/**
 * @brief Set the LED current level (pulse peak value)
 *
 * @param        nLedCurrent:     0 --> 25mA
 *                                1 --> 40mA
 *                                2 --> 55mA
 *                                3 --> 70mA
 *                                4 --> 85mA
 *                                5 --> 100mA
 *                                6 --> 115mA
 *                                7 --> 130mA
 *                                8 --> 145mA
 *                                9 --> 160mA
 *                                10 --> 175mA
 *                                11 --> 190mA
 *                                12 --> 205mA
 *                                13 --> 220mA
 *                                14 --> 235mA
 *                                15 --> 250mA
 * @param        nLedId:  1-->  LED_1
 *                        2-->  LED_2
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvSetLedCurrent(uint8_t nLedCurrent, AdpdLedId nLedId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint8_t nBitPos;
	uint16_t nAdpdRxData;
	uint16_t nAdpdTxData;

	nReg = REG_LED1_DRV + (nLedId -1);

	if (!((nReg == REG_LED1_DRV) || (nReg == REG_LED2_DRV))) {
		return ADPDDrv_ERROR;
	}
	nMask = LED_CURRENT_MASK;
	nBitPos = LED_CURRENT_BITPOS;
	// Register

	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;
	nAdpdTxData = (nAdpdRxData & nMask) | (nLedCurrent << nBitPos);

	if (AdpdDrvRegWrite(nReg, nAdpdTxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	return nRetCode;
}

/**
 * @brief Get the LED current level (pulse peak value)
 *
 * @param           *pLedCurrent: 0 --> 25mA
 *                                1 --> 40mA
 *                                2 --> 55mA
 *                                3 --> 70mA
 *                                4 --> 85mA
 *                                5 --> 100mA
 *                                6 --> 115mA
 *                                7 --> 130mA
 *                                8 --> 145mA
 *                                9 --> 160mA
 *                                10 --> 175mA
 *                                11 --> 190mA
 *                                12 --> 205mA
 *                                13 --> 220mA
 *                                14 --> 235mA
 *                                15 --> 250mA
 * @param        nLedId:  1-->  LED_1
 *                        2-->  LED_2
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvGetLedCurrent(uint8_t *pLedCurrent, AdpdLedId nLedId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint8_t nBitPos;
	uint16_t nAdpdRxData;

	nReg = REG_LED1_DRV + (nLedId -1);

	if (!((nReg == REG_LED1_DRV) || (nReg == REG_LED2_DRV))) {
		return ADPDDrv_ERROR;
	}

	nMask = LED_CURRENT_MASK;
	nBitPos = LED_CURRENT_BITPOS;

	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	*pLedCurrent = (nAdpdRxData & (~nMask)) >> nBitPos;

	return nRetCode;
}


/**
 * @brief Set the trim level of the LED current (fine level trimming)
 *
 * @param        nLedTrim:  0 --> min value
 *                          15 --> medium value
 *                          31 --> max value
 * @param        nLedId:  1-->   LED_1
 *                        2-->   LED_2
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvSetLedTrimCurrent(uint8_t nLedTrim, AdpdLedId nLedId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint8_t nBitPos;
	uint16_t nAdpdRxData;
	uint16_t nAdpdTxData;

	nReg = REG_LED_TRIM;

	if (nLedId == LED_1) {
		nMask = LED_1_TRIM_MASK;
		nBitPos = LED_1_TRIM_BITPOS;

	} else if (nLedId == LED_2) {
		nMask = LED_2_TRIM_MASK;
		nBitPos = LED_2_TRIM_BITPOS;

	} else {
		return ADPDDrv_ERROR;
	}

	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;
	nAdpdTxData = (nAdpdRxData & nMask) | (nLedTrim << nBitPos);
	// Write
	if (AdpdDrvRegWrite(nReg, nAdpdTxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	return nRetCode;
}

/**
 * @brief Get the trim level of the LED current (fine level trimming)
 *
 * @param      *pLedTrim:  0 --> min value
 *                         15 --> medium value
 *                         31 --> max value
 * @param        nLedId:  1-->   LED_1
 *                        2-->   LED_2
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvGetLedTrimCurrent(uint8_t *pLedTrim, AdpdLedId nLedId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint8_t nBitPos;
	uint16_t nAdpdRxData;

	nReg = REG_LED_TRIM;

	if (nLedId == LED_1) {
		nMask = LED_1_TRIM_MASK;
		nBitPos = LED_1_TRIM_BITPOS;

	} else if (nLedId == LED_2) {
		nMask = LED_2_TRIM_MASK;
		nBitPos = LED_2_TRIM_BITPOS;

	} else {
		return ADPDDrv_ERROR;
	}

	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	*pLedTrim = (nAdpdRxData & (~nMask)) >> nBitPos;

	return nRetCode;
}

/**
 * @brief Set the number of LED pulses
 *
 * @param        nNumPulses:  0 - 255
 * @param        nSlotId:   1 --> SLOT_A
 *                          2 --> SLOT_B
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvSetNumPulses(uint8_t nNumPulses, AdpdSlotId nSlotId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint8_t nBitPos;
	uint16_t nAdpdRxData;
	uint16_t nAdpdTxData;

	nReg = REG_PULSE_PERIOD_A + 5 * (nSlotId -1);

	if (!((nReg == REG_PULSE_PERIOD_A) || (nReg == REG_PULSE_PERIOD_B))) {
		return ADPDDrv_ERROR;
	}

	nMask = LED_NUMBER_PULSES_MASK;
	nBitPos = LED_NUMBER_PULSES_BITPOS;
	// Read the current nRegister value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;
	nAdpdTxData = (nAdpdRxData & nMask) | (nNumPulses << nBitPos);
	// Write
	if (AdpdDrvRegWrite(nReg, nAdpdTxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	return nRetCode;
}

/**
 * @brief Get the number of LED pulses
 *
 * @param      *pNumPulses:  0 - 255
 * @param        nSlotId:   1 --> SLOT_A
 *                          2 --> SLOT_B
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvGetNumPulses(uint8_t *pNumPulses, AdpdSlotId nSlotId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint8_t nBitPos;
	uint16_t nAdpdRxData;

	nReg = REG_PULSE_PERIOD_A + 5 * (nSlotId -1);

	if (!((nReg == REG_PULSE_PERIOD_A) || (nReg == REG_PULSE_PERIOD_B))) {
		return ADPDDrv_ERROR;
	}

	nMask = LED_NUMBER_PULSES_MASK;
	nBitPos = LED_NUMBER_PULSES_BITPOS;
	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;
	*pNumPulses = (nAdpdRxData & (~nMask)) >> nBitPos;

	return nRetCode;
}

/**
 * @brief Set the AFE TIA Gain
 *
 * @param        nTiaGain:  0 --> 200k
 *                          1 --> 100k
 *                          2 --> 50k
 *                          3 --> 50k
 * @param        nSlotId: 1 --> SLOT_A
 *                        2 --> SLOT_B
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvSetAfeTiaGain(uint8_t nTiaGain, AdpdSlotId nSlotId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint8_t nBitPos;
	uint16_t nAdpdRxData;
	uint16_t  nAdpdTxData;

	nReg = REG_AFE_TRIM_A + 2 * (nSlotId - 1);

	if (!((nReg == REG_AFE_TRIM_A) || (nReg == REG_AFE_TRIM_B))) {
		return ADPDDrv_ERROR;
	}

	nMask = AFE_TIA_GAIN_MASK;
	nBitPos = AFE_TIA_GAIN_BITPOS;
	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;
	nAdpdTxData = (nAdpdRxData & nMask) | (nTiaGain << nBitPos);

	if (AdpdDrvRegWrite(nReg, nAdpdTxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	return nRetCode;
}

/**
 * @brief Get the AFE TIA Gain
 *
 * @param      *pTiaGain:  0 --> 200k
 *                         1 --> 100k
 *                         2 --> 50k
 *                         3 --> 50k
 * @param        nSlotId:   1 --> SLOT_A
 *                          2 --> SLOT_B
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvGetAfeTiaGain(uint8_t *pTiaGain, AdpdSlotId nSlotId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint8_t nBitPos;
	uint16_t nAdpdRxData;

	nReg = REG_AFE_TRIM_A + 2 * (nSlotId - 1);

	if (!((nReg == REG_AFE_TRIM_A) || (nReg == REG_AFE_TRIM_B))) {
		return ADPDDrv_ERROR;
	}

	nMask = AFE_TIA_GAIN_MASK;
	nBitPos = AFE_TIA_GAIN_BITPOS;
	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	*pTiaGain = (nAdpdRxData & (~nMask)) >> nBitPos;

	return nRetCode;
}

/**
 * @brief Set the ADPD142 Output Data Rate
 *
 * @param        nSamplingFreq:    SamplingFrequency = 8000/SampleRate
*                                       eg:     100Hz --> 0x0050
 *                                              200Hz --> 0x0028
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvSetSamplingFrequency(uint16_t nSamplingFreq)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint8_t nReg;
	uint16_t  nAdpdTxData;
	nReg = REG_SAMPLING_FREQ;

	nAdpdTxData = nSamplingFreq;
	// Write
	if (AdpdDrvRegWrite(nReg, nAdpdTxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	return nRetCode;
}
/**
 * @brief Get the ADPD142 Output Data Rate
 *
 * @param      *pSamplingFreq:    SamplingFrequency = 8000/SampleRate
*                                       eg:     100Hz --> 0x0050
 *                                              200Hz --> 0x0028
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvGetSamplingFrequency(uint16_t *pSamplingFreq)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint8_t nReg;
	uint16_t nAdpdRxData;

	nReg = REG_SAMPLING_FREQ;
	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	*pSamplingFreq = nAdpdRxData;

	return nRetCode;
}

/**
 * @brief Function to connect the LED to the SLOT
 *
 * @param        nLedConnection:    0 --> pulse PD connection to AFE
 *                                  1 --> pulse LED1
 *                                  2 --> pulse LED2
 *                                  3 --> pulse both LED1 and LED2
 * @param        nSlotId:   1 --> SLOT_A
 *                          2 --> SLOT_B
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvSetSlotLed(uint8_t nLedConnection, uint8_t nSlotId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint8_t nBitPos;
	uint16_t nAdpdRxData;
	uint16_t  nAdpdTxData;

	nReg = REG_PD_SELECT;

	if (nSlotId == SLOT_A) {
		nMask = SLOT_A_LED_CON_MASK;
		nBitPos = SLOT_A_LED_CON_BITPOS;

	} else if (nSlotId == SLOT_B) {
		nMask = SLOT_B_LED_CON_MASK;
		nBitPos = SLOT_B_LED_CON_BITPOS;

	} else {
		return ADPDDrv_ERROR;
	}
	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	nAdpdTxData = (nAdpdRxData & nMask) | (nLedConnection << nBitPos);
	// Write
	if (AdpdDrvRegWrite(nReg, nAdpdTxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	return nRetCode;
}

/**
 * @brief Function to get the LED connected to the SLOT
 *
 * @param      *pLedConnection:    0 --> pulse PD connection to AFE
 *                                 1 --> pulse LED1
 *                                 2 --> pulse LED2
 *                                 3 --> pulse both LED1 and LED2
 * @param        nSlotId:   1 --> SLOT_A
 *                          2 --> SLOT_B
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvGetSlotLed(uint8_t *pLedConnection, uint8_t nSlotId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint8_t nBitPos;
	uint16_t nAdpdRxData;

	nReg = REG_PD_SELECT;

	if (nSlotId == SLOT_A) {
		nMask = SLOT_A_LED_CON_MASK;
		nBitPos = SLOT_A_LED_CON_BITPOS;

	} else if (nSlotId == SLOT_B) {
		nMask = SLOT_B_LED_CON_MASK;
		nBitPos = SLOT_B_LED_CON_BITPOS;

	} else {
		return ADPDDrv_ERROR;
	}
	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;
	*pLedConnection = (nAdpdRxData & (~nMask)) >> nBitPos;

	return nRetCode;
}

/**
 * @brief Function to  set the internal average value
 *
 * @param        nAvgFactor:    0 -->	INT_AVG_1
 *				1 -->	INT_AVG_2
 *		                2 -->	INT_AVG_4
 *				3 -->	INT_AVG_8
 *				4 -->	INT_AVG_16
 *				5 -->	INT_AVG_32
 *				6 -->	INT_AVG_64
 *				7 -->	INT_AVG_128
 *
 * @param        nSlotId:   1 --> SLOT_A
 *                          2 --> SLOT_B
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvSetInternalAverage(uint8_t nAvgFactor, uint8_t nSlotId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint8_t nBitPos;
	uint16_t nAdpdRxData;
	uint16_t  nAdpdTxData;

	nReg = REG_DEC_MODE;

	if (nSlotId == SLOT_A) {
		nMask = INT_AVG_SLOT_A_MASK;
		nBitPos = INT_AVG_SLOT_A_BITPOS;
	}  else if (nSlotId == SLOT_B) {
		nMask = INT_AVG_SLOT_B_MASK;
		nBitPos = INT_AVG_SLOT_B_BITPOS;
	} else {
		return ADPDDrv_ERROR;
	}
	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != 0)
		return ADPDDrv_ERROR;

	nAdpdTxData = (nAdpdRxData & nMask) | (nAvgFactor << nBitPos);
	// Write
	if (AdpdDrvRegWrite(nReg, nAdpdTxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	return nRetCode;
}

/**
 * @brief Function to get the decimation value
 *
 * @param        *pAvgFactor:   0 -->	INT_AVG_1
 *				1 -->	INT_AVG_2
 *		                2 -->	INT_AVG_4
 *				3 -->	INT_AVG_8
 *				4 -->	INT_AVG_16
 *				5 -->	INT_AVG_32
 *				6 -->	INT_AVG_64
 *				7 -->	INT_AVG_128
 *
 * @param        nSlotId:   1 --> SLOT_A
 *                          2 --> SLOT_B
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvGetInternalAverage(uint8_t* pAvgFactor, uint8_t nSlotId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint8_t nBitPos;
	uint16_t nAdpdRxData;

	nReg = REG_DEC_MODE;

	if (nSlotId == SLOT_A) {
		nMask = INT_AVG_SLOT_A_MASK;
		nBitPos = INT_AVG_SLOT_A_BITPOS;
	}  else if (nSlotId == SLOT_B) {
		nMask = INT_AVG_SLOT_B_MASK;
		nBitPos = INT_AVG_SLOT_B_BITPOS;

	} else {
		return ADPDDrv_ERROR;
	}
	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;
	*pAvgFactor = (nAdpdRxData & (~nMask)) >> nBitPos;

	return nRetCode;
}


/**
 * @brief Set the ADC offset
 *
 * @param        nAdcOffset:  0 - 0x3FFF -> Number to subtract from the
 *                                              raw ADC value
 * @param        nChannel:     1 - 4 (CH1 - CH4)
 * @param        nSlotId:   1 --> SLOT_A
 *                          2 --> SLOT_B
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvSetAdcOffset(uint16_t nAdcOffset, uint8_t nChannel,
                            AdpdSlotId nSlotId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint16_t  nAdpdTxData;

	nReg = REG_CH1_OFFSET_A + nChannel + 6 * (nSlotId - 1);

	if ((nReg < REG_CH1_OFFSET_A) || (nReg > REG_CH4_OFFSET_B)) {
		return ADPDDrv_ERROR;
	}

	nMask = ADC_MASK;
	nAdcOffset &= ~nMask;
	nAdpdTxData = nAdcOffset;
	// Write
	if (AdpdDrvRegWrite(nReg, nAdpdTxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;

	return nRetCode;
}


/**
 * @brief Get the ADC offset
 *
 * @param      *pAdcOffset:  0 - 0x3FFF -> Number to subtract from the
 *                                              raw ADC value
 * @param        nChannel:     1 - 4 (CH1 - CH4)
 * @param        nSlotId:   1 --> SLOT_A
 *                          2 --> SLOT_B
 *
 * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
 */
int16_t AdpdDrvGetAdcOffset(uint16_t *pAdcOffset, uint8_t nChannel,
                            AdpdSlotId nSlotId)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nMask;
	uint8_t nReg;
	uint16_t nAdpdRxData;

	nReg = REG_CH1_OFFSET_A + 6 * (nSlotId -1);

	if ((nReg < REG_CH1_OFFSET_A) || (nReg > REG_CH4_OFFSET_B)) {
		return ADPDDrv_ERROR;
	}

	nReg = nReg + nChannel;
	// nMask = ADC_MASK;
	nMask = 0x3FFF;
	// Read the current register value
	if (AdpdDrvRegRead(nReg, &nAdpdRxData) != ADPDDrv_SUCCESS)
		return ADPDDrv_ERROR;
	*pAdcOffset = nAdpdRxData & nMask;

	return nRetCode;
}

/**  @brief Soft reset the ADPD device
  *
  * @param  None
  * @return int16_t success
  */
int16_t AdpdDrvSoftReset(void)
{
	//AdpdDeviceReset();
	return ADPDDrv_SUCCESS;
}

/** @brief  Set various interrupt modes
  *
  * @param  nIntMask Interrupt mask bits will be set according to data sheet definition.
			If reserved bits are set, then keep the previous settings.
  * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
static int16_t AdpdDrvSetInterrupt(uint16_t nIntMask)
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	if ((nIntMask & 0x3E00) == 0) {
		nRetCode  = AdpdDrvRegWrite(REG_INT_MASK, nIntMask);
	}
	return nRetCode;
}

/** @brief Set various interrupts
  *
  * @param  None
  * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
static int16_t SetInterruptControl()
{
	int16_t nRetCode = ADPDDrv_SUCCESS;
	uint16_t nRegValue;
	nRetCode |= AdpdDrvRegRead(REG_PAD_IO_CTRL, &nRegValue);
	/**  Define INTERRUPT_ENABLE macro for the definition of INT_ENA, INT_DRV
	    and INT_POL macros. Change these values according to the requirements */
	nRegValue = (nRegValue & 0xF8) | INT_ENA | INT_DRV | INT_POL;
	nRetCode |= AdpdDrvRegWrite(REG_PAD_IO_CTRL, nRegValue);  // Enable int
	return nRetCode;
}

/** @brief Set device to Idle mode
  *
  * @param  None
  * @return int16_t A 16-bit integer: 0 - success; < 0 - failure
  */
static int16_t SetAdpdIdleMode()
{
	int16_t nRetCode;
	/** Set to Pause Mode */
	nRetCode = AdpdDrvRegWrite(REG_OP_MODE, OP_PAUSE_MODE);
	/** Set clock ON */
	nRetCode |= AdpdDrvRegWrite(REG_FIFO_CLK, FIFO_CLK_EN);
#ifndef CLR_HFIFO_SAMPLE
	nRetCode |= AdpdDrvRegWrite(REG_INT_STATUS, FIFO_CLR | IRQ_CLR_ALL);
#endif
	/** Set to Idle Mode */
	nRetCode |= AdpdDrvRegWrite(REG_OP_MODE, OP_IDLE_MODE);
	/** Disable FIFO clock */
	nRetCode |= AdpdDrvRegWrite(REG_FIFO_CLK, FIFO_CLK_DIS);
	return nRetCode;
}

int16_t AdpdFillDataToArray(uint32_t *pnaADPDData, uint8_t *FifoData)
{

	uint8_t i;


	if(gnSlotMode_A != ADPDDrv_SLOT_OFF) {
		if (gnBytesPerSample_A == 4) {   // for 32-bit mode
			for (i = 0; i < gnChannelSize_A; i += 1) {
				(pnaADPDData[i]) = (FifoData[i*4] << 8) +
				                   (FifoData[i*4 + 1]) +
				                   (FifoData[i*4 + 2] << 24) +
				                   (FifoData[i*4 + 3] << 16);
			}
			for (i = gnChannelSize_A; i < 4; i += 1) {
				(pnaADPDData[i]) = 0;
			}
		} else {          // for 16-bit mode
			for (i = 0; i < gnChannelSize_A; i += 1) {
				(pnaADPDData[i]) = (FifoData[i*2] << 8) +
				                   FifoData[i*2 + 1];
			}
			for (i = gnChannelSize_A; i < 4; i += 1) {
				(pnaADPDData[i]) = 0;
			}
		}
	} else {
		for (i = 0; i < 4; i += 1) {
			(pnaADPDData[i]) = 0;
		}
	}

	if(gnSlotMode_B != ADPDDrv_SLOT_OFF) {
		if (gnBytesPerSample_B == 4) {   // for 32-bit mode
			for (i = 0; i < gnChannelSize_B; i += 1) {
				(pnaADPDData[i+4]) = (FifoData[i*4 + gnAdpdDataSetSize_A] << 8) +
				                     (FifoData[i*4 + gnAdpdDataSetSize_A + 1]) +
				                     (FifoData[i*4 + gnAdpdDataSetSize_A + 2] << 24) +
				                     (FifoData[i*4 + gnAdpdDataSetSize_A + 3] << 16);
			}
			for (i = gnChannelSize_B; i < 4; i += 1) {
				(pnaADPDData[i+4]) = 0;
			}
		} else {          // for 16-bit mode
			for (i = 0; i < gnChannelSize_B; i += 1) {
				(pnaADPDData[i+4]) = (FifoData[i*2 + gnAdpdDataSetSize_A] << 8) +
				                     FifoData[i*2 + gnAdpdDataSetSize_A + 1];
			}
			for (i = gnChannelSize_B; i < 4; i += 1) {
				(pnaADPDData[i+4]) = 0;
			}
		}
	} else {
		for (i = 0; i < 4; i += 1) {
			(pnaADPDData[i+4]) = 0;
		}
	}

	return 0;

}
/**@}*/ /* end of group Adpd_Driver */
/**@}*/ /* end of group Device_Drivers */

