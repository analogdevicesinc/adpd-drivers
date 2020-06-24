/**
****************************************************************************
* @file         adi_adpd_slotops_helper.c
* @author       ADI
* @version      V0.1
* @date         15-June-2020
* @brief        Reference design device driver to access ADI ADPD400x chip.
****************************************************************************
* @attention
*******************************************************************************
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

/**
****************************************************************************
* ! \addtogroup ADPD_SlotOps
* @{
*/
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "adi_adpd_reg.h"
#include "adi_adpd_driver.h"
#include "adi_adpd_ssm.h"

/*----------------------------- Defines --------------------------------------*/
#define _USE_LCM_AS_WATERMARK_    (1U)     /*!< Set this macro as '1' if want to set FIFO threshold as calculated LCM samples */
#define IMPULSE_MODE              (3U)     /*!< Impulse mode Macro value */
#define IMPULSE_DATASIZE          (2U)     /*!< Data size for the Impulse is always a word (2 byte) */
#define MULTIPLY_FACTOR           (0x20U)  /*!< Define macro for channel 2 enabled slots */
/*------------------------- Public Variables ---------------------------------*/

/*-------------------------- Private Variables -------------------------------*/
tAdiAdpdSSmInst *goAdiAdpdSSmInst; /*!< Instance pointer variable to be used for driver Instance access */

/*--------------------- Private Function Prototypes --------------------------*/
static uint32_t _adi_adpdssm_gcdofnumbers(uint32_t val1, uint32_t val2);
static uint32_t _adi_adpdssm_lcmofnumbers(uint32_t nPar1, uint16_t nPar2);
static uint16_t _adi_adpdssm_slotApplyPrevSetting(uint8_t nSlotNum);
static uint16_t _adi_adpdssm_slotSaveCurrSetting(uint8_t nSlotNum);
static uint16_t _adi_adpdssm_slotApplySkipSetting(uint8_t nSlotNum);
static uint16_t _adi_adpdssm_getFifoLevel(uint16_t *pFifoSz);
static void _adi_adpdssm_CalculateSamplSz(uint32_t nSequenceNumber, uint16_t *pTemp, uint8_t *pSlotIndex,
                                          uint16_t *pSampleSize);
static void _adi_adpdssm_CalculateMaxSamplSz(uint16_t nTotalSampleSize, uint32_t nLcm,
                                             uint8_t *pMaxSz, uint16_t *pSampleSize);
static uint8_t _adi_adpdssm_CalSampSzCurrPattern(uint32_t nSequenceNumber, uint16_t *pSamplSz,
                                              tAdiAdpdFifoPattern *pAdpdDataPattern);
static uint16_t _adi_adpdssm_getSlotSzImpulseMode(uint16_t nSlotId);
static uint16_t _adi_adpdssm_CheckParamsForSetSlotData(uint16_t nSlotId);
static uint16_t _adi_adpdssm_CheckParamsForGetSlotData(uint16_t nSlotId);
static uint16_t _adi_adpdssm_CheckSubSampleStatus(uint8_t *pFlag);
static uint16_t adi_adpdssm_FrequencyRatioStatus(uint16_t nSampleSeq, uint16_t nSampleFreq);
/*!****************************************************************************
*
*  \b              adi_adpdssm_slotinit
*
*  Initialize the slot instance values to default values before a config is
   applied.
*
*  \param[in] pAdpdInstance: Pointer variable to dereference the application
*                              layer driver instance
*  \return        ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
*
******************************************************************************/
uint16_t adi_adpdssm_slotinit(tAdiAdpdSSmInst *pAdpdInstance)
{
  uint8_t nSlotIndex;
  /* Declare variable to track the status of routine */
  uint16_t nRet = ADI_ADPD_SSM_SUCCESS;
  /* Assign the adpd instance object in helper file adpd instance pointer */
  goAdiAdpdSSmInst = pAdpdInstance;
  goAdiAdpdSSmInst->oAdpdSlotInst.nTotalSlotSz = 0U;
  goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot = 0U;
  for (nSlotIndex = 0U; nSlotIndex < SLOT_NUM; nSlotIndex++)  {
    goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nNumChEn = 1U;
    goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nSlotFormat = 0x03U;
    goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nSlotSampRatio = 1U;
    goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nDecimation = 1U;
    goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nIsActive = 1U;
    nRet = _adi_adpdssm_slotSaveCurrSetting(nSlotIndex);
  }
  /* need to handle it for worst case so set as 1.*/
  goAdiAdpdSSmInst->oAdpdSlotInst.nAdpdFifoWaterMark = 1U;
  goAdiAdpdSSmInst->oAdpdSlotInst.nLcmValue = 1U;
  /* Return routine status to caller function */
  return nRet;
}

/*!****************************************************************************
*
*  \b              adi_adpdssm_setOperationMode
*  Set Adpd400x operating mode, clear FIFO if needed
*
*  \param[in]  nOpMode 8-bit operating mode
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_setOperationMode(uint8_t nOpMode) {
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  uint16_t nSampleSize = 0U, nFifoLevel = 0U, nRegValue = 0U;
  uint16_t nDevID = ADPD410x_ID;

  if (nOpMode == E_ADI_ADPD_MODE_IDLE) {
    /* Set to standby Mode */
    adi_adpddrv_RegRead(ADPD4x_REG_OPMODE, &nRegValue);
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
    goAdiAdpdSSmInst->oAdpdSlotInst.nTotalSlotSz = 0U;
    goAdiAdpdSSmInst->oAdpdSlotInst.nOpMode = E_ADI_ADPD_MODE_IDLE;
  }
  else if (nOpMode == E_ADI_ADPD_MODE_SAMPLE)
  {
    nRetCode = adi_adpdssm_getSlotInfo();
    goAdiAdpdSSmInst->oAdpdSlotInst.nReadSequence = 1U;
    goAdiAdpdSSmInst->oAdpdSlotInst.nInterruptSequence = 1U;
    goAdiAdpdSSmInst->oAdpdSlotInst.nWriteSequence = 1U;
    nRetCode = _adi_adpdssm_getFifoLevel(&nSampleSize);

    nDevID = goAdiAdpdSSmInst->oAdpdSlotInst.nDevID;
    if(nDevID == ADPD400x_ID)
    {
      nFifoLevel = ADPD400x_FIFO_SIZE;
    }
    else
    {
      nFifoLevel = ADPA410x_FIFO_SIZE;
    }

    if((nSampleSize > nFifoLevel) || (nSampleSize == 0U)) {
      nRetCode |= ADI_ADPD_SSM_SAMPSZ_ERROR;
    } else {
      nRetCode |= adi_adpddrv_RegWrite(ADPD4x_REG_FIFO_CTL,  (nSampleSize - 1U) & 0x7FFU);
    }

    nRetCode |= adi_adpddrv_RegWrite(ADPD4x_REG_INT_STATUS_FIFO, 0x8000U);

    /* set GO */
    nRegValue = goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot << BITP_OPMODE_TIMESLOT_EN;
    nRegValue |= ADPD400x_OP_RUN_MODE;
    nRetCode |= adi_adpddrv_RegWrite(ADPD4x_REG_OPMODE, nRegValue);
    goAdiAdpdSSmInst->oAdpdSlotInst.nOpMode = E_ADI_ADPD_MODE_SAMPLE;
  }
  else
  {
    /* Update the trace variable with failure code, so the caller will get
    status of their request */
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpdssm_GetOperationMode
*  Get Adpd400x operating mode
*
*  \param[out]  *pOpMode 0 - E_ADI_ADPD_MODE_IDLE, 1 - E_ADI_ADPD_MODE_SAMPLE
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_GetOperationMode(uint8_t *pOpMode){
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;

  *pOpMode = goAdiAdpdSSmInst->oAdpdSlotInst.nOpMode;
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpdssm_slotSetActive
*  Set a slot in sleep/active mode
*  This method sets the specified time-slot into sleep mode
*
*  \param[in]   nSlotNum: SlotA-L, starts from #0
*
*  \param[in]   nActive: 0 = sleep, 1 = awake
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_slotSetActive(uint8_t nSlotNum, uint8_t nActive)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  if(goAdiAdpdSSmInst == NULL)
  {
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }
  else
  {
    if (nActive == 0U)
    {    /* Put a slot to Sleep */
      _adi_adpdssm_slotSaveCurrSetting(nSlotNum);
      _adi_adpdssm_slotApplySkipSetting(nSlotNum);
    }
    else
    {    /* Set a slot awake */
      _adi_adpdssm_slotApplyPrevSetting(nSlotNum);
    }
    goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotNum].nIsActive = nActive;
    goAdiAdpdSSmInst->oAdpdSlotInst.nTotalSlotSz = 0U;          /* reset the sum size. Indicate a slot change */
  }
  /* Return routine status to caller function */
  return nRetCode;
}


