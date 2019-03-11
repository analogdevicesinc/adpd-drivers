/**
****************************************************************************
* @addtogroup Device_Drivers Device Drivers
* @{
* @file     Adpd400xDrv.c
* @author   ADI
* @version  V0.1
* @date     30-Jan-2019
* @brief    Reference design device driver to access ADI ADPD400x chip.
****************************************************************************
* @attention
****************************************************************************
*/
/******************************************************************************
* Copyright (c) 2019 Analog Devices, Inc.  All rights reserved. 
*  
* Redistribution and use in source and binary forms, with or without 
* modification, are permitted provided that the following conditions are met:   
* - Redistributions of source code must retain the above copyright notice, this 
*   list of conditions and the following disclaimer.   
* - Redistributions in binary form must reproduce the above copyright notice, 
*   this list of conditions and the following disclaimer in the documentation 
*   and/or other materials provided with the distribution.     
* - Modified versions of the software must be conspicuously marked as such.   
* - This software is licensed solely and exclusively for use with 
*   processors/products manufactured by or for Analog Devices, Inc.   
* - This software may not be combined or merged with other code in any manner 
*   that would cause the software to become subject to terms and conditions 
*   which differ from those listed here.   
* - Neither the name of Analog Devices, Inc. nor the names of its contributors 
*   may be used to endorse or promote products derived from this software 
*   without specific prior written permission.   
* - The use of this software may or may not infringe the patent rights of one 
*   or more patent holders.  This license does not release you from the 
*   requirement that you obtain separate licenses from these patent holders to 
*   use this software. 
* 
* THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES, INC. AND CONTRIBUTORS "AS IS" 
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
* NONINFRINGEMENT, TITLE, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
* ARE DISCLAIMED. IN NO EVENT SHALL ANALOG DEVICES, INC. OR CONTRIBUTORS BE 
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, PUNITIVE OR 
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, DAMAGES ARISING OUT OF 
* CLAIMS OF INTELLECTUAL PROPERTY RIGHTS INFRINGEMENT; PROCUREMENT OF 
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
* POSSIBILITY OF SUCH DAMAGE. 
******************************************************************************/

/* ------------------------- Includes -------------------------------------- */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include "Adpd400xReg.h"
#include "Adpd400xDrv.h"

ADI_HAL_STATUS_t Adpd400x_I2C_TxRx(uint8_t *register_address, uint8_t * buffer, uint16_t txsize, uint16_t rxsize);
ADI_HAL_STATUS_t Adpd400x_I2C_Transmit(uint8_t *register_address, uint16_t txsize);
ADI_HAL_STATUS_t Adpd400x_SPI_Receive(uint8_t *pTxData, uint8_t *pRxData, uint16_t TxSize, uint16_t RxSize);
ADI_HAL_STATUS_t Adpd400x_SPI_Transmit(uint8_t *pTxData, uint16_t TxSize);
void MCU_HAL_Delay(uint32_t ms_delay);;

/* ------------------------- Defines  -------------------------------------- */
/* define the following macro for DEBUG */
//#define DEBUG_DRV                 1
#define SLOT_DISABLE_SETTINGS     6
#define INTERRUPT_ENABLE
#define CLR_HFIFO_SAMPLE
#define SLEEP_TIME                500 // (msec)

/* Data size for the Impulse is always a word (2 byte0 */
#define IMPULSE_DATASIZE          2

#ifdef INTERRUPT_ENABLE
/*  Interrupt pin is enabled
Define FIFO_TH_INT_ENA as 0 to disable it */
#define FIFO_TH_INT_ENA ((0x1) << 15)
#define FIFO_UF_INT_ENA ((0x1) << 14)
#define FIFO_OF_INT_ENA ((0x1) << 13)
#endif

/* ------------------------- Public Function Prototypes -------------------- */
uint32_t* Adpd400xDrvGetDebugInfo();

/* ------------------------- Private variables ----------------------------- */
typedef struct _adpd400xDrv_slot_t {
  uint8_t  activeSlot;      //!< Active slot
  uint8_t  pre_activeSlot;  //!< Previouse Active slot
  uint16_t slotFormat;      //!< Dark,Sig,Lit,Ttl bytes of each slot
  uint8_t  channelNum;      //!< Active channel for each slot
} adpd400xDrv_slot_t;

static adpd400xDrv_slot_t gsSlot[SLOT_NUM];
static uint8_t gsTotalSlotSize;         //!< Total active slot size in bytes
static uint16_t gsHighestSelectedSlot;  //!< Highes selected slot
static Adpd400xComMode_t nAdpd400xCommMode = ADPD400x_UNKNOWN_BUS;

static uint8_t gnAdpdFifoWaterMark = 1;
static uint32_t gnAccessCnt[5];
static uint16_t gnFifoLevel;
static uint16_t pre_active_setting[SLOT_NUM][SLOT_DISABLE_SETTINGS];
static uint16_t gsOutputDataRate;
static const uint16_t ADPD400x_ID = 0x00C0;

#ifndef NDEBUG
static uint32_t gnOverFlowCnt = 0;
#endif  // NDEBUG
/* ------------------------- Private Function Prototypes ------------------- */
static void _Adpd400xDrvInit(void);
static int16_t _Adpd400xDrvSetIdleMode(void);
static int16_t _Adpd400xDrvSetInterrupt(void);
static void _Adpd400xDrvGetSlotInfo(void);
static void _Adpd400xDrvSlotSaveCurrentSetting(uint8_t nSlotNum);
static void _Adpd400xDrvSlotApplyPreviousSetting(uint8_t nSlotNum);
static void _Adpd400xDrvSlotApplySkipSetting(uint8_t nSlotNum);
static void _Adpd400xDrvGetDataOuputRate(void);
static void _Adpd400xDrvSetSlotSize(uint8_t nSlotNum, uint16_t nSlotFormat);
static void (*gpfnADPDCallBack)();
static int16_t _Adpd400xDrvSelComMode();

