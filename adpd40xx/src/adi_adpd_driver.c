/**
****************************************************************************
* @file         adi_adpd_driver.c
* @author       ADI
* @version      V0.1
* @date         15-June-2020
* @brief        Device driver file of ADI ADPD4x chip.
****************************************************************************
* @attention
****************************************************************************
******************************************************************************
* Copyright (c) 2020 Analog Devices, Inc.  All rights reserved.
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
#include "adi_adpd_reg.h"
#include "adi_adpd_driver.h"

/**
* ! \addtogroup ADPD_Driver
* @{
*/

/* ------------------------- Defines  -------------------------------------- */
#ifdef __TESSY_DEF__
#define USER_DEFINED_SOFTWARE_RESET (1U) /*!< Set this macro as '1U' to do software reset alone */
#else
#define USER_DEFINED_SOFTWARE_RESET (0U) /*!< Set this macro as '1U' to do software reset alone */
#endif

#define SLEEP_TIME              (500U) /*!< Time delay for software reset(msec)*/
#define FIFO_TH_INT_ENA         ((0x1U) << 15U) /*!< Macro value to enable FIFO threshold detection */
#define FIFO_UF_INT_ENA         ((0x1U) << 14U) /*!< Macro value to enable Underflow FIFO threshold detection */
#define FIFO_OF_INT_ENA         ((0x1U) << 13U) /*!< Macro value to enable Overflow FIFO threshold detection */
#define BYTE_SWAP_16(WORD)      ((((WORD) >> (8U)) & 0xffU) | (((WORD) & 0xffU) << (8U))) /*!< Macro to be used for swap 16-bit value */
/*------------------------- Public Variables ------------------------------- */

/* ------------------------- Public Function Prototypes -------------------- */
uint32_t* adi_adpddrv_GetDebugInfo(void);
/* ------------------------- Private variables ----------------------------- */
tAdiAdpdDrvInst gAdiAdpdDrvInst;  /*!< Driver instance object */

/* ------------------------- Private Function Prototypes ------------------- */
static uint16_t _adi_adpddrv_SetInterrupt(void);
static void _adi_adpddrv_CheckFifoOvFl(void);
static void (*gpfnADPDCallBack)(uint32_t nTick);
static uint16_t _adi_adpddrv_SelComMode(void);
/* ------------------------- FUNCTIONS AND APIS ---------------------------- */
/*!****************************************************************************
*
*  \b              adi_adpddrv_OpenDriver
*
*  Open Driver, setting up the interrupt and I2C lines
*
*  \return       ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
uint16_t adi_adpddrv_OpenDriver(void)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;

  /* check the communication status */
  /* Update the trace variable with failure code, so the caller will get
  status of their request */
  nRetCode = _adi_adpddrv_SelComMode();

  /* Put the device into idle mode */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    /* Update the trace variable with adi_adpddrv_SetIdleMode routine code return,
    so the caller will get status of their request in-case of any failure */
    nRetCode = adi_adpddrv_SetIdleMode();
  }

  /* If device is put in idle mode successfully, then do software reset */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    /* Check the communication mode and do the software reset with selected peripheral*/
    if (gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_I2C_BUS)
    {
      /* prepare the transmit buffer with software reset value */
      uint8_t txData[3] = { 0x0f, 0x80, 0x00 };
      /* Do register write with software reset value buffer */
      if (Adpd400x_I2C_Transmit(txData, 3U) != ADI_ADPD_DRV_SUCCESS)
      {
        /* Update the trace variable with failure code, so the caller will get
        status of their request */
        nRetCode = ADI_ADPD_DRV_WRITE_ERROR;
      }
    }
    else
    {
      /* Prepare the transmit buffer with software reset value */
      uint8_t txData[4] = { 0x00, 0x1f, 0x80, 0x00 };
      /* Do register write with software reset value buffer */
      if (Adpd400x_SPI_Transmit(txData, 4U) != ADI_ADPD_DRV_SUCCESS)
      {
        /* Update the trace variable with failure code, so the caller will get
        status of their request */
        nRetCode = ADI_ADPD_DRV_WRITE_ERROR;
      }
    }
  }

  /* If Device software reset completed successfully give 500ms time delay
  before doing configurations*/
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    /* Put device sleep mode for 500ms */
    MCU_HAL_Delay(SLEEP_TIME);

    /* Make default interrupt configuration */
    nRetCode = _adi_adpddrv_SetInterrupt();  /* Default mode */
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpddrv_CloseDriver
*
*  Close Driver, Clear up before existing
*
*  \return       ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
uint16_t adi_adpddrv_CloseDriver(void)
{
  /* Put the device in Idle mode and return the status to caller function */
  return adi_adpddrv_SetIdleMode();
}