/*!****************************************************************************
*
*  \b              adi_adpdssm_getFifoLvl
*  Get the value of Fifo depth to expect data availble in FIFO
*
*  \param[out]  pnValue: Pointer to which value has to be read into
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_getFifoLvl(uint16_t *pnValue)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  uint16_t nStatData;

  if(pnValue == 0U)
  {
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }
  else
  {
    nRetCode = adi_adpddrv_RegRead(ADPD4x_REG_INT_STATUS_FIFO, &nStatData);
    goAdiAdpdSSmInst->oAdpdSlotInst.nFifoLevel = nStatData & 0x7FFU;
    *pnValue = goAdiAdpdSSmInst->oAdpdSlotInst.nFifoLevel;
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpdssm_SetSystemDataRate
*
*  Set the system frequency value
*
*  \param[in]    nSystemFreq: System Frequency Value to be set
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_SetSystemDataRate(uint32_t nSystemFreq)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to assign register value */
  uint16_t nRegValue[3U] = {0U, 0U, 0U};
  if(goAdiAdpdSSmInst == 0U || nSystemFreq == 0U)
  {
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }
  else
  {
    nRegValue[0U] = ADPD4x_REG_TS_FREQ;
    nRegValue[1U] = (uint16_t) nSystemFreq;
    nRegValue[2U] = (uint16_t) nSystemFreq >> 16U;
    nRetCode = adi_adpddrv_Multiple_RegWrite(3U, &nRegValue[0]);
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpdssm_GetSystemDataRate
*
*  Get the system frequency value
*
*  \param[out]    pSystemFreq: Pointer to which value has to be read into
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_GetSystemDataRate(uint32_t *pSystemFreq)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;

  if(goAdiAdpdSSmInst == 0U)
  {
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }
  else
  {
    nRetCode = adi_adpddrv_RegRead32B(ADPD4x_REG_TS_FREQ, pSystemFreq);
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_SetLedCurrent
*  Set the LED current level (pulse peak value)
*
*  \param[in]    nUId:   to specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    nLed:   to specify led number to access
*                         1 --> E_ADI_ADPD_LED1A
*                         2 --> E_ADI_ADPD_LED1B
*                         3 --> E_ADI_ADPD_LED2A
*                         4 --> E_ADI_ADPD_LED2B
*                         5 --> E_ADI_ADPD_LED3A
*                         6 --> E_ADI_ADPD_LED3B
*                         7 --> E_ADI_ADPD_LED4A
*                         8 --> E_ADI_ADPD_LED4B
*
*  \param[in]    nCurrent:   current level value
*                         0 --> disable
*                         1 --> 3mA
*                         0x7f --> 200mA
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_SetLedCurrent(uint16_t nUId, ADI_ADPD_LEDID nLed, uint16_t nCurrent)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for Led current */
  uint16_t nMask = 0U;
  /* Declare variable to hold Current Bit position */
  uint16_t nCurrentBitPos = 0U;
  /* Declare variable to hold Drive Bit position */
  uint16_t nDriveBitPos = 0U;
  /* Declare variable to hold Driver select value */
  uint16_t nDriveSide = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForSetSlotData(nSlot);

  /* Check the requested Led Number is valid, otherwise return error to caller function */
  if ((nLed < E_ADI_ADPD_LED1A) || (nLed > E_ADI_ADPD_LED4B))
  {
    /* Update the trace variable with failure code, so the caller will get
    status of their request	*/
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }
  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_LED_POW12 + (nSlot * MULTIPLY_FACTOR);
    /* Increment the Register Address if LED3 or LED4 selected */
    if(nLed > E_ADI_ADPD_LED2B) {
      /* Change the register address if user requested LED3/4 */
      nRegisterAddress = nRegisterAddress + 1U;
    }
    /* Read value from Led current register */
        nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);

    /* If register read succeed then do the register write with given current value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS) {
      /* Find Masking and Bit field position from given Led number */
      if((nLed == E_ADI_ADPD_LED1A) || (nLed == E_ADI_ADPD_LED1B) || (nLed == E_ADI_ADPD_LED3A) || (nLed == E_ADI_ADPD_LED3B)){
        /* Get value to Mask register value to assign requested value on it */
        nMask = (uint16_t)(~(BITMOFFSET_LED_POW12_A_LED_CURRENT1 | BITMOFFSET_LED_POW12_A_LED_DRIVESIDE1));
        /* Get Current value position in register */
        nCurrentBitPos = BITPOFFSET_LED_POW12_A_LED_CURRENT1;
        /* Get Driver position in register */
        nDriveBitPos = BITPOFFSET_LED_POW12_A_LED_DRIVESIDE1;
      } else {
        /* Get value to Mask register value to assign requested value on it */
        nMask = (uint16_t)(~(BITMOFFSET_LED_POW12_A_LED_CURRENT2 | BITMOFFSET_LED_POW12_A_LED_DRIVESIDE2));
        /* Get Current value position in register */
        nCurrentBitPos = BITPOFFSET_LED_POW12_A_LED_CURRENT2;
        /* Get Driver position in register */
        nDriveBitPos = BITPOFFSET_LED_POW12_A_LED_DRIVESIDE2;
      }
      /* Check requested Led is LEDA or LEDB */
      if((nLed % 2U) != 0U) {
        /* Set value to select LEDA */
        nDriveSide = 0U;
      } else {
        /* Set value to select LEDB */
        nDriveSide = 1U;
      }
      /* Prepare the value to write in LED register */
      nRegisterValue = ((uint16_t)((uint16_t)(nRegisterValue & nMask) | (uint16_t)(nCurrent << nCurrentBitPos)) | (uint16_t)(nDriveSide << nDriveBitPos));
      /* Write value to Led register */
      nRetCode = adi_adpddrv_RegWrite(nRegisterAddress, nRegisterValue);
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_GetLedCurrent
*  Set the LED current level (pulse peak value)
*
*  \param[in]    nUId:   to specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    nLed:   to specify led number to access
*                         1 --> E_ADI_ADPD_LED1A
*                         2 --> E_ADI_ADPD_LED1B
*                         3 --> E_ADI_ADPD_LED2A
*                         4 --> E_ADI_ADPD_LED2B
*                         5 --> E_ADI_ADPD_LED3A
*                         6 --> E_ADI_ADPD_LED3B
*                         7 --> E_ADI_ADPD_LED4A
*                         8 --> E_ADI_ADPD_LED4B
*
*  \param[out]    *pLedCurrent:   Pointer to which the value is read into
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_GetLedCurrent(uint16_t nUId, ADI_ADPD_LEDID nLed, uint16_t *pLedCurrent)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for Led current */
  uint16_t nMask = 0U;
  /* Declare variable to hold Current Bit position */
  uint16_t nCurrentBitPos = 0U;
  /* Extract slot information from UID value *//* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;
  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForGetSlotData(nSlot);

  /* Check the requested Led Number is valid, otherwise return error to caller function */
  if ((nLed < E_ADI_ADPD_LED1A) || (nLed > E_ADI_ADPD_LED4B))
  {
    /* Update the trace variable with failure code, so the caller will get
    status of their request	*/
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }

  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_LED_POW12 + ((uint16_t)nSlot * MULTIPLY_FACTOR);
    /* Increment the Register Address if LED3 or LED4 selected */
    if(nLed > E_ADI_ADPD_LED2B)
    {
      /* Change the register address if user requested LED3/4 */
      nRegisterAddress = nRegisterAddress + 1U;
    }
    /* Read value from Led current register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given current value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Find Masking and Bit field position from given Led number */
      if((nLed == E_ADI_ADPD_LED1A) || (nLed == E_ADI_ADPD_LED1B) || (nLed == E_ADI_ADPD_LED3A) || (nLed == E_ADI_ADPD_LED3B))
      {
        /* Get value to Mask register value to assign requested value on it */
        nMask = (BITMOFFSET_LED_POW12_A_LED_CURRENT1);
        /* Get Current value position in register */
        nCurrentBitPos = BITPOFFSET_LED_POW12_A_LED_CURRENT1;
      }
      else
      {
        /* Get value to Mask register value to assign requested value on it */
        nMask = (BITMOFFSET_LED_POW12_A_LED_CURRENT2);
        /* Get Current value position in register */
        nCurrentBitPos = BITPOFFSET_LED_POW12_A_LED_CURRENT2;
      }
      /* Get the value from LED register and copy to output parameter */
      *pLedCurrent = ((nRegisterValue & nMask)  >> nCurrentBitPos);
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_GetActiveLed
*  Get the LED Driver setting for LED's (pulse peak value)
*
*  \param[in]    nUId:   to specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    nLed:   to specify led number to access
*                         1 --> E_ADI_ADPD_LED1A
*                         2 --> E_ADI_ADPD_LED1B
*                         3 --> E_ADI_ADPD_LED2A
*                         4 --> E_ADI_ADPD_LED2B
*                         5 --> E_ADI_ADPD_LED3A
*                         6 --> E_ADI_ADPD_LED3B
*                         7 --> E_ADI_ADPD_LED4A
*                         8 --> E_ADI_ADPD_LED4B
*
*  \param[out]    *pLedDrive:   Pointer to which the value is read into
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_GetActiveLed(uint16_t nUId, ADI_ADPD_LEDID nLed, uint16_t *pLedDrive)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for Led current */
  uint16_t nMask = 0U;
  /* Declare variable to hold Current Bit position */
  uint16_t nCurrentBitPos = 0U;
  /* Extract slot information from UID value *//* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForGetSlotData(nSlot);

  /* Check the requested Led Number is valid, otherwise return error to caller function */
  if ((nLed < E_ADI_ADPD_LED1A) || (nLed > E_ADI_ADPD_LED4B))
  {
    /* Update the trace variable with failure code, so the caller will get
    status of their request	*/
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }

  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_LED_POW12 + ((uint16_t)nSlot * MULTIPLY_FACTOR);
    /* Increment the Register Address if LED3 or LED4 selected */
    if(nLed > E_ADI_ADPD_LED2B)
    {
      /* Change the register address if user requested LED3/4 */
      nRegisterAddress = nRegisterAddress + 1U;
    }
    /* Read value from Led current register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given current value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Find Masking and Bit field position from given Led number */
      if((nLed == E_ADI_ADPD_LED1A) || (nLed == E_ADI_ADPD_LED1B) || (nLed == E_ADI_ADPD_LED3A) || (nLed == E_ADI_ADPD_LED3B))
      {
        /* Get value to Mask register value to assign requested value on it */
        nMask = (BITMOFFSET_LED_POW12_A_LED_DRIVESIDE1);
        /* Get Current value position in register */
        nCurrentBitPos = BITPOFFSET_LED_POW12_A_LED_DRIVESIDE1;
      }
      else
      {
        /* Get value to Mask register value to assign requested value on it */
        nMask = (BITMOFFSET_LED_POW12_A_LED_DRIVESIDE2);
        /* Get Current value position in register */
        nCurrentBitPos = BITPOFFSET_LED_POW12_A_LED_DRIVESIDE2;
      }
      /* Get the value from LED register and copy to output parameter */
      *pLedDrive = ((nRegisterValue & nMask)  >> nCurrentBitPos);
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_SetTiaGain
*  Set the TIA gain level
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    nChannel:   specify the channel number
*                         0x01U --> E_ADI_ADPD_CHANNEL_1
*                         0x02U --> E_ADI_ADPD_CHANNEL_2
*                         0x03U --> E_ADI_ADPD_CHANNEL_ALL
*
*  \param[out]    oTiaGain:   Pointer to which the value to write in register
*                         0x00U --> E_ADI_ADPD_TIA_GAIN_200KOHM
*                         0x01U --> E_ADI_ADPD_TIA_GAIN_100KOHM
*                         0x02U --> E_ADI_ADPD_TIA_GAIN_50KOHM
*                         0x03U --> E_ADI_ADPD_TIA_GAIN_25KOHM
*                         0x04U --> E_ADI_ADPD_TIA_GAIN_12P5KOHM
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_SetTiaGain(uint16_t nUId, ADI_ADPD_CHANNEL_NUM nChannel, tAdiAdpdGainInst oTiaGain)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for Tia Gain */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForSetSlotData(nSlot);

  /* Check the requested Channel is valid */
  if((nChannel < E_ADI_ADPD_CHANNEL_1) || (nChannel > E_ADI_ADPD_CHANNEL_ALL))
  {
    /* Update the trace variable with failure code, so the caller will get
    status of their request	*/
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }

  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_AFE_TRIM + ((uint16_t)nSlot * MULTIPLY_FACTOR);
    /* Read value from Tia Gain register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Do the condition check to find out user requested Tia Gain changes */
      if(nChannel == E_ADI_ADPD_CHANNEL_1)
      {
        /* Get value to Mask register value to assign requested value on it */
        nMask = (uint16_t)(~(BITMOFFSET_AFE_TRIM_A_TIA_GAIN_CH1));
        /* Prepare the value to write in Tia register */
        nRegisterValue = ((uint16_t)(nRegisterValue & nMask) | (uint16_t)((uint16_t)oTiaGain.TiaGainCh1 << BITPOFFSET_AFE_TRIM_A_TIA_GAIN_CH1));
      }
      else if (nChannel == E_ADI_ADPD_CHANNEL_2)
      {
        /* Get value to Mask register value to assign requested value on it */
        nMask = (uint16_t)(~(BITMOFFSET_AFE_TRIM_A_TIA_GAIN_CH2));
        /* Prepare the value to write in Tia register */
        nRegisterValue = ((uint16_t)(nRegisterValue & nMask) | (uint16_t)((uint16_t)oTiaGain.TiaGainCh2 << BITPOFFSET_AFE_TRIM_A_TIA_GAIN_CH2));
      }
      else
      {
        /* Get value to Mask register value to assign requested value on it */
        nMask = (uint16_t)(~(BITMOFFSET_AFE_TRIM_A_TIA_GAIN_CH1 | BITMOFFSET_AFE_TRIM_A_TIA_GAIN_CH2));
        /* Prepare the value to write in Tia register */
        nRegisterValue = ((uint16_t)(nRegisterValue & nMask) | (uint16_t)((uint16_t)oTiaGain.TiaGainCh1 << BITPOFFSET_AFE_TRIM_A_TIA_GAIN_CH1));
        nRegisterValue = ((nRegisterValue) | (uint16_t)((uint16_t)oTiaGain.TiaGainCh2 << BITPOFFSET_AFE_TRIM_A_TIA_GAIN_CH2));
      }
      /* Write value to Tia Gain register */
      nRetCode = adi_adpddrv_RegWrite(nRegisterAddress, nRegisterValue);
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_GetTiaGain
*  Get the TIA gain level
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    nChannel:   specify the channel number
*                         0x01U --> E_ADI_ADPD_CHANNEL_1
*                         0x02U --> E_ADI_ADPD_CHANNEL_2
*                         0x03U --> E_ADI_ADPD_CHANNEL_ALL
*
*  \param[out]    *poTiaGain:   Pointer to which the value is read into
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_GetTiaGain(uint16_t nUId, ADI_ADPD_CHANNEL_NUM nChannel, tAdiAdpdGainInst *poTiaGain)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for Tia Gain */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForGetSlotData(nSlot);

  /* Check the requested Channel is valid */
  if((nChannel < E_ADI_ADPD_CHANNEL_1) || (nChannel> E_ADI_ADPD_CHANNEL_ALL))
  {
    /* Update the trace variable with failure code, so the caller will get
    status of their request	*/
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }

  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_AFE_TRIM + ((uint16_t)nSlot * MULTIPLY_FACTOR);
    /* Read value from Tia Gain register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the value extraction with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Do the condition check to find out user requested Tia Gain changes */
      if(nChannel == E_ADI_ADPD_CHANNEL_1)
      {
        /* Get value to Mask register value to extract requested value on it */
        nMask = (BITMOFFSET_AFE_TRIM_A_TIA_GAIN_CH1);
        /* Get the value from Tia register */
        poTiaGain->TiaGainCh1 = (ADI_ADPD_TIA_GAIN)((nRegisterValue & nMask) >> BITPOFFSET_AFE_TRIM_A_TIA_GAIN_CH1);
      }
      else if (nChannel == E_ADI_ADPD_CHANNEL_2)
      {
        /* Get value to Mask register value to extract requested value on it */
        nMask = (BITMOFFSET_AFE_TRIM_A_TIA_GAIN_CH2);
        /* Get the value from Tia register */
        poTiaGain->TiaGainCh2 = (ADI_ADPD_TIA_GAIN)((nRegisterValue & nMask) >> BITPOFFSET_AFE_TRIM_A_TIA_GAIN_CH2);
      }
      else
      {
        /* Get value to Mask register value to extract requested value on it */
        nMask = (BITMOFFSET_AFE_TRIM_A_TIA_GAIN_CH1);
        /* Get the value from Tia register */
        poTiaGain->TiaGainCh1 = (ADI_ADPD_TIA_GAIN)((nRegisterValue & nMask) >> BITPOFFSET_AFE_TRIM_A_TIA_GAIN_CH1);
        /* Get value to Mask register value to extract requested value on it */
        nMask = (BITMOFFSET_AFE_TRIM_A_TIA_GAIN_CH2);
        /* Get the value from Tia register */
        poTiaGain->TiaGainCh2 = (ADI_ADPD_TIA_GAIN)((nRegisterValue & nMask) >> BITPOFFSET_AFE_TRIM_A_TIA_GAIN_CH2);
      }
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
* \b    adi_adpdssm_SetChannelOffset
* Set the channel offset level
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    nChannel:   specify the channel number
*                         0x01U --> E_ADI_ADPD_CHANNEL_1
*                         0x02U --> E_ADI_ADPD_CHANNEL_2
*                         0x03U --> E_ADI_ADPD_CHANNEL_ALL
*
*  \param[in]    nAdcOffset:   offset value to write in to offset register
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_SetChannelOffset(uint16_t nUId, ADI_ADPD_CHANNEL_NUM nChannel, uint16_t nAdcOffset)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for channel offset */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForSetSlotData(nSlot);

  /* Check the requested Channel is valid */
  if((nChannel < E_ADI_ADPD_CHANNEL_1) || (nChannel > E_ADI_ADPD_CHANNEL_2))
  {
    /* Update the trace variable with failure code, so the caller will get
    status of their request	*/
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }

  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_ADC_OFF1 + ((uint16_t)nSlot * MULTIPLY_FACTOR);
    if(nChannel == E_ADI_ADPD_CHANNEL_2)
    {
      /* Change the register address if user requested LED3/4 */
      nRegisterAddress = nRegisterAddress + 1U;
    }
    /* Read value from channel offset register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Get value to Mask register value to assign requested value on it */
      nMask = (uint16_t)(~(BITMOFFSET_ADC_OFF1_A_CH1_ADC_ADJUST));
      /* Prepare the value to write in adc offset register */
      nRegisterValue = ((uint16_t)(nRegisterValue & nMask) | (uint16_t)((uint16_t)nAdcOffset << BITPOFFSET_ADC_OFF1_A_CH1_ADC_ADJUST));
      /* Write value to channel offset */
      nRetCode = adi_adpddrv_RegWrite(nRegisterAddress, nRegisterValue);
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}
/*!****************************************************************************
*
*  \b    adi_adpdssm_GetChannelOffset
*  Get the channel offset level
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    nChannel:   specify the channel number
*                         0x01U --> E_ADI_ADPD_CHANNEL_1
*                         0x02U --> E_ADI_ADPD_CHANNEL_2
*                         0x03U --> E_ADI_ADPD_CHANNEL_ALL
*
*  \param[out]    *nAdcOffset:   Pointer to which the value is read into
*
*  \return	ADI_ADPD_SSM_SUCCESS=success,
                ADI_ADPD_SSM_ERROR=SSM parameter error
                ADI_ADPD_DRV_ERROR=Driver Read error
******************************************************************************/
uint16_t adi_adpdssm_GetChannelOffset(uint16_t nUId, ADI_ADPD_CHANNEL_NUM nChannel, uint16_t *nAdcOffset)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for channel offset */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForGetSlotData(nSlot);

  /* Check the requested Channel is valid */
  if((nChannel < E_ADI_ADPD_CHANNEL_1) || (nChannel > E_ADI_ADPD_CHANNEL_2))
  {
    /* Update the trace variable with failure code, so the caller will get
    status of their request	*/
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }

  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_ADC_OFF1 + ((uint16_t)nSlot * MULTIPLY_FACTOR);
    if(nChannel == E_ADI_ADPD_CHANNEL_2)
    {
      /* Change the register address if user requested LED3/4 */
      nRegisterAddress = nRegisterAddress + 1U;
    }
    /* Read value from channel offset register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Get value to Mask register value to assign requested value on it */
      nMask = (BITMOFFSET_ADC_OFF1_A_CH1_ADC_ADJUST);
      /* Prepare the value to write in adc offset register */
      nRegisterValue = ((nRegisterValue & nMask) >> BITPOFFSET_ADC_OFF1_A_CH1_ADC_ADJUST);
      /* Get the value from channel offset register and copy to output parameter */
      *nAdcOffset = nRegisterValue;
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_SetDecimation
*  Set the decimation value
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    nDecimation:   decimation value to write in to decimation register
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_SetDecimation(uint16_t nUId, uint16_t nDecimation)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for decimation */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForSetSlotData(nSlot);

  /* Check the requested Channel is valid */
  if(nDecimation > 127U) {
    /* Update the trace variable with failure code, so the caller will get
    status of their request	*/
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }

  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_DECIMATE + ((uint16_t)nSlot * MULTIPLY_FACTOR);

    /* Read value from decimation register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS) {
      /* Get value to Mask register value to assign requested value on it */
      nMask = (uint16_t)(~(BITMOFFSET_DECIMATE_A_DECIMATE_FACTOR));
      /* Prepare the value to write in decimation register */
      nRegisterValue = ((uint16_t)(nRegisterValue & nMask) | (uint16_t)((uint16_t)nDecimation << BITPOFFSET_DECIMATE_A_DECIMATE_FACTOR));
      /* Write value to decimation */
      nRetCode = adi_adpddrv_RegWrite(nRegisterAddress, nRegisterValue);
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}
/*!****************************************************************************
*
*  \b    adi_adpdssm_GetDecimation
*  Get the decimation value
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[out]    *pDecimation:   Pointer to which the value is read into
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_GetDecimation(uint16_t nUId, uint16_t *pDecimation)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for decimation */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForGetSlotData(nSlot);
  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_DECIMATE + ((uint16_t)nSlot * MULTIPLY_FACTOR);

    /* Read value from Decimation register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS) {
      /* Get value to Mask register value to assign requested value on it */
      nMask = (BITMOFFSET_DECIMATE_A_DECIMATE_FACTOR);
      /* Prepare the value to write in decimation register */
      nRegisterValue = ((nRegisterValue & nMask) >> BITPOFFSET_DECIMATE_A_DECIMATE_FACTOR);
      /* Get the value from decimation register and copy to output parameter */
      *pDecimation = nRegisterValue;
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_SetInput
*  Set the input selection register value
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    nInputPD:  Input value to write in to input configuration register
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_SetInput(uint16_t nUId, uint16_t nInputPD)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForSetSlotData(nSlot);
  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_INPUTS + ((uint16_t)nSlot * MULTIPLY_FACTOR);

    /* Read value from input selection register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Prepare the value to write in input selection register */
      nRegisterValue = nInputPD;
      /* Write value to input selection */
      nRetCode = adi_adpddrv_RegWrite(nRegisterAddress, nRegisterValue);
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_GetInput
*  Get the input selection value
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[out]    *pInputPD:   Pointer to which the value is read into
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_GetInput(uint16_t nUId, uint16_t *pInputPD)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForGetSlotData(nSlot);
  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_INPUTS + ((uint16_t)nSlot * MULTIPLY_FACTOR);

    /* Read value from input selection register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS) {
      /* Get the value from input selection register and copy to output parameter */
      *pInputPD = nRegisterValue;
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_SetLedPeriod
*  Set the led pulse period register value
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    nLedPeriod:  Period value to write in to led period register
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_SetLedPeriod(uint16_t nUId, uint16_t nLedPeriod)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for input selection */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForSetSlotData(nSlot);
  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_PERIOD + ((uint16_t)nSlot * MULTIPLY_FACTOR);

    /* Read value from input selection register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Get value to Mask register value to assign requested value on it */
      nMask = (uint16_t)(~(BITMOFFSET_LED_PULSE_A_LED_WIDTH));
      /* Prepare the value to write in adc offset register */
      nRegisterValue = ((uint16_t)(nRegisterValue & nMask) | (uint16_t)((uint16_t)nLedPeriod << BITPOFFSET_LED_PULSE_A_LED_WIDTH));
      /* Write value to input selection */
      nRetCode = adi_adpddrv_RegWrite(nRegisterAddress, nRegisterValue);
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_GetLedPeriod
*  Get the led pulse period register value
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[out]    *pLedPeriod:   Pointer to which the value is read into
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_GetLedPeriod(uint16_t nUId, uint16_t *pLedPeriod)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for Input selection */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForGetSlotData(nSlot);
  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_LED_PULSE + ((uint16_t)nSlot * MULTIPLY_FACTOR);

    /* Read value from input selection register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Get value to Mask register value to assign requested value on it */
      nMask = (BITMOFFSET_LED_PULSE_A_LED_WIDTH);
      /* Prepare the value to write in adc offset register */
      nRegisterValue = ((nRegisterValue & nMask) >> BITPOFFSET_LED_PULSE_A_LED_WIDTH);
	  /* Get the value from input selection register and copy to output parameter */
      *pLedPeriod = nRegisterValue;
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_SetPulseCount
*  Set the pulse/cycle count register value
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    nPulseCount:  pulse/cycle value to write in to count register
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_SetPulseCount(uint16_t nUId, uint16_t nPulseCount)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for input selection */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForSetSlotData(nSlot);

  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_COUNTS + ((uint16_t)nSlot * MULTIPLY_FACTOR);

    /* Read value from input selection register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Get value to Mask register value to assign requested value on it */
      nMask = (uint16_t)(~(BITMOFFSET_COUNTS_A_NUM_REPEAT));
      /* Prepare the value to write in adc offset register */
      nRegisterValue = ((uint16_t)(nRegisterValue & nMask) | (uint16_t)((uint16_t)nPulseCount << BITPOFFSET_COUNTS_A_NUM_REPEAT));
      /* Write value to input selection */
      nRetCode = adi_adpddrv_RegWrite(nRegisterAddress, nRegisterValue);
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_GetPulseCount
*  Get the pulse/cycle count register value
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[out]    *pPulseCount:   Pointer to which the value is read into
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_GetPulseCount(uint16_t nUId, uint16_t *pPulseCount)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for Input selection */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForGetSlotData(nSlot);
  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_COUNTS + ((uint16_t)nSlot * MULTIPLY_FACTOR);

    /* Read value from input selection register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Get value to Mask register value to assign requested value on it */
      nMask = (BITMOFFSET_COUNTS_A_NUM_REPEAT);
      /* Prepare the value to write in adc offset register */
      nRegisterValue = ((nRegisterValue & nMask) >> BITPOFFSET_COUNTS_A_NUM_REPEAT);
      /* Get the value from input selection register and copy to output parameter */
      *pPulseCount = nRegisterValue;
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_SetRin
*  Set the pulse/cycle count register value
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    rIn:      value to write in to register
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_SetRIn(uint16_t nUId, ADI_ADPD_RIN_SELECT rIn)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for input selection */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForSetSlotData(nSlot);

  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_TS_CTRL + ((uint16_t)nSlot * MULTIPLY_FACTOR);

    /* Read value from input selection register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Get value to Mask register value to assign requested value on it */
      nMask = (uint16_t)(~(BITMOFFSET_TS_CTRL_A_INPUT_R_SELECT));
      /* Prepare the value to write in adc offset register */
      nRegisterValue = ((uint16_t)(nRegisterValue & nMask) | (uint16_t)((uint16_t)rIn << BITPOFFSET_TS_CTRL_A_INPUT_R_SELECT));
      /* Write value to input selection */
      nRetCode = adi_adpddrv_RegWrite(nRegisterAddress, nRegisterValue);
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_GetRIn
*  Get the pulse/cycle count register value
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[out]    *prIn:   Pointer to which the value is read into
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_GetRIn(uint16_t nUId, ADI_ADPD_RIN_SELECT *prIn)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for Input selection */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForGetSlotData(nSlot);
  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = REGOFFSET_TS_CTRL + ((uint16_t)nSlot * MULTIPLY_FACTOR);

    /* Read value from input selection register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Get value to Mask register value to assign requested value on it */
      nMask = (BITMOFFSET_TS_CTRL_A_INPUT_R_SELECT);
      /* Prepare the value to write in adc offset register */
      nRegisterValue = ((nRegisterValue & nMask) >> BITPOFFSET_TS_CTRL_A_INPUT_R_SELECT);
      /* Get the value from input selection register and copy to output parameter */
      *prIn = (ADI_ADPD_RIN_SELECT) nRegisterValue;
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_clearInterrupt
*  Clear a primary interrupt
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    whichInterrupt:  Primary interrupt to clear
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_clearInterrupt(uint16_t nUId, ADI_ADPD_PRIMARY_INTERRUPT whichInterrupt)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForSetSlotData(nSlot);

  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
      nRegisterAddress = (uint16_t)whichInterrupt;

      /* Prepare the value to write in adc offset register */
      nRegisterValue = (uint16_t)(1U << nSlot);
      /* Write value to input selection */
      nRetCode = adi_adpddrv_RegWrite(nRegisterAddress, nRegisterValue);
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b    adi_adpdssm_readInterrupt
*  Read a primary interrupt
*
*  \param[in]    nUId:   specify the slot number to access
*                         0x00U --> E_ADI_ADPD_SLOTA
*                         0x01U --> E_ADI_ADPD_SLOTB
*                         0x02U --> E_ADI_ADPD_SLOTC
*                         0x03U --> E_ADI_ADPD_SLOTD
*                         0x04U --> E_ADI_ADPD_SLOTE
*                         0x05U --> E_ADI_ADPD_SLOTF
*                         0x06U --> E_ADI_ADPD_SLOTG
*                         0x07U --> E_ADI_ADPD_SLOTH
*                         0x08U --> E_ADI_ADPD_SLOTI
*                         0x09U --> E_ADI_ADPD_SLOTJ
*                         0x0AU --> E_ADI_ADPD_SLOTK
*                         0x0BU --> E_ADI_ADPD_SLOTL
*
*  \param[in]    whichInterrupt:  Primary interrupt to clear
*  \param[in]    pInt:          Pointer to put answer
*
*  \return	ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_readInterrupt(uint16_t nUId, ADI_ADPD_PRIMARY_INTERRUPT whichInterrupt, uint8_t *pInt)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold slot address*/
  uint16_t nSlot = 0U;
  /* Declare variable to hold register address*/
  uint16_t nRegisterAddress = 0U;
  /* Declare variable to hold register value */
  uint16_t nRegisterValue = 0U;
  /* Declare variable to hold Mask value for Input selection */
  uint16_t nMask = 0U;
  /* Extract slot information from UID value */
  nSlot = nUId & 0x00FFU;

  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForGetSlotData(nSlot);
  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Find the register address from given details */
    nRegisterAddress = (uint16_t)whichInterrupt;

    /* Read value from input selection register */
    nRetCode = adi_adpddrv_RegRead(nRegisterAddress, &nRegisterValue);
    /* If register read succeed then do the register write with given value */
    if(nRetCode == ADI_ADPD_DRV_SUCCESS)
    {
      /* Get value to Mask register value to assign requested value on it */
      nMask = (uint16_t)(1U <<nSlot);
      /* Prepare the value to write in adc offset register */
      if ( (nRegisterValue & nMask) == 0 )  *pInt = 0U;
      else                                  *pInt = 1U;
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}


