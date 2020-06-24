/**
******************************************************************************
* @file     adi_adpd_ssm.h
* @author   ADI
* @version  V0.1
* @date     13-Jan-2020
* @brief    Include file for the ADPD400x Sensor State Machine
******************************************************************************
* @attention
******************************************************************************
*/
/******************************************************************************
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
#ifndef __ADI_ADPD_SSM__H
#define __ADI_ADPD_SSM__H

/*============================================================================*/
/**
 * \defgroup ADPD_SSM Global Instance of Sensor State
 *
 * This is the definition of the ADPD4xxx Sensor State Machine.
 * This contains the functions to control slots and handle interaction with
 * different parametric state machines
 *
 * @{ */
/*============================================================================*/
#include <stdint.h>
#include <stddef.h>

/* ------------------------- Defines  -------------------------------------- */

#define ADI_ADPD_SSM_SUCCESS            (0x0000u) /*!< Macro value of SSM success */
#define ADI_ADPD_SSM_ERROR              (0x2008u) /*!< Macro value of SSM error */
#define ADI_ADPD_SSM_PARAM_ERROR        (0x2004u) /*!< Macro value of SSM param error */
#define ADI_ADPD_SSM_PATTERN_ERROR      (0x2002u) /*!< Macro value of SSM pattern error */
#define ADI_ADPD_SSM_SAMPSZ_ERROR       (0x2001u) /*!< Macro value of SSM sample size error */
#define MAX_SAMPLES_IN_FIFO             (256U)    /*!< Macro value of maximum allowed bytes in fifo */

/*! \addtogroup ADPD_SlotOps
 *  @{
 */

/*! BUFFER MANAGER MACROS */
#define SLOT_DISABLE_SETTINGS        (8U)       /*!< Macro value of Num. of registers to be BackedUp while bypassing slot */
#define ADI_ADPD_SLOT_REG_BEGIN_ADDR (0x100U)   /*!< Macro value of Time Slot BEGIN address */

/* Exported types ---------------------------------------------------------- */

/* ------------------------- ENUMS  -------------------------------------- */

/*! \enum ADI_ADPD_OPMODE
      Enumeration list for Operation Mode in Adpd4x device */
typedef enum {
  E_ADI_ADPD_MODE_IDLE = 0U,  /*!< Enum value of IDLE/PROGRAM Mode */
  E_ADI_ADPD_MODE_SAMPLE = 1U /*!< Enum value of SAMPLE Mode */
} ADI_ADPD_OPMODE;

/*! \enum ADI_ADPD_LEDID
      Enumeration list for LED selection */
typedef enum {
  E_ADI_ADPD_LED_OFF = 0x00U,   /*!< Enum value of Led Off */
  E_ADI_ADPD_LED1A   = 0x01U,   /*!< Enum value of Led 1A */
  E_ADI_ADPD_LED1B   = 0x02U,   /*!< Enum value of Led 1B */
  E_ADI_ADPD_LED2A   = 0x03U,   /*!< Enum value of Led 2A */
  E_ADI_ADPD_LED2B   = 0x04U,   /*!< Enum value of Led 2B */
  E_ADI_ADPD_LED3A   = 0x05U,   /*!< Enum value of Led 3A */
  E_ADI_ADPD_LED3B   = 0x06U,   /*!< Enum value of Led 3B */
  E_ADI_ADPD_LED4A   = 0x07U,   /*!< Enum value of Led 4A */
  E_ADI_ADPD_LED4B   = 0x08U    /*!< Enum value of Led 4B */
} ADI_ADPD_LEDID;

/*! \enum ADI_ADPD_CHANNEL_NUM
      Enumeration list for ADC Channel */
typedef enum {
  E_ADI_ADPD_CHANNEL_1 = 0x01U,         /*!< Enum value of Channel 1 */
  E_ADI_ADPD_CHANNEL_2 = 0x02U,         /*!< Enum value of Channel 2 */
  E_ADI_ADPD_CHANNEL_ALL = 0x03U        /*!< Enum value of Channel 1 & 2 */
} ADI_ADPD_CHANNEL_NUM;

/*! \enum ADI_ADPD_TIA_GAIN
      Enumeration list for TIA Gain selection */