/** @brief  Open Driver, setting up the interrupt and I2C lines
*
* @param  addr 32-bit register address
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvOpenDriver() {
  int16_t nRetCode = ADPD400xDrv_SUCCESS;
  uint8_t txData[3] = {0x0f, 0x80, 0x00};
  
  if (nAdpd400xCommMode == ADPD400x_UNKNOWN_BUS)
    if (_Adpd400xDrvSelComMode() != ADPD400xDrv_SUCCESS)
      return ADPD400xDrv_ERROR;

  nRetCode = _Adpd400xDrvSetIdleMode();
  if(nAdpd400xCommMode == ADPD400x_I2C_BUS) {
    if (Adpd400x_I2C_Transmit(txData, 3) != ADI_HAL_OK) {
      return ADPD400xDrv_ERROR;
    }
  } else {
    if (Adpd400x_SPI_Transmit(txData, 3)!= ADI_HAL_OK) {
      return ADPD400xDrv_ERROR;
    }
  }
  MCU_HAL_Delay(SLEEP_TIME);
  _Adpd400xDrvInit();

  nRetCode |= _Adpd400xDrvSetInterrupt();  // Default mode
  return nRetCode;
}

/** @brief  Close Driver, Clear up before existing
*
* @param  None
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvCloseDriver() {
  return _Adpd400xDrvSetIdleMode();
}

/** @brief  Returns the communication bus: I2C, SPI or Uknown
*           See the typedef Adpd400xComMode
*
* @param  None
* @return Adpd400xComMode
*/
Adpd400xComMode_t Adpd400xDrvGetComMode() {
  return nAdpd400xCommMode;
}

/** @brief  Synchronous register write to the ADPD400x
*
* @param  nAddr 16-bit register address
* @param  nRegValue 16-bit register data value
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvRegWrite(uint16_t nAddr, uint16_t nRegValue) {
  uint8_t txData[4];
  uint8_t i = 0;

  if((nAddr == ADPD400x_REG_SYS_CTL) && ((nRegValue & BITM_SYS_CTL_SW_RESET) == BITM_SYS_CTL_SW_RESET)) {
      return Adpd400xDrvSoftReset();
  } else {
    if (nAdpd400xCommMode == ADPD400x_SPI_BUS) {
      uint16_t nTmpAddr = (nAddr << 1 ) | ADPD400x_SPI_WRITE; // To set the last bit high for write operation

    txData[i++] = (uint8_t)(nTmpAddr >> 8);
    txData[i++] = (uint8_t)(nTmpAddr);
    txData[i++] = (uint8_t)(nRegValue >> 8);
    txData[i++] = (uint8_t)(nRegValue);

    /**
    The first argument to the function ADPD400x_SPI_Transmit is the register
    address of the ADPD400x device and the 16 bits data value to be written to the
    device register.
    The 1st argument to the function ADPD400x_SPI_Transmit is the pointer to the
    buffer of the size of three bytes in which first byte is the register
    address of the ADPD400x device.
    The second and the third bytes are the 16 bits data value to be written
    to the device register
    The 2nd argument is the size of the buffer in bytes (3 bytes).
    ADPD400x_SPI_Transmit() should be implemented in such a way that it transmits
    the data from txData buffer of size specified in the second argument.
    */
    if (Adpd400x_SPI_Transmit(txData, i)!= ADI_HAL_OK) {
      return ADPD400xDrv_ERROR;
    }
  } else {
    if (nAddr > 0x7F) {
      txData[i++] = (uint8_t)((nAddr >> 8)|0x80);
      txData[i++] = (uint8_t)nAddr;
    } else {
      txData[i++] = (uint8_t)nAddr;
    }
    txData[i++] = (uint8_t)(nRegValue >> 8);
    txData[i++] = (uint8_t)(nRegValue);
    /**
    The first argument to the function ADPD400x_I2C_Transmit is the register
    address of the ADPD400x device and the 16 bits data value to be written to the
    device register.
    The 1st argument to the function ADPD400x_I2C_Transmit is the pointer to the
    buffer of the size of three bytes in which first byte is the register
    address of the ADPD400x device.
    The second and the third bytes are the 16 bits data value to be written
    to the device register
    The 2nd argument is the size of the buffer in bytes (3 bytes).
    ADPD400x_I2C_Transmit() should be implemented in such a way that it transmits
    the data from txData buffer of size specified in the second argument.
    */

      if (Adpd400x_I2C_Transmit((uint8_t *) txData, i) != ADI_HAL_OK) {
        return ADPD400xDrv_ERROR;
      }
    }
  }
  return ADPD400xDrv_SUCCESS;
}

/** @brief  Synchronous register read from the ADPD400x
*
* @param  nAddr 16-bit register address
* @param  *pnData Pointer to 16-bit register data value
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvRegRead(uint16_t nAddr, uint16_t *pnData) {
  uint8_t anRxData[2];
  uint8_t txData[2];
  uint16_t i = 0;

  if (nAdpd400xCommMode == ADPD400x_SPI_BUS) {
    uint16_t nTmpAddr = (nAddr << 1 ) & ADPD400x_SPI_READ; // To set the last bit low for read operation

    txData[i++] = (uint8_t)(nTmpAddr >> 8);
    txData[i++] = (uint8_t)(nTmpAddr);
    /**
    The first argument to the function is the the register address of the
    ADPD400x device from where the data is to be read.
    The 2nd argument is the pointer to the buffer of received data.
    The size of this buffer should be equal to the number of data requested.
    The 3rd argument is the size of transmit data in bytes.
    The 4th argument is the size of requested data in bytes.
    Adpd400x_SPI_Receive() should be implemented in such a way that it transmits
    the register address from the first argument and receives the data
    specified by the address in the second argument. The received data will
    be of size specified by 3rd argument.
    */
    if (Adpd400x_SPI_Receive(txData, anRxData, i, 2)!= ADI_HAL_OK) {
      return ADPD400xDrv_ERROR;
    }
  } else if (nAdpd400xCommMode == ADPD400x_I2C_BUS) {
    /**
    The first argument to the function is the the register address of the
    ADPD400x device from where the data is to be read.
    The 2nd argument is the pointer to the buffer of received data.
    The size of this buffer should be equal to the number of data requested.
    The 3rd argument is the size of transmit data in bytes.
    The 4th argument is the size of requested data in bytes.
    Adpd400x_I2C_TxRx() should be implemented in such a way that it transmits
    the register address from the first argument and receives the data
    specified by the address in the second argument. The received data will
    be of size specified by 3rd argument.
    */
    if (nAddr > 0x7F) {
      txData[i++] = (uint8_t)((nAddr >> 8)|0x80);
      txData[i++] = (uint8_t)nAddr;
    } else {
      txData[i++] = (uint8_t)nAddr;
    }

    // need to work on this for 15-bit address
    if (Adpd400x_I2C_TxRx((uint8_t *) txData, (uint8_t *) anRxData, i, 2) != ADI_HAL_OK) {
      return ADPD400xDrv_ERROR;
    }
  } else {
    return ADPD400xDrv_ERROR;
  }
  *pnData = (anRxData[0] << 8) + anRxData[1];
  return ADPD400xDrv_SUCCESS;
}