/*!****************************************************************************
*
*  \b              adi_adpdssm_calculate_lcm
*  Get the LED current level (pulse peak value)
*
*  \return   32-bit LCM value calculated for all enabled slots rates
******************************************************************************/
uint32_t adi_adpdssm_calculate_lcm(void)
{
  uint8_t nIsSameValue = 1U;
  uint32_t nLcmValue = 1U;
  uint32_t nCount = 0U;

  while (nCount <= goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot)
  {
    if((goAdiAdpdSSmInst != NULL) && (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nCount].nIsActive == 1U))
    {
      if ((goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nCount].nDecimation != 0U))
      {
        nLcmValue = _adi_adpdssm_lcmofnumbers(nLcmValue, (uint16_t)goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nCount].nDecimation);
      }
      else
      {
        goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nCount].nDecimation = 1U;
      }
    }
    nCount++;
  }

  if(goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot > 1U)
  {
    _adi_adpdssm_CheckSubSampleStatus(&nIsSameValue);
  }

  if (nIsSameValue == 1U)
  {
    for (uint8_t nIndex = 0U; nIndex <= goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot; nIndex++)
    {
      goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nDecimation = 1U;
    }
    nLcmValue = 1U;
  }

  for (uint8_t nIndex = 0U; nIndex <= goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot; nIndex++)
  {
      goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nSlotSampRatio =
        (uint16_t)(nLcmValue / (goAdiAdpdSSmInst->oAdpdSlotInst.nMaxOutputDataRate/goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nOutputDataRate));
  }
  return nLcmValue;
}