typedef enum {
  E_ADI_ADPD_TIA_GAIN_200KOHM = 0x00U,  /*!< Enum value of 200KOhm Tia Gain */
  E_ADI_ADPD_TIA_GAIN_100KOHM = 0x01U,  /*!< Enum value of 100KOhm Tia Gain */
  E_ADI_ADPD_TIA_GAIN_50KOHM = 0x02U,   /*!< Enum value of 50KOhm Tia Gain */
  E_ADI_ADPD_TIA_GAIN_25KOHM = 0x03U,   /*!< Enum value of 25KOhm Tia Gain */
  E_ADI_ADPD_TIA_GAIN_12P5KOHM = 0x04U  /*!< Enum value of 12.5KOhm Tia Gain */
} ADI_ADPD_TIA_GAIN;

/*! \enum ADI_ADPD_RIN_SELECT
      Enumeration list for RIN selection */
typedef enum {
  E_ADI_ADPD_RIN_LOW = 0x00U,   /*!< Enum value of Low input value(Rin) */
  E_ADI_ADPD_RIN_HIGH = 0x01U,  /*!< Enum value of High input value(Rin) */
} ADI_ADPD_RIN_SELECT;

/*! \enum ADI_ADPD_PRIMARY_INTERRUPT
      Enumeration list for Interrupt selection */
typedef enum {
  E_ADI_ADPD_INT_DATA = 0x01U,  /*!< Enum value of Data Interrupt */
  E_ADI_ADPD_INT_LEV0 = 0x02U,  /*!< Enum value of Level 0 Interrupt */
  E_ADI_ADPD_INT_LEV1 = 0x03U,  /*!< Enum value of Level 1 Interrupt */
  E_ADI_ADPD_INT_TS1 = 0x04U,   /*!< Enum value of Tia Saturation 1 Interrupt */
  E_ADI_ADPD_INT_TS2 = 0x05U    /*!< Enum value of Tia Saturation 2 Interrupt */
} ADI_ADPD_PRIMARY_INTERRUPT;
/**
 @}
*/
/* ------------------------- STRUCTS  -------------------------------------- */
/*! \addtogroup ADPD_SSM_Instance
 *  @{
 */

/*! \struct tAdiAdpdDcfgInst ""
  ADI Address, Value pair for each register to be configured for a particular application \n
Passed on from the Host Application to the Sensor State Machine
*/
typedef struct {
  uint16_t addr;   /*!< Address of the register to be configured */
  uint16_t value;  /*!< Value of the register to be configured */
} tAdiAdpdDcfgInst;

/*! \struct tAdiAdpdGainInst ""
    Tia Gain structure passed from application layer with value*/
typedef struct {
  ADI_ADPD_TIA_GAIN TiaGainCh1; /*!< Gain value for channel1 */
  ADI_ADPD_TIA_GAIN TiaGainCh2; /*!< Gain value for channel2 */
} tAdiAdpdGainInst;

/*! \struct tAdiAdpdBackUpReg ""
    Backup register structure which is used for bypass feature */
typedef struct
{
  uint16_t nTsCtrl;     /*!< Member to hold TS Control register Info*/
  uint16_t nTsPath;     /*!< Member to hold TS Path register Info */
  uint16_t nIntCount;   /*!< Member to hold TS Int. Cycle register Info */
  uint16_t nLed12;      /*!< Member to hold TS Led 1 & 2 register Info*/
  uint16_t nLed34;      /*!< Member to hold TS Led 3 & 4 register Info */
  uint16_t nDecimate;   /*!< Member to hold TS Decimate register Info */
  uint16_t nData1;      /*!< Member to hold TS Data 1 register Info */
  uint16_t nData2;      /*!< Member to hold TS Data 2 register Info */
}tAdiAdpdBackUpReg;

/**
 @}
*/

/*! \addtogroup ADPD_SSM_Instance
 *  @{
 */
/*! \struct tAdpdSlotDataSzParam ""
     ADPD Slot Data Format Size Parameter(s) */