/** @brief  Synchronous register read from the ADPD400x
*
* @param  nAddr 16-bit register address
* @param  *pnData Pointer to 32-bit register data value
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvRegRead32B(uint16_t nAddr, uint32_t *pnData) {
  uint8_t anRxData[4];
  uint8_t txData[2];
  uint16_t i = 0;
  uint16_t nTmpAddr = 0;

  if (nAdpd400xCommMode == ADPD400x_SPI_BUS) {
    nTmpAddr = (nAddr << 1 ) & ADPD400x_SPI_READ; // To set the last bit low for read operation

    txData[i++] = (uint8_t)(nTmpAddr >> 8);
    txData[i++] = (uint8_t)(nTmpAddr);
    /**
    The first argument to the function is the the register address of the
    ADPD400x device from where the data is to be read.
    The 2nd argument is the pointer to the buffer of received data.
    The size of this buffer should be equal to the number of data requested.
    The 3rd argument is the size of transmit data in bytes.
    The 4th argument is the size of requested data in bytes.
    Adpd400x_SPI_Receive() should be implemented in such a way that it transmits
    the register address from the first argument and receives the data
    specified by the address in the second argument. The received data will
    be of size specified by 3rd argument.
    */
    if (Adpd400x_SPI_Receive(txData, anRxData, i, 4)!= ADI_HAL_OK) {
      return ADPD400xDrv_ERROR;
    }
  } else if (nAdpd400xCommMode == ADPD400x_I2C_BUS) {
    if (nAddr > 0x7F) {
      txData[i++] = (uint8_t)((nAddr >> 8)|0x80);
      txData[i++] = (uint8_t)nAddr;
    } else {
      txData[i++] = (uint8_t)nAddr;
    }
    /**
    The first argument to the function is the the register address of the
    ADPD400x device from where the data is to be read.
    The 2nd argument is the pointer to the buffer of received data.
    The size of this buffer should be equal to the number of data requested.
    The 3rd argument is the size of transmit data in bytes.
    The 4th argument is the size of requested data in bytes.
    Adpd400x_I2C_TxRx() should be implemented in such a way that it transmits
    the register address from the first argument and receives the data
    specified by the address in the second argument. The received data will
    be of size specified by 3rd argument.
    */
    if (Adpd400x_I2C_TxRx((uint8_t *) txData, (uint8_t *) anRxData, i, 4) != ADI_HAL_OK) {
      return ADPD400xDrv_ERROR;
    }
  } else {
    return ADPD400xDrv_ERROR;
  }
  *pnData = (anRxData[0] << 8) + anRxData[1] + (anRxData[2] << 24) + (anRxData[3] << 16);
  return ADPD400xDrv_SUCCESS;
}

/** @brief  Set Adpd400x operating mode, clear FIFO if needed
*
* @param  nOpMode 8-bit operating mode
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvSetOperationMode(uint8_t nOpMode) {
  int16_t nRetCode = ADPD400xDrv_SUCCESS;
  uint16_t nTemp;
  uint16_t nmax_fifo_size =256;

  if (nOpMode == ADPD400xDrv_MODE_IDLE) {
    nRetCode = _Adpd400xDrvSetIdleMode();
    gnAdpdFifoWaterMark = 1;//need to handle it for worst case so set as 1.
    gsTotalSlotSize = 0;
  } else if (nOpMode == ADPD400xDrv_MODE_SAMPLE) {
    // update the Slot size info
    _Adpd400xDrvGetSlotInfo();
    // set the watermark for 2-bytes slotA data.
    /**   set the watermark value dynamically ,because
    *   data size(upto 4) ,
    *   channels (ch1 &ch2 )and slots(12 slots) are changed in runtime.
    */
    if(gsTotalSlotSize != 0)
    {
      gnAdpdFifoWaterMark = nmax_fifo_size / gsTotalSlotSize;
      if(gnAdpdFifoWaterMark > 4)
      {
        gnAdpdFifoWaterMark = 4;
      }
    }
    nRetCode = Adpd400xDrvSetParameter(ADPD400x_WATERMARKING,0,gnAdpdFifoWaterMark);
    nRetCode |= Adpd400xDrvRegWrite(ADPD400x_REG_INT_STATUS_FIFO, 0x8000); // Clear FIFO

    // set GO
    nTemp = gsHighestSelectedSlot << BITP_OPMODE_TIMESLOT_EN;
    nTemp |= ADPD400x_OP_RUN_MODE;
    nRetCode |= Adpd400xDrvRegWrite(ADPD400x_REG_OPMODE, nTemp);
  }

  return nRetCode;
}

int16_t Adpd400xDrvSetOperationPause(uint8_t nEnable) {
  int16_t nRetCode = ADPD400xDrv_SUCCESS;
  uint16_t nTemp;

  nRetCode = Adpd400xDrvRegRead(ADPD400x_REG_OPMODE, &nTemp);
  nTemp &= 0xFFFE;
  nRetCode |= Adpd400xDrvRegWrite(ADPD400x_REG_OPMODE, nTemp | nEnable);

  return nRetCode;
}