/*!****************************************************************************
*
*  \b              adi_adpdssm_getCurrDatapattern
*  Find the pattern of samples received per iteration in FIFO for different
*  sampling rates across all enabled slots
*
* \param[in]  pSeqNum - SeqNum (iteration count till it reaches the LCM value).
                    This is reset to 1 when it reaches the LCM value
*
* \param[out]  pAdpdDataPattern - Pointer to the current iteration FifoDataPattern
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_getCurrDatapattern(uint32_t *pSeqNum, tAdiAdpdFifoPattern *pAdpdDataPattern)
{
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  uint16_t nSampleSize = 0U;
  uint32_t nSequenceNumber = 0U;
  uint8_t nSlotIndex;
  memset(&pAdpdDataPattern->aSlotPatternInfo, 0, SLOT_NUM);  /*48 -> ASCII value for '0' Char*/

  if((pSeqNum == NULL) || (pAdpdDataPattern == NULL))
  {
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }
  else
  {
    nSequenceNumber = *pSeqNum;
    do
    {
      nSlotIndex = _adi_adpdssm_CalSampSzCurrPattern(nSequenceNumber, &nSampleSize, pAdpdDataPattern);
      pAdpdDataPattern->nSampSz = nSampleSize;
      nSequenceNumber++;

      if(nSequenceNumber > goAdiAdpdSSmInst->oAdpdSlotInst.nLcmValue)
      {
        nSequenceNumber = 1U;
      }
    }while((nSampleSize == 0U) && (nSlotIndex < SLOT_NUM)); /* Check the slot size for given sequence number if it's '0' go and process again for the next sequence number*/


    /* Assign updated sequence number*/
    *pSeqNum = nSequenceNumber;

    /* Check the status using slot size, if it's '0' something went wrong in process*/
    if(nSampleSize != 0U)
    {
      /* Check the fifo status byte value, if it's not zero add count value in sample size varible */
      if(goAdiAdpdSSmInst->oAdpdSlotInst.nFifoStatusByte != 0U)
      {
        /* Add the fifo status byte count with sample bytes count value*/
        pAdpdDataPattern->nSampSz = pAdpdDataPattern->nSampSz + goAdiAdpdSSmInst->oAdpdSlotInst.nFifoStatusByte;
      }
      nRetCode =  ADI_ADPD_SSM_SUCCESS;
    }
    else
    {
      nRetCode =  ADI_ADPD_SSM_PATTERN_ERROR;
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpdssm_getSamplSz
*  Find the sample size for a given sequence
*
*  \param[in]   nNumSampl: Num of samples
*
*  \param[out]  pSeqNum: SeqNum (iteration count till it reaches the LCM value).
                    This is reset to 1 when it reaches the LCM value
*
*  \param[out]  pSampleSz: Sample size of enabled slots
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_getSamplSz(uint8_t nNumSampl, uint32_t *pSeqNum, uint16_t *pSampleSz)
{
  /* Declare the variable to hold sequence number */
  uint32_t nSequenceNumber = 0U;
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare the variable to hold sample size value */
  uint16_t nSampleSize = 0U;
  /* Declare the temporary variable to hold data size for condition checks */
  uint16_t nTemp = 0U;
  /* Declare the variable to hold sample index value */
  uint16_t nSampleIndex = 0U;
  /* Declare the variable to hold slot index value */
  uint8_t nSlotIndex = 0U;

  /* Check the slot configuration value and given input parameter value is valid */
  if((pSeqNum == NULL) || (nNumSampl == 0U) ||
     (goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot >= SLOT_NUM) ||
       (pSampleSz == NULL))
  {
    /* Update the trace variable with failure code, so the caller will get
    status of their request */
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }
  else
  {
    /* Assign sequence number value from input parameter to local sequence variable */
    nSequenceNumber = *pSeqNum;
    /* Form a loop to run given number of samples */
    for (nSampleIndex = 0U; nSampleIndex < nNumSampl; nSampleIndex++)
    {
      /* Set temporary variable value to '0', to calculate new sample size */
      nTemp = 0U;
      /* Get_Sample_Size */
      do{
        _adi_adpdssm_CalculateSamplSz(nSequenceNumber, &nTemp, &nSlotIndex, &nSampleSize);
        /* Increment the sequence number */
        nSequenceNumber++;
        /* Check the sequence number value is not exceeded above LCM value */
        if (nSequenceNumber > goAdiAdpdSSmInst->oAdpdSlotInst.nLcmValue)
        {
          /* Assign the initial value to sequence number, becuase it's reached the maximum sequence value */
          nSequenceNumber = 1U;
        }
      }while((nTemp == 0U) && (nSlotIndex < 12U));
      /* check the fifo status byte value is not '0', if it's not equal to '0'
      add fifo byte count in to sample byte count variable */
      if ((nTemp != 0U) && (goAdiAdpdSSmInst->oAdpdSlotInst.nFifoStatusByte != 0U))
      {
        /* Update the sample size value with Fifo status byte count */
        nSampleSize = nSampleSize + goAdiAdpdSSmInst->oAdpdSlotInst.nFifoStatusByte;
      }
    }
    /* Assign updated sequence number */
    *pSeqNum = nSequenceNumber;
    /* Return the sample size value to caller function */
    *pSampleSz = nSampleSize;
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpdssm_getMaxSamplSz
*  Find the sample size for a given sequence
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_getMaxSamplSz(void) {
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare the variable to hold sample count value */
  uint16_t nSampleCount = 1U;
  /* Declare the variable to hold total sample size */
  uint16_t nTotalSampleSize = 0U;
  /* Declare the variable to hold sample size value */
  uint16_t nSampleSize = 0U;
  /* Declare the variable to hold flag status which is used to identify total sample size reached maximum */
  uint8_t nMaximumSizeFlag = 0U;
  /* Check the slot configuration parameter value */
  if((goAdiAdpdSSmInst->oAdpdSlotInst.nLcmValue == 0U) || (goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot >= SLOT_NUM))
  {
    /* Update the trace variable with failure code, so the caller will get
    status of their request */
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }
  else
  {
    /* Form a loop to identify how many samples can store in fifo buffer based on enabled slots
    In a for loop consider loop control variable and condition check alone, increment step put inside the loop with condition check */
    do{
      /* Form a loop to run until it reaches LCM value, do the condition check with count and sample size flag */
      for (uint32_t nLcm = 1U; ((nLcm <= goAdiAdpdSSmInst->oAdpdSlotInst.nLcmValue) && (nMaximumSizeFlag == 0U)); nLcm++)
      {
        _adi_adpdssm_CalculateMaxSamplSz(nTotalSampleSize, nLcm, &nMaximumSizeFlag, &nSampleSize);
      }
      /* Check the calculated size and total sample size is not exceeding fifo buffer size */
      if((nTotalSampleSize + nSampleSize) < MAX_SAMPLES_IN_FIFO)
      {
        /* Add the calculated size to total sample size variable */
        nTotalSampleSize = nTotalSampleSize + nSampleSize;
        /* Set the sample size value to '0' to calculate sample size for next sequence */
        nSampleSize = 0U;
        /* Update the sample count variable with successful size calculation*/
        nSampleCount = nSampleCount + 1U;
      }
      else
      {
        /* Check the sample count variable to update last faliure routine */
        if(nSampleCount > 1U)
        {
          /* Decrement '1' total sample count value, because last run on sample
          count loop value need to be decrement to match successful calculation alone */
          nSampleCount = nSampleCount - 1U;
        }
      }
    }while(nMaximumSizeFlag == 0U);
    /* Calculate the Fifo water mark value based on Lcm and sample count value */
#if (_USE_LCM_AS_WATERMARK_ == 1U)
    goAdiAdpdSSmInst->oAdpdSlotInst.nAdpdFifoWaterMark = (uint8_t)(goAdiAdpdSSmInst->oAdpdSlotInst.nLcmValue);
#else
    goAdiAdpdSSmInst->oAdpdSlotInst.nAdpdFifoWaterMark = (uint8_t)(goAdiAdpdSSmInst->oAdpdSlotInst.nLcmValue * (nSampleCount));
#endif
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpd_GetSlotRegAddr
*  Calculate the final register to be used using slot number and register offset
*  address.
*
*  \param[in]   nSlot: slot num for which Address offset is calculated
*
*  \param[in]   nOffset: Address offset for the register
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpd_GetSlotRegAddr(uint8_t nSlot, uint16_t nOffset)
{
  return (uint16_t)((uint16_t)((uint16_t)nSlot * (uint16_t)0x20U) + nOffset + (uint16_t)ADI_ADPD_SLOT_REG_BEGIN_ADDR);
}

/*!****************************************************************************
*
*  \b              adi_adpdssm_getSlotInfo
*  Get the information of all the slots such as slot format, highestslotnum enables,
   total slot size, decimation factor, whether a slot is active or bypassed, etc.
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_getSlotInfo(void)
{
  uint16_t nRetVal = ADI_ADPD_SSM_SUCCESS;
  /* Declare the variable to hold register value */
  uint16_t nRegValue = 0U;
  /* Variable to store CTRL Reg Value */
  uint16_t nCtrlRegValue = 0U;
  /* Declare the variable to hold slot byte status */
  uint8_t nSlotBytes = 0U;

  if(goAdiAdpdSSmInst == 0U)
  {
    nRetVal = ADI_ADPD_SSM_PARAM_ERROR;
  }
  else
  {
    /* Reset Total Bytes variable */
    goAdiAdpdSSmInst->oAdpdSlotInst.nTotalSlotSz = 0U;
    nRetVal = adi_adpddrv_RegRead(ADPD4x_REG_OPMODE, &nRegValue);
    goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot = (nRegValue & BITM_OPMODE_TIMESLOT_EN) >> BITP_OPMODE_TIMESLOT_EN;

    /* Get Fifo status byte register details */
    nRetVal = adi_adpddrv_RegRead(ADPD4x_REG_FIFO_STATUS_BYTES, &nRegValue);
    /* Reset the Fifo status byte variable */
    goAdiAdpdSSmInst->oAdpdSlotInst.nFifoStatusByte = 0U;
    /* Calculate byte size will append in the fifo for optional status */
    while((nRegValue != 0U) && (nRegValue < 0x1FFU))
    {
      nRegValue = nRegValue & (nRegValue - 1U);
      goAdiAdpdSSmInst->oAdpdSlotInst.nFifoStatusByte++;
    }

    for (uint16_t nIndex = 0U; nIndex <= goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot; nIndex++)
    {
      /* Read sample type specification register */
      nRetVal = adi_adpddrv_RegRead(ADPD4x_REG_TS_CTRL_A + (nIndex * 0x20U), &nCtrlRegValue);

      /* Extract sample type information */
      nRegValue = (nCtrlRegValue & BITM_TS_CTRL_A_SAMPLE_TYPE_A) >> BITP_TS_CTRL_A_SAMPLE_TYPE_A;
      goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nSampleType = (uint8_t)nRegValue;
      goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nSlotFormat = 0x0000U;
      if (nRegValue == IMPULSE_MODE)
      {
        nRetVal |= _adi_adpdssm_getSlotSzImpulseMode(nIndex);
      }
      else
      {
        nRetVal |= adi_adpddrv_RegRead(ADPD4x_REG_DATA1_A + (nIndex * 0x20U), &nRegValue);
        goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].oSlotDataSz.nSignDataSz = (uint8_t)(nRegValue & BITM_DATA1_A_SIGNAL_SIZE_A) >> BITP_DATA1_A_SIGNAL_SIZE_A;
        goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nSlotFormat = goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].oSlotDataSz.nSignDataSz;
  #ifdef DARK_EN
        goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].oSlotDataSz.nDarkDataSz = (uint8_t)((nRegValue & BITM_DATA1_A_DARK_SIZE_A) >> BITP_DATA1_A_DARK_SIZE_A);
        goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nSlotFormat = goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nSlotFormat |
                                                                      ((uint16_t)goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].oSlotDataSz.nDarkDataSz << 4);
  #endif /* DARK_EN */
  #ifdef LIT_EN
        nRetVal = adi_adpddrv_RegRead(ADPD4x_REG_DATA2_A + (nIndex * 0x20), &nRegValue);
        goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].oSlotDataSz.nLitDataSz = (uint8_t)(nRegValue & BITM_DATA2_A_LIT_SIZE_A) >> BITP_DATA2_A_LIT_SIZE_A;
        goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nSlotFormat = goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nSlotFormat |
                                                                        ((uint16_t)goAdiAdpdSSmInst.aSlotInfo[nIndex].oSlotDataSz.nLitDataSz << 12);
  #endif /* LIT_EN */

      /* Calculate number of bytes per sample */
      nSlotBytes = goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].oSlotDataSz.nSignDataSz;
  #ifdef DARK_EN
      nSlotBytes += goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].oSlotDataSz.nDarkDataSz;
  #endif /* DARK_EN*/
  #ifdef LIT_EN
      nSlotBytes += goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].oSlotDataSz.nLitDataSz;
  #endif /* LIT_EN*/

      /* Extract Channel information */
      if ((nCtrlRegValue & BITM_TS_CTRL_A_CH2_EN_A) == BITM_TS_CTRL_A_CH2_EN_A)
      {
        goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nNumChEn = 2U;
        nSlotBytes *= 2U;
      }
      else
      {
        goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nNumChEn = 1U;
      }
      goAdiAdpdSSmInst->oAdpdSlotInst.nTotalSlotSz += nSlotBytes;
    }
    /* Read the decimation & sampling rate value */
    adi_adpdssm_getDataOutputRate(nIndex);
    }
  }
  return nRetVal;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_getDataOutputRate
