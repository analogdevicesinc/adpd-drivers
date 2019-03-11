/**
******************************************************************************
* @file     Adpd400xDrv.h
* @author   ADI
* @version  V0.1
* @date     30-Jan-2019
* @brief    Include file for the ADPD400x device driver
******************************************************************************
* @attention
******************************************************************************
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

#ifndef __ADPD400x_Drv__H
#define __ADPD400x_Drv__H

#include <stdint.h>

/* ------------------------- Defines  -------------------------------------- */
#define SLOT_NUM                    12      // total number of slots
#define ADPD400xDrv_SUCCESS         (0)
#define ADPD400xDrv_ERROR           (-1)
/*  REGISTER Values */
#define ADPD400x_OP_IDLE_MODE       0
#define ADPD400x_OP_RUN_MODE        1
#define SLOT_BASE                   ADPD400x_REG_DATA1_A
#define ADPD400x_SPI_WRITE          (0x0001)
#define ADPD400x_SPI_READ           (0xFFFE)

/* Exported types ---------------------------------------------------------- */
typedef uint32_t Adpd400xData_t;

typedef enum
{
  ADI_HAL_OK       = 0x00,
  ADI_HAL_ERROR    = 0x01,
  ADI_HAL_BUSY     = 0x02,
  ADI_HAL_TIMEOUT  = 0x03
} ADI_HAL_STATUS_t;

typedef enum {
  ADPD400xDrv_MODE_IDLE = 0,
  ADPD400xDrv_MODE_PWR_OFF,
  ADPD400xDrv_MODE_SAMPLE
} ADPD400xDrv_Operation_Mode_t;

typedef enum {
  ADPD400xDrv_SIZE_0  = 0x00,
  ADPD400xDrv_SIZE_8  = 0x01,
  ADPD400xDrv_SIZE_16 = 0x02,
  ADPD400xDrv_SIZE_24 = 0x03,
  ADPD400xDrv_SIZE_32 = 0x04,
} ADPD400XDrv_FIFO_SIZE_t;

/* ADPD set and get parameters */
/*  ADPD Parameter List
Watermarking
FifoLevel
*/
typedef enum {
  ADPD400x_WATERMARKING = 0,
  ADPD400x_FIFOLEVEL,
  ADPD400x_OUTPUTDATARATE,
  ADPD400x_TIMEGAP,
  ADPD400x_LATEST_SLOT_DATASIZE,
  ADPD400x_THIS_SLOT_DATASIZE,
  ADPD400x_SUM_SLOT_DATASIZE,
  ADPD400x_IS_SLOT_ACTIVE,
  ADPD400x_IS_SLOT_SELECTED,
  ADPD400x_HIGHEST_SLOT_NUM,
  ADPD400x_THIS_SLOT_CHANNEL_NUM,
  ADPD400x_TEST_DATA
} Adpd400xCommandStruct_t;

typedef enum {
  ADPD400xDrv_SIGNAL = 0x00,
  ADPD400xDrv_DARK
} ADPDDrvCl_SignalDark_t;

typedef enum {
  ADPD400xDrv_SLOTA = 0x00,
  ADPD400xDrv_SLOTB,
  ADPD400xDrv_SLOTC,
  ADPD400xDrv_SLOTD,
  ADPD400xDrv_SLOTE,
  ADPD400xDrv_SLOTF,
  ADPD400xDrv_SLOTG,
  ADPD400xDrv_SLOTH,
  ADPD400xDrv_SLOTI,
  ADPD400xDrv_SLOTJ,
  ADPD400xDrv_SLOTK,
  ADPD400xDrv_SLOTL
} ADPD400xDrv_SlotNum_t;

/*!
LED ID Identifier
0 --> LED OFF
1 --> LED 1
2 --> LED 2
3 --> LED 3
4 --> LED 4
*/
typedef enum {
  ADPD400xDrv_LED1 = 0x01,
  ADPD400xDrv_LED2,
  ADPD400xDrv_LED3,
  ADPD400xDrv_LED4
} ADPD400xDrv_LedId_t;

typedef enum {
  ADPD400x_I2C_BUS,    /**< enum value 0 */
  ADPD400x_SPI_BUS,    /**< enum value 1 */
  ADPD400x_UNKNOWN_BUS /**< enum value 2 */
} Adpd400xComMode_t;

/*
Slot ID Identifier

0 --> Slot A
1 --> Slot B
*/
typedef uint8_t Adpd400xSlotId;

/* Adpd control functions */
Adpd400xComMode_t Adpd400xDrvGetComMode(void);
int16_t Adpd400xDrvChipReset(void);
int16_t Adpd400xDrvOpenDriver(void);
int16_t Adpd400xDrvCloseDriver(void);
int16_t Adpd400xDrvSoftReset(void);
int16_t Adpd400xDrvRegRead(uint16_t nAddr, uint16_t *pnData);
int16_t Adpd400xDrvRegRead32B(uint16_t nAddr, uint32_t *pnData);
int16_t Adpd400xDrvRegWrite(uint16_t nAddr, uint16_t nRegValue);
int16_t Adpd400xDrvSlotSetup(uint8_t nSlotNum, uint8_t nEnable,
                             uint16_t nSlotFormat, uint8_t nChannel);
int16_t Adpd400xDrvSlotSetActive(uint8_t nSlotNum, uint8_t nSleep);

int16_t Adpd400xDrvSetOperationMode(uint8_t nOpMode);
int16_t Adpd400xDrvSetOperationPause(uint8_t nEnable);
int16_t Adpd400xDrvReadFifoData(uint8_t *pnData, uint16_t nDataSetSize);
int16_t Adpd400xDrvReadRegData(uint32_t *pnData, 
                               ADPD400xDrv_SlotNum_t nSlotNum,
                               uint8_t nSignalDark, uint8_t nChNum);
int16_t Adpd400xDrvSetParameter(Adpd400xCommandStruct_t eCommand, 
                                uint8_t nPar, uint16_t nValue);
int16_t Adpd400xDrvGetParameter(Adpd400xCommandStruct_t eCommand, 
                                uint8_t nPar, uint16_t *pnValue);
void Adpd400xDrvDataReadyCallback(void (*pfAdpdDataReady)());
int16_t Adpd400xDrvSetLedCurrent(uint16_t nLedCurrent, 
                                 ADPD400xDrv_LedId_t nLedId,
                                 ADPD400xDrv_SlotNum_t nSlotNum);
int16_t Adpd400xDrvGetLedCurrent(uint16_t *pLedCurrent, 
                                 ADPD400xDrv_LedId_t nLedId,
                                 ADPD400xDrv_SlotNum_t nSlotNum);
#endif
