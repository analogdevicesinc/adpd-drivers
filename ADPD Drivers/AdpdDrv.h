
/**
******************************************************************************
* @file     AdpdDrv.h
* @author   ADI
* @version  V2.2
* @date     13-November-2017
* @brief    Include file for the ADPD device driver
******************************************************************************
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

#ifndef __ADPDDrv__H
#define __ADPDDrv__H

#include <stdint.h>


/* Exported types ---------------------------------------------------------- */
typedef uint32_t ADPDData_t;

typedef enum {
	ADPDDrv_MODE_IDLE = 0,
	ADPDDrv_MODE_PAUSE,
	ADPDDrv_MODE_PWR_OFF,
	ADPDDrv_MODE_SAMPLE,
	ADPDDrv_MODE_PROXIMITY
} ADPDDrv_Operation_Mode_t;

/* ******* */
/* bit[3],          bit[2],         bit[1],         bit[0]      */
/* Reserve          32-bit         reserved         normal mode  */

/* bit[7],            bit[6],         bit[5],         bit[4]  */
/* Digital-int X1X2   Dig-int X1    Reserve         Sum   */

typedef enum {
	ADPDDrv_SLOT_OFF = 0x00,
	ADPDDrv_GESTURE = 0x02,
	ADPDDrv_PROXIMITY = 0x08,

	ADPDDrv_4CH_16  = 0x01,
	ADPDDrv_4CH_32  = 0x04,

	ADPDDrv_SUM_16 = 0x11,
	ADPDDrv_SUM_32 = 0x14,

	ADPDDrv_DIM1_16 = 0x41,
	ADPDDrv_DIM2_32 = 0x84,

} ADPDDrv_Operation_Slot_t;

typedef enum {
	MODULE_153GGRI = 1,
	MODULE_163URI = 2,
	MODULE_163URIR2 = 3,
	MODULE_163URIR3 = 4,
	MODULE_174GGI = 5,
} ADPDDrv_Efuse_t;
//
//
//      /* ******* */
//    /* bit[3],          bit[2],         bit[1],         bit[0]      */
//    /* Proximity       Dig-int X1X2     Digital-int X1  normal mode  */
//
//    /* bit[7],          bit[6],         bit[5],         bit[4]  */
//    /* Reserved         Reserved        32bits          Sum   */
//
//typedef enum {
//
//        ADPDDrv_SLOT_OFF = 0x00,
//        ADPDDrv_PROXIMITY = 0x08,
//
//        ADPDDrv_4CH_16  = 0x01,
//        ADPDDrv_4CH_32  = 0x21,
//
//        ADPDDrv_SUM_16 = 0x11,
//        ADPDDrv_SUM_32 = 0x31,
//
//        ADPDDrv_DIM1_16 = 0x02,
//        ADPDDrv_DIM2_32 = 0x24,
//
//} ADPDDrv_Operation_Slot_t;

/* ADPD set and get parameters */
/*  ADPD Parameter List
    Watermarking
    FifoLevel
*/
typedef enum {
	ADPD_WATERMARKING = 0,
	ADPD_FIFOLEVEL,
	ADPD_TIMEGAP,
	ADPD_DATASIZEA,
	ADPD_DATASIZEB,
	ADPD_SLOTMODEA,
	ADPD_SLOTMODEB
} AdpdCommandStruct;

/*!
  LED ID Identifier

   1 --> LED 1
   2 --> LED 2
*/
typedef uint8_t AdpdLedId;

/*
  Slot ID Identifier

   0 --> Slot A
   1 --> Slot B
*/
typedef uint8_t AdpdSlotId;

/* Exported constants ------------------------------------------------------ */
/*    Uncomment the following macro to enable the support for ADPD106/7 Devices   */
//#define ADPD_SPI

#ifdef ADPD_SPI
#define ADPD_SPI_WRITE              0x01
#define ADPD_SPI_READ               0x00
#endif //ADPD_SPI