*  Get the decimation factor for a specific slot
*
*  \param[in]   nSlotNum: Highest slot num which is enabled
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_getDataOutputRate(uint16_t nSlotNum)
{
  uint16_t nRegValue = 0U;
  uint32_t nSampleFrq = 0U , lfOSC;
  uint16_t nRetCode = ADI_ADPD_DRV_SUCCESS;
  /* Extract slot information from UID value */
  uint16_t nSlot = nSlotNum & 0x00FFU;
  /* Check the requested slot and input selection value is valid */
  nRetCode = _adi_adpdssm_CheckParamsForSetSlotData(nSlot);
  if(nRetCode != ADI_ADPD_SSM_SUCCESS)
  {
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }
  else
  {
    nRetCode = adi_adpddrv_RegRead(ADPD4x_REG_SYS_CTL, &nRegValue);
    nRegValue &= BITM_SYS_CTL_LFOSC_SEL;
    nRegValue >>= BITP_SYS_CTL_LFOSC_SEL;
    if (nRegValue == 1U) {
      lfOSC = 1000000U;  /* 1M clock */
    }
    else
    {
      lfOSC = 32000U;    /* 32k clock */
    }
    nRetCode = adi_adpddrv_RegRead32B(ADPD4x_REG_TS_FREQ, &nSampleFrq);
    if(nSampleFrq != 0U)
    {
      nSampleFrq = lfOSC / nSampleFrq;
      /* Read the decimation value */
      nRetCode = adi_adpddrv_RegRead(ADPD4x_REG_DECIMATE_A + (nSlot * 0x20U), &nRegValue);
      /* Extract r_decimation factor from the register value */
      goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlot].nDecimation =(uint8_t)((nRegValue & BITM_DECIMATE_A_DECIMATE_FACTOR_A) >> \
        BITP_DECIMATE_A_DECIMATE_FACTOR_A) + (1U);

      goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlot].nOutputDataRate = (uint16_t)(nSampleFrq /((uint32_t)goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotNum].nDecimation));
    }
    else
    {
      goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlot].nOutputDataRate = 0U;
    }
    /* Find the maximum output datarate */
    if(goAdiAdpdSSmInst->oAdpdSlotInst.nMaxOutputDataRate < goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlot].nOutputDataRate)
    {
      goAdiAdpdSSmInst->oAdpdSlotInst.nMaxOutputDataRate = goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlot].nOutputDataRate;
      goAdiAdpdSSmInst->oAdpdSlotInst.nMaxOutputDataRateSlot = nSlot;
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpdssm_loadDcfg
*
*  Load the config with the given regaddr, regvals \n
*  \param[in]   pnCfg: Pointer to the tAdiAdpdDcfgInst structure with reg addr, val pair
*
*  \param[in]   nSlot: Slot corresponding to the config
                     ADI_ADPD_SLOT_NUM - 0-B for 12 slots
                     0xff - generic config