typedef struct {
#ifdef DARK_EN
  uint8_t nDarkDataSz;        /*!< Dark data format Size in bytes */
#endif
  uint8_t nSignDataSz;        /*!< Signal data format Size in bytes
                               In impulse mode, this is the impulse data sz */
#ifdef LIT_EN
  uint8_t nLitDataSz;         /*!< Lit data format Size in bytes */
#endif
  uint8_t nTotSlotDataSz;     /*!< Total datasize per slot */
} tAdpdSlotDataSzParam;

/*! \struct tAdiAdpdFifoPattern ""
    ADPD FIFO patter for multi-datarates for all slots */
typedef struct {
  uint8_t aSlotPatternInfo[SLOT_NUM]; /*!< Member will hold information about in current sample what are the slot
                                             available for given sequence number */
  uint16_t nSampSz; /*!< Member will give represent sample size of current sample */
}tAdiAdpdFifoPattern;

/*! \struct tAdiAdpdSlotInfo ""
  ADPD Slot Information such as if the slot is active or bypassed, format, decimation factor, etc */
typedef struct {
  uint8_t  nNumChEn;         /*!< Active channel for each slot */
  uint8_t  nDecimation;      /*!< Decimation factor for each slot */
  uint8_t  nSampleType;	     /*!< Holds the Sample type of each slot */
  uint8_t  nIsActive;        /*!< Is the slot active during init or should it be in off */
  uint16_t nOutputDataRate;  /*!< Output Data Rate for all the Slots */
  uint16_t nSlotFormat;      /*!< Dark,Sig,Lit,Ttl bytes of each slot */
  uint16_t nSlotSampRatio;   /*!< Sample count calculated with decimation factor
                                and Fifo depth */
  tAdpdSlotDataSzParam oSlotDataSz;   /*!< Slot DataSize for each slot */
} tAdiAdpdSlotInfo;

/*! \struct tAdiAdpdSlotInstance ""
    ADPD Instance for the Sensor State Machine
    Contains the globals needed for the State Machine
 */
typedef struct {
  uint8_t nAdpdFifoWaterMark;                /*!< Adpd FIFO Watermark */
  uint8_t nFifoStatusByte;                   /*!< Enable to get the Fifo Status */
  uint8_t nMaxOutputDataRateSlot;       /*!< The slot which is running higher sample rate */
  uint8_t nOpMode;                           /*!< The current state of OpMode will be stored here */
  uint16_t nDevID;                           /*!< Dev ID to indicate whether it is ADPD4000 or ADPD 4100 */
  uint16_t nHighestSelectedSlot;             /*!< Highest Slot number enabled.
                                            Total number of enabled slots = nHighestSelectedSlot + 1 */
  uint16_t nTotalSlotSz;                     /*!< Total Slot Size */
  uint16_t nFifoLevel;                       /*!< Number of bytes available in Fifo */
  uint16_t nMaxOutputDataRate;          /*!< Maximum Output Data Rate Host */
  uint32_t nLcmValue;                        /*!< LCM for the Decimated rates across enabled slots */
  uint32_t nWriteSequence;                   /*!< Write sequence for Slots */
  uint32_t nInterruptSequence;               /*!< Interrupt sequence for Slots */
  uint32_t nReadSequence;                    /*!< Read sequence for Slots */
  tAdiAdpdBackUpReg aPrevSetting[SLOT_NUM]; /*!< Previous Setting storage for all slots to max of SLOT_DISABLE_SETTINGS*/
  tAdiAdpdSlotInfo aSlotInfo[SLOT_NUM];      /*!< SlotInfo Instance for all the slots */
  tAdiAdpdFifoPattern sWriteBufferPattern;   /*!< Fifo Pattern when slots are running at different rates */
} tAdiAdpdSlotInstance;
/**
 @}
*/

/*! \addtogroup ADPD_SSM_Instance
 *  @{
 */
/*! \struct tAdiAdpdSSmInst ""
    ADPD SSM Global Structure Instance */
typedef struct {
  tAdiAdpdSlotInstance oAdpdSlotInst;      /*!< An instance to the ADPD Slot global variables structure */
} tAdiAdpdSSmInst;
/**
 @}
*/