/*!****************************************************************************
*
*  \b              adi_adpddrv_GetComMode
*
*  Returns the communication bus: I2C, SPI or Unknown
*           See the enum ADI_ADPD_COMM_MODE
*
*  \return       ADI_ADPD_COMM_MODE enumeration value
*
******************************************************************************/
ADI_ADPD_COMM_MODE adi_adpddrv_GetComMode(void)
{
  /* return the communication mode type to caller function */
  return gAdiAdpdDrvInst.nAdpd400xCommMode;
}

/*!****************************************************************************
*
*  \b              adi_adpddrv_RegWrite
*
*  Synchronous register write to the ADPD400x register with the given value
*
*  \param[in]    nAddr: 16-bit register address
*
*  \param[in]    nRegValue: 16-bit register data value
*
*  \return       ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
uint16_t adi_adpddrv_RegWrite(uint16_t nAddr, uint16_t nRegValue)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to store number of byte to be transmit */
  uint16_t nTxSize = 0U;
  /* Declare variable to store register address */
  uint16_t nTmpAddr = 0U;
  /* Declare variable to prepare transmit buffer */
  uint8_t anTxData[4] = {0U, 0U, 0U, 0U};
  /* Check the given register address, if it's software reset register then
  do the special operation else do normal register write operation */
  if((nAddr == ADPD4x_REG_SYS_CTL) && ((nRegValue & BITM_SYS_CTL_SW_RESET) == BITM_SYS_CTL_SW_RESET))
  {
    nRetCode = adi_adpddrv_SoftReset();
  }
  else
  {
    /* Check the communication type and do register write */
    if (gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_SPI_BUS) {
      /* To set the last bit high for write operation */
      nTmpAddr = ((nAddr) << 1U) | ADPD400x_SPI_WRITE;
      /* Prepare the transmit buffer */
      anTxData[nTxSize++] = (uint8_t)(nTmpAddr >> 8U);
      anTxData[nTxSize++] = (uint8_t)(nTmpAddr);
      anTxData[nTxSize++] = (uint8_t)(nRegValue >> 8U);
      anTxData[nTxSize++] = (uint8_t)(nRegValue);

      /*
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
      the data from anTxData buffer of size specified in the second argument.
      */
      if (Adpd400x_SPI_Transmit(anTxData, nTxSize)!= ADI_ADPD_DRV_SUCCESS)
      {
        /* Update the trace variable with failure code, so the caller will get
        status of their request */
        nRetCode = ADI_ADPD_DRV_WRITE_ERROR;
      }
    }
    else if(gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_I2C_BUS)
    {
      /* Prepare the transmit buffer with register address, if register address
      above 127 then we need to set bit-15 as '1'. Refer datasheet for more information*/
      if (nAddr > 0x7FU)
      {
        nAddr = nAddr | ADPD400x_I2C_LONG_ADDRESS;
        anTxData[nTxSize++] = (uint8_t)(nAddr >> 8U);
        anTxData[nTxSize++] = (uint8_t)nAddr;
      }
      else
      {
        anTxData[nTxSize++] = (uint8_t)nAddr;
      }
      /* add the register value in transmit buffer */
      anTxData[nTxSize++] = (uint8_t)(nRegValue >> 8U);
      anTxData[nTxSize++] = (uint8_t)(nRegValue);
      /*
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
      the data from anTxData buffer of size specified in the second argument.
      */

      if (Adpd400x_I2C_Transmit((uint8_t *) anTxData, nTxSize) != ADI_ADPD_DRV_SUCCESS)
      {
        /* Update the trace variable with failure code, so the caller will get
        status of their request */
        nRetCode = ADI_ADPD_DRV_WRITE_ERROR;
      }
    }
    else
    {
      /*
      1. This block will get execute when the communication type set as none.
      2. Update the trace variable with failure code, so the caller will get
      status of their request */
      nRetCode = ADI_ADPD_DRV_PARAM_ERROR;
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpddrv_RegRead
*
*  Synchronous register read of the ADPD400x register into the given pointer
*
*  \param[in]    nAddr: 16-bit register address
*
*  \param[in]    pnData: Pointer to 16-bit register data value
*
*  \return       ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
uint16_t adi_adpddrv_RegRead(uint16_t nAddr, uint16_t *pnData)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to store number of byte to be transmit */
  uint16_t nTxSize = 0U;
  /* Declare variable to store register address */
  uint16_t nTmpAddr = 0U;
  /* Declare variable to store value from receive buffer */
  uint8_t anRxData[2] = {0U, 0U};
  /* Declare variable to prepare transmit buffer */
  uint8_t anTxData[2] = {0U, 0U};
  /* Check the communication type and proceed with selected peripheral */
  if (gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_SPI_BUS)
  {
    /* To set the last bit low for read operation */
    nTmpAddr = (nAddr << 1U) & ADPD400x_SPI_READ;
    /*! Prepare the transmit buffer with register address */
    anTxData[nTxSize++] = (uint8_t)(nTmpAddr >> 8U);
    anTxData[nTxSize++] = (uint8_t)(nTmpAddr);
    /*
    The first argument to the function is the register address of the
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
    if (Adpd400x_SPI_Receive(anTxData, anRxData, nTxSize, 2U)!= ADI_ADPD_DRV_SUCCESS)
    {
      /* Update the trace variable with failure code, so the caller will get
      status of their request	*/
      nRetCode = ADI_ADPD_DRV_READ_ERROR;
    }
  }
  else if (gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_I2C_BUS)
  {
    /* Prepare the transmit buffer with register address, if register address
    above 127 then we need to set bit-15 as '1'. Refer datasheet for more information*/
    if (nAddr > 0x7FU)
    {
      nAddr = nAddr | ADPD400x_I2C_LONG_ADDRESS;
      anTxData[nTxSize++] = (uint8_t)(nAddr >> 8U);
      anTxData[nTxSize++] = (uint8_t)nAddr;
    } else {
      anTxData[nTxSize++] = (uint8_t)nAddr;
    }
    /*
    The first argument to the function is the register address of the
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
    if (Adpd400x_I2C_TxRx((uint8_t *) anTxData, (uint8_t *) anRxData, nTxSize, 2U) != ADI_ADPD_DRV_SUCCESS)
    {
      /* Update the trace variable with failure code, so the caller will get
      status of their request */
      nRetCode = ADI_ADPD_DRV_READ_ERROR;
    }
  }
  else
  {
    /*
    1. This block will get execute when the communication type set as none.
    2. Update the trace variable with failure code, so the caller will get
    status of their request */
    nRetCode = ADI_ADPD_DRV_PARAM_ERROR;
  }
  /* Copy the register value from receive buffer to output parameter with byte order [15:0]*/
  *pnData = (((uint16_t)anRxData[0]) << (8U)) + (anRxData[1]);
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpddrv_RegRead32B
*
*  Synchronous register read of 32bit ADPD400x register into the given pointer
*
*  \param[in]    nAddr: 16-bit register address
*
*  \param[in]    pnData: Pointer to 32-bit register data value
*
*  \return       ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
uint16_t adi_adpddrv_RegRead32B(uint16_t nAddr, uint32_t *pnData)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to store number of byte to be transmit */
  uint16_t nTxSize = 0U;
  /* Declare variable to store register address */
  uint16_t nTmpAddr = 0U;
  /* Declare variable to store value from receive buffer */
  uint8_t anRxData[4] = {0U, 0U, 0U, 0U};
  /* Declare variable to prepare transmit buffer */
  uint8_t anTxData[2] = {0U, 0U};
  /* Check the communication type and proceed with selected peripheral */
  if (gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_SPI_BUS)
  {
    /* To set the last bit low for read operation */
    nTmpAddr = ((nAddr) << 1U) & ADPD400x_SPI_READ;
    /* Prepare the transmit buffer with register address */
    anTxData[nTxSize++] = (uint8_t)(nTmpAddr >> 8U);
    anTxData[nTxSize++] = (uint8_t)(nTmpAddr);
    /*
    The first argument to the function is the register address of the
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
    if (Adpd400x_SPI_Receive(anTxData, anRxData, nTxSize, 4U)!= ADI_ADPD_DRV_SUCCESS)
    {
      /* Update the trace variable with failure code, so the caller will get
      status of their request */
      nRetCode = ADI_ADPD_DRV_READ_ERROR;
    }
  }
  else if (gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_I2C_BUS)
  {
    /* Prepare the transmit buffer with register address, if register address
    above 127 then we need to set bit-15 as '1'. Refer datasheet for more information*/
    if (nAddr > 0x7FU)
    {
      nAddr = nAddr | ADPD400x_I2C_LONG_ADDRESS;
      anTxData[nTxSize++] = (uint8_t)(nAddr >> 8U);
      anTxData[nTxSize++] = (uint8_t)nAddr;
    }
    else
    {
      anTxData[nTxSize++] = (uint8_t)nAddr;
    }
    /*
    The first argument to the function is the register address of the
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
    if (Adpd400x_I2C_TxRx((uint8_t *) anTxData, (uint8_t *) anRxData, nTxSize, 4U) != ADI_ADPD_DRV_SUCCESS)
    {
    /* Update the trace variable with failure code, so the caller will get
      status of their request */
      nRetCode = ADI_ADPD_DRV_READ_ERROR;
    }
  }
  else
  {
    /*
    1. This block will get execute when the communication type set as none.
    2. Update the trace variable with failure code, so the caller will get
    status of their request */
    nRetCode = ADI_ADPD_DRV_PARAM_ERROR;
  }
  /* Copy the register value from receive buffer to ouptut parameter with byte order [31:0]*/
  *pnData = ((uint32_t)anRxData[0] << 8U) + ((uint32_t)anRxData[1]) + ((uint32_t)anRxData[2] << 24U) + ((uint32_t)anRxData[3] << 16U);
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpddrv_Multiple_RegWrite
*
*  Synchronous register write to the ADPD400x register with the given value
*
*  \param[in]    nRegCount: 16-bit register count
*
*  \param[in]    pRegValue: 16-bit Buffer pointer which point out register buffer
*
*  \return       ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
uint16_t adi_adpddrv_Multiple_RegWrite(uint16_t nRegCount, uint16_t *pRegValue)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to store pointer address of receive buffer */
  uint8_t *anTxData = (uint8_t *)pRegValue;
  /* Check the communication type and do register write */
  if (gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_SPI_BUS)
  {
    /* To set the last bit high for write operation */
    pRegValue[0] = pRegValue[0] << 1U | ADPD400x_SPI_WRITE;
    /* swap the endianness to write MSB bit value as first */
    pRegValue[0] = BYTE_SWAP_16(pRegValue[0]);
    /* copy the register values to transmit buffer */
    for(uint16_t nIndex = 1U; nIndex <= nRegCount; nIndex++)
    {
      /* swap the endianness to write MSB bit value as first */
      pRegValue[nIndex] = BYTE_SWAP_16(pRegValue[nIndex]);
    }
    /*
    The 1st argument to the function ADPD400x_SPI_Transmit is the pointer to the
    buffer of the size of three bytes in which first byte is the register
    address of the ADPD400x device.
    The 2nd argument is the size of the buffer in bytes (n bytes).
    ADPD400x_SPI_Transmit() should be implemented in such a way that it transmits
    the data from anTxData buffer of size specified in the second argument.
    */
    if (Adpd400x_SPI_Transmit(anTxData, nRegCount * 2U)!= ADI_ADPD_DRV_SUCCESS)
    {
      /* Update the trace variable with failure code, so the caller will get
      status of their request */
      nRetCode = ADI_ADPD_DRV_WRITE_ERROR;
    }
  }
  else if(gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_I2C_BUS)
  {
    /* add the register value in transmit buffer */
    for(uint16_t nIndex = 1U; nIndex < nRegCount; nIndex++)
    {
      pRegValue[nIndex] = BYTE_SWAP_16(pRegValue[nIndex]);
    }
    /* Prepare the transmit buffer with register address, if register address
    above 127 then we need to set bit-15 as '1'. Refer datasheet for more information*/
    if (pRegValue[0] > 0x7FU)
    {
      pRegValue[0] = pRegValue[0] | ADPD400x_I2C_LONG_ADDRESS;
      /* swap the endianness to write MSB bit value as first */
      pRegValue[0] = BYTE_SWAP_16(pRegValue[0]);
      nRegCount = nRegCount * 2U;
    }
    else
    {
      /* swap the endianness to write MSB bit value as first */
      pRegValue[0] = BYTE_SWAP_16(pRegValue[0]);
      nRegCount = nRegCount * 2U;
      nRegCount = nRegCount - 1U;
      anTxData++;
    }
    /*
    The 1st argument to the function ADPD400x_I2C_Transmit is the pointer to the
    buffer of the size of three bytes in which first byte is the register
    address of the ADPD400x device.
    The 2nd argument is the size of the buffer in bytes (n bytes).
    ADPD400x_I2C_Transmit() should be implemented in such a way that it transmits
    the data from anTxData buffer of size specified in the second argument.
    */

    if (Adpd400x_I2C_Transmit(anTxData, nRegCount) != ADI_ADPD_DRV_SUCCESS)
    {
      /* Update the trace variable with failure code, so the caller will get
      status of their request */
      nRetCode = ADI_ADPD_DRV_WRITE_ERROR;
    }
  }
  else
  {
    /*
    1. This block will get execute when the communication type set as none.
    2. Update the trace variable with failure code, so the caller will get
    status of their request */
    nRetCode = ADI_ADPD_DRV_PARAM_ERROR;
  }
  /* revert the byte order with little endianness  */
  for(uint16_t nIndex = 0U; nIndex < nRegCount; nIndex++)
  {
    pRegValue[nIndex] = BYTE_SWAP_16(pRegValue[nIndex]);
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpddrv_Multiple_RegRead
*
*  Synchronous register read of the ADPD400x register into the given pointer
*
*  \param[in]    nAddr: 16-bit register address
*
*  \param[in]    nRegCount: 16-bit register count
*
*  \param[in]    pnData: Pointer to 16-bit register data value
*
*  \return       ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
uint16_t adi_adpddrv_Multiple_RegRead(uint16_t nAddr, uint16_t nRegCount, uint16_t *pnData)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to prepare transmit buffer */
  uint8_t *anTxData = (uint8_t *)&nAddr;
  /* Declare variable to store pointer address of receive buffer */
  uint8_t *anRxData = (uint8_t *)pnData;
  /* Check the communication type and proceed with selected peripheral */
  if (gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_SPI_BUS)
  {
    /* To set the last bit low for read operation */
    nAddr = ((nAddr) << 1U) & ADPD400x_SPI_READ;
    /* swap the endianness to write MSB bit value as first */
    nAddr = BYTE_SWAP_16(nAddr);
    /*
    The first argument to the function is the register address of the
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
    if (Adpd400x_SPI_Receive(anTxData, anRxData, 2U, nRegCount * 2U)!= ADI_ADPD_DRV_SUCCESS)
    {
      /* Update the trace variable with failure code, so the caller will get
      status of their request	*/
      nRetCode = ADI_ADPD_DRV_READ_ERROR;
    }
  }
  else if (gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_I2C_BUS)
  {
    /* Prepare the transmit buffer with register address, if register address
    above 127 then we need to set bit-15 as '1'. Refer datasheet for more information*/
    if (nAddr > 0x7FU)
    {
      nAddr = nAddr | ADPD400x_I2C_LONG_ADDRESS;
      /* swap the endianness to write MSB bit value as first */
      nAddr = BYTE_SWAP_16(nAddr);
    }
    else
    {
      /* swap the endianness to write MSB bit value as first */
      nAddr = BYTE_SWAP_16(nAddr);
      anTxData++;
    }
    /*
    The first argument to the function is the register address of the
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
    if (Adpd400x_I2C_TxRx(anTxData, anRxData, 2U, nRegCount * 2U) != ADI_ADPD_DRV_SUCCESS)
    {
      /* Update the trace variable with failure code, so the caller will get
      status of their request */
      nRetCode = ADI_ADPD_DRV_READ_ERROR;
    }
  }
  else
  {
    /*
    1. This block will get execute when the communication type set as none.
    2. Update the trace variable with failure code, so the caller will get
    status of their request */
    nRetCode = ADI_ADPD_DRV_PARAM_ERROR;
  }
  /* Copy the register value from receive buffer to ouptut parameter with byte order */
  for(uint16_t nIndex = 0U; nIndex < nRegCount; nIndex++)
  {
    pnData[nIndex] = BYTE_SWAP_16(pnData[nIndex]);
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpddrv_DataReadyCallback
*
*  Register data ready callback
*
*  \param[in]    pfADPDDataReady: Function Pointer callback for the data ready CB
*
*  \return       ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
void adi_adpddrv_DataReadyCallback(void (*pfADPDDataReady)(uint32_t nTick))
{
  /* assign call back function in function pointer */
  gpfnADPDCallBack = pfADPDDataReady;
}

/*!****************************************************************************
*
*  \b              adi_adpddrv_ISR
*
*  ADPD400x interrupt service routine
*
*  \param[in]    nTick: Ticks value passed from GPIO callback
*
*  \return       None
*
******************************************************************************/
void adi_adpddrv_ISR(uint32_t nTick)
{
  /* check the function pointer is not null */
  if (gpfnADPDCallBack != NULL)
  {
    /* Call registered call-back function */
    (*gpfnADPDCallBack)(nTick);
  }
#ifndef NDEBUG
  /* Increment access count variable if it's running on debug profile */
  gAdiAdpdDrvInst.nAccessCnt[0]++;
#endif
}

/*!****************************************************************************
*
*  \b              adi_adpddrv_GetDebugInfo
*
*  Debug function. Read out debug info
*
*  \return  Debug Info Pointer
*
******************************************************************************/
uint32_t* adi_adpddrv_GetDebugInfo(void)
{
  /* return debug object reference to caller function */
  return gAdiAdpdDrvInst.nAccessCnt;
}

/*!****************************************************************************
*
*  \b              adi_adpddrv_ReadFifoData
*
*  Read data out from Adpd400x FIFO
*
*  \param[in]   nDataSetSize: DataSet Size to be get
*
*  \param[out]  *pnData: 8-bit pointer which points to data buffer
*
*  \return  ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
uint16_t adi_adpddrv_ReadFifoData(uint16_t nDataSetSize, uint8_t *pnData)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to store register address */
  uint16_t nTmpAddr = 0U;
  /* Declare variable to prepare transmit buffer */
  uint8_t anTxData[2];
  /* Declare variable to store register address */
  uint8_t nAddr;
  /* Read the fifo count register */
  nRetCode = adi_adpddrv_RegRead(ADPD4x_REG_INT_STATUS_FIFO, &gAdiAdpdDrvInst.nFifoLevel);
  /* if register read get success do the fifo read operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    /* extract the sample byte count from register value */
    gAdiAdpdDrvInst.nFifoLevel = gAdiAdpdDrvInst.nFifoLevel & 0x7FFU;
#ifndef NDEBUG
    _adi_adpddrv_CheckFifoOvFl();
#endif
    /* check the requested bytes of data with fifo byte count. if the requested
    bytes not available in fifo then return error to caller function */
    if (gAdiAdpdDrvInst.nFifoLevel >= nDataSetSize)
    {
#ifndef NDEBUG
      /* Increment debug access count with every fifo read operation */
      gAdiAdpdDrvInst.nAccessCnt[2]++;
#endif
      /* assign the fifo register address */
      nAddr = ADPD4x_REG_FIFO_DATA;
      switch(gAdiAdpdDrvInst.nAdpd400xCommMode)
      {
      case E_ADI_ADPD_SPI_BUS:
        /* To set the last bit low for read operation */
        nTmpAddr = (((uint16_t)(nAddr) << 1U ) & (ADPD400x_SPI_READ));
        anTxData[0] = (uint8_t)(nTmpAddr >> 8U);
        anTxData[1] = (uint8_t)(nTmpAddr);
        /*
        The first argument to the function is the register address of the
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
        if (Adpd400x_SPI_Receive(anTxData, pnData, 2U, nDataSetSize) != ADI_ADPD_DRV_SUCCESS)
        {
          /* Update the trace variable with failure code, so the caller will get
          status of their request */
          nRetCode = ADI_ADPD_DRV_READ_ERROR;
        }
        break;
      case E_ADI_ADPD_I2C_BUS:
        /*
        The first argument to the function is the register address of the
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
        if (Adpd400x_I2C_TxRx(&nAddr, pnData, 1U, nDataSetSize) != ADI_ADPD_DRV_SUCCESS)
        {
          /* Update the trace variable with failure code, so the caller will get
          status of their request */
          nRetCode = ADI_ADPD_DRV_READ_ERROR;
        }
        break;
      default:
        /*
        1. This block will get execute when the communication type set as none.
        2. Update the trace variable with failure code, so the caller will get
        status of their request */
        nRetCode = ADI_ADPD_DRV_PARAM_ERROR;
        break;
      }
    }
    else
    {
      /* Update the trace variable with failure code, so the caller will get
      status of their request */
      nRetCode = ADI_ADPD_DRV_FIFO_ERROR;
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*  \b              adi_adpddrv_ReadRegData
*
*  Synchronous register read from the ADPD400x data registers
*
*  \param[in]  nSlotNum: 8-bit slot number
*
*  \param[in]  nSignalDark: 8-bit signal/dark flag
*
*  \param[in]  nChNum: 8-bit channel number info
*
*  \param[out]  *pnData: Pointer to 32-bit register data value
*
*  \return  ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
uint16_t adi_adpddrv_ReadRegData(ADI_ADPD_SLOT_NUM nSlotNum, uint8_t nSignalDark, uint8_t nChNum, uint32_t *pnData)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to store register address */
  uint16_t nAddr = 0U;
  /* Declare variable to store number of byte to be transmit */
  uint16_t nTxSize = 0U;
  /* Declare variable to store register address */
  uint16_t nTmpAddr = 0U;
  /* Declare variable to store value from receive buffer */
  uint8_t anRxData[4] = {0U, 0U, 0U, 0U};
  /* Declare variable to prepare transmit buffer */
  uint8_t anTxData[2] = {0U, 0U};
  /* get register address from user input parameter */
  nAddr = ADPD4x_REG_SIGNAL1_L_A + (uint16_t)(((uint16_t)nSlotNum << 3U) + (uint16_t)((uint16_t)nSignalDark << 2U) + (uint16_t)((uint16_t)nChNum << 1U));
  /* check the communication type */
  if (gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_SPI_BUS)
  {
    /* To set the last bit low for read operation*/
    nTmpAddr = (nAddr << 1U) & ADPD400x_SPI_READ;
    /*! Prepare the transmit buffer with register address */
    anTxData[nTxSize++] = (uint8_t)(nTmpAddr >> 8);
    anTxData[nTxSize++] = (uint8_t)(nTmpAddr);
    /*
    The first argument to the function is the register address of the
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
    if (Adpd400x_SPI_Receive(anTxData, anRxData, nTxSize, 4U)!= ADI_ADPD_DRV_SUCCESS)
    {
      /* Update the trace variable with failure code, so the caller will get
      status of their request */
      nRetCode = ADI_ADPD_DRV_READ_ERROR;
    }
  }
  else if (gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_I2C_BUS)
  {
    /* Prepare the transmit buffer with register address, if register address
    above 127 then we need to set bit-8 as '1'. Refer datasheet for more information*/
    if (nAddr > 0x7FU)
    {
      anTxData[nTxSize++] = (uint8_t)((nAddr >> 8U) | 0x80U);
      anTxData[nTxSize++] = (uint8_t)nAddr;
    }
    else {
      anTxData[nTxSize++] = (uint8_t)nAddr;
    }
    /*
    The first argument to the function is the register address of the
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
    if (Adpd400x_I2C_TxRx((uint8_t *)anTxData, (uint8_t *)anRxData, nTxSize, 4U) != ADI_ADPD_DRV_SUCCESS)
    {
      /* Update the trace variable with failure code, so the caller will get
      status of their request */
      nRetCode = ADI_ADPD_DRV_READ_ERROR;
    }
  }
  else {
    /*
    1. This block will get execute when the communication type set as none.
    2. Update the trace variable with failure code, so the caller will get
    status of their request */
    nRetCode = ADI_ADPD_DRV_PARAM_ERROR;
  }
  /* if register read succeed assign register value to output parameter variable */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    *pnData = ((uint32_t)anRxData[0] << 8U) + (uint32_t)anRxData[1] + ((uint32_t)anRxData[2] << 24U) + ((uint32_t)anRxData[3] << 16U);
    /* Update the trace variable with success code, so the caller will get
    status of their request */
    nRetCode = ADI_ADPD_DRV_SUCCESS;
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpddrv_SoftReset
*
*  Soft reset the ADPD400x device
*
*  \return  ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
uint16_t adi_adpddrv_SoftReset(void)
{
#if (USER_DEFINED_SOFTWARE_RESET == 0U)
  return adi_adpddrv_OpenDriver();
#else
  int16_t nRetCode = ADI_ADPD_DRV_SUCCESS;

  /* check the communication status */
  if(gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_UNKNOWN_BUS)
  {
      nRetCode = _adi_adpddrv_SelComMode();
  }

  /* Put the device into idle mode */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRetCode = adi_adpddrv_SetIdleMode();
  }

  /* If device is put in idle mode successfully, then do software reset */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    if (gAdiAdpdDrvInst.nAdpd400xCommMode == E_ADI_ADPD_I2C_BUS)
    {
      uint8_t txData[3] = { 0x0f, 0x80, 0x00 };
      if (Adpd400x_I2C_Transmit(txData, 3U) != ADI_ADPD_DRV_SUCCESS)
      {
        nRetCode = ADI_ADPD_DRV_WRITE_ERROR;
      }
    }
    else
    {
      uint8_t txData[4] = { 0x00, 0x1f, 0x80, 0x00 };
      if (Adpd400x_SPI_Transmit(txData, 4U) != ADI_ADPD_DRV_SUCCESS)
      {
        nRetCode = ADI_ADPD_DRV_WRITE_ERROR;
      }
    }
  }
  return nRetCode;