*
*  \return        ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
uint16_t adi_adpdssm_loadDcfg(tAdiAdpdDcfgInst *pnCfg, uint8_t nSlot)
{
  uint16_t nRegAddr;
  uint16_t nRegData;
  uint16_t nRet = ADI_ADPD_SSM_SUCCESS;
  uint8_t nIdx = 0U;

  if (pnCfg != 0U)
  {
    if(nSlot != 0xFFU)
    {
      nRegAddr = adi_adpd_GetSlotRegAddr(nSlot, pnCfg[0U].addr);
    }
    else
    {
      nRegAddr = pnCfg[0].addr;
    }

    nRegData = pnCfg[0U].value;

    while((nRegData != 0xFFFFU) && (nRet == ADI_ADPD_DRV_SUCCESS))
    {
      nRet = adi_adpddrv_RegWrite(nRegAddr, nRegData);
      /* debug("Config:, 0x%X ,  0x%X \r\n", nRegAddr, nRegData); */
      if (nRet == ADI_ADPD_DRV_SUCCESS)
      {
        nIdx++;
        if(nSlot != 0xFFU)
        {
          nRegAddr = adi_adpd_GetSlotRegAddr(nSlot, pnCfg[nIdx].addr);
        }
        else
        {
          nRegAddr = pnCfg[nIdx].addr;
        }
        nRegData = pnCfg[nIdx].value;
      }
    }
  }
  else
  {
    nRet = ADI_ADPD_SSM_PARAM_ERROR;
  }
  return nRet;
}

/******************************************************************************/
/* ------------------------- STATIC FUNCTIONS ------------------- */
/******************************************************************************/

/*!****************************************************************************
*
*  \b              _adi_adpdssm_slotApplyPrevSetting
*  Apply the previous slot settings stored in aPrevSetting
   CTRL Reg, Path Reg, Counts Reg, Led Pulse Reg, Mod Pulse Reg, DigInt Lit Reg
   Useful when bringing the reg from bypass to active mode
*
*  \param[in]   nSlotNum: Slot number for which previous setting has to be applied
*
*  \return      ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
static uint16_t _adi_adpdssm_slotApplyPrevSetting(uint8_t nSlotNum)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold address offset value */
  uint16_t nAddrOffset = 0U;
  /* Declare the variable to hold register address */
  uint16_t nRegAddress = 0U;
  /* Find the offset address for given slot */
  nAddrOffset = (uint16_t)nSlotNum * 0x20U;
  nRegAddress = nAddrOffset + ADPD4x_REG_TS_CTRL_A;
  nRetCode = adi_adpddrv_RegWrite(nRegAddress, goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nTsCtrl);
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_TS_PATH_A;
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nTsPath);
  }
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_COUNTS_A;
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nIntCount);
  }
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_LED_POW12_A;
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nLed12);
  }
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_LED_POW34_A;
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nLed34);
  }
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_DECIMATE_A;
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nDecimate);
  }
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_DATA1_A;
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nData1);
  }
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_DATA2_A;
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nData2);
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_slotSaveCurrSetting
*  Save the current slot settings in aPrevSetting
   CTRL Reg, Path Reg, Counts Reg, Led Pulse Reg, Mod Pulse Reg, DigInt Lit Reg
   Useful when bringing the reg from bypass to active mode