/** @brief  Enable an operation time slot
*
* @param  nSlotX: SlotA-L, starts from #0
* @param  nSlotFormat: Data format in FIFO = IDS (Impulse, Dark, Sig)
* @param  nChannel: Channel selection for SlotA-L:
*                                       1. For channel one  --> 1
*                                       2. For both channel --> 2
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvSlotSetup(uint8_t nSlotNum, uint8_t nEnable, \
                                uint16_t nSlotFormat, uint8_t nChannel) {
  uint16_t addr, value1, value2;
  // data size is set here, but the data shift location is set in upper layer
  if ((nSlotFormat & 0x100) == 0)  {    // not impulse mode
    if ((nSlotFormat & 0xF) > 4 || (nSlotFormat & 0xF0) > 0x40 )
      return ADPD400xDrv_ERROR;
  }

  gsTotalSlotSize = 0;          // reset the sum size. Indicate a slot change
  // disable a slot:
  //  disable every slots after this one
  Adpd400xDrvRegRead(ADPD400x_REG_OPMODE, &value1);
  value2 = value1 & BITM_OPMODE_TIMESLOT_EN;
  value2 >>= BITP_OPMODE_TIMESLOT_EN;
  // disable a slot:
  //  disable every slots after this one
  if (nEnable == 0)  {    // un_select all the slot after
    if (nSlotNum <= value2)  {
      value1 &= (~BITM_OPMODE_TIMESLOT_EN);
      if (nSlotNum != 0)  {
        value1 |= ((nSlotNum - 1) << BITP_OPMODE_TIMESLOT_EN);
        gsHighestSelectedSlot = nSlotNum - 1;
      } else {
        gsHighestSelectedSlot = 0;
      }
      Adpd400xDrvRegWrite(ADPD400x_REG_OPMODE, value1);
    }
  } else {    // select all the slots before
    if (nSlotNum > value2)  {
      value1 &= (~BITM_OPMODE_TIMESLOT_EN);
      value1 |= (nSlotNum << BITP_OPMODE_TIMESLOT_EN);
      Adpd400xDrvRegWrite(ADPD400x_REG_OPMODE, value1);
      gsHighestSelectedSlot = nSlotNum;
    }
  }


  if (nChannel >1)  {   // Choice is 0,
    gsSlot[nSlotNum].channelNum = 3;
    nChannel = 1;
  } else {
    gsSlot[nSlotNum].channelNum = 1;
    nChannel = 0;
  }

  // Get the requested TS_CTRL register address
  addr = nSlotNum * 0x20 + ADPD400x_REG_TS_CTRL_A;
  // Read the TS_CTRL value
  Adpd400xDrvRegRead(addr, &value1);
  // Mask register value
  value1 &= (~BITM_TS_CTRL_A_CH2_EN_A);
  // Update the Channel 2 bit with requested value
  value1 |= (nChannel<<BITP_TS_CTRL_A_CH2_EN_A);
  // Write back to TS_CTRL register
  Adpd400xDrvRegWrite(addr, value1);

  // set slot size
  _Adpd400xDrvSetSlotSize(nSlotNum, nSlotFormat);

  return ADPD400xDrv_SUCCESS;
}



/** @brief  Set a slot in sleep/active mode
*           This method set the specified time-slot into sleep mode
*
* @param  nSlotX: SlotA-L, starts from #0
* @param  nActive: 0 = sleep, 1 = awake
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvSlotSetActive(uint8_t nSlotNum, uint8_t nActive) {
  if (nActive == 0)  {    // Put a slot to Sleep
    if (gsSlot[nSlotNum].pre_activeSlot == 1)  {    // do skip a slot
      _Adpd400xDrvSlotSaveCurrentSetting(nSlotNum);
      _Adpd400xDrvSlotApplySkipSetting(nSlotNum);
    }
    gsSlot[nSlotNum].activeSlot = 0;
    gsSlot[nSlotNum].pre_activeSlot = 0;

  } else {    // Set a slot awake
    // if previous is Sleep
    if (gsSlot[nSlotNum].pre_activeSlot == 0)  {
      _Adpd400xDrvSlotApplyPreviousSetting(nSlotNum);
    } else {
      _Adpd400xDrvSlotSaveCurrentSetting(nSlotNum);
    }
    gsSlot[nSlotNum].activeSlot = 1;
    gsSlot[nSlotNum].pre_activeSlot = 1;
  }

  return ADPD400xDrv_SUCCESS;
}

/** @brief  Register data ready callback
*
* @param  pfADPDDataReady  Function Pointer callback for the reg data
* @return None
*/
void Adpd400xDrvDataReadyCallback(void (*pfADPDDataReady)()) {
  gpfnADPDCallBack = pfADPDDataReady;
}

/** @brief  ADPD400x interrupt service routine
* @param  None
* @return None
*/
void Adpd400xISR() {
  if (gpfnADPDCallBack != NULL) {
    (*gpfnADPDCallBack)();
  }
  gnAccessCnt[0]++;
}

/** @brief  Debug function. Read out debug info
* @param  None
* @return uint32_t* Debug info pointer
*/
uint32_t* Adpd400xDrvGetDebugInfo() {
  return gnAccessCnt;
}

/** @brief ADPD400x Set parameter
*
* @param eCommand command for Watermark value
* @param nValue DataSet Size to be set
* @return @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvSetParameter(Adpd400xCommandStruct_t eCommand, uint8_t nPar, uint16_t nValue) {
  int16_t nRetCode = ADPD400xDrv_SUCCESS;
  switch(eCommand){
  case ADPD400x_WATERMARKING:
    // set the watermark for 2-bytes slotA data.
    // TODO: Change it for other data types and slot mode
    nRetCode = Adpd400xDrvRegWrite(ADPD400x_REG_FIFO_CTL,
                                   ((nValue * (gsTotalSlotSize==0?1:gsTotalSlotSize)) - 1) & 0x3FF);
    gnAdpdFifoWaterMark = nValue;
    break;
  case ADPD400x_TEST_DATA:
    Adpd400xDrvRegRead(0x1e, &nValue);
    gnAccessCnt[1] = nValue;
    Adpd400xDrvRegRead(0x1f, &nValue);
    gnAccessCnt[2] = nValue;
    break;
  default:
    break;
  }
  return nRetCode;
}

/** @brief ADPD400x Get parameter
*
* @param eCommand: Target in interest
* @param nPar: eCommand's argument which specify slot number
* @param pnValue: Output Target's value
* @return Pass or Fail
*/
int16_t Adpd400xDrvGetParameter(Adpd400xCommandStruct_t eCommand, uint8_t nPar, uint16_t *pnValue) {
  int16_t nRetCode = ADPD400xDrv_SUCCESS;
  uint16_t nStatData;
  uint16_t nRegValue1, nRegValue2;
  uint32_t nTemp;

  // In _Adpd400xDrvInit, SlotSetup, ChannelSetup, Idle mode: gsTotalSlotSize is set to 0
  switch(eCommand) {
  case ADPD400x_WATERMARKING:
    *pnValue = gnAdpdFifoWaterMark;
    break;
  case ADPD400x_OUTPUTDATARATE:
    _Adpd400xDrvGetDataOuputRate();
    *pnValue = gsOutputDataRate;
    break;
  case ADPD400x_FIFOLEVEL:
    nRetCode |= Adpd400xDrvRegRead(ADPD400x_REG_INT_STATUS_FIFO, &nStatData);
    gnFifoLevel = nStatData & 0x7FF;
    *pnValue = gnFifoLevel;
    break;
  case ADPD400x_TIMEGAP:
    // time between two samples in milliseconds
    nRetCode |= Adpd400xDrvRegRead(ADPD400x_REG_TS_FREQ, &nRegValue1);
    nRetCode |= Adpd400xDrvRegRead(ADPD400x_REG_TS_FREQH, &nRegValue2);
    nTemp = nRegValue1 | (nRegValue2 & 0x7F) << 8; // // time in microseconds
    nRetCode |= Adpd400xDrvRegRead(ADPD400x_REG_DECIMATE_A, &nRegValue2);
    nRegValue2 = nRegValue2 & 0xFF;
    *pnValue = (nTemp * nRegValue2) / 1000; // time in milliseconds
    break;
  case ADPD400x_LATEST_SLOT_DATASIZE:   // App calls it after DCFG_load. (GetSlot)
    _Adpd400xDrvGetSlotInfo();
    *pnValue = gsSlot[nPar].slotFormat;
    break;
  case ADPD400x_THIS_SLOT_DATASIZE:     // buffer_op calls in sample mode
    if (gsTotalSlotSize == 0)
      _Adpd400xDrvGetSlotInfo();
    *pnValue = gsSlot[nPar].slotFormat;
    break;
  case ADPD400x_SUM_SLOT_DATASIZE:
    if (gsTotalSlotSize == 0)
      _Adpd400xDrvGetSlotInfo();
    *pnValue = gsTotalSlotSize;
    break;
  case ADPD400x_IS_SLOT_ACTIVE:     // Check if this slot is active
    *pnValue = gsSlot[nPar].activeSlot;
    break;
  case ADPD400x_IS_SLOT_SELECTED:   // Check if this slot is active
    if ( nPar<= gsHighestSelectedSlot)
      *pnValue = gsSlot[nPar].activeSlot;
    break;
  case ADPD400x_HIGHEST_SLOT_NUM:
    if (gsTotalSlotSize == 0)
      _Adpd400xDrvGetSlotInfo();
    *pnValue = gsHighestSelectedSlot;
    break;
  case ADPD400x_THIS_SLOT_CHANNEL_NUM:
    *pnValue = gsSlot[nPar].channelNum;
    break;
  default:
    break;
  }
  return nRetCode;
}