#endif
}

/*!****************************************************************************
*  \b              adi_adpddrv_SetIdleMode
*
*  Set device to Idle mode
*
*  \return      ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
uint16_t adi_adpddrv_SetIdleMode(void)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_ERROR;
  /* Declare variable to store register value */
  uint16_t nRegValue = 0U;
  /* Set to standby Mode */
  nRetCode = adi_adpddrv_RegRead(ADPD4x_REG_OPMODE, &nRegValue);
  /* check the register read status, if succeed then do register write */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    /* Mask the register mode bit */
    nRegValue &= (~BITM_OPMODE_OP_MODE);
    /* set the mode bit as IDLE mode */
    nRegValue |= ADPD400x_OP_IDLE_MODE;
    /* write the prepared value to operation mode register */
    nRetCode = adi_adpddrv_RegWrite(ADPD4x_REG_OPMODE, nRegValue);
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*  \b              adi_adpddrv_GetDevId
*
*  Get the Device ID for setting proper device specific params

*  \return      16-bit Device ID
*
******************************************************************************/
uint16_t adi_adpddrv_GetDevId(void)
{
  /* Return the chip ID to caller function */
  return gAdiAdpdDrvInst.nDevID;
}

/********************************************************************************************/
/* ------------------------- STATIC FUNCTIONS ------------------- */
/********************************************************************************************/