/* ------------------------- PROTOTYPES  -------------------------------------- */
uint16_t adi_adpdssm_setOperationMode(uint8_t nOpMode);
uint16_t adi_adpdssm_GetOperationMode(uint8_t *pOpMode);
uint16_t adi_adpdssm_slotSetActive(uint8_t nSlotNum, uint8_t nActive);
uint16_t adi_adpdssm_getSlotInfo(void);
uint16_t adi_adpdssm_getFifoLvl(uint16_t *pnValue);
uint16_t adi_adpdssm_getDataOutputRate(uint16_t slot);

/*! LED Set/Get helper function prototype declaration */
uint16_t adi_adpdssm_SetLedCurrent(uint16_t nUId, ADI_ADPD_LEDID nLed, uint16_t nCurrent);
uint16_t adi_adpdssm_GetLedCurrent(uint16_t nUId, ADI_ADPD_LEDID nLed, uint16_t *pLedCurrent);
uint16_t adi_adpdssm_GetActiveLed(uint16_t nUId, ADI_ADPD_LEDID nLed, uint16_t *pLedDrive);
/*! TIA gain Set/Get helper function prototype declaration */
uint16_t adi_adpdssm_SetTiaGain(uint16_t nUId, ADI_ADPD_CHANNEL_NUM nChannel, tAdiAdpdGainInst nTiaGain);
uint16_t adi_adpdssm_GetTiaGain(uint16_t nUId, ADI_ADPD_CHANNEL_NUM nChannel, tAdiAdpdGainInst *nTiaGain);
/*! ADC offset Set/Get helper function prototype declaration */
uint16_t adi_adpdssm_SetChannelOffset(uint16_t nUId, ADI_ADPD_CHANNEL_NUM nChannel, uint16_t nAdcOffset);
uint16_t adi_adpdssm_GetChannelOffset(uint16_t nUId, ADI_ADPD_CHANNEL_NUM nChannel, uint16_t *nAdcOffset);
/*! Decimation Set/Get helper function prototype declaration */
uint16_t adi_adpdssm_SetDecimation(uint16_t nUId, uint16_t nDecimation);
uint16_t adi_adpdssm_GetDecimation(uint16_t nUId, uint16_t *nDecimation);
/*! Input configuration Set/Get helper function prototype declaration */
uint16_t adi_adpdssm_SetInput(uint16_t nUId, uint16_t nInputPD);
uint16_t adi_adpdssm_GetInput(uint16_t nUId, uint16_t *pInputPD);
/*! Led period Set/Get helper function prototype declaration */
uint16_t adi_adpdssm_SetLedPeriod(uint16_t nUId, uint16_t nLedPeriod);
uint16_t adi_adpdssm_GetLedPeriod(uint16_t nUId, uint16_t *pLedPeriod);
/*! Pulse count Set/Get helper function prototype declaration */
uint16_t adi_adpdssm_SetPulseCount(uint16_t nUId, uint16_t nPulseCount);
uint16_t adi_adpdssm_GetPulseCount(uint16_t nUId, uint16_t *pPulseCount);
uint32_t adi_adpdssm_calculate_lcm(void);
uint16_t adi_adpdssm_getCurrDatapattern(uint32_t *pSeqNum, \
                                         tAdiAdpdFifoPattern* pAdpdDataPattern);
uint16_t adi_adpdssm_getSamplSz(uint8_t nNumSampl, uint32_t *pSeqNum, uint16_t *pSamplSz);
uint16_t adi_adpdssm_getMaxSamplSz(void);
uint16_t adi_adpdssm_slotinit(tAdiAdpdSSmInst *pAdpdInstance);
uint16_t adi_adpdssm_loadDcfg(tAdiAdpdDcfgInst *pnCfg, uint8_t nSlot);
uint16_t adi_adpd_GetSlotRegAddr(uint8_t nSlot, uint16_t nOffset);
uint16_t adi_adpdssm_SetRIn(uint16_t nUId, ADI_ADPD_RIN_SELECT rIn);
uint16_t adi_adpdssm_GetRIn(uint16_t nUId, ADI_ADPD_RIN_SELECT *prIn);
uint16_t adi_adpdssm_clearInterrupt(uint16_t nUId, ADI_ADPD_PRIMARY_INTERRUPT whichInterrupt);
uint16_t adi_adpdssm_readInterrupt(uint16_t nUId, ADI_ADPD_PRIMARY_INTERRUPT whichInterrupt, uint8_t *pInt);
/**
 @}
*/
#endif