/** @brief Read data out from Adpd400x FIFO
*
* @param  pollMode pollMode 1=continue polling.
* @param nDataSetSize DataSet Size to be get
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvReadFifoData(uint8_t *pnData, uint16_t nDataSetSize) {
  uint8_t nAddr;
  uint16_t nTmpAddr = 0;
  uint8_t txData[2];
  uint8_t i = 0;
  
  Adpd400xDrvRegRead(ADPD400x_REG_INT_STATUS_FIFO, &gnFifoLevel);
  gnFifoLevel = gnFifoLevel & 0x7FF;
#ifndef NDEBUG
  if (gnFifoLevel >= 256) {
    gnOverFlowCnt++;
  }
#endif  // NDEBUG
  if (gnFifoLevel >= nDataSetSize) {
    gnAccessCnt[2]++;
    nAddr = ADPD400x_REG_FIFO_DATA;
    switch(nAdpd400xCommMode){
    case ADPD400x_SPI_BUS:
      i = 0;
      nTmpAddr = (nAddr << 1 ) & ADPD400x_SPI_READ; // To set the last bit low for read operation
      txData[i++] = (uint8_t)(nTmpAddr >> 8);
      txData[i++] = (uint8_t)(nTmpAddr);
      
      /**
      The first argument to the function is the the register address of the
      ADPD400x device from where the data is to be read.
      The 2nd argument is the pointer to the buffer of received data.
      The size of this buffer should be equal to the number of data requested.
      The 3rd argument is the size of transmit data in bytes.
      The 4th argument is the size of requested data in bytes.
      Adpd400x_SPI_Receive() should be implemented in such a way that it transmits
      the register address from the first argument and receives the data
      specified by the address in the second argument. The received data will
      be of size specified by 3rd argument.
      */
      if (Adpd400x_SPI_Receive(txData, pnData, 2, nDataSetSize) != ADI_HAL_OK) {
        return ADPD400xDrv_ERROR;
      }
      break;
    case ADPD400x_I2C_BUS:
      /**
      The first argument to the function is the the register address of the
      ADPD400x device from where the data is to be read.
      The 2nd argument is the pointer to the buffer of received data.
      The size of this buffer should be equal to the number of data requested.
      The 3rd argument is the size of transmit data in bytes.
      The 4th argument is the size of requested data in bytes.
      Adpd400x_I2C_TxRx() should be implemented in such a way that it transmits
      the register address from the first argument and receives the data
      specified by the address in the second argument. The received data will
      be of size specified by 3rd argument.
      */
      if (Adpd400x_I2C_TxRx(&nAddr, pnData, 1, nDataSetSize) != ADI_HAL_OK) {
        return ADPD400xDrv_ERROR;
      }
      break;
    default:
      return ADPD400xDrv_ERROR;
    }
  }

  return ADPD400xDrv_SUCCESS;
}

