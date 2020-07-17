/**
******************************************************************************
* @file     adi_adpd_driver.h
* @author   ADI
* @version  V0.1
* @date     15-June-2020
* @brief    Device driver header file of ADI ADPD4x chip.
******************************************************************************
* @attention
******************************************************************************
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

#ifndef __ADI_ADPD_DRIVER__H
#define __ADI_ADPD_DRIVER__H

/**
 * \defgroup ADPD_Driver Global Instance of Device Driver
 *
 * This is the definition of the ADPD4xxx Device Driver.
 * This contains the functions to control slots and general registers
 *
 * @{ */
#include <stdint.h>

/* ------------------------- Defines  -------------------------------------- */
#define SLOT_NUM                    (12U)      /*!< Total number of slots */
#define ADI_ADPD_DRV_SUCCESS        (0U)       /*!< Driver operation success */
#define ADI_ADPD_DRV_ERROR          (0x10F0U)  /*!< Driver error */
#define ADI_ADPD_DRV_PARAM_ERROR    (0x1080U)  /*!< Driver Param error */
#define ADI_ADPD_DRV_READ_ERROR     (0x1040U)  /*!< Driver READ  error */
#define ADI_ADPD_DRV_WRITE_ERROR    (0x1020U)  /*!< Driver Write  error */
#define ADI_ADPD_DRV_FIFO_ERROR     (0x1010U)  /*!< Driver Fifo Not Full error */
#define ADPD400x_OP_IDLE_MODE       (0U)       /*!< ADPD IN IDLE MODE */
#define ADPD400x_OP_RUN_MODE        (1U)       /*!< ADPD IN RUN MODE */
#define ADPD400x_SPI_WRITE          (0x0001U)  /*!< SPI write command */
#define ADPD400x_SPI_READ           (0xFFFEU)  /*!< SPI read command */
#define ADPD400x_I2C_LONG_ADDRESS   (0x8000U)  /*!< ADPD I2C LONG ADDRESS BIT */
#define ADPA410x_FIFO_SIZE          (256U)     /*!< FIFO threshold of Adpd40x */
#define ADPD400x_FIFO_SIZE          (256U)     /*!< FIFO threshold of Adpd41x */
#define ADPD400x_ID                 (0x00C0U)  /*!< Adpd40x device ID */
#define ADPD410x_ID                 (0x00C2U)  /*!< Adpd41x device ID */

/* Exported types ---------------------------------------------------------- */
/*! \enum ADI_ADPD_COMM_MODE
      Enumeration list of interface types */
typedef enum {
  E_ADI_ADPD_I2C_BUS = 0x00U,    /*!< Communication through I2C bus */
  E_ADI_ADPD_SPI_BUS = 0x01U,    /*!< Communication through SPI bus */
  E_ADI_ADPD_UNKNOWN_BUS = 0xFFU /*!< Communication through unknown bus */
} ADI_ADPD_COMM_MODE;

/*! \enum ADI_ADPD_SLOT_NUM
      Enumeration list for Slot ID identifier */
typedef enum {
  E_ADI_ADPD_SLOTA = 0x00U, /*!< Slot-A ID Value*/
  E_ADI_ADPD_SLOTB = 0x01U, /*!< Slot-B ID Value*/
  E_ADI_ADPD_SLOTC = 0x02U, /*!< Slot-C ID Value*/
  E_ADI_ADPD_SLOTD = 0x03U, /*!< Slot-D ID Value*/
  E_ADI_ADPD_SLOTE = 0x04U, /*!< Slot-E ID Value*/
  E_ADI_ADPD_SLOTF = 0x05U, /*!< Slot-F ID Value*/
  E_ADI_ADPD_SLOTG = 0x06U, /*!< Slot-G ID Value*/
  E_ADI_ADPD_SLOTH = 0x07U, /*!< Slot-H ID Value*/
  E_ADI_ADPD_SLOTI = 0x08U, /*!< Slot-I ID Value*/
  E_ADI_ADPD_SLOTJ = 0x09U, /*!< Slot-J ID Value*/
  E_ADI_ADPD_SLOTK = 0x0AU, /*!< Slot-K ID Value*/
  E_ADI_ADPD_SLOTL = 0x0BU  /*!< Slot-L ID Value*/
} ADI_ADPD_SLOT_NUM;

/*! \struct tAdiAdpdDrvInst ""
    ADPD driver Object
 */
typedef struct {
  ADI_ADPD_COMM_MODE nAdpd400xCommMode; /*!< Communication mode for read/write operations*/
  uint32_t nAccessCnt[5];  /*!< Debug buffer to hold the information for developer regarding fifo transactions */
  uint16_t nFifoLevel; /*!< This member will hold the fifo bytes count */
#ifndef NDEBUG
  uint32_t nOverFlowCnt; /*!< This member will hold the Fifo overflow count while sensor is in sample mode */
#endif
  uint16_t nDevID;  /*!< This member will hold the Chip ID information */
} tAdiAdpdDrvInst;

/**
 @}
*/

/*****************FUNCTION PROTOTYPES*****************************/
/* Adpd control functions */
ADI_ADPD_COMM_MODE adi_adpddrv_GetComMode(void);
uint16_t adi_adpddrv_OpenDriver(void);
uint16_t adi_adpddrv_CloseDriver(void);
uint16_t adi_adpddrv_SoftReset(void);
uint16_t adi_adpddrv_RegRead(uint16_t nAddr, uint16_t *pnData);
uint16_t adi_adpddrv_RegRead32B(uint16_t nAddr, uint32_t *pnData);
uint16_t adi_adpddrv_RegWrite(uint16_t nAddr, uint16_t nRegValue);
uint16_t adi_adpddrv_SetIdleMode(void);
uint16_t adi_adpddrv_ReadFifoData(uint16_t nDataSetSize, uint8_t *pnData);
void adi_adpddrv_DataReadyCallback(void (*pfADPDDataReady)(uint32_t nTick));
uint16_t adi_adpddrv_ReadRegData(ADI_ADPD_SLOT_NUM nSlotNum, uint8_t nSignalDark, uint8_t nChNum, uint32_t *pnData);
void adi_adpddrv_ISR(uint32_t nTick);
uint16_t adi_adpddrv_Multiple_RegRead(uint16_t nAddr, uint16_t nRegCount, uint16_t *pnData);
uint16_t adi_adpddrv_Multiple_RegWrite(uint16_t nRegCount, uint16_t *nRegValue);
uint16_t adi_adpddrv_GetDevId(void);

/*! \cond */
/* External function to be define in abstraction layer to access peripherals */
uint16_t Adpd400x_SPI_Transmit(uint8_t *pData, uint16_t Size);
uint16_t Adpd400x_SPI_Receive(uint8_t *pTxData, uint8_t *pRxData, uint16_t TxSize, uint16_t RxSize);
uint16_t Adpd400x_I2C_Transmit(uint8_t *register_address, uint16_t txsize);
uint16_t Adpd400x_I2C_TxRx(uint8_t *register_address, uint8_t *buffer, uint16_t txsize, uint16_t rxsize);
void MCU_HAL_Delay(uint32_t delay);
/*! \endcond */
#ifdef __TESSY_DEF__
void adi_adpdtessy_IsrCb(void);
#endif

#endif