/*  ADPD REGISTERS */
#define REG_INT_STATUS              0x00
#define REG_INT_MASK                0x01
#define REG_PAD_IO_CTRL             0x02
#define REG_I2CS_CTL_MATCH          0x06
#define REG_CHIP_ID                 0x08
#define REG_CLK_RATIO               0x0A
#define REG_SW_RESET                0x0F
#define REG_OP_MODE                 0x10
#define REG_OP_MODE_CFG             0x11
#define REG_SAMPLING_FREQ           0x12
#define REG_PD_SELECT               0x14
#define REG_DEC_MODE                0x15
#define REG_CH1_OFFSET_A            0x18
#define REG_CH2_OFFSET_A            0x19
#define REG_CH3_OFFSET_A            0x1A
#define REG_CH4_OFFSET_A            0x1B
#define REG_CH1_OFFSET_B            0x1E
#define REG_CH2_OFFSET_B            0x1F
#define REG_CH3_OFFSET_B            0x20
#define REG_CH4_OFFSET_B            0x21
#define REG_LED3_DRV                0x22
#define REG_LED1_DRV                0x23
#define REG_LED2_DRV                0x24
#define REG_LED_TRIM                0x25
#define REG_PULSE_OFFSET_A          0x30
#define REG_PULSE_PERIOD_A          0x31
#define REG_PULSE_MASK              0x34
#define REG_PULSE_OFFSET_B          0x35
#define REG_PULSE_PERIOD_B          0x36
#define REG_AFE_CTRL_A              0x39
#define REG_AFE_CTRL_B              0x3B
#define REG_AFE_TRIM_A              0x42
#define REG_AFE_TEST_A              0x43
#define REG_AFE_TRIM_B              0x44
#define REG_AFE_TEST_B              0x45
#define REG_OSC32K                  0x4B
#define REG_OSC32M_ADJ              0x4D
#define REG_OSC32M_CAL              0x50
#define REG_TEST_PD                 0x52
#define REG_AFE_POWER_CTL           0x54
#define REG_EFUSE_CTRL              0x57
#define REG_CALIBRATE               0x58
#define REG_DIG_INT_CFG             0x5A
#define REG_FIFO_CLK                0x5F
#define REG_DATA_BUFFER             0x60

#define REG_EFUSE_STATUS0           0x67

#define REG_X1_A                    0x64
#define REG_X2_A                    0x65
#define REG_Y1_A                    0x66
#define REG_Y2_A                    0x67
#define REG_X1_B                    0x68
#define REG_X2_B                    0x69
#define REG_Y1_B                    0x6A
#define REG_Y2_B                    0x6B
#define REG_READ_X1L_A              0x70
#define REG_READ_X2L_A              0x71
#define REG_READ_Y1L_A              0x72
#define REG_READ_Y2L_A              0x73
#define REG_READ_X1H_A              0x74
#define REG_READ_X2H_A              0x75
#define REG_READ_Y1H_A              0x76
#define REG_READ_Y2H_A              0x77
#define REG_READ_X1L_B              0x78
#define REG_READ_X2L_B              0x79
#define REG_READ_Y1L_B              0x7A
#define REG_READ_Y2L_B              0x7B
#define REG_READ_X1H_B              0x7C
#define REG_READ_X2H_B              0x7D
#define REG_READ_Y1H_B              0x7E
#define REG_READ_Y2H_B              0x7F

/*  REGISTER Values */
#define OP_IDLE_MODE            0
#define OP_PAUSE_MODE           1
#define OP_RUN_MODE             2

#define FIFO_CLK_EN             0x0001
#define FIFO_CLK_DIS            0x0000

// IRQ related
#define FIFO_CLR                0x8000
#define FIFO_INT_EN             0xC0FF
#define PROX_ON1_INT_EN         0x01FE
#define IRQ_CLR_ALL             0x01FF
#define IRQ_CLR_FIFO            0x8000
#define IRQ_MASK_RAW            0x0060
#define IRQ_RAW_AB_EN           0xC19F
#define IRQ_RAW_A_EN            0xC1DF
#define IRQ_RAW_B_EN            0xC1BF