*
*  \param[in]   nSlotNum: Slot number for which previous setting has to be applied
*
*  \return      ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
static uint16_t _adi_adpdssm_slotSaveCurrSetting(uint8_t nSlotNum)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold address offset value */
  uint16_t nAddrOffset = 0U;
  /* Declare the variable to hold register address */
  uint16_t nRegAddress = 0U;
  /* Find the offset address for given slot */
  nAddrOffset = (uint16_t)nSlotNum * 0x20U;
  nRegAddress = nAddrOffset + ADPD4x_REG_TS_CTRL_A;
  nRetCode = adi_adpddrv_RegRead(nRegAddress, &goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nTsCtrl);
  /* Check the last register read status is succeeded, else skip another register read operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_TS_PATH_A;
    nRetCode = adi_adpddrv_RegRead(nRegAddress, &goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nTsPath);
  }
  /* Check the last register read status is succeeded, else skip another register read operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_COUNTS_A;
    nRetCode = adi_adpddrv_RegRead(nRegAddress, &goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nIntCount);
  }
  /* Check the last register read status is succeeded, else skip another register read operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_LED_POW12_A;
    nRetCode = adi_adpddrv_RegRead(nRegAddress, &goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nLed12);
  }
  /* Check the last register read status is succeeded, else skip another register read operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_LED_POW34_A;
    nRetCode = adi_adpddrv_RegRead(nRegAddress, &goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nLed34);
  }
  /* Check the last register read status is succeeded, else skip another register read operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_DECIMATE_A;
    nRetCode = adi_adpddrv_RegRead(nRegAddress, &goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nDecimate);
  }
  /* Check the last register read status is succeeded, else skip another register read operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_DATA1_A;
    nRetCode = adi_adpddrv_RegRead(nRegAddress, &goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nData1);
  }
  /* Check the last register read status is succeeded, else skip another register read operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_DATA2_A;
    nRetCode = adi_adpddrv_RegRead(nRegAddress, &goAdiAdpdSSmInst->oAdpdSlotInst.aPrevSetting[nSlotNum].nData2);
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_slotApplySkipSetting
*  Apply the slot bypass setting for the current slot
   CTRL Reg, Path Reg, Counts Reg, Led Pulse Reg, Mod Pulse Reg, DigInt Lit Reg
*
*  \param[in]   nSlotNum: Slot number for which slot bypass setting has to be applied
*
*  \return      ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
static uint16_t _adi_adpdssm_slotApplySkipSetting(uint8_t nSlotNum)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare variable to hold address offset value */
  uint16_t nAddrOffset = 0U;
  /* Declare the variable to hold register address */
  uint16_t nRegAddress = 0U;
  /* Declare the variable to hold register value */
  uint16_t nRegValue = 0U;
  /* Find the offset address for given slot */
  nAddrOffset = (uint16_t)nSlotNum * 0x20U;
  nRegAddress = nAddrOffset + ADPD4x_REG_TS_CTRL_A;
  nRegValue = 0x8000U;   /* Set sub sample feature */
  nRetCode = adi_adpddrv_RegWrite(nRegAddress, nRegValue);
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_TS_PATH_A;
    nRegValue = 0x00E6U;   /* precond = 0, not INT */
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, nRegValue);
  }
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_COUNTS_A;
    nRegValue = 0x0101U;   /* num_int = 0 */
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, nRegValue);
  }
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_LED_POW12_A;
    nRegValue = 0x0000U;   /* LED width = 0 */
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, nRegValue);
  }
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_LED_POW34_A;
    nRegValue = 0x0000U;   /* modulation width = 0 */
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, nRegValue);
  }
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_DECIMATE_A;
    nRegValue = 0x07F0U;   /* lit offset = 0 */
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, nRegValue);
  }
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_DATA1_A;
    nRegValue = 0x0000U;   /* lit offset = 0 */
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, nRegValue);
  }
  /* Check the last register write status is succeeded, else skip another register write operation */
  if(nRetCode == ADI_ADPD_DRV_SUCCESS)
  {
    nRegAddress = nAddrOffset + ADPD4x_REG_DATA2_A;
    nRegValue = 0x0000U;   /* lit offset = 0 */
    nRetCode = adi_adpddrv_RegWrite(nRegAddress, nRegValue);
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_getFifoLevel
*  Get the Fifo level - how many bytes are available in the FIFO
*
*  \param[out]   pFifoSz: pointer variable to store sample size in fifo
*
*  \return   ADI_ADPD_SSM_SUCCESS=success, ADI_ADPD_SSM_ERROR=SSM error
******************************************************************************/
static uint16_t _adi_adpdssm_getFifoLevel(uint16_t *pFifoSz)
{
  uint16_t nRet = ADI_ADPD_SSM_SUCCESS;
  /* Calculating LCM for the decimations of all 12 slots */
  goAdiAdpdSSmInst->oAdpdSlotInst.nLcmValue = adi_adpdssm_calculate_lcm();
  goAdiAdpdSSmInst->oAdpdSlotInst.nReadSequence = 1U;
  goAdiAdpdSSmInst->oAdpdSlotInst.nInterruptSequence = 1U;
  goAdiAdpdSSmInst->oAdpdSlotInst.nWriteSequence = 1U;
  nRet = adi_adpdssm_getMaxSamplSz();
  nRet = adi_adpdssm_getSamplSz(goAdiAdpdSSmInst->oAdpdSlotInst.nAdpdFifoWaterMark,
               &goAdiAdpdSSmInst->oAdpdSlotInst.nInterruptSequence, pFifoSz);
  return nRet;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_gcdofnumbers
*  Find the GCD value for given 2 numbers
*
*  \param[in]   nPar1: First value of GCD input
*
*  \param[in]   nPar2: Second value of GCD input
*
*  \return      32-bit Calculated GCD value
******************************************************************************/
static uint32_t _adi_adpdssm_gcdofnumbers(uint32_t nPar1, uint32_t nPar2)
{
  /* Declare variable to hold GCD value */
  uint32_t nRetValue = 0U;
  /* Declare variable to use on swapping values */
  uint32_t nTemporary = 0U;
  /* Check the Denominator value is greater than numerator else swap the value */
  if (nPar1 > nPar2) {
    nTemporary = nPar1;
    nPar1 = nPar2;
    nPar2 = nTemporary;
  }
  /* Check the value is divisable, else find new gcd number  */
  if ((nPar2 % nPar1) == 0U)
  {
    nRetValue = nPar1;
  }
  else
  {
    /* Find the new gcd value with given number */
    nRetValue = _adi_adpdssm_gcdofnumbers(nPar2 % nPar1, nPar1);
  }
  return nRetValue;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_lcmofnumbers
*  Find the LCM value for given 2 numbers
*
*  \param[in]   nPar1: First value of LCM input
*
*  \param[in]   nPar2: Second value of LCM input
*
*  \return      32-bit Calculated LCM value
******************************************************************************/
static uint32_t _adi_adpdssm_lcmofnumbers(uint32_t nPar1, uint16_t nPar2)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  /* Declare the variable to hold gcd value */
  uint32_t nGcdValue = 0U;
  /* Check the given input parameter value is valid */
  if((nPar1 == 0U) || (nPar2 == 0U))
  {
    nRetCode = ADI_ADPD_SSM_ERROR;
  }

  if(nRetCode == ADI_ADPD_SSM_SUCCESS)
  {
    /* Calculate the gcd of given numbers */
    nGcdValue = _adi_adpdssm_gcdofnumbers(nPar1, (uint32_t)nPar2);
  }

  if(nGcdValue != 0U)
  {
    nGcdValue = (nPar1 * nPar2) / nGcdValue;
  }
  /* Return the calculated GCD value to caller function */
  return nGcdValue;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_CalculateSamplSz
*  Calculate the sample size for each slot and channel - for all datatypes
*
*  \param[in]   nSequenceNumber: Sequence number sample
*
*  \param[out]  pTemp - TempVariable pointer to store sample size
*
*  \param[out]  pSlotIndex - Slot Index pointer
*
*  \param[out]  pSampleSize - Sample Size pointer to store calculated result
*
*  \return      None
******************************************************************************/
static void _adi_adpdssm_CalculateSamplSz(uint32_t nSequenceNumber, uint16_t *pTemp,
                                          uint8_t *pSlotIndex, uint16_t *pSampleSize)
{
  /* Declare the temporary variable to hold data size for condition checks */
  uint16_t nTemp = 0U;
  /* Declare the variable to hold slot index value */
  uint8_t nSlotIndex = 0U;
  /* Declare the variable to hold sample size value */
  uint16_t nSampleSize = 0U;

  /* Form a loop to run all the enabled slots */
  for (nSlotIndex = 0U; nSlotIndex <= goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot; nSlotIndex++)
  {
    /* Check the slot decimation value is not '0', if it's zero skip the
    sample size calculation for the given slot at sample sequence
    otherwise continue to calculation */
    if(goAdiAdpdSSmInst != NULL)
    {
      if ((goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nDecimation != 0U) &&
          ((goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nIsActive == 1U)))
      {
        /* Do the condition check to identify whether given sample number is satisfy with corresponding slot decimation value */
        if(adi_adpdssm_FrequencyRatioStatus(nSequenceNumber, goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nOutputDataRate) == 1U)
        {
          /* Calculate the sample size with Data size value and add it to sample size tracking variable */
          nSampleSize = nSampleSize + (uint16_t)(
#ifdef DARK_EN
                   (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nDarkDataSz) +
#endif
#ifdef LIT_EN
                   (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nLitDataSz) +
#endif
                   (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nSignDataSz));

          /* Check the channel two is enabled or not, if it's enabled then add data size into sample size */
          if (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nNumChEn == 2U)
          {
            /* Calculate the sample size with Data size value and add it to sample size tracking variable */
            nSampleSize += (
#ifdef DARK_EN
                    (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nDarkDataSz) +
#endif
#ifdef LIT_EN
                    (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nLitDataSz) +
#endif
                    (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nSignDataSz));
          }
        }
      }
    }
  }
  /* Update the sample size in local temporary variable */
  nTemp = nTemp + nSampleSize;
  *pTemp = nTemp;
  *pSlotIndex = nSlotIndex;
  *pSampleSize = nSampleSize + *pSampleSize;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_CalculateMaxSamplSz
*  Calculate the sample size for each slot and channel - for all datatypes
*
*  \param[in]   nTotalSampleSize: Size of accumulated data size of current sample
*
*  \param[in]   nLcm: Least common multiple value of current ODR
*
*  \param[out]  pMaxSz - Pointer to variable to track if max size is reached
*
*  \param[out]  pSampleSize - Sample Size pointer to store calculated result
*
*  \return      None
******************************************************************************/
static void _adi_adpdssm_CalculateMaxSamplSz(uint16_t nTotalSampleSize, uint32_t nLcm,
                                             uint8_t *pMaxSz, uint16_t *pSampleSize)
{
  /* Declare the temporary variable to hold data size for condition checks */
  uint8_t nMaximumSizeFlag = *pMaxSz;
  /* Declare the variable to hold slot index value */
  uint8_t nSlotIndex = 0U;
  /* Declare the variable to hold sample size value */
  uint16_t nSampleSize = *pSampleSize;

    /* Form a loop to run all the enabled slots */
    for (nSlotIndex = 0U; ((nSlotIndex <= goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot) &&
                           (nMaximumSizeFlag == 0U)); nSlotIndex++)
    {
      /* Check the slot decimation value is not '0', if it's zero skip the
      sample size calculation for the given slot at sample sequence
      otherwise continue to calculation */
      if(goAdiAdpdSSmInst != NULL)
      {
        if ((goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nDecimation != 0U) &&
            (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nIsActive == 1U))
        {
          /* Do the condition check to identify whether given sample number is satisfy with corresponding slot decimation value */
          if (((nLcm) % (goAdiAdpdSSmInst->oAdpdSlotInst.nMaxOutputDataRate / goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nOutputDataRate)) == 0U)
          {
            /* Calculate the sample size with Data size value and add it to sample size tracking variable */
            nSampleSize = nSampleSize + (uint16_t)(
#ifdef DARK_EN
                           (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nDarkDataSz) +
#endif
#ifdef LIT_EN
                           (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nLitDataSz) +
#endif
                           (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nSignDataSz));
            /* Check the channel two is enabled or not, if it's enabled then add data size into sample size */
            if (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nNumChEn == 2U) {
              /* Calculate the sample size with Data size value and add it to sample size tracking variable */
              nSampleSize += (
#ifdef DARK_EN
                          (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nDarkDataSz) +
#endif
#ifdef LIT_EN
                          (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nLitDataSz) +
#endif
                          (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nSignDataSz));
            }
          }
        }
      }
      /* Check the calculated sample size value is exceeding fifo buffer size, if it's exceeding size then update the flag */
      if((nTotalSampleSize + nSampleSize + goAdiAdpdSSmInst->oAdpdSlotInst.nFifoStatusByte) >= MAX_SAMPLES_IN_FIFO)
      {
        /* Set the sample size reached maximum flag to '1' */
        nMaximumSizeFlag = 1U;
      }
    }
    /* Check the status byte size not '0', if it's not zero then add the fifo status byte value in sample size */
    if(goAdiAdpdSSmInst->oAdpdSlotInst.nFifoStatusByte != 0U)
    {
      /* Add fifo status byte size in sample size variable */
      nSampleSize = nSampleSize + goAdiAdpdSSmInst->oAdpdSlotInst.nFifoStatusByte;
    }

  *pMaxSz = nMaximumSizeFlag;
  *pSampleSize = nSampleSize;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_CalSampSzCurrPattern
*  Calculate the sample size for the current data pattern
*
*  \param[in]   nSequenceNumber - Sequence number for the current data pattern for slots
*
*  \param[out]   *pSamplSz: Sample Size pointer to store calculated result
*
*  \param[out]  pAdpdDataPattern: Structure pointer will hold the pattern information
*
*  \return      8-bit slot index value
******************************************************************************/
static uint8_t _adi_adpdssm_CalSampSzCurrPattern(uint32_t nSequenceNumber, uint16_t *pSamplSz,
                                                 tAdiAdpdFifoPattern *pAdpdDataPattern)
{
  uint8_t nSlotIndex;
  uint16_t nSampleSize = 0U;
  for (nSlotIndex = 0U; nSlotIndex <= goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot; nSlotIndex++)
  {
    if(goAdiAdpdSSmInst != NULL)
    {
      if((goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nDecimation != 0U) && (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nIsActive == 1U))
      {
        if(adi_adpdssm_FrequencyRatioStatus(nSequenceNumber, goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nOutputDataRate) == 1U)
        {
          pAdpdDataPattern->aSlotPatternInfo[nSlotIndex] = 1U;
          nSampleSize += (
#ifdef DARK_EN
                          (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nDarkDataSz) +
#endif
#ifdef LIT_EN
                            (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nLitDataSz) +
#endif
                              (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nSignDataSz));
          if (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].nNumChEn == 2U)
          {
            nSampleSize += (
#ifdef DARK_EN
                            (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nDarkDataSz) +
#endif
#ifdef LIT_EN
                              (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nLitDataSz) +
#endif
                                (goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotIndex].oSlotDataSz.nSignDataSz));
          }
        }
        else
        {
          pAdpdDataPattern->aSlotPatternInfo[nSlotIndex] = 0U;
        }
      }
    }
    else
    {
      pAdpdDataPattern->aSlotPatternInfo[nSlotIndex] = 0U;
    }
  }
  *pSamplSz = nSampleSize;
  return nSlotIndex;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_getSlotSzImpulseMode
*  Calculate the data size for impulse mode enabled slots
*
*  \param[in]   nSlotId: Slot Index which is set to impulse mode
*
*  \return Error Status
******************************************************************************/
static uint16_t _adi_adpdssm_getSlotSzImpulseMode(uint16_t nSlotId)
{
  uint16_t nRetVal = ADI_ADPD_SSM_SUCCESS;
  uint16_t nRegValue = 0U;
  uint8_t nSlotBytes = 0U;
  nRetVal = adi_adpddrv_RegRead(ADPD4x_REG_COUNTS_A +
                                                        (nSlotId * 0x20U), &nRegValue);
  nRegValue = (nRegValue & BITM_COUNTS_A_NUM_INT_A) >> BITP_COUNTS_A_NUM_INT_A;
  goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotId].oSlotDataSz.nSignDataSz = (uint8_t)nRegValue;

  nSlotBytes = goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotId].oSlotDataSz.nSignDataSz;
  nSlotBytes *= IMPULSE_DATASIZE;

  goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nSlotId].nNumChEn = 1U;
  goAdiAdpdSSmInst->oAdpdSlotInst.nTotalSlotSz += nSlotBytes;
  return nRetVal;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_CheckParamsForGetSlotData
*  Function to check is given slot value is valid and return error status
*
* \param  nSlotId - Slot Index for which data is needed
*
* \return Error Status
******************************************************************************/
static uint16_t _adi_adpdssm_CheckParamsForGetSlotData(uint16_t nSlotId)
{
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;

  if(nSlotId > (uint16_t)E_ADI_ADPD_SLOTL)
  {
    /* Update the trace variable with failure code, so the caller will get
    status of their request	*/
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }

  return nRetCode;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_CheckParamsForSetSlotData
*  Calculate the data size for impulse mode enabled slots
*
*  \param[in]    nSlotId: Slot Index for which data is needed
*
*  \return Error Status
******************************************************************************/
static uint16_t _adi_adpdssm_CheckParamsForSetSlotData(uint16_t nSlotId)
{
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;

  if(nSlotId > (uint16_t)E_ADI_ADPD_SLOTL)
  {
    /* Update the trace variable with failure code, so the caller will get
    status of their request */
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              _adi_adpdssm_CheckSubSampleStatus
*  Calculate the sub sampling feature is enabled
*
*  \param[out]  pFlag: Pointer variable which hold the status of sub sampling
*
*  \return Error Status
******************************************************************************/
static uint16_t _adi_adpdssm_CheckSubSampleStatus(uint8_t *pFlag)
{
  uint16_t nRetCode = ADI_ADPD_SSM_SUCCESS;
  uint16_t nPrevFreq = 0U;
  for(uint8_t nIndex = 0U; nIndex <= goAdiAdpdSSmInst->oAdpdSlotInst.nHighestSelectedSlot; nIndex++)
  {
    if(goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nIsActive == 1U)
    {
      if(nPrevFreq != 0U)
      {
        if(nPrevFreq != goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nOutputDataRate)
        {
          *pFlag = 0U;
        }
      }
      nPrevFreq = goAdiAdpdSSmInst->oAdpdSlotInst.aSlotInfo[nIndex].nOutputDataRate;
    }
  }
  return nRetCode;
}

/*!****************************************************************************
*
*  \b              adi_adpdssm_FrequencyRatioStatus
*  Function to find frequency ratio status of given sample number and sample rate
*
* \param[in]    nSampleSeq: Sample sequence number
*
* \param[in]    nSampleFreq: Library sampling frequency rate
*
* \return       Error status: ADI_ADPD_SSM_SUCCESS,ADI_ADPD_SSM_ERROR
*
******************************************************************************/
static uint16_t adi_adpdssm_FrequencyRatioStatus(uint16_t nSampleSeq, uint16_t nSampleFreq)
{
  /* Declare variable to track the status of routine */
  uint16_t nRetCode = 0U;
  /* Declare variable to hold frequeny ratio value */
  uint16_t nFreqRatio = 0U;

  /* Check the given input parameter values is valid, if not return parameter error */
  if((nSampleFreq == 0U) || (nSampleSeq == 0U))
  {
    nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
  }
  else
  {
    /* Check the requested Freq. decimation is possible on psm slot, if not return failure */
    if(goAdiAdpdSSmInst->oAdpdSlotInst.nMaxOutputDataRate >= nSampleFreq)
    {
      /* Find the frequency ratio of slot and library of psm */
      nFreqRatio = goAdiAdpdSSmInst->oAdpdSlotInst.nMaxOutputDataRate / nSampleFreq;
      /* If Decimate value is satisfy condition check then return decimate status as success else return as failure */
      if((nSampleSeq % nFreqRatio) == 0U)
      {
        nRetCode = 1U;
      }
      else
      {
        nRetCode = 0U;
      }
    }
    else
    {
      /* Update the trace variable with failure code, so the caller will get
      status of their request */
      nRetCode = ADI_ADPD_SSM_PARAM_ERROR;
    }
  }
  /* Return routine status to caller function */
  return nRetCode;
}

/**
 @}
*/