/** @brief  Synchronous register read from the ADPD400x
*
* @param  *pnData:     Pointer to 32-bit register data value
* @param  nSlotNum:    8-bit slot number
* @param  nSignalDark: 8-bit signal/dark flag
* @param  nChNum:      8-bit channel number info
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvReadRegData(uint32_t *pnData, ADPD400xDrv_SlotNum_t nSlotNum, uint8_t nSignalDark, uint8_t nChNum) {
  uint8_t anRxData[4];
  uint8_t txData[2];
  uint16_t nAddr, i = 0;
  uint16_t nIntStatus;
  uint16_t nTmpAddr = 0;

  Adpd400xDrvRegRead(ADPD400x_REG_INT_STATUS_DATA, &nIntStatus);

  if(nIntStatus & (1<<nSlotNum)) {

    nAddr = ADPD400x_REG_SIGNAL1_L_A + (nSlotNum << 3) + (nSignalDark << 2) + (nChNum << 1);

    if (nAdpd400xCommMode == ADPD400x_SPI_BUS) {
      nTmpAddr = (nAddr << 1 ) & ADPD400x_SPI_READ; // To set the last bit low for read operation

      txData[i++] = (uint8_t)(nTmpAddr >> 8);
      txData[i++] = (uint8_t)(nTmpAddr);

      /**
      The first argument to the function is the the register address of the
      ADPD400x device from where the data is to be read.
      The 2nd argument is the pointer to the buffer of received data.
      The size of this buffer should be equal to the number of data requested.
      The 3rd argument is the size of transmit data in bytes.
      The 4th argument is the size of requested data in bytes.
      Adpd400x_SPI_Receive() should be implemented in such a way that it transmits
      the register address from the first argument and receives the data
      specified by the address in the second argument. The received data will
      be of size specified by 3rd argument.
      */
      if (Adpd400x_SPI_Receive(txData, anRxData, i, 4)!= ADI_HAL_OK) {
        return ADPD400xDrv_ERROR;
      }
    } else if (nAdpd400xCommMode == ADPD400x_I2C_BUS) {
      if (nAddr > 0x7F) {
        txData[i++] = (uint8_t)((nAddr >> 8)|0x80);
        txData[i++] = (uint8_t)nAddr;
      } else {
        txData[i++] = (uint8_t)nAddr;
      }

      /**
      The first argument to the function is the the register address of the
      ADPD400x device from where the data is to be read.
      The 2nd argument is the pointer to the buffer of received data.
      The size of this buffer should be equal to the number of data requested.
      The 3rd argument is the size of transmit data in bytes.
      The 4th argument is the size of requested data in bytes.
      Adpd400x_I2C_TxRx() should be implemented in such a way that it transmits
      the register address from the first argument and receives the data
      specified by the address in the second argument. The received data will
      be of size specified by 3rd argument.
      */
      if (Adpd400x_I2C_TxRx((uint8_t *) txData, (uint8_t *) anRxData, i, 4) != ADI_HAL_OK) {
        return ADPD400xDrv_ERROR;
      }
    } else {
      return ADPD400xDrv_ERROR;
    }

    *pnData = (anRxData[0] << 8) + anRxData[1] + (anRxData[2] << 24) + (anRxData[3] << 16);
    return ADPD400xDrv_SUCCESS;
  } else {
    return ADPD400xDrv_ERROR;
  }
}

/**
* @brief Set the LED current level (pulse peak value)
*
* @param        nLedCurrent:     0 --> disable
*                                1 --> 3mA
*                             0x7f --> 200mA
* @param        nLedId:          1 --> LED_1
*                                2 --> LED_2
*                                3 --> LED_3
*                                4 --> LED_4
*
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvSetLedCurrent(uint16_t nLedCurrent, ADPD400xDrv_LedId_t nLedId, ADPD400xDrv_SlotNum_t nSlotNum) {
  int16_t nRetCode = ADPD400xDrv_SUCCESS;
  uint16_t nMask;
  uint16_t nReg;
  uint8_t nBitPos;
  uint16_t nAdpd400xData;

  if (nLedId < ADPD400xDrv_LED1 || nLedId > ADPD400xDrv_LED4) {
    return ADPD400xDrv_ERROR;
  }

  nReg = ADPD400x_REG_LED_POW12_A + ((nLedId - 1)>>1) + nSlotNum*0x20;

  if (nLedCurrent > 0x7F) {
    return ADPD400xDrv_ERROR;
  }
  
  if((nLedId == ADPD400xDrv_LED1) ||(nLedId == ADPD400xDrv_LED3)) {
      nMask = ~BITM_LED_POW12_A_LED_CURRENT1_A;
      nBitPos = BITP_LED_POW12_A_LED_CURRENT1_A;
  } else {
      nMask = ~BITM_LED_POW12_A_LED_CURRENT2_A;
      nBitPos = BITP_LED_POW12_A_LED_CURRENT2_A;
  }
  

  // Read the current register value
  if (Adpd400xDrvRegRead(nReg, &nAdpd400xData) != ADPD400xDrv_SUCCESS)
    return ADPD400xDrv_ERROR;

  nAdpd400xData = (nAdpd400xData & nMask) | (nLedCurrent << nBitPos);


  if (Adpd400xDrvRegWrite(nReg, nAdpd400xData) != ADPD400xDrv_SUCCESS)
    return ADPD400xDrv_ERROR;

  return nRetCode;
}

/**
* @brief Get the LED current level (pulse peak value)
*
* @param        *pLedCurrent:    0 --> disable
*                                1 --> 3mA
*                             0x7f --> 200mA
* @param        nLedId:          1 --> LED_1
*                                2 --> LED_2
*                                3 --> LED_3
*                                4 --> LED_4
*
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t Adpd400xDrvGetLedCurrent(uint16_t *pLedCurrent, ADPD400xDrv_LedId_t nLedId, ADPD400xDrv_SlotNum_t nSlotNum) {
  int16_t nRetCode = ADPD400xDrv_SUCCESS;
  uint16_t nMask;
  uint16_t nReg;
  uint8_t nBitPos;
  uint16_t nAdpd400xData;

  if (nLedId < ADPD400xDrv_LED1 || nLedId > ADPD400xDrv_LED4) {
    return ADPD400xDrv_ERROR;
  }

  nReg = ADPD400x_REG_LED_POW12_A + ((nLedId - 1)>>1) + nSlotNum*0x20;

  if((nLedId == ADPD400xDrv_LED1) ||(nLedId == ADPD400xDrv_LED3)) {
      nMask = BITM_LED_POW12_A_LED_CURRENT1_A;
      nBitPos = BITP_LED_POW12_A_LED_CURRENT1_A;
  } else {
      nMask = BITM_LED_POW12_A_LED_CURRENT2_A;
      nBitPos = BITP_LED_POW12_A_LED_CURRENT2_A;
  }

  // Read the current register value
  if (Adpd400xDrvRegRead(nReg, &nAdpd400xData) != ADPD400xDrv_SUCCESS)
    return ADPD400xDrv_ERROR;

  *pLedCurrent = (nAdpd400xData & nMask) >> nBitPos;

  return nRetCode;
}

/**  @brief Soft reset the ADPD400x device
*
* @param  None
* @return int16_t success
*/
int16_t Adpd400xDrvSoftReset(void) {
  return Adpd400xDrvOpenDriver();
}

/** @brief Driver Initialization.
*
* @param  None
* @return None
*/
static void _Adpd400xDrvInit(void) {
  uint8_t i;
  gsTotalSlotSize = 0;
  gsHighestSelectedSlot = 0;
  for (i = 0; i < SLOT_NUM; i++)  {
    gsSlot[i].activeSlot = 1;
    gsSlot[i].pre_activeSlot = 1;
    gsSlot[i].channelNum = 1;
    _Adpd400xDrvSlotSaveCurrentSetting(i);
  }
  gsSlot[0].activeSlot = 1;   // special case that slot0 is enable (Reg0x10)
}