/*!****************************************************************************
*  \b              _adi_adpddrv_SelComMode
*
*  Determines if the ADPD400x is on an SPI or I2C bus

*  \return      ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
******************************************************************************/
static uint16_t _adi_adpddrv_SelComMode(void)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_PARAM_ERROR;
  /* Declare variable to store device ID */
  uint16_t nDevId = 0U;
  /* assign the communication type as I2C */
  gAdiAdpdDrvInst.nAdpd400xCommMode = E_ADI_ADPD_I2C_BUS;
  /* read the device ID register */
  if (adi_adpddrv_RegRead(ADPD4x_REG_CHIP_ID, &nDevId) == ADI_ADPD_DRV_SUCCESS)
  {
    /* check the device ID value is valid */
    if ((nDevId & ADPD400x_ID) == ADPD400x_ID)
    {
      /* Update the trace variable with success code, so the caller will get
      status of their request */
      nRetCode = ADI_ADPD_DRV_SUCCESS;
    }
  }
  /* if the previous device ID read operation failed then try the SPI peripheral */
  if(nRetCode != ADI_ADPD_DRV_SUCCESS)
  {
     /* assign the communication type as SPI */
    gAdiAdpdDrvInst.nAdpd400xCommMode = E_ADI_ADPD_SPI_BUS;
    /* read the device ID register */
    if (adi_adpddrv_RegRead(ADPD4x_REG_CHIP_ID, &nDevId) == ADI_ADPD_DRV_SUCCESS)
    {
      if ((nDevId & ADPD400x_ID) == ADPD400x_ID)
      {
        /* Update the trace variable with success code, so the caller will get
        status of their request */
        nRetCode = ADI_ADPD_DRV_SUCCESS;
      }
    }
  }

  if(nRetCode != ADI_ADPD_DRV_SUCCESS)
  {
    /* assign communication type as none, because the device ID validation got failed */
    gAdiAdpdDrvInst.nAdpd400xCommMode = E_ADI_ADPD_UNKNOWN_BUS;
  }
  else
  {
    /* assign valid device ID value to global variable */
    gAdiAdpdDrvInst.nDevID = nDevId;
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*  \b              _adi_adpddrv_SetInterrupt
*
*  Set FIFO interrupt mode
*
*  \return      ADI_ADPD_DRV_SUCCESS=success, ADI_ADPD_DRV_ERROR=error
*
*****************************************************************************/
static uint16_t _adi_adpddrv_SetInterrupt(void)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare the variable to store register value */
  uint16_t nRegValue = 0U;
  /* read the register value */
  nRetCode = adi_adpddrv_RegRead(ADPD4x_REG_INT_ENABLE_XD, &nRegValue);
  /* if register read succeed, prepare the value to write on INT X register */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    /* Define INTERRUPT_ENABLE macro for the definition of FIFO_INT_ENA macros. */
    nRegValue = (nRegValue & 0x7FFFU) | FIFO_TH_INT_ENA;
    /* write register with prepared value on INT X */
    nRetCode = adi_adpddrv_RegWrite(ADPD4x_REG_INT_ENABLE_XD, nRegValue);  /* Enable INTX */
  }
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    /* For now, set INTY as well. Check later if this is required. */
    nRetCode = adi_adpddrv_RegRead(ADPD4x_REG_INT_ENABLE_YD, &nRegValue);
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /*  Define INTERRUPT_ENABLE macro for the definition of FIFO_INT_ENA macros. */
      /* if register read succeed, prepare the value to write on INT X register */
      nRegValue = (nRegValue & 0x9FFFU) | FIFO_UF_INT_ENA | FIFO_OF_INT_ENA;
      /* write register with prepared value on INT Y */
      nRetCode = adi_adpddrv_RegWrite(ADPD4x_REG_INT_ENABLE_YD, nRegValue);  /* Enable INTY */
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}
/*!****************************************************************************
*  \b              _adi_adpddrv_CheckFifoOvFl
*
*  Check the Fifo Level if the size has exceeded the Max Fifo Depth
*
*  \return       None
*
*****************************************************************************/
static void _adi_adpddrv_CheckFifoOvFl(void)
{
  /* check the connected device based on device ID check fifo overflow count */
  if(gAdiAdpdDrvInst.nDevID == ADPD400x_ID)
  {
    if (gAdiAdpdDrvInst.nFifoLevel >= ADPD400x_FIFO_SIZE)
    {
      gAdiAdpdDrvInst.nOverFlowCnt++;
    }
  }
  else
  {
    if (gAdiAdpdDrvInst.nFifoLevel >= ADPA410x_FIFO_SIZE)
    {
      gAdiAdpdDrvInst.nOverFlowCnt++;
    }
  }
}
/**@}*/ /* end of group ADPD Driver */