// Slot related
#define RDOUT_MODE_EN           0x2000
#define FIFO_PREVENT_EN         0x1000

#define PROX_A_DATA_SIZE        0x2
#define PROX_A_MODE             0x0006
#define PROX_SAMPLE_ENABLE      0x0800

#define GEST_A_DATA_SIZE        0x4
#define GEST_A_MODE             0x000B

#define SLOT_A_DATA_SIZE        0x8
#define SLOT_B_DATA_SIZE        0x8
#define SLOT_AB_DATA_SIZE       0x10
#define SLOT_MASK               0x3E00
#define SLOT_A_MODE             0x0011
#define SLOT_B_MODE             0x0120
#define SLOT_AB_MODE            0x0131

#define SLOT_A_MODE_32          0x0019
#define SLOT_A_DATA_SIZE_32     0x10
#define SLOT_B_MODE_32          0x01A0
#define SLOT_B_DATA_SIZE_32     0x10

#define SLOT_A_DATA_SIZE_R4_SUM     0x4
#define SLOT_B_DATA_SIZE_R4_SUM     0x4
#define SLOT_AB_DATA_SIZE_R4_SUM    0x8
#define SLOT_A_MODE_R4_SUM          0x0009
#define SLOT_B_MODE_R4_SUM          0x00A0
#define SLOT_AB_MODE_R4_SUM         0x00A9


#define SLOT_A_DATA_SIZE_SUM16      0x2
#define SLOT_A_MODE_SUM16           0x0005
#define SLOT_B_DATA_SIZE_SUM16      0x2
#define SLOT_B_MODE_SUM16           0x0060


#define SLOT_A_DATA_SIZE_D2_32      0x8
#define SLOT_A_D2_32                0x0011
#define SLOT_A_DATA_SIZE_D1_16      0x2
#define SLOT_A_D1_16                0x0005

#define SLOT_B_DATA_SIZE_D2_32      0x8
#define SLOT_B_D2_32                0x0120
#define SLOT_B_DATA_SIZE_D1_16      0x2
#define SLOT_B_D1_16                0x0060

#define SINGLE_CH_DIG_INT_B         0x8000
#define DIGITAL_INTEGRATE_B_EN      0x2000

#define ADPDDrv_SUCCESS (0)
#define ADPDDrv_ERROR (-1)

#define SLOT_A          1
#define SLOT_B          2

#define LED_1           1
#define LED_2           2

/*LED Current */
#define LED_CURRENT_MASK                    0xFFF0
#define LED_CURRENT_BITPOS                  0

/* LED Number of Pulses */
#define LED_NUMBER_PULSES_MASK                0x00FF
#define LED_NUMBER_PULSES_BITPOS              8

/* LED Trim */
#define LED_1_TRIM_MASK                     0xFFE0
#define LED_2_TRIM_MASK                     0xF83F
#define LED_1_TRIM_BITPOS                   0
#define LED_2_TRIM_BITPOS                   6

/* INTERNAL AVERAGE */
#define INT_AVG_SLOT_A_MASK                 0xFF8F
#define INT_AVG_SLOT_B_MASK                 0xF8FF
#define INT_AVG_SLOT_A_BITPOS               0x04
#define INT_AVG_SLOT_B_BITPOS               0x08

/* Slot LED */
#define SLOT_A_LED_CON_MASK           0xFFFC
#define SLOT_A_LED_CON_BITPOS         0

#define SLOT_B_LED_CON_MASK           0xFFF3
#define SLOT_B_LED_CON_BITPOS         2

/* AFE TIA Gain*/
#define AFE_TIA_GAIN_MASK                   0xFFFC
#define AFE_TIA_GAIN_BITPOS                 0