/** @brief Determines if the ADPD400x is on an SPI or I2C bus
*
* @param  None
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
static int16_t _Adpd400xDrvSelComMode() {
  uint16_t nDevId;
  
  nAdpd400xCommMode = ADPD400x_I2C_BUS;
  if (Adpd400xDrvRegRead(ADPD400x_REG_CHIP_ID, &nDevId) == ADPD400xDrv_SUCCESS) {
    if (nDevId == ADPD400x_ID)
        return ADPD400xDrv_SUCCESS;
  }
  
  nAdpd400xCommMode = ADPD400x_SPI_BUS;
  if (Adpd400xDrvRegRead(ADPD400x_REG_CHIP_ID, &nDevId) == ADPD400xDrv_SUCCESS) {
    if (nDevId == ADPD400x_ID)
        return ADPD400xDrv_SUCCESS;
  }
 
  nAdpd400xCommMode = ADPD400x_UNKNOWN_BUS;
  
  return ADPD400xDrv_ERROR;
}

/** @brief  Set FIFO interrupt mode
*
* @param  None
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
static int16_t _Adpd400xDrvSetInterrupt() {
  int16_t nRetCode = ADPD400xDrv_SUCCESS;
  uint16_t nRegValue;
  nRetCode |= Adpd400xDrvRegRead(ADPD400x_REG_INT_ENABLE_XD, &nRegValue);
  /**  Define INTERRUPT_ENABLE macro for the definition of FIFO_INT_ENA macros. */
  nRegValue = (nRegValue & 0x7FFF) | FIFO_TH_INT_ENA;
  nRetCode |= Adpd400xDrvRegWrite(ADPD400x_REG_INT_ENABLE_XD, nRegValue);  // Enable INTX

  /* For now, set INTY as well. Check later if this is required. */
  nRetCode |= Adpd400xDrvRegRead(ADPD400x_REG_INT_ENABLE_YD, &nRegValue);
  /**  Define INTERRUPT_ENABLE macro for the definition of FIFO_INT_ENA macros. */
  nRegValue = (nRegValue & 0x9FFF) | FIFO_UF_INT_ENA | FIFO_OF_INT_ENA;
  nRetCode |= Adpd400xDrvRegWrite(ADPD400x_REG_INT_ENABLE_YD, nRegValue);  // Enable INTY
  return nRetCode;
}

/** @brief Set device to Idle mode
*
* @param  None
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
static int16_t _Adpd400xDrvSetIdleMode() {
  uint16_t nRetCode, nTemp;
  /** Set to standby Mode */
  nRetCode = Adpd400xDrvRegRead(ADPD400x_REG_OPMODE, &nTemp);
  nTemp &= (~BITM_OPMODE_OP_MODE);
  nTemp |= ADPD400x_OP_IDLE_MODE;
  nRetCode = Adpd400xDrvRegWrite(ADPD400x_REG_OPMODE, nTemp);
  return nRetCode;
}

/** @brief Get status of 12 slots
*
* @param  None
* @return None
*/
static void _Adpd400xDrvGetSlotInfo()  {
  uint16_t tempD, value, slotSize;
  gsTotalSlotSize = 0;

  Adpd400xDrvRegRead(ADPD400x_REG_OPMODE, &value);
  gsHighestSelectedSlot = (value & BITM_OPMODE_TIMESLOT_EN) >> BITP_OPMODE_TIMESLOT_EN;

  for (uint8_t i = 0; i < SLOT_NUM; i++)  {
    // take care of Impulse mode here.
    // if Impulse mode, read out from other register
    //    ....
    Adpd400xDrvRegRead(ADPD400x_REG_TS_CTRL_A+i*0x20, &value);
    value = (value & BITM_TS_CTRL_A_SAMPLE_TYPE_A ) >> BITP_TS_CTRL_A_SAMPLE_TYPE_A;

    if(value == 0x03){
      Adpd400xDrvRegRead(ADPD400x_REG_COUNTS_A+i*0x20, &value);
      value = (value & BITM_COUNTS_A_NUM_INT_A) >> BITP_COUNTS_A_NUM_INT_A;
      /* Set the bit-9 as 1 to indicate impulse mode */
      gsSlot[i].slotFormat = value | (0x01 << BITP_COUNTS_A_NUM_INT_A);
    } else {
      Adpd400xDrvRegRead(ADPD400x_REG_DATA1_A+i*0x20, &value);
      gsSlot[i].slotFormat = (value & BITM_DATA1_A_SIGNAL_SIZE_A) >> BITP_DATA1_A_SIGNAL_SIZE_A;
      tempD = (value & BITM_DATA1_A_DARK_SIZE_A) >> BITP_DATA1_A_DARK_SIZE_A;
      gsSlot[i].slotFormat |= (tempD << 4);
    }

    if (gsSlot[i].activeSlot == 1 && i <= gsHighestSelectedSlot)  {
      if (gsSlot[i].slotFormat & 0x100)  {
        slotSize = gsSlot[i].slotFormat & 0xFF;   // Impulse mode
        slotSize *= 2; // Impulse data size always a word
      } else {
        slotSize = ((gsSlot[i].slotFormat & 0xF) + \
          ((gsSlot[i].slotFormat & 0xF0) >> 4));
        if (gsSlot[i].channelNum == 3)    // 2 channels are active
          slotSize *= 2;
      }
      gsTotalSlotSize += slotSize;
    }
  }
}

/** @brief  Set FIFO interrupt mode
*
* @param  None
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
static void _Adpd400xDrvGetDataOuputRate()  {
  uint16_t temp16;
  uint32_t sampleFrq, lfOSC;
  Adpd400xDrvRegRead(ADPD400x_REG_SYS_CTL, &temp16);
  temp16 &= BITM_SYS_CTL_LFOSC_SEL;
  temp16 >>= BITP_SYS_CTL_LFOSC_SEL;
  if (temp16 == 1)
    lfOSC = 1000000;  // 1M clock
  else
    lfOSC = 32000;    // 32k clock
  Adpd400xDrvRegRead32B(ADPD400x_REG_TS_FREQ, &sampleFrq);
  sampleFrq = lfOSC / sampleFrq;
  Adpd400xDrvRegRead(ADPD400x_REG_DECIMATE_A, &temp16);
  temp16 &= BITM_DECIMATE_A_DECIMATE_FACTOR_A;
  temp16 >>= BITP_DECIMATE_A_DECIMATE_FACTOR_A;
  gsOutputDataRate = (uint16_t)(sampleFrq / (temp16 + 1));
}

/** @brief  Save current setting
*
* @param  nSlotX: SlotA-L
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
static void _Adpd400xDrvSlotSaveCurrentSetting(uint8_t nSlotNum) {
  uint16_t addrOffset, addr;
  addrOffset = nSlotNum * 0x20;
  addr = addrOffset + ADPD400x_REG_TS_CTRL_A;
  Adpd400xDrvRegRead(addr, &pre_active_setting[nSlotNum][0]);
  addr = addrOffset + ADPD400x_REG_TS_PATH_A;
  Adpd400xDrvRegRead(addr, &pre_active_setting[nSlotNum][1]);
  addr = addrOffset + ADPD400x_REG_COUNTS_A;
  Adpd400xDrvRegRead(addr, &pre_active_setting[nSlotNum][2]);
  addr = addrOffset + ADPD400x_REG_LED_PULSE_A;
  Adpd400xDrvRegRead(addr, &pre_active_setting[nSlotNum][3]);
  addr = addrOffset + ADPD400x_REG_MOD_PULSE_A;
  Adpd400xDrvRegRead(addr, &pre_active_setting[nSlotNum][4]);
  addr = addrOffset + ADPD400x_REG_DIGINT_LIT_A;
  Adpd400xDrvRegRead(addr, &pre_active_setting[nSlotNum][5]);
}

/** @brief  Save current setting
*
* @param  nSlotX: SlotA-L
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
static void _Adpd400xDrvSlotApplyPreviousSetting(uint8_t nSlotNum) {
  uint16_t addrOffset, addr;
  addrOffset = nSlotNum * 0x20;
  addr = addrOffset + ADPD400x_REG_TS_CTRL_A;
  Adpd400xDrvRegWrite(addr, pre_active_setting[nSlotNum][0]);
  addr = addrOffset + ADPD400x_REG_TS_PATH_A;
  Adpd400xDrvRegWrite(addr, pre_active_setting[nSlotNum][1]);
  addr = addrOffset + ADPD400x_REG_COUNTS_A;
  Adpd400xDrvRegWrite(addr, pre_active_setting[nSlotNum][2]);
  addr = addrOffset + ADPD400x_REG_LED_PULSE_A;
  Adpd400xDrvRegWrite(addr, pre_active_setting[nSlotNum][3]);
  addr = addrOffset + ADPD400x_REG_MOD_PULSE_A;
  Adpd400xDrvRegWrite(addr, pre_active_setting[nSlotNum][4]);
  addr = addrOffset + ADPD400x_REG_DIGINT_LIT_A;
  Adpd400xDrvRegWrite(addr, pre_active_setting[nSlotNum][5]);
}


/** @brief  Restore back to previous setting
*
* @param  nSlotX: SlotA-L
* @return int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
static void _Adpd400xDrvSlotApplySkipSetting(uint8_t nSlotNum) {
  uint16_t addrOffset, value, addr;
  addrOffset = nSlotNum * 0x20;
  addr = addrOffset + ADPD400x_REG_TS_CTRL_A;
  value = 0x3000;   //<! impulse mode with offset = 0;
  Adpd400xDrvRegWrite(addr, value);

  addr = addrOffset + ADPD400x_REG_TS_PATH_A;
  value = 0x00E6;   //!< precond = 0, not INT
  Adpd400xDrvRegWrite(addr, value);

  addr = addrOffset + ADPD400x_REG_COUNTS_A;
  value = 0x0000;   //!< num_int = 0
  Adpd400xDrvRegWrite(addr, value);

  addr = addrOffset + ADPD400x_REG_LED_PULSE_A;
  value = 0x0000;   //!< LED width = 0
  Adpd400xDrvRegWrite(addr, value);

  addr = addrOffset + ADPD400x_REG_MOD_PULSE_A;
  value = 0x0000;   //!< modulation width = 0
  Adpd400xDrvRegWrite(addr, value);

  addr = addrOffset + ADPD400x_REG_DIGINT_LIT_A;
  value = 0x0000;   //!< lit offset = 0
  Adpd400xDrvRegWrite(addr, value);
}

/** @brief  Set the slot data size
* @param  nSlotX: SlotA-L
* @param  nSlotFormat: Dark, Signal format
* @return none
*/
static void _Adpd400xDrvSetSlotSize(uint8_t nSlotNum, uint16_t nSlotFormat) {
  uint16_t addr1, addr2, value1, value2;

  //!< nSlotNum starts from 0, to 11. Index starts from 0.
  if(nSlotFormat & 0x100) {
    addr1 = nSlotNum * 0x20 + ADPD400x_REG_COUNTS_A;
    addr2 = nSlotNum * 0x20 + ADPD400x_REG_TS_CTRL_A;
    Adpd400xDrvRegRead(addr1, &value1);
    Adpd400xDrvRegRead(addr2, &value2);
    // set the impulse response type in value2 variable
    value2 |= 0x0003 << BITP_TS_CTRL_A_SAMPLE_TYPE_A;
    value1 &= (~BITM_COUNTS_A_NUM_INT_A);
    value1 |= (nSlotFormat & 0xFF) << BITP_COUNTS_A_NUM_INT_A;
    nSlotFormat &= 0xff;
  } else {
    addr1 = nSlotNum * 0x20 + ADPD400x_REG_DATA1_A;
    addr2 = nSlotNum * 0x20 + ADPD400x_REG_TS_CTRL_A;
    Adpd400xDrvRegRead(addr1, &value1);
    value1 &= (~BITM_DATA1_A_DARK_SIZE_A);
    value1 &= (~BITM_DATA1_A_SIGNAL_SIZE_A);
    value1 |= (nSlotFormat & 0x0F);
    value2 = (nSlotFormat & 0xF0) << (BITP_DATA1_A_DARK_SIZE_A - 4);
    value1 |= value2;
    Adpd400xDrvRegRead(addr2, &value2);
    value2 &= 0xCFFF;
    nSlotFormat &= 0xff;
  }
  gsSlot[nSlotNum].slotFormat = nSlotFormat;
  Adpd400xDrvRegWrite(addr1, value1);
  Adpd400xDrvRegWrite(addr2, value2);

  gsTotalSlotSize = 0;          //!< reset the sum size. Indicate a slot change
}
/**@}*/ /* end of group Adpd400x_Driver */
/**@}*/ /* end of group Device_Drivers */