/* ADC OFFSET */
#define ADC_MASK                       0xC000

/* Digital Integration */
#define DISLOTMODEMASK          0xC0

#define DIGITAL_INTEGRATE_A_EN      0x1000
#define DIGITAL_INTEGRATE_B_EN      0x2000
#define DIGITAL_INTEGRATE_MASK      0xCFFF

#define AFE_DIG_INT_MASK            0x00FF
#define AFE_NORMAL_MODE             0x1C00
#define AFE_DIG_INT_MODE            0x1D00
/* Adpd control functions */
void Init(void);
int16_t AdpdDrvSoftReset(void);
int16_t AdpdDrvOpenDriver(void);
int16_t AdpdDrvCloseDriver(void);
/*Used during load configuration, to prevent setting of unlisted registers in configuration*/
/* Adpd register read and write functions */
int16_t AdpdDrvRegRead(uint16_t nAddr, uint16_t *pnData);
int16_t AdpdDrvRegWrite(uint16_t nAddr, uint16_t nRegValue);
/* Adpd slot selection and operation mode setting */
int16_t AdpdDrvSetSlot(uint8_t nSlotA, uint8_t nSlotB);
int16_t AdpdDrvSetOperationMode(uint8_t nOpMode);
/* Adpd read data from hardware fifo */
int16_t AdpdDrvReadFifoData(uint8_t *pnData, uint16_t nDataSetSize);
void AdpdISR();
int16_t AdpdDrvSetParameter(AdpdCommandStruct eCommand, uint16_t nValue);
int16_t AdpdDrvGetParameter(AdpdCommandStruct eCommand, uint16_t *pnValue);
/* Adpd register interrupt callback */
void AdpdDrvDataReadyCallback(void (*pfAdpdDataReady)());
/* Adpd read efuse data */
int16_t AdpdDrvEfuseRead(uint16_t *pReg_Values, uint8_t nSize);
int16_t AdpdDrvSetLedCurrent(uint8_t nLedCurrent, AdpdLedId nLedId);
int16_t AdpdDrvGetLedCurrent(uint8_t *pLedCurrent, AdpdLedId nLedId);
int16_t AdpdDrvSetLedTrimCurrent(uint8_t nLedTrim, AdpdLedId nLedId);
int16_t AdpdDrvGetLedTrimCurrent(uint8_t *pLedTrim, AdpdLedId nLedId);
int16_t AdpdDrvSetNumPulses(uint8_t nNumPulses, AdpdSlotId nSlotId);
int16_t AdpdDrvGetNumPulses(uint8_t *pNumPulses, AdpdSlotId nSlotId);
int16_t AdpdDrvSetAfeTiaGain(uint8_t nTiaGain, AdpdSlotId nSlotId);
int16_t AdpdDrvGetAfeTiaGain(uint8_t *pTiaGain, AdpdSlotId nSlotId);
int16_t AdpdDrvSetSamplingFrequency(uint16_t nSamplingFreq);
int16_t AdpdDrvGetSamplingFrequency(uint16_t *pSamplingFreq);
int16_t AdpdDrvSetSlotLed(uint8_t nLedConnection, uint8_t nSlotId);
int16_t AdpdDrvGetSlotLed(uint8_t *pLedConnection, uint8_t nSlotId);
int16_t AdpdDrvSetInternalAverage(uint8_t nAvgFactor, uint8_t nSlotId);
int16_t AdpdDrvGetInternalAverage(uint8_t* pAvgFactor, uint8_t nSlotId);
int16_t AdpdDrvSetAdcOffset(uint16_t nAdcOffset, uint8_t nChannel,
                            AdpdSlotId nSlotId);
int16_t AdpdDrvGetAdcOffset(uint16_t *pAdcOffset, uint8_t nChannel,
                            AdpdSlotId nSlotId);
int16_t AdpdFillDataToArray(uint32_t *pnaADPDData, uint8_t *FifoData);

#endif
