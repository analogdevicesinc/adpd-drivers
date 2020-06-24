/**
******************************************************************************
* @file     adi_adpd_reg.h
* @author   ADI
* @version  V0.1
* @date     15-June-2020
* @brief    ADI ADPD4x chip register macro definition file.
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
#ifndef __ADI_ADPD4x_REG_DEF_H
#define __ADI_ADPD4x_REG_DEF_H

/*! \cond RegisterName
*/
#define ADPD4x_REG_INT_STATUS_FIFO         	(0x0000U)
#define ADPD4x_REG_INT_STATUS_DATA         	(0x0001U)
#define ADPD4x_REG_INT_STATUS_LEV0         	(0x0002U)
#define ADPD4x_REG_INT_STATUS_LEV1         	(0x0003U)
#define ADPD4x_REG_INT_STATUS_TS1          	(0x0004U)
#define ADPD4x_REG_INT_STATUS_TS2          	(0x0005U)
#define ADPD4x_REG_FIFO_CTL                	(0x0006U)
#define ADPD4x_REG_INT_ACLEAR              	(0x0007U)
#define ADPD4x_REG_CHIP_ID                 	(0x0008U)
#define ADPD4x_REG_OSC32M                  	(0x0009U)
#define ADPD4x_REG_OSC32M_CAL              	(0x000aU)
#define ADPD4x_REG_OSC1M                   	(0x000bU)
#define ADPD4x_REG_OSC32K                  	(0x000cU)
#define ADPD4x_REG_TS_FREQ                 	(0x000dU)
#define ADPD4x_REG_TS_FREQH                	(0x000eU)
#define ADPD4x_REG_SYS_CTL                 	(0x000FU)
#define ADPD4x_REG_OPMODE                  	(0x0010U)
#define ADPD4x_REG_STAMP_L                 	(0x0011U)
#define ADPD4x_REG_STAMP_H                 	(0x0012U)
#define ADPD4x_REG_STAMPDELTA              	(0x0013U)
#define ADPD4x_REG_INT_ENABLE_XD           	(0x0014U)
#define ADPD4x_REG_INT_ENABLE_YD           	(0x0015U)
#define ADPD4x_REG_INT_ENABLE_XL0          	(0x0016U)
#define ADPD4x_REG_INT_ENABLE_XL1          	(0x0017U)
#define ADPD4x_REG_INT_ENABLE_XT1          	(0x0018U)
#define ADPD4x_REG_INT_ENABLE_XT2          	(0x0019U)
#define ADPD4x_REG_INT_ENABLE_YL0          	(0x001aU)
#define ADPD4x_REG_INT_ENABLE_YL1          	(0x001bU)
#define ADPD4x_REG_INT_ENABLE_YT1          	(0x001cU)
#define ADPD4x_REG_INT_ENABLE_YT2          	(0x001dU)
#define ADPD4x_REG_FIFO_STATUS_BYTES       	(0x001EU)
#define ADPD4x_REG_INPUT_SLEEP             	(0x0020U)
#define ADPD4x_REG_INPUT_CFG               	(0x0021U)
#define ADPD4x_REG_GPIO_CFG                	(0x0022U)
#define ADPD4x_REG_GPIO01                  	(0x0023U)
#define ADPD4x_REG_GPIO23                  	(0x0024U)
#define ADPD4x_REG_GPIO_IN                 	(0x0025U)
#define ADPD4x_REG_GPIO_EXT                	(0x0026U)
#define ADPD4x_REG_DATA_HOLD_FLAG          	(0x002EU)
#define ADPD4x_REG_FIFO_DATA               	(0x002FU)
#define ADPD4x_REG_SIGNAL1_L_A             	(0x0030U)
#define ADPD4x_REG_SIGNAL1_H_A             	(0x0031U)
#define ADPD4x_REG_SIGNAL2_L_A             	(0x0032U)
#define ADPD4x_REG_SIGNAL2_H_A             	(0x0033U)
#define ADPD4x_REG_DARK1_L_A               	(0x0034U)
#define ADPD4x_REG_DARK1_H_A               	(0x0035U)
#define ADPD4x_REG_DARK2_L_A               	(0x0036U)
#define ADPD4x_REG_DARK2_H_A               	(0x0037U)
#define ADPD4x_REG_SIGNAL1_L_B             	(0x0038U)
#define ADPD4x_REG_SIGNAL1_H_B             	(0x0039U)
#define ADPD4x_REG_SIGNAL2_L_B             	(0x003AU)
#define ADPD4x_REG_SIGNAL2_H_B             	(0x003BU)
#define ADPD4x_REG_DARK1_L_B               	(0x003CU)
#define ADPD4x_REG_DARK1_H_B               	(0x003DU)
#define ADPD4x_REG_DARK2_L_B               	(0x003EU)
#define ADPD4x_REG_DARK2_H_B               	(0x003FU)
#define ADPD4x_REG_SIGNAL1_L_C             	(0x0040U)
#define ADPD4x_REG_SIGNAL1_H_C             	(0x0041U)
#define ADPD4x_REG_SIGNAL2_L_C             	(0x0042U)
#define ADPD4x_REG_SIGNAL2_H_C             	(0x0043U)
#define ADPD4x_REG_DARK1_L_C               	(0x0044U)
#define ADPD4x_REG_DARK1_H_C               	(0x0045U)
#define ADPD4x_REG_DARK2_L_C               	(0x0046U)
#define ADPD4x_REG_DARK2_H_C               	(0x0047U)
#define ADPD4x_REG_SIGNAL1_L_D             	(0x0048U)
#define ADPD4x_REG_SIGNAL1_H_D             	(0x0049U)
#define ADPD4x_REG_SIGNAL2_L_D             	(0x004AU)
#define ADPD4x_REG_SIGNAL2_H_D             	(0x004BU)
#define ADPD4x_REG_DARK1_L_D               	(0x004CU)
#define ADPD4x_REG_DARK1_H_D               	(0x004DU)
#define ADPD4x_REG_DARK2_L_D               	(0x004EU)
#define ADPD4x_REG_DARK2_H_D               	(0x004FU)
#define ADPD4x_REG_SIGNAL1_L_E             	(0x0050U)
#define ADPD4x_REG_SIGNAL1_H_E             	(0x0051U)
#define ADPD4x_REG_SIGNAL2_L_E             	(0x0052U)
#define ADPD4x_REG_SIGNAL2_H_E             	(0x0053U)
#define ADPD4x_REG_DARK1_L_E               	(0x0054U)
#define ADPD4x_REG_DARK1_H_E               	(0x0055U)
#define ADPD4x_REG_DARK2_L_E               	(0x0056U)
#define ADPD4x_REG_DARK2_H_E               	(0x0057U)
#define ADPD4x_REG_SIGNAL1_L_F             	(0x0058U)
#define ADPD4x_REG_SIGNAL1_H_F             	(0x0059U)
#define ADPD4x_REG_SIGNAL2_L_F             	(0x005AU)
#define ADPD4x_REG_SIGNAL2_H_F             	(0x005BU)
#define ADPD4x_REG_DARK1_L_F               	(0x005CU)
#define ADPD4x_REG_DARK1_H_F               	(0x005DU)
#define ADPD4x_REG_DARK2_L_F               	(0x005EU)
#define ADPD4x_REG_DARK2_H_F               	(0x005FU)
#define ADPD4x_REG_SIGNAL1_L_G             	(0x0060U)
#define ADPD4x_REG_SIGNAL1_H_G             	(0x0061U)
#define ADPD4x_REG_SIGNAL2_L_G             	(0x0062U)
#define ADPD4x_REG_SIGNAL2_H_G             	(0x0063U)
#define ADPD4x_REG_DARK1_L_G               	(0x0064U)
#define ADPD4x_REG_DARK1_H_G               	(0x0065U)
#define ADPD4x_REG_DARK2_L_G               	(0x0066U)
#define ADPD4x_REG_DARK2_H_G               	(0x0067U)
#define ADPD4x_REG_SIGNAL1_L_H             	(0x0068U)
#define ADPD4x_REG_SIGNAL1_H_H             	(0x0069U)
#define ADPD4x_REG_SIGNAL2_L_H             	(0x006AU)
#define ADPD4x_REG_SIGNAL2_H_H             	(0x006BU)
#define ADPD4x_REG_DARK1_L_H               	(0x006CU)
#define ADPD4x_REG_DARK1_H_H               	(0x006DU)
#define ADPD4x_REG_DARK2_L_H               	(0x006EU)
#define ADPD4x_REG_DARK2_H_H               	(0x006FU)
#define ADPD4x_REG_SIGNAL1_L_I             	(0x0070U)
#define ADPD4x_REG_SIGNAL1_H_I             	(0x0071U)
#define ADPD4x_REG_SIGNAL2_L_I             	(0x0072U)
#define ADPD4x_REG_SIGNAL2_H_I             	(0x0073U)
#define ADPD4x_REG_DARK1_L_I               	(0x0074U)
#define ADPD4x_REG_DARK1_H_I               	(0x0075U)
#define ADPD4x_REG_DARK2_L_I               	(0x0076U)
#define ADPD4x_REG_DARK2_H_I               	(0x0077U)
#define ADPD4x_REG_SIGNAL1_L_J             	(0x0078U)
#define ADPD4x_REG_SIGNAL1_H_J             	(0x0079U)
#define ADPD4x_REG_SIGNAL2_L_J             	(0x007AU)
#define ADPD4x_REG_SIGNAL2_H_J             	(0x007BU)
#define ADPD4x_REG_DARK1_L_J               	(0x007CU)
#define ADPD4x_REG_DARK1_H_J               	(0x007DU)
#define ADPD4x_REG_DARK2_L_J               	(0x007EU)
#define ADPD4x_REG_DARK2_H_J               	(0x007FU)
#define ADPD4x_REG_SIGNAL1_L_K             	(0x0080U)
#define ADPD4x_REG_SIGNAL1_H_K             	(0x0081U)
#define ADPD4x_REG_SIGNAL2_L_K             	(0x0082U)
#define ADPD4x_REG_SIGNAL2_H_K             	(0x0083U)
#define ADPD4x_REG_DARK1_L_K               	(0x0084U)
#define ADPD4x_REG_DARK1_H_K               	(0x0085U)
#define ADPD4x_REG_DARK2_L_K               	(0x0086U)
#define ADPD4x_REG_DARK2_H_K               	(0x0087U)
#define ADPD4x_REG_SIGNAL1_L_L             	(0x0088U)
#define ADPD4x_REG_SIGNAL1_H_L             	(0x0089U)
#define ADPD4x_REG_SIGNAL2_L_L             	(0x008AU)
#define ADPD4x_REG_SIGNAL2_H_L             	(0x008BU)
#define ADPD4x_REG_DARK1_L_L               	(0x008CU)
#define ADPD4x_REG_DARK1_H_L               	(0x008DU)
#define ADPD4x_REG_DARK2_L_L               	(0x008EU)
#define ADPD4x_REG_DARK2_H_L               	(0x008FU)
#define ADPD4x_REG_OSC_TRIM                	(0x00A0U)
#define ADPD4x_REG_OSC32K_TRIM             	(0x00A1U)
#define ADPD4x_REG_WAKE1                   	(0x00A2U)
#define ADPD4x_REG_WAKE2                   	(0x00A3U)
#define ADPD4x_REG_EFUSE                   	(0x00A4U)
#define ADPD4x_REG_ADC_CTRL1               	(0x00A5U)
#define ADPD4x_REG_ADC_CTRL2               	(0x00A6U)
#define ADPD4x_REG_ADC_POST                	(0x00A7U)
#define ADPD4x_REG_REF_CTRL                	(0x00A8U)
#define ADPD4x_REG_BIAS_CTRL               	(0x00A9U)
#define ADPD4x_REG_BIAS_TRIM1              	(0x00AAU)
#define ADPD4x_REG_BIAS_TRIM2              	(0x00ABU)
#define ADPD4x_REG_BG_CTRL                 	(0x00ACU)
#define ADPD4x_REG_AFE_POWER_FRC           	(0x00ADU)
#define ADPD4x_REG_REF_POWER_FRC           	(0x00AEU)
#define ADPD4x_REG_LED_POWER_FRC           	(0x00AFU)
#define ADPD4x_REG_TEST_MODE               	(0x00B0U)
#define ADPD4x_REG_LED_TRIM                	(0x00B1U)
#define ADPD4x_REG_LED_TEST                	(0x00B2U)
#define ADPD4x_REG_CMCLK_CFG               	(0x00B3U)
#define ADPD4x_REG_IO_ADJUST               	(0x00B4U)
#define ADPD4x_REG_SCAN_MODE               	(0x00B5U)
#define ADPD4x_REG_I2C_KEY                 	(0x00B6U)
#define ADPD4x_REG_I2C_ADDR                	(0x00B7U)
#define ADPD4x_REG_TIA_TEST                	(0x00B8U)
#define ADPD4x_REG_TS_CTRL_A               	(0x0100U)
#define ADPD4x_REG_TS_PATH_A               	(0x0101U)
#define ADPD4x_REG_INPUTS_A                	(0x0102U)
#define ADPD4x_REG_CATHODE_A               	(0x0103U)
#define ADPD4x_REG_AFE_TRIM_A              	(0x0104U)
#define ADPD4x_REG_LED_POW12_A             	(0x0105U)
#define ADPD4x_REG_LED_POW34_A             	(0x0106U)
#define ADPD4x_REG_COUNTS_A                	(0x0107U)
#define ADPD4x_REG_PERIOD_A                	(0x0108U)
#define ADPD4x_REG_LED_PULSE_A             	(0x0109U)
#define ADPD4x_REG_INTEG_WIDTH_A           	(0x010AU)
#define ADPD4x_REG_INTEG_OFFSET_A          	(0x010BU)
#define ADPD4x_REG_MOD_PULSE_A             	(0x010CU)
#define ADPD4x_REG_PATTERN_A               	(0x010DU)
#define ADPD4x_REG_ADC_OFF1_A              	(0x010EU)
#define ADPD4x_REG_ADC_OFF2_A              	(0x010FU)
#define ADPD4x_REG_DATA1_A                 	(0x0110U)
#define ADPD4x_REG_DATA2_A                 	(0x0111U)
#define ADPD4x_REG_DECIMATE_A              	(0x0112U)
#define ADPD4x_REG_DIGINT_LIT_A            	(0x0113U)
#define ADPD4x_REG_DIGINT_DARK_A           	(0x0114U)
#define ADPD4x_REG_THRESH_CFG_A            	(0x0115U)
#define ADPD4x_REG_THRESH0_A               	(0x0116U)
#define ADPD4x_REG_THRESH1_A               	(0x0117U)
#define ADPD4x_REG_PATTERN2_A              	(0x0118U)
#define ADPD4x_REG_TS_CTRL_B               	(0x0120U)
#define ADPD4x_REG_TS_PATH_B               	(0x0121U)
#define ADPD4x_REG_INPUTS_B                	(0x0122U)
#define ADPD4x_REG_CATHODE_B               	(0x0123U)
#define ADPD4x_REG_AFE_TRIM_B              	(0x0124U)
#define ADPD4x_REG_LED_POW12_B             	(0x0125U)
#define ADPD4x_REG_LED_POW34_B             	(0x0126U)
#define ADPD4x_REG_COUNTS_B                	(0x0127U)
#define ADPD4x_REG_PERIOD_B                	(0x0128U)
#define ADPD4x_REG_LED_PULSE_B             	(0x0129U)
#define ADPD4x_REG_INTEG_WIDTH_B           	(0x012AU)
#define ADPD4x_REG_INTEG_OFFSET_B          	(0x012BU)
#define ADPD4x_REG_MOD_PULSE_B             	(0x012CU)
#define ADPD4x_REG_PATTERN_B               	(0x012DU)
#define ADPD4x_REG_ADC_OFF1_B              	(0x012EU)
#define ADPD4x_REG_ADC_OFF2_B              	(0x012FU)
#define ADPD4x_REG_DATA1_B                 	(0x0130U)
#define ADPD4x_REG_DATA2_B                 	(0x0131U)
#define ADPD4x_REG_DECIMATE_B              	(0x0132U)
#define ADPD4x_REG_DIGINT_LIT_B            	(0x0133U)
#define ADPD4x_REG_DIGINT_DARK_B           	(0x0134U)
#define ADPD4x_REG_THRESH_CFG_B            	(0x0135U)
#define ADPD4x_REG_THRESH0_B               	(0x0136U)
#define ADPD4x_REG_THRESH1_B               	(0x0137U)
#define ADPD4x_REG_PATTERN2_B              	(0x0138U)
#define ADPD4x_REG_TS_CTRL_C               	(0x0140U)
#define ADPD4x_REG_TS_PATH_C               	(0x0141U)
#define ADPD4x_REG_INPUTS_C                	(0x0142U)
#define ADPD4x_REG_CATHODE_C               	(0x0143U)
#define ADPD4x_REG_AFE_TRIM_C              	(0x0144U)
#define ADPD4x_REG_LED_POW12_C             	(0x0145U)
#define ADPD4x_REG_LED_POW34_C             	(0x0146U)
#define ADPD4x_REG_COUNTS_C                	(0x0147U)
#define ADPD4x_REG_PERIOD_C                	(0x0148U)
#define ADPD4x_REG_LED_PULSE_C             	(0x0149U)
#define ADPD4x_REG_INTEG_WIDTH_C           	(0x014AU)
#define ADPD4x_REG_INTEG_OFFSET_C          	(0x014BU)
#define ADPD4x_REG_MOD_PULSE_C             	(0x014CU)
#define ADPD4x_REG_PATTERN_C               	(0x014DU)
#define ADPD4x_REG_ADC_OFF1_C              	(0x014EU)
#define ADPD4x_REG_ADC_OFF2_C              	(0x014FU)
#define ADPD4x_REG_DATA1_C                 	(0x0150U)
#define ADPD4x_REG_DATA2_C                 	(0x0151U)
#define ADPD4x_REG_DECIMATE_C              	(0x0152U)
#define ADPD4x_REG_DIGINT_LIT_C            	(0x0153U)
#define ADPD4x_REG_DIGINT_DARK_C           	(0x0154U)
#define ADPD4x_REG_THRESH_CFG_C            	(0x0155U)
#define ADPD4x_REG_THRESH0_C               	(0x0156U)
#define ADPD4x_REG_THRESH1_C               	(0x0157U)
#define ADPD4x_REG_PATTERN2_C              	(0x0158U)
#define ADPD4x_REG_TS_CTRL_D               	(0x0160U)
#define ADPD4x_REG_TS_PATH_D               	(0x0161U)
#define ADPD4x_REG_INPUTS_D                	(0x0162U)
#define ADPD4x_REG_CATHODE_D               	(0x0163U)
#define ADPD4x_REG_AFE_TRIM_D              	(0x0164U)
#define ADPD4x_REG_LED_POW12_D             	(0x0165U)
#define ADPD4x_REG_LED_POW34_D             	(0x0166U)
#define ADPD4x_REG_COUNTS_D                	(0x0167U)
#define ADPD4x_REG_PERIOD_D                	(0x0168U)
#define ADPD4x_REG_LED_PULSE_D             	(0x0169U)
#define ADPD4x_REG_INTEG_WIDTH_D           	(0x016AU)
#define ADPD4x_REG_INTEG_OFFSET_D          	(0x016BU)
#define ADPD4x_REG_MOD_PULSE_D             	(0x016CU)
#define ADPD4x_REG_PATTERN_D               	(0x016DU)
#define ADPD4x_REG_ADC_OFF1_D              	(0x016EU)
#define ADPD4x_REG_ADC_OFF2_D              	(0x016FU)
#define ADPD4x_REG_DATA1_D                 	(0x0170U)
#define ADPD4x_REG_DATA2_D                 	(0x0171U)
#define ADPD4x_REG_DECIMATE_D              	(0x0172U)
#define ADPD4x_REG_DIGINT_LIT_D            	(0x0173U)
#define ADPD4x_REG_DIGINT_DARK_D           	(0x0174U)
#define ADPD4x_REG_THRESH_CFG_D            	(0x0175U)
#define ADPD4x_REG_THRESH0_D               	(0x0176U)
#define ADPD4x_REG_THRESH1_D               	(0x0177U)
#define ADPD4x_REG_PATTERN2_D              	(0x0178U)
#define ADPD4x_REG_TS_CTRL_E               	(0x0180U)
#define ADPD4x_REG_TS_PATH_E               	(0x0181U)
#define ADPD4x_REG_INPUTS_E                	(0x0182U)
#define ADPD4x_REG_CATHODE_E               	(0x0183U)
#define ADPD4x_REG_AFE_TRIM_E              	(0x0184U)
#define ADPD4x_REG_LED_POW12_E             	(0x0185U)
#define ADPD4x_REG_LED_POW34_E             	(0x0186U)
#define ADPD4x_REG_COUNTS_E                	(0x0187U)
#define ADPD4x_REG_PERIOD_E                	(0x0188U)
#define ADPD4x_REG_LED_PULSE_E             	(0x0189U)
#define ADPD4x_REG_INTEG_WIDTH_E           	(0x018AU)
#define ADPD4x_REG_INTEG_OFFSET_E          	(0x018BU)
#define ADPD4x_REG_MOD_PULSE_E             	(0x018CU)
#define ADPD4x_REG_PATTERN_E               	(0x018DU)
#define ADPD4x_REG_ADC_OFF1_E              	(0x018EU)
#define ADPD4x_REG_ADC_OFF2_E              	(0x018FU)
#define ADPD4x_REG_DATA1_E                 	(0x0190U)
#define ADPD4x_REG_DATA2_E                 	(0x0191U)
#define ADPD4x_REG_DECIMATE_E              	(0x0192U)
#define ADPD4x_REG_DIGINT_LIT_E            	(0x0193U)
#define ADPD4x_REG_DIGINT_DARK_E           	(0x0194U)
#define ADPD4x_REG_THRESH_CFG_E            	(0x0195U)
#define ADPD4x_REG_THRESH0_E               	(0x0196U)
#define ADPD4x_REG_THRESH1_E               	(0x0197U)
#define ADPD4x_REG_PATTERN2_E              	(0x0198U)
#define ADPD4x_REG_TS_CTRL_F               	(0x01A0U)
#define ADPD4x_REG_TS_PATH_F               	(0x01A1U)
#define ADPD4x_REG_INPUTS_F                	(0x01A2U)
#define ADPD4x_REG_CATHODE_F               	(0x01A3U)
#define ADPD4x_REG_AFE_TRIM_F              	(0x01A4U)
#define ADPD4x_REG_LED_POW12_F             	(0x01A5U)
#define ADPD4x_REG_LED_POW34_F             	(0x01A6U)
#define ADPD4x_REG_COUNTS_F                	(0x01A7U)
#define ADPD4x_REG_PERIOD_F                	(0x01A8U)
#define ADPD4x_REG_LED_PULSE_F             	(0x01A9U)
#define ADPD4x_REG_INTEG_WIDTH_F           	(0x01AAU)
#define ADPD4x_REG_INTEG_OFFSET_F          	(0x01ABU)
#define ADPD4x_REG_MOD_PULSE_F             	(0x01ACU)
#define ADPD4x_REG_PATTERN_F               	(0x01ADU)
#define ADPD4x_REG_ADC_OFF1_F              	(0x01AEU)
#define ADPD4x_REG_ADC_OFF2_F              	(0x01AFU)
#define ADPD4x_REG_DATA1_F                 	(0x01B0U)
#define ADPD4x_REG_DATA2_F                 	(0x01B1U)
#define ADPD4x_REG_DECIMATE_F              	(0x01B2U)
#define ADPD4x_REG_DIGINT_LIT_F            	(0x01B3U)
#define ADPD4x_REG_DIGINT_DARK_F           	(0x01B4U)
#define ADPD4x_REG_THRESH_CFG_F            	(0x01B5U)
#define ADPD4x_REG_THRESH0_F               	(0x01B6U)
#define ADPD4x_REG_THRESH1_F               	(0x01B7U)
#define ADPD4x_REG_PATTERN2_F              	(0x01B8U)
#define ADPD4x_REG_TS_CTRL_G               	(0x01C0U)
#define ADPD4x_REG_TS_PATH_G               	(0x01C1U)
#define ADPD4x_REG_INPUTS_G                	(0x01C2U)
#define ADPD4x_REG_CATHODE_G               	(0x01C3U)
#define ADPD4x_REG_AFE_TRIM_G              	(0x01C4U)
#define ADPD4x_REG_LED_POW12_G             	(0x01C5U)
#define ADPD4x_REG_LED_POW34_G             	(0x01C6U)
#define ADPD4x_REG_COUNTS_G                	(0x01C7U)
#define ADPD4x_REG_PERIOD_G                	(0x01C8U)
#define ADPD4x_REG_LED_PULSE_G             	(0x01C9U)
#define ADPD4x_REG_INTEG_WIDTH_G           	(0x01CAU)
#define ADPD4x_REG_INTEG_OFFSET_G          	(0x01CBU)
#define ADPD4x_REG_MOD_PULSE_G             	(0x01CCU)
#define ADPD4x_REG_PATTERN_G               	(0x01CDU)
#define ADPD4x_REG_ADC_OFF1_G              	(0x01CEU)
#define ADPD4x_REG_ADC_OFF2_G              	(0x01CFU)
#define ADPD4x_REG_DATA1_G                 	(0x01D0U)
#define ADPD4x_REG_DATA2_G                 	(0x01D1U)
#define ADPD4x_REG_DECIMATE_G              	(0x01D2U)
#define ADPD4x_REG_DIGINT_LIT_G            	(0x01D3U)
#define ADPD4x_REG_DIGINT_DARK_G           	(0x01D4U)
#define ADPD4x_REG_THRESH_CFG_G            	(0x01D5U)
#define ADPD4x_REG_THRESH0_G               	(0x01D6U)
#define ADPD4x_REG_THRESH1_G               	(0x01D7U)
#define ADPD4x_REG_PATTERN2_G              	(0x01D8U)
#define ADPD4x_REG_TS_CTRL_H               	(0x01E0U)
#define ADPD4x_REG_TS_PATH_H               	(0x01E1U)
#define ADPD4x_REG_INPUTS_H                	(0x01E2U)
#define ADPD4x_REG_CATHODE_H               	(0x01E3U)
#define ADPD4x_REG_AFE_TRIM_H              	(0x01E4U)
#define ADPD4x_REG_LED_POW12_H             	(0x01E5U)
#define ADPD4x_REG_LED_POW34_H             	(0x01E6U)
#define ADPD4x_REG_COUNTS_H                	(0x01E7U)
#define ADPD4x_REG_PERIOD_H                	(0x01E8U)
#define ADPD4x_REG_LED_PULSE_H             	(0x01E9U)
#define ADPD4x_REG_INTEG_WIDTH_H           	(0x01EAU)
#define ADPD4x_REG_INTEG_OFFSET_H          	(0x01EBU)
#define ADPD4x_REG_MOD_PULSE_H             	(0x01ECU)
#define ADPD4x_REG_PATTERN_H               	(0x01EDU)
#define ADPD4x_REG_ADC_OFF1_H              	(0x01EEU)
#define ADPD4x_REG_ADC_OFF2_H              	(0x01EFU)
#define ADPD4x_REG_DATA1_H                 	(0x01F0U)
#define ADPD4x_REG_DATA2_H                 	(0x01F1U)
#define ADPD4x_REG_DECIMATE_H              	(0x01F2U)
#define ADPD4x_REG_DIGINT_LIT_H            	(0x01F3U)
#define ADPD4x_REG_DIGINT_DARK_H           	(0x01F4U)
#define ADPD4x_REG_THRESH_CFG_H            	(0x01F5U)
#define ADPD4x_REG_THRESH0_H               	(0x01F6U)
#define ADPD4x_REG_THRESH1_H               	(0x01F7U)
#define ADPD4x_REG_PATTERN2_H              	(0x01F8U)
#define ADPD4x_REG_TS_CTRL_I               	(0x0200U)
#define ADPD4x_REG_TS_PATH_I               	(0x0201U)
#define ADPD4x_REG_INPUTS_I                	(0x0202U)
#define ADPD4x_REG_CATHODE_I               	(0x0203U)
#define ADPD4x_REG_AFE_TRIM_I              	(0x0204U)
#define ADPD4x_REG_LED_POW12_I             	(0x0205U)
#define ADPD4x_REG_LED_POW34_I             	(0x0206U)
#define ADPD4x_REG_COUNTS_I                	(0x0207U)
#define ADPD4x_REG_PERIOD_I                	(0x0208U)
#define ADPD4x_REG_LED_PULSE_I             	(0x0209U)
#define ADPD4x_REG_INTEG_WIDTH_I           	(0x020AU)
#define ADPD4x_REG_INTEG_OFFSET_I          	(0x020BU)
#define ADPD4x_REG_MOD_PULSE_I             	(0x020CU)
#define ADPD4x_REG_PATTERN_I               	(0x020DU)
#define ADPD4x_REG_ADC_OFF1_I              	(0x020EU)
#define ADPD4x_REG_ADC_OFF2_I              	(0x020FU)
#define ADPD4x_REG_DATA1_I                 	(0x0210U)
#define ADPD4x_REG_DATA2_I                 	(0x0211U)
#define ADPD4x_REG_DECIMATE_I              	(0x0212U)
#define ADPD4x_REG_DIGINT_LIT_I            	(0x0213U)
#define ADPD4x_REG_DIGINT_DARK_I           	(0x0214U)
#define ADPD4x_REG_THRESH_CFG_I            	(0x0215U)
#define ADPD4x_REG_THRESH0_I               	(0x0216U)
#define ADPD4x_REG_THRESH1_I               	(0x0217U)
#define ADPD4x_REG_PATTERN2_I              	(0x0218U)
#define ADPD4x_REG_TS_CTRL_J               	(0x0220U)
#define ADPD4x_REG_TS_PATH_J               	(0x0221U)
#define ADPD4x_REG_INPUTS_J                	(0x0222U)
#define ADPD4x_REG_CATHODE_J               	(0x0223U)
#define ADPD4x_REG_AFE_TRIM_J              	(0x0224U)
#define ADPD4x_REG_LED_POW12_J             	(0x0225U)
#define ADPD4x_REG_LED_POW34_J             	(0x0226U)
#define ADPD4x_REG_COUNTS_J                	(0x0227U)
#define ADPD4x_REG_PERIOD_J                	(0x0228U)
#define ADPD4x_REG_LED_PULSE_J             	(0x0229U)
#define ADPD4x_REG_INTEG_WIDTH_J           	(0x022AU)
#define ADPD4x_REG_INTEG_OFFSET_J          	(0x022BU)
#define ADPD4x_REG_MOD_PULSE_J             	(0x022CU)
#define ADPD4x_REG_PATTERN_J               	(0x022DU)
#define ADPD4x_REG_ADC_OFF1_J              	(0x022EU)
#define ADPD4x_REG_ADC_OFF2_J              	(0x022FU)
#define ADPD4x_REG_DATA1_J                 	(0x0230U)
#define ADPD4x_REG_DATA2_J                 	(0x0231U)
#define ADPD4x_REG_DECIMATE_J              	(0x0232U)
#define ADPD4x_REG_DIGINT_LIT_J            	(0x0233U)
#define ADPD4x_REG_DIGINT_DARK_J           	(0x0234U)
#define ADPD4x_REG_THRESH_CFG_J            	(0x0235U)
#define ADPD4x_REG_THRESH0_J               	(0x0236U)
#define ADPD4x_REG_THRESH1_J               	(0x0237U)
#define ADPD4x_REG_PATTERN2_J              	(0x0238U)
#define ADPD4x_REG_TS_CTRL_K               	(0x0240U)
#define ADPD4x_REG_TS_PATH_K               	(0x0241U)
#define ADPD4x_REG_INPUTS_K                	(0x0242U)
#define ADPD4x_REG_CATHODE_K               	(0x0243U)
#define ADPD4x_REG_AFE_TRIM_K              	(0x0244U)
#define ADPD4x_REG_LED_POW12_K             	(0x0245U)
#define ADPD4x_REG_LED_POW34_K             	(0x0246U)
#define ADPD4x_REG_COUNTS_K                	(0x0247U)
#define ADPD4x_REG_PERIOD_K                	(0x0248U)
#define ADPD4x_REG_LED_PULSE_K             	(0x0249U)
#define ADPD4x_REG_INTEG_WIDTH_K           	(0x024AU)
#define ADPD4x_REG_INTEG_OFFSET_K          	(0x024BU)
#define ADPD4x_REG_MOD_PULSE_K             	(0x024CU)
#define ADPD4x_REG_PATTERN_K               	(0x024DU)
#define ADPD4x_REG_ADC_OFF1_K              	(0x024EU)
#define ADPD4x_REG_ADC_OFF2_K              	(0x024FU)
#define ADPD4x_REG_DATA1_K                 	(0x0250U)
#define ADPD4x_REG_DATA2_K                 	(0x0251U)
#define ADPD4x_REG_DECIMATE_K              	(0x0252U)
#define ADPD4x_REG_DIGINT_LIT_K            	(0x0253U)
#define ADPD4x_REG_DIGINT_DARK_K           	(0x0254U)
#define ADPD4x_REG_THRESH_CFG_K            	(0x0255U)
#define ADPD4x_REG_THRESH0_K               	(0x0256U)
#define ADPD4x_REG_THRESH1_K               	(0x0257U)
#define ADPD4x_REG_PATTERN2_K              	(0x0258U)
#define ADPD4x_REG_TS_CTRL_L               	(0x0260U)
#define ADPD4x_REG_TS_PATH_L               	(0x0261U)
#define ADPD4x_REG_INPUTS_L                	(0x0262U)
#define ADPD4x_REG_CATHODE_L               	(0x0263U)
#define ADPD4x_REG_AFE_TRIM_L              	(0x0264U)
#define ADPD4x_REG_LED_POW12_L             	(0x0265U)
#define ADPD4x_REG_LED_POW34_L             	(0x0266U)
#define ADPD4x_REG_COUNTS_L                	(0x0267U)
#define ADPD4x_REG_PERIOD_L                	(0x0268U)
#define ADPD4x_REG_LED_PULSE_L             	(0x0269U)
#define ADPD4x_REG_INTEG_WIDTH_L           	(0x026AU)
#define ADPD4x_REG_INTEG_OFFSET_L          	(0x026BU)
#define ADPD4x_REG_MOD_PULSE_L             	(0x026CU)
#define ADPD4x_REG_PATTERN_L               	(0x026DU)
#define ADPD4x_REG_ADC_OFF1_L              	(0x026EU)
#define ADPD4x_REG_ADC_OFF2_L              	(0x026FU)
#define ADPD4x_REG_DATA1_L                 	(0x0270U)
#define ADPD4x_REG_DATA2_L                 	(0x0271U)
#define ADPD4x_REG_DECIMATE_L              	(0x0272U)
#define ADPD4x_REG_DIGINT_LIT_L            	(0x0273U)
#define ADPD4x_REG_DIGINT_DARK_L           	(0x0274U)
#define ADPD4x_REG_THRESH_CFG_L            	(0x0275U)
#define ADPD4x_REG_THRESH0_L               	(0x0276U)
#define ADPD4x_REG_THRESH1_L               	(0x0277U)
#define ADPD4x_REG_PATTERN2_L              	(0x0278U)
/*! \endcond */

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_FIFO						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_FIFO_FIFO_BYTE_COUNT    	(0U)			/*!< Number of bytes in fifo*/
#define BITP_INT_STATUS_FIFO_INT_FIFO_OFLOW     	(13U)			/*!< Fifo overflow error.*/
#define BITP_INT_STATUS_FIFO_INT_FIFO_UFLOW     	(14U)			/*!< Timeslot A data register interrupt status*/
#define BITP_INT_STATUS_FIFO_CLEAR_FIFO         	(15U)			/*!< Clear FIFO*/
#define BITM_INT_STATUS_FIFO_FIFO_BYTE_COUNT    	(0x07ffU)		/*!< Number of bytes in fifo*/
#define BITM_INT_STATUS_FIFO_INT_FIFO_OFLOW     	(0x2000U)		/*!< Fifo overflow error.*/
#define BITM_INT_STATUS_FIFO_INT_FIFO_UFLOW     	(0x4000U)		/*!< Timeslot A data register interrupt status*/
#define BITM_INT_STATUS_FIFO_CLEAR_FIFO         	(0x8000U)		/*!< Clear FIFO*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_DATA						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_DATA_INT_DATA_A         	(0U)			/*!< Timeslot A data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_B         	(1U)			/*!< Timeslot B data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_C         	(2U)			/*!< Timeslot C data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_D         	(3U)			/*!< Timeslot D data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_E         	(4U)			/*!< Timeslot E data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_F         	(5U)			/*!< Timeslot F data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_G         	(6U)			/*!< Timeslot G data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_H         	(7U)			/*!< Timeslot H data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_I         	(8U)			/*!< Timeslot I data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_J         	(9U)			/*!< Timeslot J data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_K         	(10U)			/*!< Timeslot K data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_L         	(11U)			/*!< Timeslot L data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_FIFO_TH        	(15U)			/*!< Fifo_th interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_A         	(0x0001U)		/*!< Timeslot A data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_B         	(0x0002U)		/*!< Timeslot B data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_C         	(0x0004U)		/*!< Timeslot C data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_D         	(0x0008U)		/*!< Timeslot D data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_E         	(0x0010U)		/*!< Timeslot E data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_F         	(0x0020U)		/*!< Timeslot F data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_G         	(0x0040U)		/*!< Timeslot G data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_H         	(0x0080U)		/*!< Timeslot H data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_I         	(0x0100U)		/*!< Timeslot I data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_J         	(0x0200U)		/*!< Timeslot J data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_K         	(0x0400U)		/*!< Timeslot K data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_L         	(0x0800U)		/*!< Timeslot L data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_FIFO_TH        	(0x8000U)		/*!< Fifo_th interrupt status*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_LEV0						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_LEV0_INT_LEV0_A         	(0U)			/*!< Timeslot A level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_B         	(1U)			/*!< Timeslot B level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_C         	(2U)			/*!< Timeslot C level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_D         	(3U)			/*!< Timeslot D level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_E         	(4U)			/*!< Timeslot E level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_F         	(5U)			/*!< Timeslot F level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_G         	(6U)			/*!< Timeslot G level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_H         	(7U)			/*!< Timeslot H level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_I         	(8U)			/*!< Timeslot I level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_J         	(9U)			/*!< Timeslot J level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_K         	(10U)			/*!< Timeslot K level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_L         	(11U)			/*!< Timeslot L level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_A         	(0x0001U)		/*!< Timeslot A level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_B         	(0x0002U)		/*!< Timeslot B level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_C         	(0x0004U)		/*!< Timeslot C level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_D         	(0x0008U)		/*!< Timeslot D level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_E         	(0x0010U)		/*!< Timeslot E level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_F         	(0x0020U)		/*!< Timeslot F level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_G         	(0x0040U)		/*!< Timeslot G level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_H         	(0x0080U)		/*!< Timeslot H level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_I         	(0x0100U)		/*!< Timeslot I level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_J         	(0x0200U)		/*!< Timeslot J level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_K         	(0x0400U)		/*!< Timeslot K level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_L         	(0x0800U)		/*!< Timeslot L level 0 interrupt status*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_LEV1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_LEV1_INT_LEV1_A         	(0U)			/*!< Timeslot A level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_B         	(1U)			/*!< Timeslot B level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_C         	(2U)			/*!< Timeslot C level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_D         	(3U)			/*!< Timeslot D level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_E         	(4U)			/*!< Timeslot E level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_F         	(5U)			/*!< Timeslot F level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_G         	(6U)			/*!< Timeslot G level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_H         	(7U)			/*!< Timeslot H level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_I         	(8U)			/*!< Timeslot I level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_J         	(9U)			/*!< Timeslot J level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_K         	(10U)			/*!< Timeslot K level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_L         	(11U)			/*!< Timeslot L level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_A         	(0x0001U)		/*!< Timeslot A level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_B         	(0x0002U)		/*!< Timeslot B level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_C         	(0x0004U)		/*!< Timeslot C level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_D         	(0x0008U)		/*!< Timeslot D level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_E         	(0x0010U)		/*!< Timeslot E level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_F         	(0x0020U)		/*!< Timeslot F level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_G         	(0x0040U)		/*!< Timeslot G level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_H         	(0x0080U)		/*!< Timeslot H level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_I         	(0x0100U)		/*!< Timeslot I level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_J         	(0x0200U)		/*!< Timeslot J level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_K         	(0x0400U)		/*!< Timeslot K level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_L         	(0x0800U)		/*!< Timeslot L level 1 interrupt status*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_TS1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_TS1_INT_TSAT1_A         	(0U)			/*!< Tia channel 1 saturated interrupt Timeslot a*/
#define BITP_INT_STATUS_TS1_INT_TSAT1_B         	(1U)			/*!< Tia channel 1 saturated interrupt Timeslot b*/
#define BITP_INT_STATUS_TS1_INT_TSAT1_C         	(2U)			/*!< Tia channel 1 saturated interrupt Timeslot c*/
#define BITP_INT_STATUS_TS1_INT_TSAT1_D         	(3U)			/*!< Tia channel 1 saturated interrupt Timeslot d*/
#define BITP_INT_STATUS_TS1_INT_TSAT1_E         	(4U)			/*!< Tia channel 1 saturated interrupt Timeslot e*/
#define BITP_INT_STATUS_TS1_INT_TSAT1_F         	(5U)			/*!< Tia channel 1 saturated interrupt Timeslot f*/
#define BITP_INT_STATUS_TS1_INT_TSAT1_G         	(6U)			/*!< Tia channel 1 saturated interrupt Timeslot g*/
#define BITP_INT_STATUS_TS1_INT_TSAT1_H         	(7U)			/*!< Tia channel 1 saturated interrupt Timeslot h*/
#define BITP_INT_STATUS_TS1_INT_TSAT1_I         	(8U)			/*!< Tia channel 1 saturated interrupt Timeslot i*/
#define BITP_INT_STATUS_TS1_INT_TSAT1_J         	(9U)			/*!< Tia channel 1 saturated interrupt Timeslot j*/
#define BITP_INT_STATUS_TS1_INT_TSAT1_K         	(10U)			/*!< Tia channel 1 saturated interrupt Timeslot k*/
#define BITP_INT_STATUS_TS1_INT_TSAT1_L         	(11U)			/*!< Tia channel 1 saturated interrupt Timeslot l*/
#define BITM_INT_STATUS_TS1_INT_TSAT1_A         	(0x0001U)		/*!< Tia channel 1 saturated interrupt Timeslot a*/
#define BITM_INT_STATUS_TS1_INT_TSAT1_B         	(0x0002U)		/*!< Tia channel 1 saturated interrupt Timeslot b*/
#define BITM_INT_STATUS_TS1_INT_TSAT1_C         	(0x0004U)		/*!< Tia channel 1 saturated interrupt Timeslot c*/
#define BITM_INT_STATUS_TS1_INT_TSAT1_D         	(0x0008U)		/*!< Tia channel 1 saturated interrupt Timeslot d*/
#define BITM_INT_STATUS_TS1_INT_TSAT1_E         	(0x0010U)		/*!< Tia channel 1 saturated interrupt Timeslot e*/
#define BITM_INT_STATUS_TS1_INT_TSAT1_F         	(0x0020U)		/*!< Tia channel 1 saturated interrupt Timeslot f*/
#define BITM_INT_STATUS_TS1_INT_TSAT1_G         	(0x0040U)		/*!< Tia channel 1 saturated interrupt Timeslot g*/
#define BITM_INT_STATUS_TS1_INT_TSAT1_H         	(0x0080U)		/*!< Tia channel 1 saturated interrupt Timeslot h*/
#define BITM_INT_STATUS_TS1_INT_TSAT1_I         	(0x0100U)		/*!< Tia channel 1 saturated interrupt Timeslot i*/
#define BITM_INT_STATUS_TS1_INT_TSAT1_J         	(0x0200U)		/*!< Tia channel 1 saturated interrupt Timeslot j*/
#define BITM_INT_STATUS_TS1_INT_TSAT1_K         	(0x0400U)		/*!< Tia channel 1 saturated interrupt Timeslot k*/
#define BITM_INT_STATUS_TS1_INT_TSAT1_L         	(0x0800U)		/*!< Tia channel 1 saturated interrupt Timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_TS2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_TS2_INT_TSAT2_A         	(0U)			/*!< Tia channel 2 saturated interrupt Timeslot a*/
#define BITP_INT_STATUS_TS2_INT_TSAT2_B         	(1U)			/*!< Tia channel 2 saturated interrupt Timeslot b*/
#define BITP_INT_STATUS_TS2_INT_TSAT2_C         	(2U)			/*!< Tia channel 2 saturated interrupt Timeslot c*/
#define BITP_INT_STATUS_TS2_INT_TSAT2_D         	(3U)			/*!< Tia channel 2 saturated interrupt Timeslot d*/
#define BITP_INT_STATUS_TS2_INT_TSAT2_E         	(4U)			/*!< Tia channel 2 saturated interrupt Timeslot e*/
#define BITP_INT_STATUS_TS2_INT_TSAT2_F         	(5U)			/*!< Tia channel 2 saturated interrupt Timeslot f*/
#define BITP_INT_STATUS_TS2_INT_TSAT2_G         	(6U)			/*!< Tia channel 2 saturated interrupt Timeslot g*/
#define BITP_INT_STATUS_TS2_INT_TSAT2_H         	(7U)			/*!< Tia channel 2 saturated interrupt Timeslot h*/
#define BITP_INT_STATUS_TS2_INT_TSAT2_I         	(8U)			/*!< Tia channel 2 saturated interrupt Timeslot i*/
#define BITP_INT_STATUS_TS2_INT_TSAT2_J         	(9U)			/*!< Tia channel 2 saturated interrupt Timeslot j*/
#define BITP_INT_STATUS_TS2_INT_TSAT2_K         	(10U)			/*!< Tia channel 2 saturated interrupt Timeslot k*/
#define BITP_INT_STATUS_TS2_INT_TSAT2_L         	(11U)			/*!< Tia channel 2 saturated interrupt Timeslot l*/
#define BITM_INT_STATUS_TS2_INT_TSAT2_A         	(0x0001U)		/*!< Tia channel 2 saturated interrupt Timeslot a*/
#define BITM_INT_STATUS_TS2_INT_TSAT2_B         	(0x0002U)		/*!< Tia channel 2 saturated interrupt Timeslot b*/
#define BITM_INT_STATUS_TS2_INT_TSAT2_C         	(0x0004U)		/*!< Tia channel 2 saturated interrupt Timeslot c*/
#define BITM_INT_STATUS_TS2_INT_TSAT2_D         	(0x0008U)		/*!< Tia channel 2 saturated interrupt Timeslot d*/
#define BITM_INT_STATUS_TS2_INT_TSAT2_E         	(0x0010U)		/*!< Tia channel 2 saturated interrupt Timeslot e*/
#define BITM_INT_STATUS_TS2_INT_TSAT2_F         	(0x0020U)		/*!< Tia channel 2 saturated interrupt Timeslot f*/
#define BITM_INT_STATUS_TS2_INT_TSAT2_G         	(0x0040U)		/*!< Tia channel 2 saturated interrupt Timeslot g*/
#define BITM_INT_STATUS_TS2_INT_TSAT2_H         	(0x0080U)		/*!< Tia channel 2 saturated interrupt Timeslot h*/
#define BITM_INT_STATUS_TS2_INT_TSAT2_I         	(0x0100U)		/*!< Tia channel 2 saturated interrupt Timeslot i*/
#define BITM_INT_STATUS_TS2_INT_TSAT2_J         	(0x0200U)		/*!< Tia channel 2 saturated interrupt Timeslot j*/
#define BITM_INT_STATUS_TS2_INT_TSAT2_K         	(0x0400U)		/*!< Tia channel 2 saturated interrupt Timeslot k*/
#define BITM_INT_STATUS_TS2_INT_TSAT2_L         	(0x0800U)		/*!< Tia channel 2 saturated interrupt Timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_FIFO_CTL						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FIFO_CTL_FIFO_TH                   	(0U)			/*!< Fifo Interrupt Generation Threshold.*/
#define BITM_FIFO_CTL_FIFO_TH                   	(0x03ffU)		/*!< Fifo Interrupt Generation Threshold.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ACLEAR						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_A       	(0U)			/*!< Timeslot A Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_B       	(1U)			/*!< Timeslot B Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_C       	(2U)			/*!< Timeslot C Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_D       	(3U)			/*!< Timeslot D Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_E       	(4U)			/*!< Timeslot E Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_F       	(5U)			/*!< Timeslot F Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_G       	(6U)			/*!< Timeslot G Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_H       	(7U)			/*!< Timeslot H Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_I       	(8U)			/*!< Timeslot I Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_J       	(9U)			/*!< Timeslot J Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_K       	(10U)			/*!< Timeslot K Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_L       	(11U)			/*!< Timeslot L Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_FIFO         	(15U)			/*!< FIFO Threshold Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_A       	(0x0001U)		/*!< Timeslot A Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_B       	(0x0002U)		/*!< Timeslot B Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_C       	(0x0004U)		/*!< Timeslot C Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_D       	(0x0008U)		/*!< Timeslot D Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_E       	(0x0010U)		/*!< Timeslot E Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_F       	(0x0020U)		/*!< Timeslot F Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_G       	(0x0040U)		/*!< Timeslot G Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_H       	(0x0080U)		/*!< Timeslot H Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_I       	(0x0100U)		/*!< Timeslot I Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_J       	(0x0200U)		/*!< Timeslot J Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_K       	(0x0400U)		/*!< Timeslot K Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_L       	(0x0800U)		/*!< Timeslot L Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_FIFO         	(0x8000U)		/*!< FIFO Threshold Interrupt auto clear enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CHIP_ID						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CHIP_ID_CHIP_ID                    	(0U)			/*!< Chip ID*/
#define BITP_CHIP_ID_VERSION                    	(8U)			/*!< Mask Version*/
#define BITM_CHIP_ID_CHIP_ID                    	(0x00ffU)		/*!< Chip ID*/
#define BITM_CHIP_ID_VERSION                    	(0xff00U)		/*!< Mask Version*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OSC32M						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OSC32M_OSC_32M_FREQ_ADJ            	(0U)			/*!< High Freq Oscillator Frequency Control*/
#define BITM_OSC32M_OSC_32M_FREQ_ADJ            	(0x00ffU)		/*!< High Freq Oscillator Frequency Control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OSC32M_CAL						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OSC32M_CAL_OSC_32M_CAL_COUNT       	(0U)			/*!< High Freq Oscillator Calibration Count*/
#define BITP_OSC32M_CAL_OSC_32M_CAL_START       	(15U)			/*!< Start High Freq Oscillator Calibration cycle*/
#define BITM_OSC32M_CAL_OSC_32M_CAL_COUNT       	(0x7fffU)		/*!< High Freq Oscillator Calibration Count*/
#define BITM_OSC32M_CAL_OSC_32M_CAL_START       	(0x8000U)		/*!< Start High Freq Oscillator Calibration cycle*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OSC1M						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OSC1M_OSC_1M_FREQ_ADJ              	(0U)			/*!< Low Freq Oscillator Frequency Control*/
#define BITP_OSC1M_OSC_CAL_DISABLE              	(10U)			/*!< Disable clock calibration clocking*/
#define BITM_OSC1M_OSC_1M_FREQ_ADJ              	(0x03ffU)		/*!< Low Freq Oscillator Frequency Control*/
#define BITM_OSC1M_OSC_CAL_DISABLE              	(0x0400U)		/*!< Disable clock calibration clocking*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OSC32K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OSC32K_OSC_32K_ADJUST              	(0U)			/*!< 32KHz oscillator trim*/
#define BITP_OSC32K_CAPTURE_TIMESTAMP           	(15U)			/*!< Enable Timestamp capture*/
#define BITM_OSC32K_OSC_32K_ADJUST              	(0x003fU)		/*!< 32KHz oscillator trim*/
#define BITM_OSC32K_CAPTURE_TIMESTAMP           	(0x8000U)		/*!< Enable Timestamp capture*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_FREQ						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_FREQ_TIMESLOT_PERIOD_L          	(0U)			/*!< Lower 16 bits of timeslot period in lfosc cycles.*/
#define BITM_TS_FREQ_TIMESLOT_PERIOD_L          	(0xffffU)		/*!< Lower 16 bits of timeslot period in lfosc cycles.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_FREQH						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_FREQH_TIMESLOT_PERIOD_H         	(0U)			/*!< Upper 7 bits of timeslot period in lfosc cycles.*/
#define BITM_TS_FREQH_TIMESLOT_PERIOD_H         	(0x007fU)		/*!< Upper 7 bits of timeslot period in lfosc cycles.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SYS_CTL						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SYS_CTL_OSC_32K_EN                 	(0U)			/*!< Enable Low Frequency Oscillator*/
#define BITP_SYS_CTL_OSC_1M_EN                  	(1U)			/*!< Enable Low Frequency Oscillator*/
#define BITP_SYS_CTL_LFOSC_SEL                  	(2U)			/*!< Select Low Frequency Oscillator*/
#define BITP_SYS_CTL_RANDOM_SLEEP               	(3U)			/*!< Enable Random Sleep LSFR*/
#define BITP_SYS_CTL_GO_SLEEP                   	(4U)			/*!< Sleep before first timeslot group on GO*/
#define BITP_SYS_CTL_ALT_CLK_GPIO               	(6U)			/*!< Alternate Clock GPIO Select*/
#define BITP_SYS_CTL_ALT_CLOCKS                 	(8U)			/*!< External clock select*/
#define BITP_SYS_CTL_SW_RESET                   	(15U)			/*!< Software Reset*/
#define BITM_SYS_CTL_OSC_32K_EN                 	(0x0001U)		/*!< Enable Low Frequency Oscillator*/
#define BITM_SYS_CTL_OSC_1M_EN                  	(0x0002U)		/*!< Enable Low Frequency Oscillator*/
#define BITM_SYS_CTL_LFOSC_SEL                  	(0x0004U)		/*!< Select Low Frequency Oscillator*/
#define BITM_SYS_CTL_RANDOM_SLEEP               	(0x0008U)		/*!< Enable Random Sleep LSFR*/
#define BITM_SYS_CTL_GO_SLEEP                   	(0x0010U)		/*!< Sleep before first timeslot group on GO*/
#define BITM_SYS_CTL_ALT_CLK_GPIO               	(0x00c0U)		/*!< Alternate Clock GPIO Select*/
#define BITM_SYS_CTL_ALT_CLOCKS                 	(0x0300U)		/*!< External clock select*/
#define BITM_SYS_CTL_SW_RESET                   	(0x8000U)		/*!< Software Reset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OPMODE						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OPMODE_OP_MODE                     	(0U)			/*!< Operating Mode*/
#define BITP_OPMODE_TIMESLOT_EN                 	(8U)			/*!< Timeslot enable control*/
#define BITM_OPMODE_OP_MODE                     	(0x0007U)		/*!< Operating Mode*/
#define BITM_OPMODE_TIMESLOT_EN                 	(0x0f00U)		/*!< Timeslot enable control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_STAMP_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_STAMP_L_TIMESTAMP_COUNT_L          	(0U)			/*!< Count at last timestamp*/
#define BITM_STAMP_L_TIMESTAMP_COUNT_L          	(0xffffU)		/*!< Count at last timestamp*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_STAMP_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_STAMP_H_TIMESTAMP_COUNT_H          	(0U)			/*!< Count at last timestamp*/
#define BITM_STAMP_H_TIMESTAMP_COUNT_H          	(0xffffU)		/*!< Count at last timestamp*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_STAMPDELTA						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_STAMPDELTA_TIMESTAMP_SLOT_DELTA    	(0U)			/*!< Count remaining until next wakeup start*/
#define BITM_STAMPDELTA_TIMESTAMP_SLOT_DELTA    	(0xffffU)		/*!< Count remaining until next wakeup start*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XD						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_A       	(0U)			/*!< Interrupt channel X Timeslot A data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_B       	(1U)			/*!< Interrupt channel X Timeslot B data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_C       	(2U)			/*!< Interrupt channel X Timeslot C data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_D       	(3U)			/*!< Interrupt channel X Timeslot D data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_E       	(4U)			/*!< Interrupt channel X Timeslot E data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_F       	(5U)			/*!< Interrupt channel X Timeslot F data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_G       	(6U)			/*!< Interrupt channel X Timeslot G data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_H       	(7U)			/*!< Interrupt channel X Timeslot H data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_I       	(8U)			/*!< Interrupt channel X Timeslot I data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_J       	(9U)			/*!< Interrupt channel X Timeslot J data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_K       	(10U)			/*!< Interrupt channel X Timeslot K data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_L       	(11U)			/*!< Interrupt channel X Timeslot L data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_FIFO_OFLOW   	(13U)			/*!< FIFO overflow Interrupt enable for interrupt channel X*/
#define BITP_INT_ENABLE_XD_INTX_EN_FIFO_UFLOW   	(14U)			/*!< FIFO underflow Interrupt enable for interrupt channel X*/
#define BITP_INT_ENABLE_XD_INTX_EN_FIFO_TH      	(15U)			/*!< FIFO Threshold Interrupt Enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_A       	(0x0001U)		/*!< Interrupt channel X Timeslot A data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_B       	(0x0002U)		/*!< Interrupt channel X Timeslot B data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_C       	(0x0004U)		/*!< Interrupt channel X Timeslot C data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_D       	(0x0008U)		/*!< Interrupt channel X Timeslot D data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_E       	(0x0010U)		/*!< Interrupt channel X Timeslot E data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_F       	(0x0020U)		/*!< Interrupt channel X Timeslot F data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_G       	(0x0040U)		/*!< Interrupt channel X Timeslot G data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_H       	(0x0080U)		/*!< Interrupt channel X Timeslot H data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_I       	(0x0100U)		/*!< Interrupt channel X Timeslot I data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_J       	(0x0200U)		/*!< Interrupt channel X Timeslot J data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_K       	(0x0400U)		/*!< Interrupt channel X Timeslot K data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_L       	(0x0800U)		/*!< Interrupt channel X Timeslot L data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_FIFO_OFLOW   	(0x2000U)		/*!< FIFO overflow Interrupt enable for interrupt channel X*/
#define BITM_INT_ENABLE_XD_INTX_EN_FIFO_UFLOW   	(0x4000U)		/*!< FIFO underflow Interrupt enable for interrupt channel X*/
#define BITM_INT_ENABLE_XD_INTX_EN_FIFO_TH      	(0x8000U)		/*!< FIFO Threshold Interrupt Enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YD						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_A       	(0U)			/*!< interrupt channel Y Timeslot A data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_B       	(1U)			/*!< interrupt channel Y Timeslot B data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_C       	(2U)			/*!< interrupt channel Y Timeslot C data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_D       	(3U)			/*!< interrupt channel Y Timeslot D data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_E       	(4U)			/*!< interrupt channel Y Timeslot E data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_F       	(5U)			/*!< interrupt channel Y Timeslot F data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_G       	(6U)			/*!< interrupt channel Y Timeslot G data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_H       	(7U)			/*!< interrupt channel Y Timeslot H data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_I       	(8U)			/*!< interrupt channel Y Timeslot I data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_J       	(9U)			/*!< interrupt channel Y Timeslot J data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_K       	(10U)			/*!< interrupt channel Y Timeslot K data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_L       	(11U)			/*!< interrupt channel Y Timeslot L data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_FIFO_OFLOW   	(13U)			/*!< FIFO overflow Interrupt enable for interrupt channel Y*/
#define BITP_INT_ENABLE_YD_INTY_EN_FIFO_UFLOW   	(14U)			/*!< FIFO underflow Interrupt enable for interrupt channel Y*/
#define BITP_INT_ENABLE_YD_INTY_EN_FIFO_TH      	(15U)			/*!< FIFO Threshold Interrupt Enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_A       	(0x0001U)		/*!< interrupt channel Y Timeslot A data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_B       	(0x0002U)		/*!< interrupt channel Y Timeslot B data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_C       	(0x0004U)		/*!< interrupt channel Y Timeslot C data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_D       	(0x0008U)		/*!< interrupt channel Y Timeslot D data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_E       	(0x0010U)		/*!< interrupt channel Y Timeslot E data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_F       	(0x0020U)		/*!< interrupt channel Y Timeslot F data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_G       	(0x0040U)		/*!< interrupt channel Y Timeslot G data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_H       	(0x0080U)		/*!< interrupt channel Y Timeslot H data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_I       	(0x0100U)		/*!< interrupt channel Y Timeslot I data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_J       	(0x0200U)		/*!< interrupt channel Y Timeslot J data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_K       	(0x0400U)		/*!< interrupt channel Y Timeslot K data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_L       	(0x0800U)		/*!< interrupt channel Y Timeslot L data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_FIFO_OFLOW   	(0x2000U)		/*!< FIFO overflow Interrupt enable for interrupt channel Y*/
#define BITM_INT_ENABLE_YD_INTY_EN_FIFO_UFLOW   	(0x4000U)		/*!< FIFO underflow Interrupt enable for interrupt channel Y*/
#define BITM_INT_ENABLE_YD_INTY_EN_FIFO_TH      	(0x8000U)		/*!< FIFO Threshold Interrupt Enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XL0						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_A      	(0U)			/*!< Interrupt channel X Timeslot A level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_B      	(1U)			/*!< Interrupt channel X Timeslot B level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_C      	(2U)			/*!< Interrupt channel X Timeslot C level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_D      	(3U)			/*!< Interrupt channel X Timeslot D level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_E      	(4U)			/*!< Interrupt channel X Timeslot E level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_F      	(5U)			/*!< Interrupt channel X Timeslot F level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_G      	(6U)			/*!< Interrupt channel X Timeslot G level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_H      	(7U)			/*!< Interrupt channel X Timeslot H level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_I      	(8U)			/*!< Interrupt channel X Timeslot I level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_J      	(9U)			/*!< Interrupt channel X Timeslot J level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_K      	(10U)			/*!< Interrupt channel X Timeslot K level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_L      	(11U)			/*!< Interrupt channel X Timeslot L level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_A      	(0x0001U)		/*!< Interrupt channel X Timeslot A level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_B      	(0x0002U)		/*!< Interrupt channel X Timeslot B level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_C      	(0x0004U)		/*!< Interrupt channel X Timeslot C level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_D      	(0x0008U)		/*!< Interrupt channel X Timeslot D level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_E      	(0x0010U)		/*!< Interrupt channel X Timeslot E level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_F      	(0x0020U)		/*!< Interrupt channel X Timeslot F level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_G      	(0x0040U)		/*!< Interrupt channel X Timeslot G level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_H      	(0x0080U)		/*!< Interrupt channel X Timeslot H level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_I      	(0x0100U)		/*!< Interrupt channel X Timeslot I level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_J      	(0x0200U)		/*!< Interrupt channel X Timeslot J level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_K      	(0x0400U)		/*!< Interrupt channel X Timeslot K level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_L      	(0x0800U)		/*!< Interrupt channel X Timeslot L level 0 interrupt enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XL1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_A      	(0U)			/*!< Interrupt channel X Timeslot A level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_B      	(1U)			/*!< Interrupt channel X Timeslot B level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_C      	(2U)			/*!< Interrupt channel X Timeslot C level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_D      	(3U)			/*!< Interrupt channel X Timeslot D level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_E      	(4U)			/*!< Interrupt channel X Timeslot E level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_F      	(5U)			/*!< Interrupt channel X Timeslot F level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_G      	(6U)			/*!< Interrupt channel X Timeslot G level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_H      	(7U)			/*!< Interrupt channel X Timeslot H level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_I      	(8U)			/*!< Interrupt channel X Timeslot I level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_J      	(9U)			/*!< Interrupt channel X Timeslot J level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_K      	(10U)			/*!< Interrupt channel X Timeslot K level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_L      	(11U)			/*!< Interrupt channel X Timeslot L level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_A      	(0x0001U)		/*!< Interrupt channel X Timeslot A level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_B      	(0x0002U)		/*!< Interrupt channel X Timeslot B level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_C      	(0x0004U)		/*!< Interrupt channel X Timeslot C level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_D      	(0x0008U)		/*!< Interrupt channel X Timeslot D level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_E      	(0x0010U)		/*!< Interrupt channel X Timeslot E level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_F      	(0x0020U)		/*!< Interrupt channel X Timeslot F level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_G      	(0x0040U)		/*!< Interrupt channel X Timeslot G level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_H      	(0x0080U)		/*!< Interrupt channel X Timeslot H level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_I      	(0x0100U)		/*!< Interrupt channel X Timeslot I level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_J      	(0x0200U)		/*!< Interrupt channel X Timeslot J level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_K      	(0x0400U)		/*!< Interrupt channel X Timeslot K level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_L      	(0x0800U)		/*!< Interrupt channel X Timeslot L level 1 interrupt enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XT1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XT1_INTX_EN_TSAT1_A     	(0U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot a*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TSAT1_B     	(1U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot b*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TSAT1_C     	(2U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot c*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TSAT1_D     	(3U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot d*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TSAT1_E     	(4U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot e*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TSAT1_F     	(5U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot f*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TSAT1_G     	(6U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot g*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TSAT1_H     	(7U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot h*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TSAT1_I     	(8U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot i*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TSAT1_J     	(9U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot j*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TSAT1_K     	(10U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot k*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TSAT1_L     	(11U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot l*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TSAT1_A     	(0x0001U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot a*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TSAT1_B     	(0x0002U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot b*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TSAT1_C     	(0x0004U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot c*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TSAT1_D     	(0x0008U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot d*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TSAT1_E     	(0x0010U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot e*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TSAT1_F     	(0x0020U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot f*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TSAT1_G     	(0x0040U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot g*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TSAT1_H     	(0x0080U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot h*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TSAT1_I     	(0x0100U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot i*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TSAT1_J     	(0x0200U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot j*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TSAT1_K     	(0x0400U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot k*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TSAT1_L     	(0x0800U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XT2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XT2_INTX_EN_TSAT2_A     	(0U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot a*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TSAT2_B     	(1U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot b*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TSAT2_C     	(2U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot c*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TSAT2_D     	(3U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot d*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TSAT2_E     	(4U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot e*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TSAT2_F     	(5U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot f*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TSAT2_G     	(6U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot g*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TSAT2_H     	(7U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot h*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TSAT2_I     	(8U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot i*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TSAT2_J     	(9U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot j*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TSAT2_K     	(10U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot k*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TSAT2_L     	(11U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot l*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TSAT2_A     	(0x0001U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot a*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TSAT2_B     	(0x0002U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot b*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TSAT2_C     	(0x0004U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot c*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TSAT2_D     	(0x0008U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot d*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TSAT2_E     	(0x0010U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot e*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TSAT2_F     	(0x0020U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot f*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TSAT2_G     	(0x0040U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot g*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TSAT2_H     	(0x0080U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot h*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TSAT2_I     	(0x0100U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot i*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TSAT2_J     	(0x0200U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot j*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TSAT2_K     	(0x0400U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot k*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TSAT2_L     	(0x0800U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YL0						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_A      	(0U)			/*!< interrupt channel Y Timeslot A level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_B      	(1U)			/*!< interrupt channel Y Timeslot B level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_C      	(2U)			/*!< interrupt channel Y Timeslot C level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_D      	(3U)			/*!< interrupt channel Y Timeslot D level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_E      	(4U)			/*!< interrupt channel Y Timeslot E level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_F      	(5U)			/*!< interrupt channel Y Timeslot F level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_G      	(6U)			/*!< interrupt channel Y Timeslot G level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_H      	(7U)			/*!< interrupt channel Y Timeslot H level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_I      	(8U)			/*!< interrupt channel Y Timeslot I level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_J      	(9U)			/*!< interrupt channel Y Timeslot J level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_K      	(10U)			/*!< interrupt channel Y Timeslot K level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_L      	(11U)			/*!< interrupt channel Y Timeslot L level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_A      	(0x0001U)		/*!< interrupt channel Y Timeslot A level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_B      	(0x0002U)		/*!< interrupt channel Y Timeslot B level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_C      	(0x0004U)		/*!< interrupt channel Y Timeslot C level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_D      	(0x0008U)		/*!< interrupt channel Y Timeslot D level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_E      	(0x0010U)		/*!< interrupt channel Y Timeslot E level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_F      	(0x0020U)		/*!< interrupt channel Y Timeslot F level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_G      	(0x0040U)		/*!< interrupt channel Y Timeslot G level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_H      	(0x0080U)		/*!< interrupt channel Y Timeslot H level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_I      	(0x0100U)		/*!< interrupt channel Y Timeslot I level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_J      	(0x0200U)		/*!< interrupt channel Y Timeslot J level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_K      	(0x0400U)		/*!< interrupt channel Y Timeslot K level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_L      	(0x0800U)		/*!< interrupt channel Y Timeslot L level 0 interrupt enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YL1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_A      	(0U)			/*!< interrupt channel Y Timeslot A level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_B      	(1U)			/*!< interrupt channel Y Timeslot B level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_C      	(2U)			/*!< interrupt channel Y Timeslot C level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_D      	(3U)			/*!< interrupt channel Y Timeslot D level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_E      	(4U)			/*!< interrupt channel Y Timeslot E level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_F      	(5U)			/*!< interrupt channel Y Timeslot F level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_G      	(6U)			/*!< interrupt channel Y Timeslot G level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_H      	(7U)			/*!< interrupt channel Y Timeslot H level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_I      	(8U)			/*!< interrupt channel Y Timeslot I level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_J      	(9U)			/*!< interrupt channel Y Timeslot J level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_K      	(10U)			/*!< interrupt channel Y Timeslot K level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_L      	(11U)			/*!< interrupt channel Y Timeslot L level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_A      	(0x0001U)		/*!< interrupt channel Y Timeslot A level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_B      	(0x0002U)		/*!< interrupt channel Y Timeslot B level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_C      	(0x0004U)		/*!< interrupt channel Y Timeslot C level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_D      	(0x0008U)		/*!< interrupt channel Y Timeslot D level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_E      	(0x0010U)		/*!< interrupt channel Y Timeslot E level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_F      	(0x0020U)		/*!< interrupt channel Y Timeslot F level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_G      	(0x0040U)		/*!< interrupt channel Y Timeslot G level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_H      	(0x0080U)		/*!< interrupt channel Y Timeslot H level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_I      	(0x0100U)		/*!< interrupt channel Y Timeslot I level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_J      	(0x0200U)		/*!< interrupt channel Y Timeslot J level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_K      	(0x0400U)		/*!< interrupt channel Y Timeslot K level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_L      	(0x0800U)		/*!< interrupt channel Y Timeslot L level 1 interrupt enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YT1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YT1_INTY_EN_TSAT1_A     	(0U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot a*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TSAT1_B     	(1U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot b*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TSAT1_C     	(2U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot c*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TSAT1_D     	(3U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot d*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TSAT1_E     	(4U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot e*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TSAT1_F     	(5U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot f*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TSAT1_G     	(6U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot g*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TSAT1_H     	(7U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot h*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TSAT1_I     	(8U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot i*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TSAT1_J     	(9U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot j*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TSAT1_K     	(10U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot k*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TSAT1_L     	(11U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot l*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TSAT1_A     	(0x0001U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot a*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TSAT1_B     	(0x0002U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot b*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TSAT1_C     	(0x0004U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot c*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TSAT1_D     	(0x0008U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot d*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TSAT1_E     	(0x0010U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot e*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TSAT1_F     	(0x0020U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot f*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TSAT1_G     	(0x0040U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot g*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TSAT1_H     	(0x0080U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot h*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TSAT1_I     	(0x0100U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot i*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TSAT1_J     	(0x0200U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot j*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TSAT1_K     	(0x0400U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot k*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TSAT1_L     	(0x0800U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YT2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YT2_INTY_EN_TSAT2_A     	(0U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot a*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TSAT2_B     	(1U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot b*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TSAT2_C     	(2U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot c*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TSAT2_D     	(3U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot d*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TSAT2_E     	(4U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot e*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TSAT2_F     	(5U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot f*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TSAT2_G     	(6U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot g*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TSAT2_H     	(7U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot h*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TSAT2_I     	(8U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot i*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TSAT2_J     	(9U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot j*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TSAT2_K     	(10U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot k*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TSAT2_L     	(11U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot l*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TSAT2_A     	(0x0001U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot a*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TSAT2_B     	(0x0002U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot b*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TSAT2_C     	(0x0004U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot c*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TSAT2_D     	(0x0008U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot d*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TSAT2_E     	(0x0010U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot e*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TSAT2_F     	(0x0020U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot f*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TSAT2_G     	(0x0040U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot g*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TSAT2_H     	(0x0080U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot h*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TSAT2_I     	(0x0100U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot i*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TSAT2_J     	(0x0200U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot j*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TSAT2_K     	(0x0400U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot k*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TSAT2_L     	(0x0800U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_FIFO_STATUS_BYTES						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_SUM     	(0U)			/*!< Enable status summary byte.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_D1      	(1U)			/*!< Enable data interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_D2      	(2U)			/*!< Enable data interrupt status byte upper.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_L0      	(3U)			/*!< Enable level 0 interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_L1      	(4U)			/*!< Enable level 1 interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_LX      	(5U)			/*!< Enable level 0 and level 1 interrupt status byte upper.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_TS1     	(6U)			/*!< Enable TIA sat chan 1 interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_TS2     	(7U)			/*!< Enable TIA sat chan 2 interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_TSX     	(8U)			/*!< Enable TIA sat chan 1/2 interrupt status byte upper.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_SUM     	(0x0001U)		/*!< Enable status summary byte.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_D1      	(0x0002U)		/*!< Enable data interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_D2      	(0x0004U)		/*!< Enable data interrupt status byte upper.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_L0      	(0x0008U)		/*!< Enable level 0 interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_L1      	(0x0010U)		/*!< Enable level 1 interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_LX      	(0x0020U)		/*!< Enable level 0 and level 1 interrupt status byte upper.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_TS1     	(0x0040U)		/*!< Enable TIA sat chan 1 interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_TS2     	(0x0080U)		/*!< Enable TIA sat chan 2 interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_TSX     	(0x0100U)		/*!< Enable TIA sat chan 1/2 interrupt status byte upper.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUT_SLEEP						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUT_SLEEP_INP_SLEEP_12           	(0U)			/*!< Input pair sleep state for inputs 1 and 2*/
#define BITP_INPUT_SLEEP_INP_SLEEP_34           	(4U)			/*!< Input pair sleep state for inputs 3 and 4*/
#define BITP_INPUT_SLEEP_INP_SLEEP_56           	(8U)			/*!< Input pair sleep state for inputs 5 and 6*/
#define BITP_INPUT_SLEEP_INP_SLEEP_78           	(12U)			/*!< Input pair sleep state for inputs 7 and 8*/
#define BITM_INPUT_SLEEP_INP_SLEEP_12           	(0x000fU)		/*!< Input pair sleep state for inputs 1 and 2*/
#define BITM_INPUT_SLEEP_INP_SLEEP_34           	(0x00f0U)		/*!< Input pair sleep state for inputs 3 and 4*/
#define BITM_INPUT_SLEEP_INP_SLEEP_56           	(0x0f00U)		/*!< Input pair sleep state for inputs 5 and 6*/
#define BITM_INPUT_SLEEP_INP_SLEEP_78           	(0xf000U)		/*!< Input pair sleep state for inputs 7 and 8*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUT_CFG						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUT_CFG_PAIR12                   	(0U)			/*!< Input pair configuration*/
#define BITP_INPUT_CFG_PAIR34                   	(1U)			/*!< Input pair configuration*/
#define BITP_INPUT_CFG_PAIR56                   	(2U)			/*!< Input pair configuration*/
#define BITP_INPUT_CFG_PAIR78                   	(3U)			/*!< Input pair configuration*/
#define BITP_INPUT_CFG_VC1_SLEEP                	(4U)			/*!< Cathode1 sleep state*/
#define BITP_INPUT_CFG_VC2_SLEEP                	(6U)			/*!< Cathode2 sleep state*/
#define BITM_INPUT_CFG_PAIR12                   	(0x0001U)		/*!< Input pair configuration*/
#define BITM_INPUT_CFG_PAIR34                   	(0x0002U)		/*!< Input pair configuration*/
#define BITM_INPUT_CFG_PAIR56                   	(0x0004U)		/*!< Input pair configuration*/
#define BITM_INPUT_CFG_PAIR78                   	(0x0008U)		/*!< Input pair configuration*/
#define BITM_INPUT_CFG_VC1_SLEEP                	(0x0030U)		/*!< Cathode1 sleep state*/
#define BITM_INPUT_CFG_VC2_SLEEP                	(0x00c0U)		/*!< Cathode2 sleep state*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO_CFG						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_CFG_GPIO_PIN_CFG0             	(0U)			/*!< GPIO[0] Pin Configuration*/
#define BITP_GPIO_CFG_GPIO_PIN_CFG1             	(3U)			/*!< GPIO[1] Pin Configuration*/
#define BITP_GPIO_CFG_GPIO_PIN_CFG2             	(6U)			/*!< GPIO[2] Pin Configuration*/
#define BITP_GPIO_CFG_GPIO_PIN_CFG3             	(9U)			/*!< GPIO[3] Pin Configuration*/
#define BITP_GPIO_CFG_GPIO_DRV                  	(12U)			/*!< Drive Control for GPIO Pins*/
#define BITP_GPIO_CFG_GPIO_SLEW                 	(14U)			/*!< Slew Control for GPIO Pins*/
#define BITM_GPIO_CFG_GPIO_PIN_CFG0             	(0x0007U)		/*!< GPIO[0] Pin Configuration*/
#define BITM_GPIO_CFG_GPIO_PIN_CFG1             	(0x0038U)		/*!< GPIO[1] Pin Configuration*/
#define BITM_GPIO_CFG_GPIO_PIN_CFG2             	(0x01c0U)		/*!< GPIO[2] Pin Configuration*/
#define BITM_GPIO_CFG_GPIO_PIN_CFG3             	(0x0e00U)		/*!< GPIO[3] Pin Configuration*/
#define BITM_GPIO_CFG_GPIO_DRV                  	(0x3000U)		/*!< Drive Control for GPIO Pins*/
#define BITM_GPIO_CFG_GPIO_SLEW                 	(0xc000U)		/*!< Slew Control for GPIO Pins*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO01						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO01_GPIOOUT0                    	(0U)			/*!< GPIO Pin 0 Output Select*/
#define BITP_GPIO01_GPIOOUT1                    	(8U)			/*!< GPIO Pin 1 Output Select*/
#define BITM_GPIO01_GPIOOUT0                    	(0x007fU)		/*!< GPIO Pin 0 Output Select*/
#define BITM_GPIO01_GPIOOUT1                    	(0x7f00U)		/*!< GPIO Pin 1 Output Select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO23						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO23_GPIOOUT2                    	(0U)			/*!< GPIO Pin 2 Output Select*/
#define BITP_GPIO23_GPIOOUT3                    	(8U)			/*!< GPIO Pin 3 Output Select*/
#define BITM_GPIO23_GPIOOUT2                    	(0x007fU)		/*!< GPIO Pin 2 Output Select*/
#define BITM_GPIO23_GPIOOUT3                    	(0x7f00U)		/*!< GPIO Pin 3 Output Select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO_IN						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_IN_GPIO_INPUT                 	(0U)			/*!< GPIO Input value (if enabled)*/
#define BITM_GPIO_IN_GPIO_INPUT                 	(0x000fU)		/*!< GPIO Input value (if enabled)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO_EXT						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_EXT_EXT_SYNC_EN               	(2U)			/*!< External sync enable*/
#define BITP_GPIO_EXT_TIMESTAMP_GPIO            	(4U)			/*!< Timestamp GPIO Select*/
#define BITP_GPIO_EXT_TIMESTAMP_ALWAYS_EN       	(6U)			/*!< Enable Timestamp Always on*/
#define BITP_GPIO_EXT_TIMESTAMP_INV             	(7U)			/*!< Timestamp Trigger Invert*/
#define BITP_GPIO_EXT_GOUT_SLEEP                	(8U)			/*!< Timeslot specific gpio signal sleep value*/
#define BITM_GPIO_EXT_EXT_SYNC_EN               	(0x0004U)		/*!< External sync enable*/
#define BITM_GPIO_EXT_TIMESTAMP_GPIO            	(0x0030U)		/*!< Timestamp GPIO Select*/
#define BITM_GPIO_EXT_TIMESTAMP_ALWAYS_EN       	(0x0040U)		/*!< Enable Timestamp Always on*/
#define BITM_GPIO_EXT_TIMESTAMP_INV             	(0x0080U)		/*!< Timestamp Trigger Invert*/
#define BITM_GPIO_EXT_GOUT_SLEEP                	(0x0100U)		/*!< Timeslot specific gpio signal sleep value*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA_HOLD_FLAG						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_A         	(0U)			/*!< Prevent Update of Timeslot A data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_B         	(1U)			/*!< Prevent Update of Timeslot B data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_C         	(2U)			/*!< Prevent Update of Timeslot C data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_D         	(3U)			/*!< Prevent Update of Timeslot D data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_E         	(4U)			/*!< Prevent Update of Timeslot E data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_F         	(5U)			/*!< Prevent Update of Timeslot F data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_G         	(6U)			/*!< Prevent Update of Timeslot G data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_H         	(7U)			/*!< Prevent Update of Timeslot H data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_I         	(8U)			/*!< Prevent Update of Timeslot I data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_J         	(9U)			/*!< Prevent Update of Timeslot J data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_K         	(10U)			/*!< Prevent Update of Timeslot K data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_L         	(11U)			/*!< Prevent Update of Timeslot L data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_A         	(0x0001U)		/*!< Prevent Update of Timeslot A data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_B         	(0x0002U)		/*!< Prevent Update of Timeslot B data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_C         	(0x0004U)		/*!< Prevent Update of Timeslot C data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_D         	(0x0008U)		/*!< Prevent Update of Timeslot D data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_E         	(0x0010U)		/*!< Prevent Update of Timeslot E data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_F         	(0x0020U)		/*!< Prevent Update of Timeslot F data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_G         	(0x0040U)		/*!< Prevent Update of Timeslot G data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_H         	(0x0080U)		/*!< Prevent Update of Timeslot H data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_I         	(0x0100U)		/*!< Prevent Update of Timeslot I data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_J         	(0x0200U)		/*!< Prevent Update of Timeslot J data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_K         	(0x0400U)		/*!< Prevent Update of Timeslot K data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_L         	(0x0800U)		/*!< Prevent Update of Timeslot L data registers*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_FIFO_DATA						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FIFO_DATA_FIFO_DATA                	(0U)			/*!< FIFO data port*/
#define BITM_FIFO_DATA_FIFO_DATA                	(0xffffU)		/*!< FIFO data port*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_A_SIGNAL1_L_A            	(0U)			/*!< Signal channel 1 lower half timeslot a*/
#define BITM_SIGNAL1_L_A_SIGNAL1_L_A            	(0xffffU)		/*!< Signal channel 1 lower half timeslot a*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_A_SIGNAL1_H_A            	(0U)			/*!< Signal channel 1 upper half timeslot a*/
#define BITM_SIGNAL1_H_A_SIGNAL1_H_A            	(0xffffU)		/*!< Signal channel 1 upper half timeslot a*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_A_SIGNAL2_L_A            	(0U)			/*!< Signal channel 2 lower half timeslot a*/
#define BITM_SIGNAL2_L_A_SIGNAL2_L_A            	(0xffffU)		/*!< Signal channel 2 lower half timeslot a*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_A_SIGNAL2_H_A            	(0U)			/*!< Signal channel 2 upper half timeslot a*/
#define BITM_SIGNAL2_H_A_SIGNAL2_H_A            	(0xffffU)		/*!< Signal channel 2 upper half timeslot a*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_A_DARK1_L_A                	(0U)			/*!< Dark channel 1 value lower half*/
#define BITM_DARK1_L_A_DARK1_L_A                	(0xffffU)		/*!< Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_A_DARK1_H_A                	(0U)			/*!< Dark channel 1 value upper half*/
#define BITM_DARK1_H_A_DARK1_H_A                	(0xffffU)		/*!< Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_A_DARK2_L_A                	(0U)			/*!< Dark channel 2 value lower half*/
#define BITM_DARK2_L_A_DARK2_L_A                	(0xffffU)		/*!< Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_A_DARK2_H_A                	(0U)			/*!< Dark channel 2 value upper half*/
#define BITM_DARK2_H_A_DARK2_H_A                	(0xffffU)		/*!< Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_B_SIGNAL1_L_B            	(0U)			/*!< Signal channel 1 lower half timeslot b*/
#define BITM_SIGNAL1_L_B_SIGNAL1_L_B            	(0xffffU)		/*!< Signal channel 1 lower half timeslot b*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_B_SIGNAL1_H_B            	(0U)			/*!< Signal channel 1 upper half timeslot b*/
#define BITM_SIGNAL1_H_B_SIGNAL1_H_B            	(0xffffU)		/*!< Signal channel 1 upper half timeslot b*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_B_SIGNAL2_L_B            	(0U)			/*!< Signal channel 2 lower half timeslot b*/
#define BITM_SIGNAL2_L_B_SIGNAL2_L_B            	(0xffffU)		/*!< Signal channel 2 lower half timeslot b*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_B_SIGNAL2_H_B            	(0U)			/*!< Signal channel 2 upper half timeslot b*/
#define BITM_SIGNAL2_H_B_SIGNAL2_H_B            	(0xffffU)		/*!< Signal channel 2 upper half timeslot b*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_B_DARK1_L_B                	(0U)			/*!< Dark channel 1 value lower half*/
#define BITM_DARK1_L_B_DARK1_L_B                	(0xffffU)		/*!< Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_B_DARK1_H_B                	(0U)			/*!< Dark channel 1 value upper half*/
#define BITM_DARK1_H_B_DARK1_H_B                	(0xffffU)		/*!< Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_B_DARK2_L_B                	(0U)			/*!< Dark channel 2 value lower half*/
#define BITM_DARK2_L_B_DARK2_L_B                	(0xffffU)		/*!< Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_B_DARK2_H_B                	(0U)			/*!< Dark channel 2 value upper half*/
#define BITM_DARK2_H_B_DARK2_H_B                	(0xffffU)		/*!< Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_C_SIGNAL1_L_C            	(0U)			/*!< Signal channel 1 lower half timeslot c*/
#define BITM_SIGNAL1_L_C_SIGNAL1_L_C            	(0xffffU)		/*!< Signal channel 1 lower half timeslot c*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_C_SIGNAL1_H_C            	(0U)			/*!< Signal channel 1 upper half timeslot c*/
#define BITM_SIGNAL1_H_C_SIGNAL1_H_C            	(0xffffU)		/*!< Signal channel 1 upper half timeslot c*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_C_SIGNAL2_L_C            	(0U)			/*!< Signal channel 2 lower half timeslot c*/
#define BITM_SIGNAL2_L_C_SIGNAL2_L_C            	(0xffffU)		/*!< Signal channel 2 lower half timeslot c*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_C_SIGNAL2_H_C            	(0U)			/*!< Signal channel 2 upper half timeslot c*/
#define BITM_SIGNAL2_H_C_SIGNAL2_H_C            	(0xffffU)		/*!< Signal channel 2 upper half timeslot c*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_C_DARK1_L_C                	(0U)			/*!< Dark channel 1 value lower half*/
#define BITM_DARK1_L_C_DARK1_L_C                	(0xffffU)		/*!< Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_C_DARK1_H_C                	(0U)			/*!< Dark channel 1 value upper half*/
#define BITM_DARK1_H_C_DARK1_H_C                	(0xffffU)		/*!< Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_C_DARK2_L_C                	(0U)			/*!< Dark channel 2 value lower half*/
#define BITM_DARK2_L_C_DARK2_L_C                	(0xffffU)		/*!< Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_C_DARK2_H_C                	(0U)			/*!< Dark channel 2 value upper half*/
#define BITM_DARK2_H_C_DARK2_H_C                	(0xffffU)		/*!< Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_D_SIGNAL1_L_D            	(0U)			/*!< Signal channel 1 lower half timeslot d*/
#define BITM_SIGNAL1_L_D_SIGNAL1_L_D            	(0xffffU)		/*!< Signal channel 1 lower half timeslot d*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_D_SIGNAL1_H_D            	(0U)			/*!< Signal channel 1 upper half timeslot d*/
#define BITM_SIGNAL1_H_D_SIGNAL1_H_D            	(0xffffU)		/*!< Signal channel 1 upper half timeslot d*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_D_SIGNAL2_L_D            	(0U)			/*!< Signal channel 2 lower half timeslot d*/
#define BITM_SIGNAL2_L_D_SIGNAL2_L_D            	(0xffffU)		/*!< Signal channel 2 lower half timeslot d*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_D_SIGNAL2_H_D            	(0U)			/*!< Signal channel 2 upper half timeslot d*/
#define BITM_SIGNAL2_H_D_SIGNAL2_H_D            	(0xffffU)		/*!< Signal channel 2 upper half timeslot d*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_D_DARK1_L_D                	(0U)			/*!< Dark channel 1 value lower half*/
#define BITM_DARK1_L_D_DARK1_L_D                	(0xffffU)		/*!< Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_D_DARK1_H_D                	(0U)			/*!< Dark channel 1 value upper half*/
#define BITM_DARK1_H_D_DARK1_H_D                	(0xffffU)		/*!< Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_D_DARK2_L_D                	(0U)			/*!< Dark channel 2 value lower half*/
#define BITM_DARK2_L_D_DARK2_L_D                	(0xffffU)		/*!< Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_D_DARK2_H_D                	(0U)			/*!< Dark channel 2 value upper half*/
#define BITM_DARK2_H_D_DARK2_H_D                	(0xffffU)		/*!< Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_E_SIGNAL1_L_E            	(0U)			/*!< Signal channel 1 lower half timeslot e*/
#define BITM_SIGNAL1_L_E_SIGNAL1_L_E            	(0xffffU)		/*!< Signal channel 1 lower half timeslot e*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_E_SIGNAL1_H_E            	(0U)			/*!< Signal channel 1 upper half timeslot e*/
#define BITM_SIGNAL1_H_E_SIGNAL1_H_E            	(0xffffU)		/*!< Signal channel 1 upper half timeslot e*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_E_SIGNAL2_L_E            	(0U)			/*!< Signal channel 2 lower half timeslot e*/
#define BITM_SIGNAL2_L_E_SIGNAL2_L_E            	(0xffffU)		/*!< Signal channel 2 lower half timeslot e*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_E_SIGNAL2_H_E            	(0U)			/*!< Signal channel 2 upper half timeslot e*/
#define BITM_SIGNAL2_H_E_SIGNAL2_H_E            	(0xffffU)		/*!< Signal channel 2 upper half timeslot e*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_E_DARK1_L_E                	(0U)			/*!< Dark channel 1 value lower half*/
#define BITM_DARK1_L_E_DARK1_L_E                	(0xffffU)		/*!< Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_E_DARK1_H_E                	(0U)			/*!< Dark channel 1 value upper half*/
#define BITM_DARK1_H_E_DARK1_H_E                	(0xffffU)		/*!< Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_E_DARK2_L_E                	(0U)			/*!< Dark channel 2 value lower half*/
#define BITM_DARK2_L_E_DARK2_L_E                	(0xffffU)		/*!< Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_E_DARK2_H_E                	(0U)			/*!< Dark channel 2 value upper half*/
#define BITM_DARK2_H_E_DARK2_H_E                	(0xffffU)		/*!< Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_F_SIGNAL1_L_F            	(0U)			/*!< Signal channel 1 lower half timeslot f*/
#define BITM_SIGNAL1_L_F_SIGNAL1_L_F            	(0xffffU)		/*!< Signal channel 1 lower half timeslot f*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_F_SIGNAL1_H_F            	(0U)			/*!< Signal channel 1 upper half timeslot f*/
#define BITM_SIGNAL1_H_F_SIGNAL1_H_F            	(0xffffU)		/*!< Signal channel 1 upper half timeslot f*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_F_SIGNAL2_L_F            	(0U)			/*!< Signal channel 2 lower half timeslot f*/
#define BITM_SIGNAL2_L_F_SIGNAL2_L_F            	(0xffffU)		/*!< Signal channel 2 lower half timeslot f*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_F_SIGNAL2_H_F            	(0U)			/*!< Signal channel 2 upper half timeslot f*/
#define BITM_SIGNAL2_H_F_SIGNAL2_H_F            	(0xffffU)		/*!< Signal channel 2 upper half timeslot f*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_F_DARK1_L_F                	(0U)			/*!< Dark channel 1 value lower half*/
#define BITM_DARK1_L_F_DARK1_L_F                	(0xffffU)		/*!< Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_F_DARK1_H_F                	(0U)			/*!< Dark channel 1 value upper half*/
#define BITM_DARK1_H_F_DARK1_H_F                	(0xffffU)		/*!< Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_F_DARK2_L_F                	(0U)			/*!< Dark channel 2 value lower half*/
#define BITM_DARK2_L_F_DARK2_L_F                	(0xffffU)		/*!< Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_F_DARK2_H_F                	(0U)			/*!< Dark channel 2 value upper half*/
#define BITM_DARK2_H_F_DARK2_H_F                	(0xffffU)		/*!< Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_G_SIGNAL1_L_G            	(0U)			/*!< Signal channel 1 lower half timeslot g*/
#define BITM_SIGNAL1_L_G_SIGNAL1_L_G            	(0xffffU)		/*!< Signal channel 1 lower half timeslot g*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_G_SIGNAL1_H_G            	(0U)			/*!< Signal channel 1 upper half timeslot g*/
#define BITM_SIGNAL1_H_G_SIGNAL1_H_G            	(0xffffU)		/*!< Signal channel 1 upper half timeslot g*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_G_SIGNAL2_L_G            	(0U)			/*!< Signal channel 2 lower half timeslot g*/
#define BITM_SIGNAL2_L_G_SIGNAL2_L_G            	(0xffffU)		/*!< Signal channel 2 lower half timeslot g*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_G_SIGNAL2_H_G            	(0U)			/*!< Signal channel 2 upper half timeslot g*/
#define BITM_SIGNAL2_H_G_SIGNAL2_H_G            	(0xffffU)		/*!< Signal channel 2 upper half timeslot g*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_G_DARK1_L_G                	(0U)			/*!< Dark channel 1 value lower half*/
#define BITM_DARK1_L_G_DARK1_L_G                	(0xffffU)		/*!< Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_G_DARK1_H_G                	(0U)			/*!< Dark channel 1 value upper half*/
#define BITM_DARK1_H_G_DARK1_H_G                	(0xffffU)		/*!< Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_G_DARK2_L_G                	(0U)			/*!< Dark channel 2 value lower half*/
#define BITM_DARK2_L_G_DARK2_L_G                	(0xffffU)		/*!< Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_G_DARK2_H_G                	(0U)			/*!< Dark channel 2 value upper half*/
#define BITM_DARK2_H_G_DARK2_H_G                	(0xffffU)		/*!< Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_H_SIGNAL1_L_H            	(0U)			/*!< Signal channel 1 lower half timeslot h*/
#define BITM_SIGNAL1_L_H_SIGNAL1_L_H            	(0xffffU)		/*!< Signal channel 1 lower half timeslot h*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_H_SIGNAL1_H_H            	(0U)			/*!< Signal channel 1 upper half timeslot h*/
#define BITM_SIGNAL1_H_H_SIGNAL1_H_H            	(0xffffU)		/*!< Signal channel 1 upper half timeslot h*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_H_SIGNAL2_L_H            	(0U)			/*!< Signal channel 2 lower half timeslot h*/
#define BITM_SIGNAL2_L_H_SIGNAL2_L_H            	(0xffffU)		/*!< Signal channel 2 lower half timeslot h*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_H_SIGNAL2_H_H            	(0U)			/*!< Signal channel 2 upper half timeslot h*/
#define BITM_SIGNAL2_H_H_SIGNAL2_H_H            	(0xffffU)		/*!< Signal channel 2 upper half timeslot h*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_H_DARK1_L_H                	(0U)			/*!< Dark channel 1 value lower half*/
#define BITM_DARK1_L_H_DARK1_L_H                	(0xffffU)		/*!< Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_H_DARK1_H_H                	(0U)			/*!< Dark channel 1 value upper half*/
#define BITM_DARK1_H_H_DARK1_H_H                	(0xffffU)		/*!< Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_H_DARK2_L_H                	(0U)			/*!< Dark channel 2 value lower half*/
#define BITM_DARK2_L_H_DARK2_L_H                	(0xffffU)		/*!< Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_H_DARK2_H_H                	(0U)			/*!< Dark channel 2 value upper half*/
#define BITM_DARK2_H_H_DARK2_H_H                	(0xffffU)		/*!< Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_I_SIGNAL1_L_I            	(0U)			/*!< Signal channel 1 lower half timeslot i*/
#define BITM_SIGNAL1_L_I_SIGNAL1_L_I            	(0xffffU)		/*!< Signal channel 1 lower half timeslot i*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_I_SIGNAL1_H_I            	(0U)			/*!< Signal channel 1 upper half timeslot i*/
#define BITM_SIGNAL1_H_I_SIGNAL1_H_I            	(0xffffU)		/*!< Signal channel 1 upper half timeslot i*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_I_SIGNAL2_L_I            	(0U)			/*!< Signal channel 2 lower half timeslot i*/
#define BITM_SIGNAL2_L_I_SIGNAL2_L_I            	(0xffffU)		/*!< Signal channel 2 lower half timeslot i*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_I_SIGNAL2_H_I            	(0U)			/*!< Signal channel 2 upper half timeslot i*/
#define BITM_SIGNAL2_H_I_SIGNAL2_H_I            	(0xffffU)		/*!< Signal channel 2 upper half timeslot i*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_I_DARK1_L_I                	(0U)			/*!< Dark channel 1 value lower half*/
#define BITM_DARK1_L_I_DARK1_L_I                	(0xffffU)		/*!< Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_I_DARK1_H_I                	(0U)			/*!< Dark channel 1 value upper half*/
#define BITM_DARK1_H_I_DARK1_H_I                	(0xffffU)		/*!< Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_I_DARK2_L_I                	(0U)			/*!< Dark channel 2 value lower half*/
#define BITM_DARK2_L_I_DARK2_L_I                	(0xffffU)		/*!< Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_I_DARK2_H_I                	(0U)			/*!< Dark channel 2 value upper half*/
#define BITM_DARK2_H_I_DARK2_H_I                	(0xffffU)		/*!< Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_J_SIGNAL1_L_J            	(0U)			/*!< Signal channel 1 lower half timeslot j*/
#define BITM_SIGNAL1_L_J_SIGNAL1_L_J            	(0xffffU)		/*!< Signal channel 1 lower half timeslot j*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_J_SIGNAL1_H_J            	(0U)			/*!< Signal channel 1 upper half timeslot j*/
#define BITM_SIGNAL1_H_J_SIGNAL1_H_J            	(0xffffU)		/*!< Signal channel 1 upper half timeslot j*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_J_SIGNAL2_L_J            	(0U)			/*!< Signal channel 2 lower half timeslot j*/
#define BITM_SIGNAL2_L_J_SIGNAL2_L_J            	(0xffffU)		/*!< Signal channel 2 lower half timeslot j*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_J_SIGNAL2_H_J            	(0U)			/*!< Signal channel 2 upper half timeslot j*/
#define BITM_SIGNAL2_H_J_SIGNAL2_H_J            	(0xffffU)		/*!< Signal channel 2 upper half timeslot j*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_J_DARK1_L_J                	(0U)			/*!< Dark channel 1 value lower half*/
#define BITM_DARK1_L_J_DARK1_L_J                	(0xffffU)		/*!< Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_J_DARK1_H_J                	(0U)			/*!< Dark channel 1 value upper half timeslot j*/
#define BITM_DARK1_H_J_DARK1_H_J                	(0xffffU)		/*!< Dark channel 1 value upper half timeslot j*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_J_DARK2_L_J                	(0U)			/*!< Dark channel 2 value lower half*/
#define BITM_DARK2_L_J_DARK2_L_J                	(0xffffU)		/*!< Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_J_DARK2_H_J                	(0U)			/*!< Dark channel 2 value upper half timeslot j*/
#define BITM_DARK2_H_J_DARK2_H_J                	(0xffffU)		/*!< Dark channel 2 value upper half timeslot j*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_K_SIGNAL1_L_K            	(0U)			/*!< Signal channel 1 lower half timeslot k*/
#define BITM_SIGNAL1_L_K_SIGNAL1_L_K            	(0xffffU)		/*!< Signal channel 1 lower half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_K_SIGNAL1_H_K            	(0U)			/*!< Signal channel 1 upper half timeslot k*/
#define BITM_SIGNAL1_H_K_SIGNAL1_H_K            	(0xffffU)		/*!< Signal channel 1 upper half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_K_SIGNAL2_L_K            	(0U)			/*!< Signal channel 2 lower half timeslot k*/
#define BITM_SIGNAL2_L_K_SIGNAL2_L_K            	(0xffffU)		/*!< Signal channel 2 lower half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_K_SIGNAL2_H_K            	(0U)			/*!< Signal channel 2 upper half timeslot k*/
#define BITM_SIGNAL2_H_K_SIGNAL2_H_K            	(0xffffU)		/*!< Signal channel 2 upper half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_K_DARK1_L_K                	(0U)			/*!< Dark channel 1 value lower half timeslot k*/
#define BITM_DARK1_L_K_DARK1_L_K                	(0xffffU)		/*!< Dark channel 1 value lower half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_K_DARK1_H_K                	(0U)			/*!< Dark channel 1 value upper half timeslot k*/
#define BITM_DARK1_H_K_DARK1_H_K                	(0xffffU)		/*!< Dark channel 1 value upper half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_K_DARK2_L_K                	(0U)			/*!< Dark channel 2 value lower half timeslot k*/
#define BITM_DARK2_L_K_DARK2_L_K                	(0xffffU)		/*!< Dark channel 2 value lower half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_K_DARK2_H_K                	(0U)			/*!< Dark channel 2 value upper half timeslot k*/
#define BITM_DARK2_H_K_DARK2_H_K                	(0xffffU)		/*!< Dark channel 2 value upper half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_L_SIGNAL1_L_L            	(0U)			/*!< Signal channel 1 lower half timeslot l*/
#define BITM_SIGNAL1_L_L_SIGNAL1_L_L            	(0xffffU)		/*!< Signal channel 1 lower half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_L_SIGNAL1_H_L            	(0U)			/*!< Signal channel 1 upper half timeslot l*/
#define BITM_SIGNAL1_H_L_SIGNAL1_H_L            	(0xffffU)		/*!< Signal channel 1 upper half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_L_SIGNAL2_L_L            	(0U)			/*!< Signal channel 2 lower half timeslot l*/
#define BITM_SIGNAL2_L_L_SIGNAL2_L_L            	(0xffffU)		/*!< Signal channel 2 lower half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_L_SIGNAL2_H_L            	(0U)			/*!< Signal channel 2 upper half timeslot l*/
#define BITM_SIGNAL2_H_L_SIGNAL2_H_L            	(0xffffU)		/*!< Signal channel 2 upper half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_L_DARK1_L_L                	(0U)			/*!< Dark channel 1 value lower half timeslot l*/
#define BITM_DARK1_L_L_DARK1_L_L                	(0xffffU)		/*!< Dark channel 1 value lower half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_L_DARK1_H_L                	(0U)			/*!< Dark channel 1 value upper half timeslot l*/
#define BITM_DARK1_H_L_DARK1_H_L                	(0xffffU)		/*!< Dark channel 1 value upper half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_L_DARK2_L_L                	(0U)			/*!< Dark channel 2 value lower half timeslot l*/
#define BITM_DARK2_L_L_DARK2_L_L                	(0xffffU)		/*!< Dark channel 2 value lower half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_L_DARK2_H_L                	(0U)			/*!< Dark channel 2 value upper half timeslot l*/
#define BITM_DARK2_H_L_DARK2_H_L                	(0xffffU)		/*!< Dark channel 2 value upper half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_EFUSE						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_EFUSE_EFUSE_REG_EN                 	(0U)			/*!< Efuse register access enable*/
#define BITP_EFUSE_EFUSE_EN                     	(1U)			/*!< Efuse Enable*/
#define BITM_EFUSE_EFUSE_REG_EN                 	(0x0001U)		/*!< Efuse register access enable*/
#define BITM_EFUSE_EFUSE_EN                     	(0x0006U)		/*!< Efuse Enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_CTRL1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_CTRL1_ADC_GAIN                 	(0U)			/*!< Thermometric control code*/
#define BITP_ADC_CTRL1_ADC_SHORT                	(8U)			/*!< Thermometric control code*/
#define BITM_ADC_CTRL1_ADC_GAIN                 	(0x00ffU)		/*!< Thermometric control code*/
#define BITM_ADC_CTRL1_ADC_SHORT                	(0xff00U)		/*!< Thermometric control code*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_CTRL2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_CTRL2_ADC_RANGE                	(0U)			/*!< Control input range of ADC*/
#define BITP_ADC_CTRL2_ADC_BAND                 	(2U)			/*!< Band-limit the ADC to reduce noise*/
#define BITP_ADC_CTRL2_ADC_DELAY                	(4U)			/*!< Test mode related to band-limiting*/
#define BITP_ADC_CTRL2_ADC_A_DEL                	(5U)			/*!< adc_a_del*/
#define BITP_ADC_CTRL2_ADC_B_DEL                	(6U)			/*!< adc_b_del*/
#define BITP_ADC_CTRL2_ADC_C_DEL                	(7U)			/*!< adc_c_del*/
#define BITP_ADC_CTRL2_ADC_EN_TUNE              	(8U)			/*!< Adjust adc enable timing (phase 2)*/
#define BITM_ADC_CTRL2_ADC_RANGE                	(0x0003U)		/*!< Control input range of ADC*/
#define BITM_ADC_CTRL2_ADC_BAND                 	(0x000cU)		/*!< Band-limit the ADC to reduce noise*/
#define BITM_ADC_CTRL2_ADC_DELAY                	(0x0010U)		/*!< Test mode related to band-limiting*/
#define BITM_ADC_CTRL2_ADC_A_DEL                	(0x0020U)		/*!< adc_a_del*/
#define BITM_ADC_CTRL2_ADC_B_DEL                	(0x0040U)		/*!< adc_b_del*/
#define BITM_ADC_CTRL2_ADC_C_DEL                	(0x0080U)		/*!< adc_c_del*/
#define BITM_ADC_CTRL2_ADC_EN_TUNE              	(0x0300U)		/*!< Adjust adc enable timing (phase 2)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_POST						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_POST_DIFFN_PDIFF               	(0U)			/*!< ADC_TM_DIFFN_PDIFF*/
#define BITP_ADC_POST_CONV_START                	(2U)			/*!< Register control for conv_start*/
#define BITP_ADC_POST_CONV_FROMINT              	(3U)			/*!< Conv_start select control*/
#define BITP_ADC_POST_ADC_RETIME_EDGE           	(4U)			/*!< Retime edge selection*/
#define BITP_ADC_POST_ADC_PIPE                  	(8U)			/*!< Adjust sample clock timing*/
#define BITP_ADC_POST_ADC_TESTMODE              	(10U)			/*!< ADC test mode*/
#define BITP_ADC_POST_ADC_INPUT_SHORT           	(12U)			/*!< ADC input short duration*/
#define BITP_ADC_POST_ADC_DUMMY_CYCLE           	(14U)			/*!< Insert extra dummy cycle before first channel conversion*/
#define BITM_ADC_POST_DIFFN_PDIFF               	(0x0001U)		/*!< ADC_TM_DIFFN_PDIFF*/
#define BITM_ADC_POST_CONV_START                	(0x0004U)		/*!< Register control for conv_start*/
#define BITM_ADC_POST_CONV_FROMINT              	(0x0008U)		/*!< Conv_start select control*/
#define BITM_ADC_POST_ADC_RETIME_EDGE           	(0x0010U)		/*!< Retime edge selection*/
#define BITM_ADC_POST_ADC_PIPE                  	(0x0300U)		/*!< Adjust sample clock timing*/
#define BITM_ADC_POST_ADC_TESTMODE              	(0x0c00U)		/*!< ADC test mode*/
#define BITM_ADC_POST_ADC_INPUT_SHORT           	(0x3000U)		/*!< ADC input short duration*/
#define BITM_ADC_POST_ADC_DUMMY_CYCLE           	(0x4000U)		/*!< Insert extra dummy cycle before first channel conversion*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_REF_CTRL						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_REF_CTRL_REF_ABS                   	(0U)			/*!< Trim REF output value*/
#define BITP_REF_CTRL_REF_LIMIT                 	(9U)			/*!< Control charging time*/
#define BITP_REF_CTRL_REF_TM                    	(10U)			/*!< MUX test points*/
#define BITM_REF_CTRL_REF_ABS                   	(0x00ffU)		/*!< Trim REF output value*/
#define BITM_REF_CTRL_REF_LIMIT                 	(0x0200U)		/*!< Control charging time*/
#define BITM_REF_CTRL_REF_TM                    	(0x0c00U)		/*!< MUX test points*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_BIAS_CTRL						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BIAS_CTRL_BIAS_I5U1_PD             	(0U)			/*!< Power down of 5uA output1 for adc*/
#define BITP_BIAS_CTRL_BIAS_I5U2_PD             	(1U)			/*!< Power down of 5uA output2 for adc*/
#define BITP_BIAS_CTRL_BIAS_I5U3_PD             	(2U)			/*!< Power down of 5uA output3 for vref*/
#define BITP_BIAS_CTRL_BIAS_I5U4_PD             	(3U)			/*!< Power down of 5uA output4 for vref*/
#define BITP_BIAS_CTRL_BIAS_I10U1_PD            	(4U)			/*!< Power down of 10uA output1 for TBD*/
#define BITP_BIAS_CTRL_BIAS_I10U2_PD            	(5U)			/*!< Power down of 10uA output2 for TBD*/
#define BITP_BIAS_CTRL_BIAS_I10U3_PD            	(6U)			/*!< Power down of 10uA output3 for LED Driver*/
#define BITP_BIAS_CTRL_BIAS_I10U4_PD            	(7U)			/*!< Power down of 10uA output4 for LED Driver*/
#define BITP_BIAS_CTRL_BIAS_I10U5_PD            	(8U)			/*!< Power down of 10uA output5 AFE Vref*/
#define BITP_BIAS_CTRL_BIAS_I10U6_PD            	(9U)			/*!< Power down of 10uA output6 for VICM*/
#define BITP_BIAS_CTRL_BIAS_TEST                	(11U)			/*!< Output of 10uA test current*/
#define BITP_BIAS_CTRL_AFE_HALF_CURRENT         	(12U)			/*!< Set TIA, BPF, or INT to half bias current.*/
#define BITM_BIAS_CTRL_BIAS_I5U1_PD             	(0x0001U)		/*!< Power down of 5uA output1 for adc*/
#define BITM_BIAS_CTRL_BIAS_I5U2_PD             	(0x0002U)		/*!< Power down of 5uA output2 for adc*/
#define BITM_BIAS_CTRL_BIAS_I5U3_PD             	(0x0004U)		/*!< Power down of 5uA output3 for vref*/
#define BITM_BIAS_CTRL_BIAS_I5U4_PD             	(0x0008U)		/*!< Power down of 5uA output4 for vref*/
#define BITM_BIAS_CTRL_BIAS_I10U1_PD            	(0x0010U)		/*!< Power down of 10uA output1 for TBD*/
#define BITM_BIAS_CTRL_BIAS_I10U2_PD            	(0x0020U)		/*!< Power down of 10uA output2 for TBD*/
#define BITM_BIAS_CTRL_BIAS_I10U3_PD            	(0x0040U)		/*!< Power down of 10uA output3 for LED Driver*/
#define BITM_BIAS_CTRL_BIAS_I10U4_PD            	(0x0080U)		/*!< Power down of 10uA output4 for LED Driver*/
#define BITM_BIAS_CTRL_BIAS_I10U5_PD            	(0x0100U)		/*!< Power down of 10uA output5 AFE Vref*/
#define BITM_BIAS_CTRL_BIAS_I10U6_PD            	(0x0200U)		/*!< Power down of 10uA output6 for VICM*/
#define BITM_BIAS_CTRL_BIAS_TEST                	(0x0800U)		/*!< Output of 10uA test current*/
#define BITM_BIAS_CTRL_AFE_HALF_CURRENT         	(0x7000U)		/*!< Set TIA, BPF, or INT to half bias current.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_BIAS_TRIM1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BIAS_TRIM1_BIAS_TRIM10U5           	(0U)			/*!< Bias trim 10uA for CM of BPF and INT*/
#define BITP_BIAS_TRIM1_BIAS_TRIM10U6           	(2U)			/*!< Bias trim 10uA for VICM*/
#define BITP_BIAS_TRIM1_BIAS_ATRIM              	(4U)			/*!< Trim all bias current outputs (50uA, 10uA and 5uA)*/
#define BITP_BIAS_TRIM1_AFE_REFBUF_10U_TRIM     	(8U)			/*!< Bias trim for afe refbuf*/
#define BITM_BIAS_TRIM1_BIAS_TRIM10U5           	(0x0003U)		/*!< Bias trim 10uA for CM of BPF and INT*/
#define BITM_BIAS_TRIM1_BIAS_TRIM10U6           	(0x000cU)		/*!< Bias trim 10uA for VICM*/
#define BITM_BIAS_TRIM1_BIAS_ATRIM              	(0x0070U)		/*!< Trim all bias current outputs (50uA, 10uA and 5uA)*/
#define BITM_BIAS_TRIM1_AFE_REFBUF_10U_TRIM     	(0x0300U)		/*!< Bias trim for afe refbuf*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_BIAS_TRIM2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BIAS_TRIM2_BIAS_TRIM5U1            	(0U)			/*!< Trim bias for ADC*/
#define BITP_BIAS_TRIM2_BIAS_TRIM5U2            	(2U)			/*!< Trim bias for ADC*/
#define BITP_BIAS_TRIM2_BIAS_TRIM5U3            	(4U)			/*!< Trim bias for REF*/
#define BITP_BIAS_TRIM2_BIAS_TRIM5U4            	(6U)			/*!< Trim bias for REF*/
#define BITP_BIAS_TRIM2_BIAS_TRIM10U1           	(8U)			/*!< Trim bias for TBD*/
#define BITP_BIAS_TRIM2_BIAS_TRIM10U2           	(10U)			/*!< Trim bias to TBD*/
#define BITP_BIAS_TRIM2_BIAS_TRIM10U3           	(12U)			/*!< Trim bias for LED driver*/
#define BITP_BIAS_TRIM2_BIAS_TRIM10U4           	(14U)			/*!< Trim bias for LED driver*/
#define BITM_BIAS_TRIM2_BIAS_TRIM5U1            	(0x0003U)		/*!< Trim bias for ADC*/
#define BITM_BIAS_TRIM2_BIAS_TRIM5U2            	(0x000cU)		/*!< Trim bias for ADC*/
#define BITM_BIAS_TRIM2_BIAS_TRIM5U3            	(0x0030U)		/*!< Trim bias for REF*/
#define BITM_BIAS_TRIM2_BIAS_TRIM5U4            	(0x00c0U)		/*!< Trim bias for REF*/
#define BITM_BIAS_TRIM2_BIAS_TRIM10U1           	(0x0300U)		/*!< Trim bias for TBD*/
#define BITM_BIAS_TRIM2_BIAS_TRIM10U2           	(0x0c00U)		/*!< Trim bias to TBD*/
#define BITM_BIAS_TRIM2_BIAS_TRIM10U3           	(0x3000U)		/*!< Trim bias for LED driver*/
#define BITM_BIAS_TRIM2_BIAS_TRIM10U4           	(0xc000U)		/*!< Trim bias for LED driver*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_BG_CTRL						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BG_CTRL_BG_TRIM                    	(0U)			/*!< Trim bandgap current output*/
#define BITP_BG_CTRL_AFE_TRIM_BPF               	(4U)			/*!< Global bpf trim*/
#define BITP_BG_CTRL_LDO_TRIM_BIAS              	(6U)			/*!< LDO bias*/
#define BITP_BG_CTRL_LDO_TRIM_RES               	(8U)			/*!< LDO vout value*/
#define BITP_BG_CTRL_LDO_TRIM_CAP               	(10U)			/*!< LDO Capacitor*/
#define BITP_BG_CTRL_DET_TRIM                   	(12U)			/*!< Voltage trim for tia saturation detector*/
#define BITP_BG_CTRL_DET_PD_LCMP                	(14U)			/*!< Disable for low-side tia saturation detection*/
#define BITP_BG_CTRL_DET_PD_HCMP                	(15U)			/*!< Disable for high-side tia saturation detection*/
#define BITM_BG_CTRL_BG_TRIM                    	(0x000fU)		/*!< Trim bandgap current output*/
#define BITM_BG_CTRL_AFE_TRIM_BPF               	(0x0030U)		/*!< Global bpf trim*/
#define BITM_BG_CTRL_LDO_TRIM_BIAS              	(0x00c0U)		/*!< LDO bias*/
#define BITM_BG_CTRL_LDO_TRIM_RES               	(0x0300U)		/*!< LDO vout value*/
#define BITM_BG_CTRL_LDO_TRIM_CAP               	(0x0c00U)		/*!< LDO Capacitor*/
#define BITM_BG_CTRL_DET_TRIM                   	(0x3000U)		/*!< Voltage trim for tia saturation detector*/
#define BITM_BG_CTRL_DET_PD_LCMP                	(0x4000U)		/*!< Disable for low-side tia saturation detection*/
#define BITM_BG_CTRL_DET_PD_HCMP                	(0x8000U)		/*!< Disable for high-side tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_POWER_FRC						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_POWER_FRC_PWR_TIA1             	(0U)			/*!< Channel1 TIA Amp power force control*/
#define BITP_AFE_POWER_FRC_PWR_TIA2             	(2U)			/*!< Channel2 TIA Amp power force control*/
#define BITP_AFE_POWER_FRC_PWR_INT1             	(4U)			/*!< Channel1 Integrator Amp power force control*/
#define BITP_AFE_POWER_FRC_PWR_INT2             	(6U)			/*!< Channel2 Integrator Amp power force control*/
#define BITP_AFE_POWER_FRC_PWR_BPF1             	(8U)			/*!< Channel1 BPF Amp power force control*/
#define BITP_AFE_POWER_FRC_PWR_BPF2             	(10U)			/*!< Channel2 BPF Amp power force control*/
#define BITP_AFE_POWER_FRC_PWR_AFE_VREF         	(12U)			/*!< AFE vref power force control*/
#define BITP_AFE_POWER_FRC_PWR_VICMREF          	(14U)			/*!< Channel2 TIA Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_TIA1             	(0x0003U)		/*!< Channel1 TIA Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_TIA2             	(0x000cU)		/*!< Channel2 TIA Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_INT1             	(0x0030U)		/*!< Channel1 Integrator Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_INT2             	(0x00c0U)		/*!< Channel2 Integrator Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_BPF1             	(0x0300U)		/*!< Channel1 BPF Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_BPF2             	(0x0c00U)		/*!< Channel2 BPF Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_AFE_VREF         	(0x3000U)		/*!< AFE vref power force control*/
#define BITM_AFE_POWER_FRC_PWR_VICMREF          	(0xc000U)		/*!< Channel2 TIA Amp power force control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_REF_POWER_FRC						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_REF_POWER_FRC_PWR_BG               	(0U)			/*!< Bandgap power force control*/
#define BITP_REF_POWER_FRC_PWR_BIAS             	(2U)			/*!< Bias distribution power force control*/
#define BITP_REF_POWER_FRC_PWR_ADC              	(4U)			/*!< ADC power force control*/
#define BITP_REF_POWER_FRC_PWR_ADC_VREF         	(6U)			/*!< ADC vref power force control*/
#define BITP_REF_POWER_FRC_PWR_DET1             	(8U)			/*!< TIA Sat detector channel 1 force control*/
#define BITP_REF_POWER_FRC_PWR_DET2             	(10U)			/*!< TIA Sat detector channel 2 force control*/
#define BITP_REF_POWER_FRC_PWR_LDO              	(12U)			/*!< LDO power force control*/
#define BITM_REF_POWER_FRC_PWR_BG               	(0x0003U)		/*!< Bandgap power force control*/
#define BITM_REF_POWER_FRC_PWR_BIAS             	(0x000cU)		/*!< Bias distribution power force control*/
#define BITM_REF_POWER_FRC_PWR_ADC              	(0x0030U)		/*!< ADC power force control*/
#define BITM_REF_POWER_FRC_PWR_ADC_VREF         	(0x00c0U)		/*!< ADC vref power force control*/
#define BITM_REF_POWER_FRC_PWR_DET1             	(0x0300U)		/*!< TIA Sat detector channel 1 force control*/
#define BITM_REF_POWER_FRC_PWR_DET2             	(0x0c00U)		/*!< TIA Sat detector channel 2 force control*/
#define BITM_REF_POWER_FRC_PWR_LDO              	(0x3000U)		/*!< LDO power force control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POWER_FRC						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POWER_FRC_PWR_LED1             	(0U)			/*!< Led1 Amp  power force control*/
#define BITP_LED_POWER_FRC_PWR_LED2             	(2U)			/*!< Led2 Amp  power force control*/
#define BITP_LED_POWER_FRC_PWR_LED3             	(4U)			/*!< Led3 Amp  power force control*/
#define BITP_LED_POWER_FRC_PWR_LED4             	(6U)			/*!< Led4 Amp  power force control*/
#define BITM_LED_POWER_FRC_PWR_LED1             	(0x0003U)		/*!< Led1 Amp  power force control*/
#define BITM_LED_POWER_FRC_PWR_LED2             	(0x000cU)		/*!< Led2 Amp  power force control*/
#define BITM_LED_POWER_FRC_PWR_LED3             	(0x0030U)		/*!< Led3 Amp  power force control*/
#define BITM_LED_POWER_FRC_PWR_LED4             	(0x00c0U)		/*!< Led4 Amp  power force control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TEST_MODE						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TEST_MODE_ADC_SPORT_OUT_EN         	(0U)			/*!< ADC SPORT output control*/
#define BITP_TEST_MODE_LDO_BYPASS               	(1U)			/*!< LDO bypass*/
#define BITP_TEST_MODE_OSC_32M_FORCE            	(3U)			/*!< Force Enable High Frequency Oscillator*/
#define BITP_TEST_MODE_USE_DATA_TESTPATTERN     	(4U)			/*!< Use testpattern instead of actual data*/
#define BITP_TEST_MODE_PIN_TEST                 	(8U)			/*!< Analog test mux output select*/
#define BITM_TEST_MODE_ADC_SPORT_OUT_EN         	(0x0001U)		/*!< ADC SPORT output control*/
#define BITM_TEST_MODE_LDO_BYPASS               	(0x0002U)		/*!< LDO bypass*/
#define BITM_TEST_MODE_OSC_32M_FORCE            	(0x0008U)		/*!< Force Enable High Frequency Oscillator*/
#define BITM_TEST_MODE_USE_DATA_TESTPATTERN     	(0x0070U)		/*!< Use testpattern instead of actual data*/
#define BITM_TEST_MODE_PIN_TEST                 	(0x3f00U)		/*!< Analog test mux output select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_TRIM						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_TRIM_LED_PDB_TUNE              	(8U)			/*!< Led amplifier powerdown adjustment*/
#define BITP_LED_TRIM_LED_PDB_DELAY_DISABLE     	(10U)			/*!< Led amplifier trailing edge poweroff delay disable*/
#define BITM_LED_TRIM_LED_PDB_TUNE              	(0x0300U)		/*!< Led amplifier powerdown adjustment*/
#define BITM_LED_TRIM_LED_PDB_DELAY_DISABLE     	(0x0400U)		/*!< Led amplifier trailing edge poweroff delay disable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_TEST						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_TEST_LED_CHOP_DISABLE          	(10U)			/*!< LED chop disable*/
#define BITP_LED_TEST_LED_CHOP_INVERT           	(11U)			/*!< LED chop invert*/
#define BITP_LED_TEST_TEST_LED_CHOP_EXT         	(14U)			/*!< Enabled selected external gpio for LED chop clock.*/
#define BITM_LED_TEST_LED_CHOP_DISABLE          	(0x0400U)		/*!< LED chop disable*/
#define BITM_LED_TEST_LED_CHOP_INVERT           	(0x0800U)		/*!< LED chop invert*/
#define BITM_LED_TEST_TEST_LED_CHOP_EXT         	(0x4000U)		/*!< Enabled selected external gpio for LED chop clock.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CMCLK_CFG						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CMCLK_CFG_CMCLK_WIDTH              	(0U)			/*!< Common mode clock duration in microseconds*/
#define BITP_CMCLK_CFG_CMCLK_TYPE               	(3U)			/*!< Common mode clocking method*/
#define BITP_CMCLK_CFG_CMCLK_SEL                	(4U)			/*!< Common mode clock frequency select*/
#define BITM_CMCLK_CFG_CMCLK_WIDTH              	(0x0007U)		/*!< Common mode clock duration in microseconds*/
#define BITM_CMCLK_CFG_CMCLK_TYPE               	(0x0008U)		/*!< Common mode clocking method*/
#define BITM_CMCLK_CFG_CMCLK_SEL                	(0x0070U)		/*!< Common mode clock frequency select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_I2C_KEY						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2C_KEY_I2C_KEY                    	(0U)			/*!< i2c address change key*/
#define BITP_I2C_KEY_I2C_KEY_MATCH              	(12U)			/*!< i2c gpio bit select*/
#define BITM_I2C_KEY_I2C_KEY                    	(0x0fffU)		/*!< i2c address change key*/
#define BITM_I2C_KEY_I2C_KEY_MATCH              	(0xf000U)		/*!< i2c gpio bit select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_I2C_ADDR						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2C_ADDR_I2C_SLAVE_ADDR            	(1U)			/*!< i2c slave address update field*/
#define BITP_I2C_ADDR_I2C_SLAVE_KEY2            	(8U)			/*!< i2c key part 2*/
#define BITM_I2C_ADDR_I2C_SLAVE_ADDR            	(0x00feU)		/*!< i2c slave address update field*/
#define BITM_I2C_ADDR_I2C_SLAVE_KEY2            	(0xff00U)		/*!< i2c key part 2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TIA_TEST						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TIA_TEST_REF_CH_RI_SEL             	(9U)			/*!< Reference channel resistor select*/
#define BITP_TIA_TEST_TIA_SATDET_OFFSET         	(10U)			/*!< Threshold detector start delay*/
#define BITP_TIA_TEST_AFE_TIA_SHORTB1           	(13U)			/*!< Channel1 TIA output short control when TIA powered down.*/
#define BITP_TIA_TEST_AFE_TIA_SHORTB2           	(14U)			/*!< Channel2 TIA output short control when TIA powered down.*/
#define BITP_TIA_TEST_TIA_SHORT_GND_DISABLE     	(15U)			/*!< Channel 2 short to gnd disable*/
#define BITM_TIA_TEST_REF_CH_RI_SEL             	(0x0200U)		/*!< Reference channel resistor select*/
#define BITM_TIA_TEST_TIA_SATDET_OFFSET         	(0x0c00U)		/*!< Threshold detector start delay*/
#define BITM_TIA_TEST_AFE_TIA_SHORTB1           	(0x2000U)		/*!< Channel1 TIA output short control when TIA powered down.*/
#define BITM_TIA_TEST_AFE_TIA_SHORTB2           	(0x4000U)		/*!< Channel2 TIA output short control when TIA powered down.*/
#define BITM_TIA_TEST_TIA_SHORT_GND_DISABLE     	(0x8000U)		/*!< Channel 2 short to gnd disable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_A_TIMESLOT_OFFSET_A        	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_A_INPUT_R_SELECT_A         	(10U)			/*!< Input resistor select*/
#define BITP_TS_CTRL_A_SAMPLE_TYPE_A            	(12U)			/*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_A_CH2_EN_A                 	(14U)			/*!< Channel 2 enable*/
#define BITP_TS_CTRL_A_SUBSAMPLE_A              	(15U)			/*!< Subsample using decimate_factor*/
#define BITM_TS_CTRL_A_TIMESLOT_OFFSET_A        	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_A_INPUT_R_SELECT_A         	(0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_A_SAMPLE_TYPE_A            	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_A_CH2_EN_A                 	(0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_A_SUBSAMPLE_A              	(0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_A_AFE_PATH_CFG_A           	(0U)			/*!< Bypass and input mux select*/
#define BITP_TS_PATH_A_GOUT_A                   	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_A_INP_REF_CH_A             	(10U)			/*!< Reference channel input select*/
#define BITP_TS_PATH_A_PRE_WIDTH_A              	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITM_TS_PATH_A_AFE_PATH_CFG_A           	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_A_GOUT_A                   	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_A_INP_REF_CH_A             	(0x0c00U)		/*!< Reference channel input select*/
#define BITM_TS_PATH_A_PRE_WIDTH_A              	(0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_A_INP12_A                   	(0U)			/*!< Input pair12 enable*/
#define BITP_INPUTS_A_INP34_A                   	(4U)			/*!< Input pair34 enable*/
#define BITP_INPUTS_A_INP56_A                   	(8U)			/*!< Input pair56 enable*/
#define BITP_INPUTS_A_INP78_A                   	(12U)			/*!< input pair78 enable*/
#define BITM_INPUTS_A_INP12_A                   	(0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_A_INP34_A                   	(0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_A_INP56_A                   	(0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_A_INP78_A                   	(0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_A_VC1_SEL_A                	(0U)			/*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_A_VC1_ALT_A                	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_A_VC1_PULSE_A              	(4U)			/*!< VC1 pulse control*/
#define BITP_CATHODE_A_VC2_SEL_A                	(6U)			/*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_A_VC2_ALT_A                	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_A_VC2_PULSE_A              	(10U)			/*!< VC2 pulse control*/
#define BITP_CATHODE_A_PRECON_A                 	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_A_VC1_SEL_A                	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_A_VC1_ALT_A                	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_A_VC1_PULSE_A              	(0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_A_VC2_SEL_A                	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_A_VC2_ALT_A                	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_A_VC2_PULSE_A              	(0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_A_PRECON_A                 	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_A_TIA_GAIN_CH1_A          	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_A_TIA_GAIN_CH2_A          	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_A_VREF_PULSE_VAL_A        	(6U)			/*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_A_AFE_TRIM_VREF_A         	(8U)			/*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_A_VREF_PULSE_A            	(10U)			/*!< Vref pulse control*/
#define BITP_AFE_TRIM_A_AFE_TRIM_INT1_A         	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_A_AFE_TRIM_INT2_A         	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_A_AFE_TIA_SAT_DETECT_EN_A 	(15U)			/*!< Enable tia saturation detection*/
#define BITM_AFE_TRIM_A_TIA_GAIN_CH1_A          	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_A_TIA_GAIN_CH2_A          	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_A_VREF_PULSE_VAL_A        	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_A_AFE_TRIM_VREF_A         	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_A_VREF_PULSE_A            	(0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_A_AFE_TRIM_INT1_A         	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_A_AFE_TRIM_INT2_A         	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_A_AFE_TIA_SAT_DETECT_EN_A 	(0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_A_LED_CURRENT1_A         	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_A_LED_DRIVESIDE1_A       	(7U)			/*!< Led output select for LED1*/
#define BITP_LED_POW12_A_LED_CURRENT2_A         	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_A_LED_DRIVESIDE2_A       	(15U)			/*!< Led output select for LED2*/
#define BITM_LED_POW12_A_LED_CURRENT1_A         	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_A_LED_DRIVESIDE1_A       	(0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_A_LED_CURRENT2_A         	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_A_LED_DRIVESIDE2_A       	(0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_A_LED_CURRENT3_A         	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_A_LED_DRIVESIDE3_A       	(7U)			/*!< Led output select for LED3*/
#define BITP_LED_POW34_A_LED_CURRENT4_A         	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_A_LED_DRIVESIDE4_A       	(15U)			/*!< Led output select for LED4*/
#define BITM_LED_POW34_A_LED_CURRENT3_A         	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_A_LED_DRIVESIDE3_A       	(0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_A_LED_CURRENT4_A         	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_A_LED_DRIVESIDE4_A       	(0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_A_NUM_REPEAT_A              	(0U)			/*!< Number of sequence repeats.*/
#define BITP_COUNTS_A_NUM_INT_A                 	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITM_COUNTS_A_NUM_REPEAT_A              	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_A_NUM_INT_A                 	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_A_MIN_PERIOD_A              	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_A_MOD_TYPE_A                	(12U)			/*!< Modulation Connection type*/
#define BITM_PERIOD_A_MIN_PERIOD_A              	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_A_MOD_TYPE_A                	(0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_A_LED_OFFSET_A           	(0U)			/*!< LED pulse offset*/
#define BITP_LED_PULSE_A_LED_WIDTH_A            	(8U)			/*!< LED pulse width*/
#define BITM_LED_PULSE_A_LED_OFFSET_A           	(0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_A_LED_WIDTH_A            	(0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_A_INTEG_WIDTH_A        	(0U)			/*!< Integrator clock width*/
#define BITP_INTEG_WIDTH_A_ADC_COUNT_A          	(6U)			/*!< ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_A_CH1_AMP_DISABLE_A    	(8U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_A_AFE_INT_C_BUF_A      	(11U)			/*!< Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_A_CH2_AMP_DISABLE_A    	(12U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_A_SINGLE_INTEG_A       	(15U)			/*!< Use single integrator pulse*/
#define BITM_INTEG_WIDTH_A_INTEG_WIDTH_A        	(0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_WIDTH_A_ADC_COUNT_A          	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_A_CH1_AMP_DISABLE_A    	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_A_AFE_INT_C_BUF_A      	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_A_CH2_AMP_DISABLE_A    	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_A_SINGLE_INTEG_A       	(0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_A_INTEG_FINE_OFFSET_A 	(0U)			/*!< Integrator clock fine offset*/
#define BITP_INTEG_OFFSET_A_INTEG_OFFSET_A      	(5U)			/*!< Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_A_INTEG_FINE_OFFSET_A 	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_A_INTEG_OFFSET_A      	(0x1fe0U)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_A_MOD_OFFSET_A           	(0U)			/*!< modulation pulse offset*/
#define BITP_MOD_PULSE_A_MOD_WIDTH_A            	(8U)			/*!< modulation pulse width.*/
#define BITM_MOD_PULSE_A_MOD_OFFSET_A           	(0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_A_MOD_WIDTH_A            	(0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_A_REVERSE_INTEG_A          	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_A_SUBTRACT_A               	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_A_MOD_DISABLE_A            	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_A_LED_DISABLE_A            	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITM_PATTERN_A_REVERSE_INTEG_A          	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_A_SUBTRACT_A               	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_A_MOD_DISABLE_A            	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_A_LED_DISABLE_A            	(0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_A_CH1_ADC_ADJUST_A        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF1_A_CH1_ADC_ADJUST_A        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_A_CH2_ADC_ADJUST_A        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF2_A_CH2_ADC_ADJUST_A        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_A_SIGNAL_SIZE_A              	(0U)			/*!< Signal data size*/
#define BITP_DATA1_A_SIGNAL_SHIFT_A             	(3U)			/*!< Signal data shift*/
#define BITP_DATA1_A_DARK_SIZE_A                	(8U)			/*!< Dark data size*/
#define BITP_DATA1_A_DARK_SHIFT_A               	(11U)			/*!< Dark data shift*/
#define BITM_DATA1_A_SIGNAL_SIZE_A              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA1_A_SIGNAL_SHIFT_A             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA1_A_DARK_SIZE_A                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA1_A_DARK_SHIFT_A               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_A_LIT_SIZE_A                 	(0U)			/*!< Lit data size*/
#define BITP_DATA2_A_LIT_SHIFT_A                	(3U)			/*!< Lit data shift*/
#define BITM_DATA2_A_LIT_SIZE_A                 	(0x0007U)		/*!< Lit data size*/
#define BITM_DATA2_A_LIT_SHIFT_A                	(0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_A_DECIMATE_TYPE_A         	(0U)			/*!< Decimation Type Select*/
#define BITP_DECIMATE_A_DECIMATE_FACTOR_A       	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_A_DECIMATE_TYPE_A         	(0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_A_DECIMATE_FACTOR_A       	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_A_LIT_OFFSET_A          	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_A_LIT_OFFSET_A          	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_A_DARK1_OFFSET_A       	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_A_DARK2_OFFSET_A       	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_A_DARK1_OFFSET_A       	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_A_DARK2_OFFSET_A       	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_A_THRESH0_TYPE_A        	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_A_THRESH0_DIR_A         	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_A_THRESH0_CHAN_A        	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_A_THRESH1_TYPE_A        	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_A_THRESH1_DIR_A         	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_A_THRESH1_CHAN_A        	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_A_THRESH0_TYPE_A        	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_A_THRESH0_DIR_A         	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_A_THRESH0_CHAN_A        	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_A_THRESH1_TYPE_A        	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_A_THRESH1_DIR_A         	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_A_THRESH1_CHAN_A        	(0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_A_THRESH0_VALUE_A          	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_A_THRESH0_SHIFT_A          	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_A_THRESH0_VALUE_A          	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_A_THRESH0_SHIFT_A          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_A_THRESH1_VALUE_A          	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_A_THRESH1_SHIFT_A          	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_A_THRESH1_VALUE_A          	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_A_THRESH1_SHIFT_A          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN2_A_AFE_SWAP_A              	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITM_PATTERN2_A_AFE_SWAP_A              	(0x000fU)		/*!< 4 Pulse input polarity pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_B_TIMESLOT_OFFSET_B        	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_B_INPUT_R_SELECT_B         	(10U)			/*!< Input resistor select*/
#define BITP_TS_CTRL_B_SAMPLE_TYPE_B            	(12U)			/*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_B_CH2_EN_B                 	(14U)			/*!< Channel 2 enable*/
#define BITP_TS_CTRL_B_SUBSAMPLE_B              	(15U)			/*!< Subsample using decimate_factor*/
#define BITM_TS_CTRL_B_TIMESLOT_OFFSET_B        	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_B_INPUT_R_SELECT_B         	(0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_B_SAMPLE_TYPE_B            	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_B_CH2_EN_B                 	(0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_B_SUBSAMPLE_B              	(0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_B_AFE_PATH_CFG_B           	(0U)			/*!< Bypass and input mux select*/
#define BITP_TS_PATH_B_GOUT_B                   	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_B_INP_REF_CH_B             	(10U)			/*!< Reference channel input select*/
#define BITP_TS_PATH_B_PRE_WIDTH_B              	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITM_TS_PATH_B_AFE_PATH_CFG_B           	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_B_GOUT_B                   	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_B_INP_REF_CH_B             	(0x0c00U)		/*!< Reference channel input select*/
#define BITM_TS_PATH_B_PRE_WIDTH_B              	(0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_B_INP12_B                   	(0U)			/*!< Input pair12 enable*/
#define BITP_INPUTS_B_INP34_B                   	(4U)			/*!< Input pair34 enable*/
#define BITP_INPUTS_B_INP56_B                   	(8U)			/*!< Input pair56 enable*/
#define BITP_INPUTS_B_INP78_B                   	(12U)			/*!< input pair78 enable*/
#define BITM_INPUTS_B_INP12_B                   	(0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_B_INP34_B                   	(0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_B_INP56_B                   	(0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_B_INP78_B                   	(0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_B_VC1_SEL_B                	(0U)			/*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_B_VC1_ALT_B                	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_B_VC1_PULSE_B              	(4U)			/*!< VC1 pulse control*/
#define BITP_CATHODE_B_VC2_SEL_B                	(6U)			/*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_B_VC2_ALT_B                	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_B_VC2_PULSE_B              	(10U)			/*!< VC2 pulse control*/
#define BITP_CATHODE_B_PRECON_B                 	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_B_VC1_SEL_B                	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_B_VC1_ALT_B                	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_B_VC1_PULSE_B              	(0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_B_VC2_SEL_B                	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_B_VC2_ALT_B                	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_B_VC2_PULSE_B              	(0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_B_PRECON_B                 	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_B_TIA_GAIN_CH1_B          	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_B_TIA_GAIN_CH2_B          	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_B_VREF_PULSE_VAL_B        	(6U)			/*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_B_AFE_TRIM_VREF_B         	(8U)			/*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_B_VREF_PULSE_B            	(10U)			/*!< Vref pulse control*/
#define BITP_AFE_TRIM_B_AFE_TRIM_INT1_B         	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_B_AFE_TRIM_INT2_B         	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_B_AFE_TIA_SAT_DETECT_EN_B 	(15U)			/*!< Enable tia saturation detection*/
#define BITM_AFE_TRIM_B_TIA_GAIN_CH1_B          	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_B_TIA_GAIN_CH2_B          	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_B_VREF_PULSE_VAL_B        	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_B_AFE_TRIM_VREF_B         	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_B_VREF_PULSE_B            	(0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_B_AFE_TRIM_INT1_B         	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_B_AFE_TRIM_INT2_B         	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_B_AFE_TIA_SAT_DETECT_EN_B 	(0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_B_LED_CURRENT1_B         	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_B_LED_DRIVESIDE1_B       	(7U)			/*!< Led output select for LED1*/
#define BITP_LED_POW12_B_LED_CURRENT2_B         	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_B_LED_DRIVESIDE2_B       	(15U)			/*!< Led output select for LED2*/
#define BITM_LED_POW12_B_LED_CURRENT1_B         	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_B_LED_DRIVESIDE1_B       	(0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_B_LED_CURRENT2_B         	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_B_LED_DRIVESIDE2_B       	(0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_B_LED_CURRENT3_B         	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_B_LED_DRIVESIDE3_B       	(7U)			/*!< Led output select for LED3*/
#define BITP_LED_POW34_B_LED_CURRENT4_B         	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_B_LED_DRIVESIDE4_B       	(15U)			/*!< Led output select for LED4*/
#define BITM_LED_POW34_B_LED_CURRENT3_B         	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_B_LED_DRIVESIDE3_B       	(0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_B_LED_CURRENT4_B         	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_B_LED_DRIVESIDE4_B       	(0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_B_NUM_REPEAT_B              	(0U)			/*!< Number of sequence repeats.*/
#define BITP_COUNTS_B_NUM_INT_B                 	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITM_COUNTS_B_NUM_REPEAT_B              	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_B_NUM_INT_B                 	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_B_MIN_PERIOD_B              	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_B_MOD_TYPE_B                	(12U)			/*!< Modulation Connection type*/
#define BITM_PERIOD_B_MIN_PERIOD_B              	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_B_MOD_TYPE_B                	(0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_B_LED_OFFSET_B           	(0U)			/*!< LED pulse offset*/
#define BITP_LED_PULSE_B_LED_WIDTH_B            	(8U)			/*!< LED pulse width*/
#define BITM_LED_PULSE_B_LED_OFFSET_B           	(0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_B_LED_WIDTH_B            	(0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_B_INTEG_WIDTH_B        	(0U)			/*!< Integrator clock width*/
#define BITP_INTEG_WIDTH_B_ADC_COUNT_B          	(6U)			/*!< ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_B_CH1_AMP_DISABLE_B    	(8U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_B_AFE_INT_C_BUF_B      	(11U)			/*!< Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_B_CH2_AMP_DISABLE_B    	(12U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_B_SINGLE_INTEG_B       	(15U)			/*!< Use single integrator pulse*/
#define BITM_INTEG_WIDTH_B_INTEG_WIDTH_B        	(0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_WIDTH_B_ADC_COUNT_B          	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_B_CH1_AMP_DISABLE_B    	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_B_AFE_INT_C_BUF_B      	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_B_CH2_AMP_DISABLE_B    	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_B_SINGLE_INTEG_B       	(0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_B_INTEG_FINE_OFFSET_B 	(0U)			/*!< Integrator clock fine offset*/
#define BITP_INTEG_OFFSET_B_INTEG_OFFSET_B      	(5U)			/*!< Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_B_INTEG_FINE_OFFSET_B 	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_B_INTEG_OFFSET_B      	(0x1fe0U)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_B_MOD_OFFSET_B           	(0U)			/*!< modulation pulse offset*/
#define BITP_MOD_PULSE_B_MOD_WIDTH_B            	(8U)			/*!< modulation pulse width.*/
#define BITM_MOD_PULSE_B_MOD_OFFSET_B           	(0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_B_MOD_WIDTH_B            	(0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_B_REVERSE_INTEG_B          	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_B_SUBTRACT_B               	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_B_MOD_DISABLE_B            	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_B_LED_DISABLE_B            	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITM_PATTERN_B_REVERSE_INTEG_B          	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_B_SUBTRACT_B               	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_B_MOD_DISABLE_B            	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_B_LED_DISABLE_B            	(0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_B_CH1_ADC_ADJUST_B        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF1_B_CH1_ADC_ADJUST_B        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_B_CH2_ADC_ADJUST_B        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF2_B_CH2_ADC_ADJUST_B        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_B_SIGNAL_SIZE_B              	(0U)			/*!< Signal data size*/
#define BITP_DATA1_B_SIGNAL_SHIFT_B             	(3U)			/*!< Signal data shift*/
#define BITP_DATA1_B_DARK_SIZE_B                	(8U)			/*!< Dark data size*/
#define BITP_DATA1_B_DARK_SHIFT_B               	(11U)			/*!< Dark data shift*/
#define BITM_DATA1_B_SIGNAL_SIZE_B              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA1_B_SIGNAL_SHIFT_B             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA1_B_DARK_SIZE_B                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA1_B_DARK_SHIFT_B               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_B_LIT_SIZE_B                 	(0U)			/*!< Lit data size*/
#define BITP_DATA2_B_LIT_SHIFT_B                	(3U)			/*!< Lit data shift*/
#define BITM_DATA2_B_LIT_SIZE_B                 	(0x0007U)		/*!< Lit data size*/
#define BITM_DATA2_B_LIT_SHIFT_B                	(0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_B_DECIMATE_TYPE_B         	(0U)			/*!< Decimation Type Select*/
#define BITP_DECIMATE_B_DECIMATE_FACTOR_B       	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_B_DECIMATE_TYPE_B         	(0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_B_DECIMATE_FACTOR_B       	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_B_LIT_OFFSET_B          	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_B_LIT_OFFSET_B          	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_B_DARK1_OFFSET_B       	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_B_DARK2_OFFSET_B       	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_B_DARK1_OFFSET_B       	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_B_DARK2_OFFSET_B       	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_B_THRESH0_TYPE_B        	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_B_THRESH0_DIR_B         	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_B_THRESH0_CHAN_B        	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_B_THRESH1_TYPE_B        	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_B_THRESH1_DIR_B         	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_B_THRESH1_CHAN_B        	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_B_THRESH0_TYPE_B        	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_B_THRESH0_DIR_B         	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_B_THRESH0_CHAN_B        	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_B_THRESH1_TYPE_B        	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_B_THRESH1_DIR_B         	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_B_THRESH1_CHAN_B        	(0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_B_THRESH0_VALUE_B          	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_B_THRESH0_SHIFT_B          	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_B_THRESH0_VALUE_B          	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_B_THRESH0_SHIFT_B          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_B_THRESH1_VALUE_B          	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_B_THRESH1_SHIFT_B          	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_B_THRESH1_VALUE_B          	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_B_THRESH1_SHIFT_B          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN2_B_AFE_SWAP_B              	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITM_PATTERN2_B_AFE_SWAP_B              	(0x000fU)		/*!< 4 Pulse input polarity pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_C_TIMESLOT_OFFSET_C        	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_C_INPUT_R_SELECT_C         	(10U)			/*!< Input resistor select*/
#define BITP_TS_CTRL_C_SAMPLE_TYPE_C            	(12U)			/*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_C_CH2_EN_C                 	(14U)			/*!< Channel 2 enable*/
#define BITP_TS_CTRL_C_SUBSAMPLE_C              	(15U)			/*!< Subsample using decimate_factor*/
#define BITM_TS_CTRL_C_TIMESLOT_OFFSET_C        	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_C_INPUT_R_SELECT_C         	(0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_C_SAMPLE_TYPE_C            	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_C_CH2_EN_C                 	(0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_C_SUBSAMPLE_C              	(0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_C_AFE_PATH_CFG_C           	(0U)			/*!< Bypass and input mux select*/
#define BITP_TS_PATH_C_GOUT_C                   	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_C_INP_REF_CH_C             	(10U)			/*!< Reference channel input select*/
#define BITP_TS_PATH_C_PRE_WIDTH_C              	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITM_TS_PATH_C_AFE_PATH_CFG_C           	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_C_GOUT_C                   	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_C_INP_REF_CH_C             	(0x0c00U)		/*!< Reference channel input select*/
#define BITM_TS_PATH_C_PRE_WIDTH_C              	(0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_C_INP12_C                   	(0U)			/*!< Input pair12 enable*/
#define BITP_INPUTS_C_INP34_C                   	(4U)			/*!< Input pair34 enable*/
#define BITP_INPUTS_C_INP56_C                   	(8U)			/*!< Input pair56 enable*/
#define BITP_INPUTS_C_INP78_C                   	(12U)			/*!< input pair78 enable*/
#define BITM_INPUTS_C_INP12_C                   	(0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_C_INP34_C                   	(0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_C_INP56_C                   	(0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_C_INP78_C                   	(0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_C_VC1_SEL_C                	(0U)			/*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_C_VC1_ALT_C                	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_C_VC1_PULSE_C              	(4U)			/*!< VC1 pulse control*/
#define BITP_CATHODE_C_VC2_SEL_C                	(6U)			/*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_C_VC2_ALT_C                	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_C_VC2_PULSE_C              	(10U)			/*!< VC2 pulse control*/
#define BITP_CATHODE_C_PRECON_C                 	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_C_VC1_SEL_C                	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_C_VC1_ALT_C                	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_C_VC1_PULSE_C              	(0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_C_VC2_SEL_C                	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_C_VC2_ALT_C                	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_C_VC2_PULSE_C              	(0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_C_PRECON_C                 	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_C_TIA_GAIN_CH1_C          	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_C_TIA_GAIN_CH2_C          	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_C_VREF_PULSE_VAL_C        	(6U)			/*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_C_AFE_TRIM_VREF_C         	(8U)			/*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_C_VREF_PULSE_C            	(10U)			/*!< Vref pulse control*/
#define BITP_AFE_TRIM_C_AFE_TRIM_INT1_C         	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_C_AFE_TRIM_INT2_C         	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_C_AFE_TIA_SAT_DETECT_EN_C 	(15U)			/*!< Enable tia saturation detection*/
#define BITM_AFE_TRIM_C_TIA_GAIN_CH1_C          	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_C_TIA_GAIN_CH2_C          	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_C_VREF_PULSE_VAL_C        	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_C_AFE_TRIM_VREF_C         	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_C_VREF_PULSE_C            	(0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_C_AFE_TRIM_INT1_C         	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_C_AFE_TRIM_INT2_C         	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_C_AFE_TIA_SAT_DETECT_EN_C 	(0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_C_LED_CURRENT1_C         	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_C_LED_DRIVESIDE1_C       	(7U)			/*!< Led output select for LED1*/
#define BITP_LED_POW12_C_LED_CURRENT2_C         	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_C_LED_DRIVESIDE2_C       	(15U)			/*!< Led output select for LED2*/
#define BITM_LED_POW12_C_LED_CURRENT1_C         	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_C_LED_DRIVESIDE1_C       	(0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_C_LED_CURRENT2_C         	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_C_LED_DRIVESIDE2_C       	(0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_C_LED_CURRENT3_C         	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_C_LED_DRIVESIDE3_C       	(7U)			/*!< Led output select for LED3*/
#define BITP_LED_POW34_C_LED_CURRENT4_C         	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_C_LED_DRIVESIDE4_C       	(15U)			/*!< Led output select for LED4*/
#define BITM_LED_POW34_C_LED_CURRENT3_C         	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_C_LED_DRIVESIDE3_C       	(0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_C_LED_CURRENT4_C         	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_C_LED_DRIVESIDE4_C       	(0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_C_NUM_REPEAT_C              	(0U)			/*!< Number of sequence repeats.*/
#define BITP_COUNTS_C_NUM_INT_C                 	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITM_COUNTS_C_NUM_REPEAT_C              	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_C_NUM_INT_C                 	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_C_MIN_PERIOD_C              	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_C_MOD_TYPE_C                	(12U)			/*!< Modulation Connection type*/
#define BITM_PERIOD_C_MIN_PERIOD_C              	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_C_MOD_TYPE_C                	(0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_C_LED_OFFSET_C           	(0U)			/*!< LED pulse offset*/
#define BITP_LED_PULSE_C_LED_WIDTH_C            	(8U)			/*!< LED pulse width*/
#define BITM_LED_PULSE_C_LED_OFFSET_C           	(0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_C_LED_WIDTH_C            	(0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_C_INTEG_WIDTH_C        	(0U)			/*!< Integrator clock width*/
#define BITP_INTEG_WIDTH_C_ADC_COUNT_C          	(6U)			/*!< ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_C_CH1_AMP_DISABLE_C    	(8U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_C_AFE_INT_C_BUF_C      	(11U)			/*!< Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_C_CH2_AMP_DISABLE_C    	(12U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_C_SINGLE_INTEG_C       	(15U)			/*!< Use single integrator pulse*/
#define BITM_INTEG_WIDTH_C_INTEG_WIDTH_C        	(0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_WIDTH_C_ADC_COUNT_C          	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_C_CH1_AMP_DISABLE_C    	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_C_AFE_INT_C_BUF_C      	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_C_CH2_AMP_DISABLE_C    	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_C_SINGLE_INTEG_C       	(0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_C_INTEG_FINE_OFFSET_C 	(0U)			/*!< Integrator clock fine offset*/
#define BITP_INTEG_OFFSET_C_INTEG_OFFSET_C      	(5U)			/*!< Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_C_INTEG_FINE_OFFSET_C 	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_C_INTEG_OFFSET_C      	(0x1fe0U)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_C_MOD_OFFSET_C           	(0U)			/*!< modulation pulse offset*/
#define BITP_MOD_PULSE_C_MOD_WIDTH_C            	(8U)			/*!< modulation pulse width.*/
#define BITM_MOD_PULSE_C_MOD_OFFSET_C           	(0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_C_MOD_WIDTH_C            	(0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_C_REVERSE_INTEG_C          	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_C_SUBTRACT_C               	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_C_MOD_DISABLE_C            	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_C_LED_DISABLE_C            	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITM_PATTERN_C_REVERSE_INTEG_C          	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_C_SUBTRACT_C               	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_C_MOD_DISABLE_C            	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_C_LED_DISABLE_C            	(0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_C_CH1_ADC_ADJUST_C        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF1_C_CH1_ADC_ADJUST_C        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_C_CH2_ADC_ADJUST_C        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF2_C_CH2_ADC_ADJUST_C        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_C_SIGNAL_SIZE_C              	(0U)			/*!< Signal data size*/
#define BITP_DATA1_C_SIGNAL_SHIFT_C             	(3U)			/*!< Signal data shift*/
#define BITP_DATA1_C_DARK_SIZE_C                	(8U)			/*!< Dark data size*/
#define BITP_DATA1_C_DARK_SHIFT_C               	(11U)			/*!< Dark data shift*/
#define BITM_DATA1_C_SIGNAL_SIZE_C              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA1_C_SIGNAL_SHIFT_C             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA1_C_DARK_SIZE_C                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA1_C_DARK_SHIFT_C               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_C_LIT_SIZE_C                 	(0U)			/*!< Lit data size*/
#define BITP_DATA2_C_LIT_SHIFT_C                	(3U)			/*!< Lit data shift*/
#define BITM_DATA2_C_LIT_SIZE_C                 	(0x0007U)		/*!< Lit data size*/
#define BITM_DATA2_C_LIT_SHIFT_C                	(0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_C_DECIMATE_TYPE_C         	(0U)			/*!< Decimation Type Select*/
#define BITP_DECIMATE_C_DECIMATE_FACTOR_C       	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_C_DECIMATE_TYPE_C         	(0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_C_DECIMATE_FACTOR_C       	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_C_LIT_OFFSET_C          	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_C_LIT_OFFSET_C          	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_C_DARK1_OFFSET_C       	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_C_DARK2_OFFSET_C       	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_C_DARK1_OFFSET_C       	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_C_DARK2_OFFSET_C       	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_C_THRESH0_TYPE_C        	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_C_THRESH0_DIR_C         	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_C_THRESH0_CHAN_C        	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_C_THRESH1_TYPE_C        	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_C_THRESH1_DIR_C         	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_C_THRESH1_CHAN_C        	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_C_THRESH0_TYPE_C        	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_C_THRESH0_DIR_C         	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_C_THRESH0_CHAN_C        	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_C_THRESH1_TYPE_C        	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_C_THRESH1_DIR_C         	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_C_THRESH1_CHAN_C        	(0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_C_THRESH0_VALUE_C          	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_C_THRESH0_SHIFT_C          	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_C_THRESH0_VALUE_C          	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_C_THRESH0_SHIFT_C          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_C_THRESH1_VALUE_C          	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_C_THRESH1_SHIFT_C          	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_C_THRESH1_VALUE_C          	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_C_THRESH1_SHIFT_C          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN2_C_AFE_SWAP_C              	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITM_PATTERN2_C_AFE_SWAP_C              	(0x000fU)		/*!< 4 Pulse input polarity pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_D_TIMESLOT_OFFSET_D        	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_D_INPUT_R_SELECT_D         	(10U)			/*!< Input resistor select*/
#define BITP_TS_CTRL_D_SAMPLE_TYPE_D            	(12U)			/*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_D_CH2_EN_D                 	(14U)			/*!< Channel 2 enable*/
#define BITP_TS_CTRL_D_SUBSAMPLE_D              	(15U)			/*!< Subsample using decimate_factor*/
#define BITM_TS_CTRL_D_TIMESLOT_OFFSET_D        	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_D_INPUT_R_SELECT_D         	(0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_D_SAMPLE_TYPE_D            	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_D_CH2_EN_D                 	(0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_D_SUBSAMPLE_D              	(0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_D_AFE_PATH_CFG_D           	(0U)			/*!< Bypass and input mux select*/
#define BITP_TS_PATH_D_GOUT_D                   	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_D_INP_REF_CH_D             	(10U)			/*!< Reference channel input select*/
#define BITP_TS_PATH_D_PRE_WIDTH_D              	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITM_TS_PATH_D_AFE_PATH_CFG_D           	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_D_GOUT_D                   	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_D_INP_REF_CH_D             	(0x0c00U)		/*!< Reference channel input select*/
#define BITM_TS_PATH_D_PRE_WIDTH_D              	(0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_D_INP12_D                   	(0U)			/*!< Input pair12 enable*/
#define BITP_INPUTS_D_INP34_D                   	(4U)			/*!< Input pair34 enable*/
#define BITP_INPUTS_D_INP56_D                   	(8U)			/*!< Input pair56 enable*/
#define BITP_INPUTS_D_INP78_D                   	(12U)			/*!< input pair78 enable*/
#define BITM_INPUTS_D_INP12_D                   	(0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_D_INP34_D                   	(0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_D_INP56_D                   	(0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_D_INP78_D                   	(0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_D_VC1_SEL_D                	(0U)			/*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_D_VC1_ALT_D                	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_D_VC1_PULSE_D              	(4U)			/*!< VC1 pulse control*/
#define BITP_CATHODE_D_VC2_SEL_D                	(6U)			/*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_D_VC2_ALT_D                	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_D_VC2_PULSE_D              	(10U)			/*!< VC2 pulse control*/
#define BITP_CATHODE_D_PRECON_D                 	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_D_VC1_SEL_D                	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_D_VC1_ALT_D                	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_D_VC1_PULSE_D              	(0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_D_VC2_SEL_D                	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_D_VC2_ALT_D                	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_D_VC2_PULSE_D              	(0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_D_PRECON_D                 	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_D_TIA_GAIN_CH1_D          	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_D_TIA_GAIN_CH2_D          	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_D_VREF_PULSE_VAL_D        	(6U)			/*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_D_AFE_TRIM_VREF_D         	(8U)			/*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_D_VREF_PULSE_D            	(10U)			/*!< Vref pulse control*/
#define BITP_AFE_TRIM_D_AFE_TRIM_INT1_D         	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_D_AFE_TRIM_INT2_D         	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_D_AFE_TIA_SAT_DETECT_EN_D 	(15U)			/*!< Enable tia saturation detection*/
#define BITM_AFE_TRIM_D_TIA_GAIN_CH1_D          	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_D_TIA_GAIN_CH2_D          	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_D_VREF_PULSE_VAL_D        	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_D_AFE_TRIM_VREF_D         	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_D_VREF_PULSE_D            	(0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_D_AFE_TRIM_INT1_D         	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_D_AFE_TRIM_INT2_D         	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_D_AFE_TIA_SAT_DETECT_EN_D 	(0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_D_LED_CURRENT1_D         	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_D_LED_DRIVESIDE1_D       	(7U)			/*!< Led output select for LED1*/
#define BITP_LED_POW12_D_LED_CURRENT2_D         	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_D_LED_DRIVESIDE2_D       	(15U)			/*!< Led output select for LED2*/
#define BITM_LED_POW12_D_LED_CURRENT1_D         	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_D_LED_DRIVESIDE1_D       	(0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_D_LED_CURRENT2_D         	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_D_LED_DRIVESIDE2_D       	(0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_D_LED_CURRENT3_D         	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_D_LED_DRIVESIDE3_D       	(7U)			/*!< Led output select for LED3*/
#define BITP_LED_POW34_D_LED_CURRENT4_D         	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_D_LED_DRIVESIDE4_D       	(15U)			/*!< Led output select for LED4*/
#define BITM_LED_POW34_D_LED_CURRENT3_D         	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_D_LED_DRIVESIDE3_D       	(0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_D_LED_CURRENT4_D         	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_D_LED_DRIVESIDE4_D       	(0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_D_NUM_REPEAT_D              	(0U)			/*!< Number of sequence repeats.*/
#define BITP_COUNTS_D_NUM_INT_D                 	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITM_COUNTS_D_NUM_REPEAT_D              	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_D_NUM_INT_D                 	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_D_MIN_PERIOD_D              	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_D_MOD_TYPE_D                	(12U)			/*!< Modulation Connection type*/
#define BITM_PERIOD_D_MIN_PERIOD_D              	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_D_MOD_TYPE_D                	(0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_D_LED_OFFSET_D           	(0U)			/*!< LED pulse offset*/
#define BITP_LED_PULSE_D_LED_WIDTH_D            	(8U)			/*!< LED pulse width*/
#define BITM_LED_PULSE_D_LED_OFFSET_D           	(0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_D_LED_WIDTH_D            	(0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_D_INTEG_WIDTH_D        	(0U)			/*!< Integrator clock width*/
#define BITP_INTEG_WIDTH_D_ADC_COUNT_D          	(6U)			/*!< ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_D_CH1_AMP_DISABLE_D    	(8U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_D_AFE_INT_C_BUF_D      	(11U)			/*!< Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_D_CH2_AMP_DISABLE_D    	(12U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_D_SINGLE_INTEG_D       	(15U)			/*!< Use single integrator pulse*/
#define BITM_INTEG_WIDTH_D_INTEG_WIDTH_D        	(0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_WIDTH_D_ADC_COUNT_D          	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_D_CH1_AMP_DISABLE_D    	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_D_AFE_INT_C_BUF_D      	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_D_CH2_AMP_DISABLE_D    	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_D_SINGLE_INTEG_D       	(0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_D_INTEG_FINE_OFFSET_D 	(0U)			/*!< Integrator clock fine offset*/
#define BITP_INTEG_OFFSET_D_INTEG_OFFSET_D      	(5U)			/*!< Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_D_INTEG_FINE_OFFSET_D 	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_D_INTEG_OFFSET_D      	(0x1fe0U)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_D_MOD_OFFSET_D           	(0U)			/*!< modulation pulse offset*/
#define BITP_MOD_PULSE_D_MOD_WIDTH_D            	(8U)			/*!< modulation pulse width.*/
#define BITM_MOD_PULSE_D_MOD_OFFSET_D           	(0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_D_MOD_WIDTH_D            	(0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_D_REVERSE_INTEG_D          	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_D_SUBTRACT_D               	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_D_MOD_DISABLE_D            	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_D_LED_DISABLE_D            	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITM_PATTERN_D_REVERSE_INTEG_D          	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_D_SUBTRACT_D               	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_D_MOD_DISABLE_D            	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_D_LED_DISABLE_D            	(0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_D_CH1_ADC_ADJUST_D        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF1_D_CH1_ADC_ADJUST_D        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_D_CH2_ADC_ADJUST_D        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF2_D_CH2_ADC_ADJUST_D        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_D_SIGNAL_SIZE_D              	(0U)			/*!< Signal data size*/
#define BITP_DATA1_D_SIGNAL_SHIFT_D             	(3U)			/*!< Signal data shift*/
#define BITP_DATA1_D_DARK_SIZE_D                	(8U)			/*!< Dark data size*/
#define BITP_DATA1_D_DARK_SHIFT_D               	(11U)			/*!< Dark data shift*/
#define BITM_DATA1_D_SIGNAL_SIZE_D              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA1_D_SIGNAL_SHIFT_D             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA1_D_DARK_SIZE_D                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA1_D_DARK_SHIFT_D               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_D_LIT_SIZE_D                 	(0U)			/*!< Lit data size*/
#define BITP_DATA2_D_LIT_SHIFT_D                	(3U)			/*!< Lit data shift*/
#define BITM_DATA2_D_LIT_SIZE_D                 	(0x0007U)		/*!< Lit data size*/
#define BITM_DATA2_D_LIT_SHIFT_D                	(0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_D_DECIMATE_TYPE_D         	(0U)			/*!< Decimation Type Select*/
#define BITP_DECIMATE_D_DECIMATE_FACTOR_D       	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_D_DECIMATE_TYPE_D         	(0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_D_DECIMATE_FACTOR_D       	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_D_LIT_OFFSET_D          	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_D_LIT_OFFSET_D          	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_D_DARK1_OFFSET_D       	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_D_DARK2_OFFSET_D       	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_D_DARK1_OFFSET_D       	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_D_DARK2_OFFSET_D       	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_D_THRESH0_TYPE_D        	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_D_THRESH0_DIR_D         	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_D_THRESH0_CHAN_D        	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_D_THRESH1_TYPE_D        	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_D_THRESH1_DIR_D         	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_D_THRESH1_CHAN_D        	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_D_THRESH0_TYPE_D        	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_D_THRESH0_DIR_D         	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_D_THRESH0_CHAN_D        	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_D_THRESH1_TYPE_D        	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_D_THRESH1_DIR_D         	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_D_THRESH1_CHAN_D        	(0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_D_THRESH0_VALUE_D          	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_D_THRESH0_SHIFT_D          	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_D_THRESH0_VALUE_D          	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_D_THRESH0_SHIFT_D          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_D_THRESH1_VALUE_D          	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_D_THRESH1_SHIFT_D          	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_D_THRESH1_VALUE_D          	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_D_THRESH1_SHIFT_D          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN2_D_AFE_SWAP_D              	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITM_PATTERN2_D_AFE_SWAP_D              	(0x000fU)		/*!< 4 Pulse input polarity pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_E_TIMESLOT_OFFSET_E        	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_E_INPUT_R_SELECT_E         	(10U)			/*!< Input resistor select*/
#define BITP_TS_CTRL_E_SAMPLE_TYPE_E            	(12U)			/*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_E_CH2_EN_E                 	(14U)			/*!< Channel 2 enable*/
#define BITP_TS_CTRL_E_SUBSAMPLE_E              	(15U)			/*!< Subsample using decimate_factor*/
#define BITM_TS_CTRL_E_TIMESLOT_OFFSET_E        	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_E_INPUT_R_SELECT_E         	(0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_E_SAMPLE_TYPE_E            	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_E_CH2_EN_E                 	(0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_E_SUBSAMPLE_E              	(0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_E_AFE_PATH_CFG_E           	(0U)			/*!< Bypass and input mux select*/
#define BITP_TS_PATH_E_GOUT_E                   	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_E_INP_REF_CH_E             	(10U)			/*!< Reference channel input select*/
#define BITP_TS_PATH_E_PRE_WIDTH_E              	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITM_TS_PATH_E_AFE_PATH_CFG_E           	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_E_GOUT_E                   	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_E_INP_REF_CH_E             	(0x0c00U)		/*!< Reference channel input select*/
#define BITM_TS_PATH_E_PRE_WIDTH_E              	(0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_E_INP12_E                   	(0U)			/*!< Input pair12 enable*/
#define BITP_INPUTS_E_INP34_E                   	(4U)			/*!< Input pair34 enable*/
#define BITP_INPUTS_E_INP56_E                   	(8U)			/*!< Input pair56 enable*/
#define BITP_INPUTS_E_INP78_E                   	(12U)			/*!< input pair78 enable*/
#define BITM_INPUTS_E_INP12_E                   	(0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_E_INP34_E                   	(0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_E_INP56_E                   	(0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_E_INP78_E                   	(0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_E_VC1_SEL_E                	(0U)			/*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_E_VC1_ALT_E                	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_E_VC1_PULSE_E              	(4U)			/*!< VC1 pulse control*/
#define BITP_CATHODE_E_VC2_SEL_E                	(6U)			/*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_E_VC2_ALT_E                	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_E_VC2_PULSE_E              	(10U)			/*!< VC2 pulse control*/
#define BITP_CATHODE_E_PRECON_E                 	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_E_VC1_SEL_E                	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_E_VC1_ALT_E                	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_E_VC1_PULSE_E              	(0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_E_VC2_SEL_E                	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_E_VC2_ALT_E                	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_E_VC2_PULSE_E              	(0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_E_PRECON_E                 	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_E_TIA_GAIN_CH1_E          	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_E_TIA_GAIN_CH2_E          	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_E_VREF_PULSE_VAL_E        	(6U)			/*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_E_AFE_TRIM_VREF_E         	(8U)			/*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_E_VREF_PULSE_E            	(10U)			/*!< Vref pulse control*/
#define BITP_AFE_TRIM_E_AFE_TRIM_INT1_E         	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_E_AFE_TRIM_INT2_E         	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_E_AFE_TIA_SAT_DETECT_EN_E 	(15U)			/*!< Enable tia saturation detection*/
#define BITM_AFE_TRIM_E_TIA_GAIN_CH1_E          	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_E_TIA_GAIN_CH2_E          	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_E_VREF_PULSE_VAL_E        	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_E_AFE_TRIM_VREF_E         	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_E_VREF_PULSE_E            	(0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_E_AFE_TRIM_INT1_E         	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_E_AFE_TRIM_INT2_E         	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_E_AFE_TIA_SAT_DETECT_EN_E 	(0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_E_LED_CURRENT1_E         	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_E_LED_DRIVESIDE1_E       	(7U)			/*!< Led output select for LED1*/
#define BITP_LED_POW12_E_LED_CURRENT2_E         	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_E_LED_DRIVESIDE2_E       	(15U)			/*!< Led output select for LED2*/
#define BITM_LED_POW12_E_LED_CURRENT1_E         	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_E_LED_DRIVESIDE1_E       	(0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_E_LED_CURRENT2_E         	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_E_LED_DRIVESIDE2_E       	(0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_E_LED_CURRENT3_E         	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_E_LED_DRIVESIDE3_E       	(7U)			/*!< Led output select for LED3*/
#define BITP_LED_POW34_E_LED_CURRENT4_E         	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_E_LED_DRIVESIDE4_E       	(15U)			/*!< Led output select for LED4*/
#define BITM_LED_POW34_E_LED_CURRENT3_E         	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_E_LED_DRIVESIDE3_E       	(0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_E_LED_CURRENT4_E         	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_E_LED_DRIVESIDE4_E       	(0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_E_NUM_REPEAT_E              	(0U)			/*!< Number of sequence repeats.*/
#define BITP_COUNTS_E_NUM_INT_E                 	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITM_COUNTS_E_NUM_REPEAT_E              	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_E_NUM_INT_E                 	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_E_MIN_PERIOD_E              	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_E_MOD_TYPE_E                	(12U)			/*!< Modulation Connection type*/
#define BITM_PERIOD_E_MIN_PERIOD_E              	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_E_MOD_TYPE_E                	(0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_E_LED_OFFSET_E           	(0U)			/*!< LED pulse offset*/
#define BITP_LED_PULSE_E_LED_WIDTH_E            	(8U)			/*!< LED pulse width*/
#define BITM_LED_PULSE_E_LED_OFFSET_E           	(0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_E_LED_WIDTH_E            	(0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_E_INTEG_WIDTH_E        	(0U)			/*!< Integrator clock width*/
#define BITP_INTEG_WIDTH_E_ADC_COUNT_E          	(6U)			/*!< ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_E_CH1_AMP_DISABLE_E    	(8U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_E_AFE_INT_C_BUF_E      	(11U)			/*!< Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_E_CH2_AMP_DISABLE_E    	(12U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_E_SINGLE_INTEG_E       	(15U)			/*!< Use single integrator pulse*/
#define BITM_INTEG_WIDTH_E_INTEG_WIDTH_E        	(0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_WIDTH_E_ADC_COUNT_E          	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_E_CH1_AMP_DISABLE_E    	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_E_AFE_INT_C_BUF_E      	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_E_CH2_AMP_DISABLE_E    	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_E_SINGLE_INTEG_E       	(0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_E_INTEG_FINE_OFFSET_E 	(0U)			/*!< Integrator clock fine offset*/
#define BITP_INTEG_OFFSET_E_INTEG_OFFSET_E      	(5U)			/*!< Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_E_INTEG_FINE_OFFSET_E 	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_E_INTEG_OFFSET_E      	(0x1fe0U)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_E_MOD_OFFSET_E           	(0U)			/*!< modulation pulse offset*/
#define BITP_MOD_PULSE_E_MOD_WIDTH_E            	(8U)			/*!< modulation pulse width.*/
#define BITM_MOD_PULSE_E_MOD_OFFSET_E           	(0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_E_MOD_WIDTH_E            	(0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_E_REVERSE_INTEG_E          	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_E_SUBTRACT_E               	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_E_MOD_DISABLE_E            	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_E_LED_DISABLE_E            	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITM_PATTERN_E_REVERSE_INTEG_E          	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_E_SUBTRACT_E               	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_E_MOD_DISABLE_E            	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_E_LED_DISABLE_E            	(0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_E_CH1_ADC_ADJUST_E        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF1_E_CH1_ADC_ADJUST_E        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_E_CH2_ADC_ADJUST_E        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF2_E_CH2_ADC_ADJUST_E        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_E_SIGNAL_SIZE_E              	(0U)			/*!< Signal data size*/
#define BITP_DATA1_E_SIGNAL_SHIFT_E             	(3U)			/*!< Signal data shift*/
#define BITP_DATA1_E_DARK_SIZE_E                	(8U)			/*!< Dark data size*/
#define BITP_DATA1_E_DARK_SHIFT_E               	(11U)			/*!< Dark data shift*/
#define BITM_DATA1_E_SIGNAL_SIZE_E              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA1_E_SIGNAL_SHIFT_E             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA1_E_DARK_SIZE_E                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA1_E_DARK_SHIFT_E               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_E_LIT_SIZE_E                 	(0U)			/*!< Lit data size*/
#define BITP_DATA2_E_LIT_SHIFT_E                	(3U)			/*!< Lit data shift*/
#define BITM_DATA2_E_LIT_SIZE_E                 	(0x0007U)		/*!< Lit data size*/
#define BITM_DATA2_E_LIT_SHIFT_E                	(0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_E_DECIMATE_TYPE_E         	(0U)			/*!< Decimation Type Select*/
#define BITP_DECIMATE_E_DECIMATE_FACTOR_E       	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_E_DECIMATE_TYPE_E         	(0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_E_DECIMATE_FACTOR_E       	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_E_LIT_OFFSET_E          	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_E_LIT_OFFSET_E          	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_E_DARK1_OFFSET_E       	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_E_DARK2_OFFSET_E       	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_E_DARK1_OFFSET_E       	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_E_DARK2_OFFSET_E       	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_E_THRESH0_TYPE_E        	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_E_THRESH0_DIR_E         	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_E_THRESH0_CHAN_E        	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_E_THRESH1_TYPE_E        	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_E_THRESH1_DIR_E         	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_E_THRESH1_CHAN_E        	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_E_THRESH0_TYPE_E        	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_E_THRESH0_DIR_E         	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_E_THRESH0_CHAN_E        	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_E_THRESH1_TYPE_E        	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_E_THRESH1_DIR_E         	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_E_THRESH1_CHAN_E        	(0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_E_THRESH0_VALUE_E          	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_E_THRESH0_SHIFT_E          	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_E_THRESH0_VALUE_E          	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_E_THRESH0_SHIFT_E          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_E_THRESH1_VALUE_E          	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_E_THRESH1_SHIFT_E          	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_E_THRESH1_VALUE_E          	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_E_THRESH1_SHIFT_E          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN2_E_AFE_SWAP_E              	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITM_PATTERN2_E_AFE_SWAP_E              	(0x000fU)		/*!< 4 Pulse input polarity pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_F_TIMESLOT_OFFSET_F        	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_F_INPUT_R_SELECT_F         	(10U)			/*!< Input resistor select*/
#define BITP_TS_CTRL_F_SAMPLE_TYPE_F            	(12U)			/*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_F_CH2_EN_F                 	(14U)			/*!< Channel 2 enable*/
#define BITP_TS_CTRL_F_SUBSAMPLE_F              	(15U)			/*!< Subsample using decimate_factor*/
#define BITM_TS_CTRL_F_TIMESLOT_OFFSET_F        	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_F_INPUT_R_SELECT_F         	(0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_F_SAMPLE_TYPE_F            	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_F_CH2_EN_F                 	(0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_F_SUBSAMPLE_F              	(0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_F_AFE_PATH_CFG_F           	(0U)			/*!< Bypass and input mux select*/
#define BITP_TS_PATH_F_GOUT_F                   	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_F_INP_REF_CH_F             	(10U)			/*!< Reference channel input select*/
#define BITP_TS_PATH_F_PRE_WIDTH_F              	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITM_TS_PATH_F_AFE_PATH_CFG_F           	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_F_GOUT_F                   	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_F_INP_REF_CH_F             	(0x0c00U)		/*!< Reference channel input select*/
#define BITM_TS_PATH_F_PRE_WIDTH_F              	(0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_F_INP12_F                   	(0U)			/*!< Input pair12 enable*/
#define BITP_INPUTS_F_INP34_F                   	(4U)			/*!< Input pair34 enable*/
#define BITP_INPUTS_F_INP56_F                   	(8U)			/*!< Input pair56 enable*/
#define BITP_INPUTS_F_INP78_F                   	(12U)			/*!< input pair78 enable*/
#define BITM_INPUTS_F_INP12_F                   	(0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_F_INP34_F                   	(0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_F_INP56_F                   	(0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_F_INP78_F                   	(0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_F_VC1_SEL_F                	(0U)			/*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_F_VC1_ALT_F                	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_F_VC1_PULSE_F              	(4U)			/*!< VC1 pulse control*/
#define BITP_CATHODE_F_VC2_SEL_F                	(6U)			/*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_F_VC2_ALT_F                	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_F_VC2_PULSE_F              	(10U)			/*!< VC2 pulse control*/
#define BITP_CATHODE_F_PRECON_F                 	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_F_VC1_SEL_F                	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_F_VC1_ALT_F                	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_F_VC1_PULSE_F              	(0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_F_VC2_SEL_F                	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_F_VC2_ALT_F                	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_F_VC2_PULSE_F              	(0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_F_PRECON_F                 	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_F_TIA_GAIN_CH1_F          	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_F_TIA_GAIN_CH2_F          	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_F_VREF_PULSE_VAL_F        	(6U)			/*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_F_AFE_TRIM_VREF_F         	(8U)			/*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_F_VREF_PULSE_F            	(10U)			/*!< Vref pulse control*/
#define BITP_AFE_TRIM_F_AFE_TRIM_INT1_F         	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_F_AFE_TRIM_INT2_F         	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_F_AFE_TIA_SAT_DETECT_EN_F 	(15U)			/*!< Enable tia saturation detection*/
#define BITM_AFE_TRIM_F_TIA_GAIN_CH1_F          	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_F_TIA_GAIN_CH2_F          	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_F_VREF_PULSE_VAL_F        	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_F_AFE_TRIM_VREF_F         	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_F_VREF_PULSE_F            	(0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_F_AFE_TRIM_INT1_F         	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_F_AFE_TRIM_INT2_F         	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_F_AFE_TIA_SAT_DETECT_EN_F 	(0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_F_LED_CURRENT1_F         	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_F_LED_DRIVESIDE1_F       	(7U)			/*!< Led output select for LED1*/
#define BITP_LED_POW12_F_LED_CURRENT2_F         	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_F_LED_DRIVESIDE2_F       	(15U)			/*!< Led output select for LED2*/
#define BITM_LED_POW12_F_LED_CURRENT1_F         	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_F_LED_DRIVESIDE1_F       	(0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_F_LED_CURRENT2_F         	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_F_LED_DRIVESIDE2_F       	(0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_F_LED_CURRENT3_F         	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_F_LED_DRIVESIDE3_F       	(7U)			/*!< Led output select for LED3*/
#define BITP_LED_POW34_F_LED_CURRENT4_F         	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_F_LED_DRIVESIDE4_F       	(15U)			/*!< Led output select for LED4*/
#define BITM_LED_POW34_F_LED_CURRENT3_F         	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_F_LED_DRIVESIDE3_F       	(0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_F_LED_CURRENT4_F         	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_F_LED_DRIVESIDE4_F       	(0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_F_NUM_REPEAT_F              	(0U)			/*!< Number of sequence repeats.*/
#define BITP_COUNTS_F_NUM_INT_F                 	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITM_COUNTS_F_NUM_REPEAT_F              	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_F_NUM_INT_F                 	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_F_MIN_PERIOD_F              	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_F_MOD_TYPE_F                	(12U)			/*!< Modulation Connection type*/
#define BITM_PERIOD_F_MIN_PERIOD_F              	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_F_MOD_TYPE_F                	(0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_F_LED_OFFSET_F           	(0U)			/*!< LED pulse offset*/
#define BITP_LED_PULSE_F_LED_WIDTH_F            	(8U)			/*!< LED pulse width*/
#define BITM_LED_PULSE_F_LED_OFFSET_F           	(0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_F_LED_WIDTH_F            	(0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_F_INTEG_WIDTH_F        	(0U)			/*!< Integrator clock width*/
#define BITP_INTEG_WIDTH_F_ADC_COUNT_F          	(6U)			/*!< ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_F_CH1_AMP_DISABLE_F    	(8U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_F_AFE_INT_C_BUF_F      	(11U)			/*!< Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_F_CH2_AMP_DISABLE_F    	(12U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_F_SINGLE_INTEG_F       	(15U)			/*!< Use single integrator pulse*/
#define BITM_INTEG_WIDTH_F_INTEG_WIDTH_F        	(0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_WIDTH_F_ADC_COUNT_F          	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_F_CH1_AMP_DISABLE_F    	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_F_AFE_INT_C_BUF_F      	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_F_CH2_AMP_DISABLE_F    	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_F_SINGLE_INTEG_F       	(0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_F_INTEG_FINE_OFFSET_F 	(0U)			/*!< Integrator clock fine offset*/
#define BITP_INTEG_OFFSET_F_INTEG_OFFSET_F      	(5U)			/*!< Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_F_INTEG_FINE_OFFSET_F 	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_F_INTEG_OFFSET_F      	(0x1fe0U)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_F_MOD_OFFSET_F           	(0U)			/*!< modulation pulse offset*/
#define BITP_MOD_PULSE_F_MOD_WIDTH_F            	(8U)			/*!< modulation pulse width.*/
#define BITM_MOD_PULSE_F_MOD_OFFSET_F           	(0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_F_MOD_WIDTH_F            	(0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_F_REVERSE_INTEG_F          	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_F_SUBTRACT_F               	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_F_MOD_DISABLE_F            	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_F_LED_DISABLE_F            	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITM_PATTERN_F_REVERSE_INTEG_F          	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_F_SUBTRACT_F               	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_F_MOD_DISABLE_F            	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_F_LED_DISABLE_F            	(0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_F_CH1_ADC_ADJUST_F        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF1_F_CH1_ADC_ADJUST_F        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_F_CH2_ADC_ADJUST_F        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF2_F_CH2_ADC_ADJUST_F        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_F_SIGNAL_SIZE_F              	(0U)			/*!< Signal data size*/
#define BITP_DATA1_F_SIGNAL_SHIFT_F             	(3U)			/*!< Signal data shift*/
#define BITP_DATA1_F_DARK_SIZE_F                	(8U)			/*!< Dark data size*/
#define BITP_DATA1_F_DARK_SHIFT_F               	(11U)			/*!< Dark data shift*/
#define BITM_DATA1_F_SIGNAL_SIZE_F              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA1_F_SIGNAL_SHIFT_F             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA1_F_DARK_SIZE_F                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA1_F_DARK_SHIFT_F               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_F_LIT_SIZE_F                 	(0U)			/*!< Lit data size*/
#define BITP_DATA2_F_LIT_SHIFT_F                	(3U)			/*!< Lit data shift*/
#define BITM_DATA2_F_LIT_SIZE_F                 	(0x0007U)		/*!< Lit data size*/
#define BITM_DATA2_F_LIT_SHIFT_F                	(0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_F_DECIMATE_TYPE_F         	(0U)			/*!< Decimation Type Select*/
#define BITP_DECIMATE_F_DECIMATE_FACTOR_F       	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_F_DECIMATE_TYPE_F         	(0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_F_DECIMATE_FACTOR_F       	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_F_LIT_OFFSET_F          	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_F_LIT_OFFSET_F          	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_F_DARK1_OFFSET_F       	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_F_DARK2_OFFSET_F       	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_F_DARK1_OFFSET_F       	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_F_DARK2_OFFSET_F       	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_F_THRESH0_TYPE_F        	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_F_THRESH0_DIR_F         	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_F_THRESH0_CHAN_F        	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_F_THRESH1_TYPE_F        	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_F_THRESH1_DIR_F         	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_F_THRESH1_CHAN_F        	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_F_THRESH0_TYPE_F        	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_F_THRESH0_DIR_F         	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_F_THRESH0_CHAN_F        	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_F_THRESH1_TYPE_F        	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_F_THRESH1_DIR_F         	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_F_THRESH1_CHAN_F        	(0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_F_THRESH0_VALUE_F          	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_F_THRESH0_SHIFT_F          	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_F_THRESH0_VALUE_F          	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_F_THRESH0_SHIFT_F          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_F_THRESH1_VALUE_F          	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_F_THRESH1_SHIFT_F          	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_F_THRESH1_VALUE_F          	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_F_THRESH1_SHIFT_F          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN2_F_AFE_SWAP_F              	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITM_PATTERN2_F_AFE_SWAP_F              	(0x000fU)		/*!< 4 Pulse input polarity pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_G_TIMESLOT_OFFSET_G        	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_G_INPUT_R_SELECT_G         	(10U)			/*!< Input resistor select*/
#define BITP_TS_CTRL_G_SAMPLE_TYPE_G            	(12U)			/*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_G_CH2_EN_G                 	(14U)			/*!< Channel 2 enable*/
#define BITP_TS_CTRL_G_SUBSAMPLE_G              	(15U)			/*!< Subsample using decimate_factor*/
#define BITM_TS_CTRL_G_TIMESLOT_OFFSET_G        	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_G_INPUT_R_SELECT_G         	(0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_G_SAMPLE_TYPE_G            	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_G_CH2_EN_G                 	(0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_G_SUBSAMPLE_G              	(0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_G_AFE_PATH_CFG_G           	(0U)			/*!< Bypass and input mux select*/
#define BITP_TS_PATH_G_GOUT_G                   	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_G_INP_REF_CH_G             	(10U)			/*!< Reference channel input select*/
#define BITP_TS_PATH_G_PRE_WIDTH_G              	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITM_TS_PATH_G_AFE_PATH_CFG_G           	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_G_GOUT_G                   	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_G_INP_REF_CH_G             	(0x0c00U)		/*!< Reference channel input select*/
#define BITM_TS_PATH_G_PRE_WIDTH_G              	(0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_G_INP12_G                   	(0U)			/*!< Input pair12 enable*/
#define BITP_INPUTS_G_INP34_G                   	(4U)			/*!< Input pair34 enable*/
#define BITP_INPUTS_G_INP56_G                   	(8U)			/*!< Input pair56 enable*/
#define BITP_INPUTS_G_INP78_G                   	(12U)			/*!< input pair78 enable*/
#define BITM_INPUTS_G_INP12_G                   	(0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_G_INP34_G                   	(0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_G_INP56_G                   	(0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_G_INP78_G                   	(0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_G_VC1_SEL_G                	(0U)			/*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_G_VC1_ALT_G                	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_G_VC1_PULSE_G              	(4U)			/*!< VC1 pulse control*/
#define BITP_CATHODE_G_VC2_SEL_G                	(6U)			/*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_G_VC2_ALT_G                	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_G_VC2_PULSE_G              	(10U)			/*!< VC2 pulse control*/
#define BITP_CATHODE_G_PRECON_G                 	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_G_VC1_SEL_G                	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_G_VC1_ALT_G                	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_G_VC1_PULSE_G              	(0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_G_VC2_SEL_G                	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_G_VC2_ALT_G                	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_G_VC2_PULSE_G              	(0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_G_PRECON_G                 	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_G_TIA_GAIN_CH1_G          	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_G_TIA_GAIN_CH2_G          	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_G_VREF_PULSE_VAL_G        	(6U)			/*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_G_AFE_TRIM_VREF_G         	(8U)			/*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_G_VREF_PULSE_G            	(10U)			/*!< Vref pulse control*/
#define BITP_AFE_TRIM_G_AFE_TRIM_INT1_G         	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_G_AFE_TRIM_INT2_G         	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_G_AFE_TIA_SAT_DETECT_EN_G 	(15U)			/*!< Enable tia saturation detection*/
#define BITM_AFE_TRIM_G_TIA_GAIN_CH1_G          	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_G_TIA_GAIN_CH2_G          	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_G_VREF_PULSE_VAL_G        	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_G_AFE_TRIM_VREF_G         	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_G_VREF_PULSE_G            	(0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_G_AFE_TRIM_INT1_G         	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_G_AFE_TRIM_INT2_G         	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_G_AFE_TIA_SAT_DETECT_EN_G 	(0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_G_LED_CURRENT1_G         	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_G_LED_DRIVESIDE1_G       	(7U)			/*!< Led output select for LED1*/
#define BITP_LED_POW12_G_LED_CURRENT2_G         	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_G_LED_DRIVESIDE2_G       	(15U)			/*!< Led output select for LED2*/
#define BITM_LED_POW12_G_LED_CURRENT1_G         	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_G_LED_DRIVESIDE1_G       	(0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_G_LED_CURRENT2_G         	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_G_LED_DRIVESIDE2_G       	(0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_G_LED_CURRENT3_G         	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_G_LED_DRIVESIDE3_G       	(7U)			/*!< Led output select for LED3*/
#define BITP_LED_POW34_G_LED_CURRENT4_G         	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_G_LED_DRIVESIDE4_G       	(15U)			/*!< Led output select for LED4*/
#define BITM_LED_POW34_G_LED_CURRENT3_G         	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_G_LED_DRIVESIDE3_G       	(0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_G_LED_CURRENT4_G         	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_G_LED_DRIVESIDE4_G       	(0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_G_NUM_REPEAT_G              	(0U)			/*!< Number of sequence repeats.*/
#define BITP_COUNTS_G_NUM_INT_G                 	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITM_COUNTS_G_NUM_REPEAT_G              	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_G_NUM_INT_G                 	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_G_MIN_PERIOD_G              	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_G_MOD_TYPE_G                	(12U)			/*!< Modulation Connection type*/
#define BITM_PERIOD_G_MIN_PERIOD_G              	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_G_MOD_TYPE_G                	(0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_G_LED_OFFSET_G           	(0U)			/*!< LED pulse offset*/
#define BITP_LED_PULSE_G_LED_WIDTH_G            	(8U)			/*!< LED pulse width*/
#define BITM_LED_PULSE_G_LED_OFFSET_G           	(0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_G_LED_WIDTH_G            	(0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_G_INTEG_WIDTH_G        	(0U)			/*!< Integrator clock width*/
#define BITP_INTEG_WIDTH_G_ADC_COUNT_G          	(6U)			/*!< ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_G_CH1_AMP_DISABLE_G    	(8U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_G_AFE_INT_C_BUF_G      	(11U)			/*!< Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_G_CH2_AMP_DISABLE_G    	(12U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_G_SINGLE_INTEG_G       	(15U)			/*!< Use single integrator pulse*/
#define BITM_INTEG_WIDTH_G_INTEG_WIDTH_G        	(0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_WIDTH_G_ADC_COUNT_G          	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_G_CH1_AMP_DISABLE_G    	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_G_AFE_INT_C_BUF_G      	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_G_CH2_AMP_DISABLE_G    	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_G_SINGLE_INTEG_G       	(0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_G_INTEG_FINE_OFFSET_G 	(0U)			/*!< Integrator clock fine offset*/
#define BITP_INTEG_OFFSET_G_INTEG_OFFSET_G      	(5U)			/*!< Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_G_INTEG_FINE_OFFSET_G 	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_G_INTEG_OFFSET_G      	(0x1fe0U)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_G_MOD_OFFSET_G           	(0U)			/*!< modulation pulse offset*/
#define BITP_MOD_PULSE_G_MOD_WIDTH_G            	(8U)			/*!< modulation pulse width.*/
#define BITM_MOD_PULSE_G_MOD_OFFSET_G           	(0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_G_MOD_WIDTH_G            	(0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_G_REVERSE_INTEG_G          	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_G_SUBTRACT_G               	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_G_MOD_DISABLE_G            	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_G_LED_DISABLE_G            	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITM_PATTERN_G_REVERSE_INTEG_G          	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_G_SUBTRACT_G               	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_G_MOD_DISABLE_G            	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_G_LED_DISABLE_G            	(0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_G_CH1_ADC_ADJUST_G        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF1_G_CH1_ADC_ADJUST_G        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_G_CH2_ADC_ADJUST_G        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF2_G_CH2_ADC_ADJUST_G        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_G_SIGNAL_SIZE_G              	(0U)			/*!< Signal data size*/
#define BITP_DATA1_G_SIGNAL_SHIFT_G             	(3U)			/*!< Signal data shift*/
#define BITP_DATA1_G_DARK_SIZE_G                	(8U)			/*!< Dark data size*/
#define BITP_DATA1_G_DARK_SHIFT_G               	(11U)			/*!< Dark data shift*/
#define BITM_DATA1_G_SIGNAL_SIZE_G              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA1_G_SIGNAL_SHIFT_G             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA1_G_DARK_SIZE_G                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA1_G_DARK_SHIFT_G               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_G_LIT_SIZE_G                 	(0U)			/*!< Lit data size*/
#define BITP_DATA2_G_LIT_SHIFT_G                	(3U)			/*!< Lit data shift*/
#define BITM_DATA2_G_LIT_SIZE_G                 	(0x0007U)		/*!< Lit data size*/
#define BITM_DATA2_G_LIT_SHIFT_G                	(0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_G_DECIMATE_TYPE_G         	(0U)			/*!< Decimation Type Select*/
#define BITP_DECIMATE_G_DECIMATE_FACTOR_G       	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_G_DECIMATE_TYPE_G         	(0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_G_DECIMATE_FACTOR_G       	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_G_LIT_OFFSET_G          	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_G_LIT_OFFSET_G          	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_G_DARK1_OFFSET_G       	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_G_DARK2_OFFSET_G       	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_G_DARK1_OFFSET_G       	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_G_DARK2_OFFSET_G       	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_G_THRESH0_TYPE_G        	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_G_THRESH0_DIR_G         	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_G_THRESH0_CHAN_G        	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_G_THRESH1_TYPE_G        	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_G_THRESH1_DIR_G         	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_G_THRESH1_CHAN_G        	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_G_THRESH0_TYPE_G        	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_G_THRESH0_DIR_G         	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_G_THRESH0_CHAN_G        	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_G_THRESH1_TYPE_G        	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_G_THRESH1_DIR_G         	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_G_THRESH1_CHAN_G        	(0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_G_THRESH0_VALUE_G          	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_G_THRESH0_SHIFT_G          	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_G_THRESH0_VALUE_G          	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_G_THRESH0_SHIFT_G          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_G_THRESH1_VALUE_G          	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_G_THRESH1_SHIFT_G          	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_G_THRESH1_VALUE_G          	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_G_THRESH1_SHIFT_G          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN2_G_AFE_SWAP_G              	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITM_PATTERN2_G_AFE_SWAP_G              	(0x000fU)		/*!< 4 Pulse input polarity pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_H_TIMESLOT_OFFSET_H        	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_H_INPUT_R_SELECT_H         	(10U)			/*!< Input resistor select*/
#define BITP_TS_CTRL_H_SAMPLE_TYPE_H            	(12U)			/*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_H_CH2_EN_H                 	(14U)			/*!< Channel 2 enable*/
#define BITP_TS_CTRL_H_SUBSAMPLE_H              	(15U)			/*!< Subsample using decimate_factor*/
#define BITM_TS_CTRL_H_TIMESLOT_OFFSET_H        	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_H_INPUT_R_SELECT_H         	(0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_H_SAMPLE_TYPE_H            	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_H_CH2_EN_H                 	(0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_H_SUBSAMPLE_H              	(0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_H_AFE_PATH_CFG_H           	(0U)			/*!< Bypass and input mux select*/
#define BITP_TS_PATH_H_GOUT_H                   	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_H_INP_REF_CH_H             	(10U)			/*!< Reference channel input select*/
#define BITP_TS_PATH_H_PRE_WIDTH_H              	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITM_TS_PATH_H_AFE_PATH_CFG_H           	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_H_GOUT_H                   	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_H_INP_REF_CH_H             	(0x0c00U)		/*!< Reference channel input select*/
#define BITM_TS_PATH_H_PRE_WIDTH_H              	(0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_H_INP12_H                   	(0U)			/*!< Input pair12 enable*/
#define BITP_INPUTS_H_INP34_H                   	(4U)			/*!< Input pair34 enable*/
#define BITP_INPUTS_H_INP56_H                   	(8U)			/*!< Input pair56 enable*/
#define BITP_INPUTS_H_INP78_H                   	(12U)			/*!< input pair78 enable*/
#define BITM_INPUTS_H_INP12_H                   	(0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_H_INP34_H                   	(0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_H_INP56_H                   	(0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_H_INP78_H                   	(0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_H_VC1_SEL_H                	(0U)			/*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_H_VC1_ALT_H                	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_H_VC1_PULSE_H              	(4U)			/*!< VC1 pulse control*/
#define BITP_CATHODE_H_VC2_SEL_H                	(6U)			/*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_H_VC2_ALT_H                	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_H_VC2_PULSE_H              	(10U)			/*!< VC2 pulse control*/
#define BITP_CATHODE_H_PRECON_H                 	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_H_VC1_SEL_H                	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_H_VC1_ALT_H                	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_H_VC1_PULSE_H              	(0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_H_VC2_SEL_H                	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_H_VC2_ALT_H                	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_H_VC2_PULSE_H              	(0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_H_PRECON_H                 	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_H_TIA_GAIN_CH1_H          	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_H_TIA_GAIN_CH2_H          	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_H_VREF_PULSE_VAL_H        	(6U)			/*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_H_AFE_TRIM_VREF_H         	(8U)			/*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_H_VREF_PULSE_H            	(10U)			/*!< Vref pulse control*/
#define BITP_AFE_TRIM_H_AFE_TRIM_INT1_H         	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_H_AFE_TRIM_INT2_H         	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_H_AFE_TIA_SAT_DETECT_EN_H 	(15U)			/*!< Enable tia saturation detection*/
#define BITM_AFE_TRIM_H_TIA_GAIN_CH1_H          	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_H_TIA_GAIN_CH2_H          	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_H_VREF_PULSE_VAL_H        	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_H_AFE_TRIM_VREF_H         	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_H_VREF_PULSE_H            	(0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_H_AFE_TRIM_INT1_H         	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_H_AFE_TRIM_INT2_H         	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_H_AFE_TIA_SAT_DETECT_EN_H 	(0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_H_LED_CURRENT1_H         	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_H_LED_DRIVESIDE1_H       	(7U)			/*!< Led output select for LED1*/
#define BITP_LED_POW12_H_LED_CURRENT2_H         	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_H_LED_DRIVESIDE2_H       	(15U)			/*!< Led output select for LED2*/
#define BITM_LED_POW12_H_LED_CURRENT1_H         	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_H_LED_DRIVESIDE1_H       	(0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_H_LED_CURRENT2_H         	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_H_LED_DRIVESIDE2_H       	(0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_H_LED_CURRENT3_H         	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_H_LED_DRIVESIDE3_H       	(7U)			/*!< Led output select for LED3*/
#define BITP_LED_POW34_H_LED_CURRENT4_H         	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_H_LED_DRIVESIDE4_H       	(15U)			/*!< Led output select for LED4*/
#define BITM_LED_POW34_H_LED_CURRENT3_H         	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_H_LED_DRIVESIDE3_H       	(0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_H_LED_CURRENT4_H         	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_H_LED_DRIVESIDE4_H       	(0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_H_NUM_REPEAT_H              	(0U)			/*!< Number of sequence repeats.*/
#define BITP_COUNTS_H_NUM_INT_H                 	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITM_COUNTS_H_NUM_REPEAT_H              	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_H_NUM_INT_H                 	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_H_MIN_PERIOD_H              	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_H_MOD_TYPE_H                	(12U)			/*!< Modulation Connection type*/
#define BITM_PERIOD_H_MIN_PERIOD_H              	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_H_MOD_TYPE_H                	(0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_H_LED_OFFSET_H           	(0U)			/*!< LED pulse offset*/
#define BITP_LED_PULSE_H_LED_WIDTH_H            	(8U)			/*!< LED pulse width*/
#define BITM_LED_PULSE_H_LED_OFFSET_H           	(0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_H_LED_WIDTH_H            	(0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_H_INTEG_WIDTH_H        	(0U)			/*!< Integrator clock width*/
#define BITP_INTEG_WIDTH_H_ADC_COUNT_H          	(6U)			/*!< ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_H_CH1_AMP_DISABLE_H    	(8U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_H_AFE_INT_C_BUF_H      	(11U)			/*!< Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_H_CH2_AMP_DISABLE_H    	(12U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_H_SINGLE_INTEG_H       	(15U)			/*!< Use single integrator pulse*/
#define BITM_INTEG_WIDTH_H_INTEG_WIDTH_H        	(0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_WIDTH_H_ADC_COUNT_H          	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_H_CH1_AMP_DISABLE_H    	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_H_AFE_INT_C_BUF_H      	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_H_CH2_AMP_DISABLE_H    	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_H_SINGLE_INTEG_H       	(0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_H_INTEG_FINE_OFFSET_H 	(0U)			/*!< Integrator clock fine offset*/
#define BITP_INTEG_OFFSET_H_INTEG_OFFSET_H      	(5U)			/*!< Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_H_INTEG_FINE_OFFSET_H 	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_H_INTEG_OFFSET_H      	(0x1fe0U)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_H_MOD_OFFSET_H           	(0U)			/*!< modulation pulse offset*/
#define BITP_MOD_PULSE_H_MOD_WIDTH_H            	(8U)			/*!< modulation pulse width.*/
#define BITM_MOD_PULSE_H_MOD_OFFSET_H           	(0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_H_MOD_WIDTH_H            	(0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_H_REVERSE_INTEG_H          	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_H_SUBTRACT_H               	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_H_MOD_DISABLE_H            	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_H_LED_DISABLE_H            	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITM_PATTERN_H_REVERSE_INTEG_H          	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_H_SUBTRACT_H               	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_H_MOD_DISABLE_H            	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_H_LED_DISABLE_H            	(0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_H_CH1_ADC_ADJUST_H        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF1_H_CH1_ADC_ADJUST_H        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_H_CH2_ADC_ADJUST_H        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF2_H_CH2_ADC_ADJUST_H        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_H_SIGNAL_SIZE_H              	(0U)			/*!< Signal data size*/
#define BITP_DATA1_H_SIGNAL_SHIFT_H             	(3U)			/*!< Signal data shift*/
#define BITP_DATA1_H_DARK_SIZE_H                	(8U)			/*!< Dark data size*/
#define BITP_DATA1_H_DARK_SHIFT_H               	(11U)			/*!< Dark data shift*/
#define BITM_DATA1_H_SIGNAL_SIZE_H              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA1_H_SIGNAL_SHIFT_H             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA1_H_DARK_SIZE_H                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA1_H_DARK_SHIFT_H               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_H_LIT_SIZE_H                 	(0U)			/*!< Lit data size*/
#define BITP_DATA2_H_LIT_SHIFT_H                	(3U)			/*!< Lit data shift*/
#define BITM_DATA2_H_LIT_SIZE_H                 	(0x0007U)		/*!< Lit data size*/
#define BITM_DATA2_H_LIT_SHIFT_H                	(0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_H_DECIMATE_TYPE_H         	(0U)			/*!< Decimation Type Select*/
#define BITP_DECIMATE_H_DECIMATE_FACTOR_H       	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_H_DECIMATE_TYPE_H         	(0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_H_DECIMATE_FACTOR_H       	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_H_LIT_OFFSET_H          	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_H_LIT_OFFSET_H          	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_H_DARK1_OFFSET_H       	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_H_DARK2_OFFSET_H       	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_H_DARK1_OFFSET_H       	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_H_DARK2_OFFSET_H       	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_H_THRESH0_TYPE_H        	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_H_THRESH0_DIR_H         	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_H_THRESH0_CHAN_H        	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_H_THRESH1_TYPE_H        	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_H_THRESH1_DIR_H         	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_H_THRESH1_CHAN_H        	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_H_THRESH0_TYPE_H        	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_H_THRESH0_DIR_H         	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_H_THRESH0_CHAN_H        	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_H_THRESH1_TYPE_H        	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_H_THRESH1_DIR_H         	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_H_THRESH1_CHAN_H        	(0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_H_THRESH0_VALUE_H          	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_H_THRESH0_SHIFT_H          	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_H_THRESH0_VALUE_H          	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_H_THRESH0_SHIFT_H          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_H_THRESH1_VALUE_H          	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_H_THRESH1_SHIFT_H          	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_H_THRESH1_VALUE_H          	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_H_THRESH1_SHIFT_H          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN2_H_AFE_SWAP_H              	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITM_PATTERN2_H_AFE_SWAP_H              	(0x000fU)		/*!< 4 Pulse input polarity pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_I_TIMESLOT_OFFSET_I        	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_I_INPUT_R_SELECT_I         	(10U)			/*!< Input resistor select*/
#define BITP_TS_CTRL_I_SAMPLE_TYPE_I            	(12U)			/*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_I_CH2_EN_I                 	(14U)			/*!< Channel 2 enable*/
#define BITP_TS_CTRL_I_SUBSAMPLE_I              	(15U)			/*!< Subsample using decimate_factor*/
#define BITM_TS_CTRL_I_TIMESLOT_OFFSET_I        	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_I_INPUT_R_SELECT_I         	(0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_I_SAMPLE_TYPE_I            	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_I_CH2_EN_I                 	(0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_I_SUBSAMPLE_I              	(0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_I_AFE_PATH_CFG_I           	(0U)			/*!< Bypass and input mux select*/
#define BITP_TS_PATH_I_GOUT_I                   	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_I_INP_REF_CH_I             	(10U)			/*!< Reference channel input select*/
#define BITP_TS_PATH_I_PRE_WIDTH_I              	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITM_TS_PATH_I_AFE_PATH_CFG_I           	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_I_GOUT_I                   	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_I_INP_REF_CH_I             	(0x0c00U)		/*!< Reference channel input select*/
#define BITM_TS_PATH_I_PRE_WIDTH_I              	(0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_I_INP12_I                   	(0U)			/*!< Input pair12 enable*/
#define BITP_INPUTS_I_INP34_I                   	(4U)			/*!< Input pair34 enable*/
#define BITP_INPUTS_I_INP56_I                   	(8U)			/*!< Input pair56 enable*/
#define BITP_INPUTS_I_INP78_I                   	(12U)			/*!< input pair78 enable*/
#define BITM_INPUTS_I_INP12_I                   	(0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_I_INP34_I                   	(0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_I_INP56_I                   	(0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_I_INP78_I                   	(0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_I_VC1_SEL_I                	(0U)			/*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_I_VC1_ALT_I                	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_I_VC1_PULSE_I              	(4U)			/*!< VC1 pulse control*/
#define BITP_CATHODE_I_VC2_SEL_I                	(6U)			/*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_I_VC2_ALT_I                	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_I_VC2_PULSE_I              	(10U)			/*!< VC2 pulse control*/
#define BITP_CATHODE_I_PRECON_I                 	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_I_VC1_SEL_I                	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_I_VC1_ALT_I                	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_I_VC1_PULSE_I              	(0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_I_VC2_SEL_I                	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_I_VC2_ALT_I                	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_I_VC2_PULSE_I              	(0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_I_PRECON_I                 	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_I_TIA_GAIN_CH1_I          	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_I_TIA_GAIN_CH2_I          	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_I_VREF_PULSE_VAL_I        	(6U)			/*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_I_AFE_TRIM_VREF_I         	(8U)			/*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_I_VREF_PULSE_I            	(10U)			/*!< Vref pulse control*/
#define BITP_AFE_TRIM_I_AFE_TRIM_INT1_I         	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_I_AFE_TRIM_INT2_I         	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_I_AFE_TIA_SAT_DETECT_EN_I 	(15U)			/*!< Enable tia saturation detection*/
#define BITM_AFE_TRIM_I_TIA_GAIN_CH1_I          	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_I_TIA_GAIN_CH2_I          	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_I_VREF_PULSE_VAL_I        	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_I_AFE_TRIM_VREF_I         	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_I_VREF_PULSE_I            	(0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_I_AFE_TRIM_INT1_I         	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_I_AFE_TRIM_INT2_I         	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_I_AFE_TIA_SAT_DETECT_EN_I 	(0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_I_LED_CURRENT1_I         	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_I_LED_DRIVESIDE1_I       	(7U)			/*!< Led output select for LED1*/
#define BITP_LED_POW12_I_LED_CURRENT2_I         	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_I_LED_DRIVESIDE2_I       	(15U)			/*!< Led output select for LED2*/
#define BITM_LED_POW12_I_LED_CURRENT1_I         	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_I_LED_DRIVESIDE1_I       	(0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_I_LED_CURRENT2_I         	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_I_LED_DRIVESIDE2_I       	(0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_I_LED_CURRENT3_I         	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_I_LED_DRIVESIDE3_I       	(7U)			/*!< Led output select for LED3*/
#define BITP_LED_POW34_I_LED_CURRENT4_I         	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_I_LED_DRIVESIDE4_I       	(15U)			/*!< Led output select for LED4*/
#define BITM_LED_POW34_I_LED_CURRENT3_I         	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_I_LED_DRIVESIDE3_I       	(0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_I_LED_CURRENT4_I         	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_I_LED_DRIVESIDE4_I       	(0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_I_NUM_REPEAT_I              	(0U)			/*!< Number of sequence repeats.*/
#define BITP_COUNTS_I_NUM_INT_I                 	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITM_COUNTS_I_NUM_REPEAT_I              	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_I_NUM_INT_I                 	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_I_MIN_PERIOD_I              	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_I_MOD_TYPE_I                	(12U)			/*!< Modulation Connection type*/
#define BITM_PERIOD_I_MIN_PERIOD_I              	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_I_MOD_TYPE_I                	(0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_I_LED_OFFSET_I           	(0U)			/*!< LED pulse offset*/
#define BITP_LED_PULSE_I_LED_WIDTH_I            	(8U)			/*!< LED pulse width*/
#define BITM_LED_PULSE_I_LED_OFFSET_I           	(0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_I_LED_WIDTH_I            	(0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_I_INTEG_WIDTH_I        	(0U)			/*!< Integrator clock width*/
#define BITP_INTEG_WIDTH_I_ADC_COUNT_I          	(6U)			/*!< ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_I_CH1_AMP_DISABLE_I    	(8U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_I_AFE_INT_C_BUF_I      	(11U)			/*!< Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_I_CH2_AMP_DISABLE_I    	(12U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_I_SINGLE_INTEG_I       	(15U)			/*!< Use single integrator pulse*/
#define BITM_INTEG_WIDTH_I_INTEG_WIDTH_I        	(0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_WIDTH_I_ADC_COUNT_I          	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_I_CH1_AMP_DISABLE_I    	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_I_AFE_INT_C_BUF_I      	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_I_CH2_AMP_DISABLE_I    	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_I_SINGLE_INTEG_I       	(0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_I_INTEG_FINE_OFFSET_I 	(0U)			/*!< Integrator clock fine offset*/
#define BITP_INTEG_OFFSET_I_INTEG_OFFSET_I      	(5U)			/*!< Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_I_INTEG_FINE_OFFSET_I 	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_I_INTEG_OFFSET_I      	(0x1fe0U)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_I_MOD_OFFSET_I           	(0U)			/*!< modulation pulse offset*/
#define BITP_MOD_PULSE_I_MOD_WIDTH_I            	(8U)			/*!< modulation pulse width.*/
#define BITM_MOD_PULSE_I_MOD_OFFSET_I           	(0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_I_MOD_WIDTH_I            	(0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_I_REVERSE_INTEG_I          	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_I_SUBTRACT_I               	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_I_MOD_DISABLE_I            	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_I_LED_DISABLE_I            	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITM_PATTERN_I_REVERSE_INTEG_I          	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_I_SUBTRACT_I               	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_I_MOD_DISABLE_I            	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_I_LED_DISABLE_I            	(0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_I_CH1_ADC_ADJUST_I        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF1_I_CH1_ADC_ADJUST_I        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_I_CH2_ADC_ADJUST_I        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF2_I_CH2_ADC_ADJUST_I        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_I_SIGNAL_SIZE_I              	(0U)			/*!< Signal data size*/
#define BITP_DATA1_I_SIGNAL_SHIFT_I             	(3U)			/*!< Signal data shift*/
#define BITP_DATA1_I_DARK_SIZE_I                	(8U)			/*!< Dark data size*/
#define BITP_DATA1_I_DARK_SHIFT_I               	(11U)			/*!< Dark data shift*/
#define BITM_DATA1_I_SIGNAL_SIZE_I              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA1_I_SIGNAL_SHIFT_I             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA1_I_DARK_SIZE_I                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA1_I_DARK_SHIFT_I               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_I_LIT_SIZE_I                 	(0U)			/*!< Lit data size*/
#define BITP_DATA2_I_LIT_SHIFT_I                	(3U)			/*!< Lit data shift*/
#define BITM_DATA2_I_LIT_SIZE_I                 	(0x0007U)		/*!< Lit data size*/
#define BITM_DATA2_I_LIT_SHIFT_I                	(0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_I_DECIMATE_TYPE_I         	(0U)			/*!< Decimation Type Select*/
#define BITP_DECIMATE_I_DECIMATE_FACTOR_I       	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_I_DECIMATE_TYPE_I         	(0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_I_DECIMATE_FACTOR_I       	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_I_LIT_OFFSET_I          	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_I_LIT_OFFSET_I          	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_I_DARK1_OFFSET_I       	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_I_DARK2_OFFSET_I       	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_I_DARK1_OFFSET_I       	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_I_DARK2_OFFSET_I       	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_I_THRESH0_TYPE_I        	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_I_THRESH0_DIR_I         	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_I_THRESH0_CHAN_I        	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_I_THRESH1_TYPE_I        	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_I_THRESH1_DIR_I         	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_I_THRESH1_CHAN_I        	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_I_THRESH0_TYPE_I        	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_I_THRESH0_DIR_I         	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_I_THRESH0_CHAN_I        	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_I_THRESH1_TYPE_I        	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_I_THRESH1_DIR_I         	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_I_THRESH1_CHAN_I        	(0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_I_THRESH0_VALUE_I          	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_I_THRESH0_SHIFT_I          	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_I_THRESH0_VALUE_I          	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_I_THRESH0_SHIFT_I          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_I_THRESH1_VALUE_I          	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_I_THRESH1_SHIFT_I          	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_I_THRESH1_VALUE_I          	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_I_THRESH1_SHIFT_I          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN2_I_AFE_SWAP_I              	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITM_PATTERN2_I_AFE_SWAP_I              	(0x000fU)		/*!< 4 Pulse input polarity pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_J_TIMESLOT_OFFSET_J        	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_J_INPUT_R_SELECT_J         	(10U)			/*!< Input resistor select*/
#define BITP_TS_CTRL_J_SAMPLE_TYPE_J            	(12U)			/*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_J_CH2_EN_J                 	(14U)			/*!< Channel 2 enable*/
#define BITP_TS_CTRL_J_SUBSAMPLE_J              	(15U)			/*!< Subsample using decimate_factor*/
#define BITM_TS_CTRL_J_TIMESLOT_OFFSET_J        	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_J_INPUT_R_SELECT_J         	(0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_J_SAMPLE_TYPE_J            	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_J_CH2_EN_J                 	(0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_J_SUBSAMPLE_J              	(0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_J_AFE_PATH_CFG_J           	(0U)			/*!< Bypass and input mux select*/
#define BITP_TS_PATH_J_GOUT_J                   	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_J_INP_REF_CH_J             	(10U)			/*!< Reference channel input select*/
#define BITP_TS_PATH_J_PRE_WIDTH_J              	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITM_TS_PATH_J_AFE_PATH_CFG_J           	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_J_GOUT_J                   	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_J_INP_REF_CH_J             	(0x0c00U)		/*!< Reference channel input select*/
#define BITM_TS_PATH_J_PRE_WIDTH_J              	(0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_J_INP12_J                   	(0U)			/*!< Input pair12 enable*/
#define BITP_INPUTS_J_INP34_J                   	(4U)			/*!< Input pair34 enable*/
#define BITP_INPUTS_J_INP56_J                   	(8U)			/*!< Input pair56 enable*/
#define BITP_INPUTS_J_INP78_J                   	(12U)			/*!< input pair78 enable*/
#define BITM_INPUTS_J_INP12_J                   	(0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_J_INP34_J                   	(0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_J_INP56_J                   	(0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_J_INP78_J                   	(0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_J_VC1_SEL_J                	(0U)			/*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_J_VC1_ALT_J                	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_J_VC1_PULSE_J              	(4U)			/*!< VC1 pulse control*/
#define BITP_CATHODE_J_VC2_SEL_J                	(6U)			/*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_J_VC2_ALT_J                	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_J_VC2_PULSE_J              	(10U)			/*!< VC2 pulse control*/
#define BITP_CATHODE_J_PRECON_J                 	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_J_VC1_SEL_J                	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_J_VC1_ALT_J                	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_J_VC1_PULSE_J              	(0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_J_VC2_SEL_J                	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_J_VC2_ALT_J                	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_J_VC2_PULSE_J              	(0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_J_PRECON_J                 	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_J_TIA_GAIN_CH1_J          	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_J_TIA_GAIN_CH2_J          	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_J_VREF_PULSE_VAL_J        	(6U)			/*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_J_AFE_TRIM_VREF_J         	(8U)			/*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_J_VREF_PULSE_J            	(10U)			/*!< Vref pulse control*/
#define BITP_AFE_TRIM_J_AFE_TRIM_INT1_J         	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_J_AFE_TRIM_INT2_J         	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_J_AFE_TIA_SAT_DETECT_EN_J 	(15U)			/*!< Enable tia saturation detection*/
#define BITM_AFE_TRIM_J_TIA_GAIN_CH1_J          	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_J_TIA_GAIN_CH2_J          	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_J_VREF_PULSE_VAL_J        	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_J_AFE_TRIM_VREF_J         	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_J_VREF_PULSE_J            	(0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_J_AFE_TRIM_INT1_J         	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_J_AFE_TRIM_INT2_J         	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_J_AFE_TIA_SAT_DETECT_EN_J 	(0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_J_LED_CURRENT1_J         	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_J_LED_DRIVESIDE1_J       	(7U)			/*!< Led output select for LED1*/
#define BITP_LED_POW12_J_LED_CURRENT2_J         	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_J_LED_DRIVESIDE2_J       	(15U)			/*!< Led output select for LED2*/
#define BITM_LED_POW12_J_LED_CURRENT1_J         	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_J_LED_DRIVESIDE1_J       	(0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_J_LED_CURRENT2_J         	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_J_LED_DRIVESIDE2_J       	(0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_J_LED_CURRENT3_J         	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_J_LED_DRIVESIDE3_J       	(7U)			/*!< Led output select for LED3*/
#define BITP_LED_POW34_J_LED_CURRENT4_J         	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_J_LED_DRIVESIDE4_J       	(15U)			/*!< Led output select for LED4*/
#define BITM_LED_POW34_J_LED_CURRENT3_J         	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_J_LED_DRIVESIDE3_J       	(0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_J_LED_CURRENT4_J         	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_J_LED_DRIVESIDE4_J       	(0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_J_NUM_REPEAT_J              	(0U)			/*!< Number of sequence repeats.*/
#define BITP_COUNTS_J_NUM_INT_J                 	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITM_COUNTS_J_NUM_REPEAT_J              	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_J_NUM_INT_J                 	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_J_MIN_PERIOD_J              	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_J_MOD_TYPE_J                	(12U)			/*!< Modulation Connection type*/
#define BITM_PERIOD_J_MIN_PERIOD_J              	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_J_MOD_TYPE_J                	(0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_J_LED_OFFSET_J           	(0U)			/*!< LED pulse offset*/
#define BITP_LED_PULSE_J_LED_WIDTH_J            	(8U)			/*!< LED pulse width*/
#define BITM_LED_PULSE_J_LED_OFFSET_J           	(0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_J_LED_WIDTH_J            	(0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_J_INTEG_WIDTH_J        	(0U)			/*!< Integrator clock width*/
#define BITP_INTEG_WIDTH_J_ADC_COUNT_J          	(6U)			/*!< ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_J_CH1_AMP_DISABLE_J    	(8U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_J_AFE_INT_C_BUF_J      	(11U)			/*!< Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_J_CH2_AMP_DISABLE_J    	(12U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_J_SINGLE_INTEG_J       	(15U)			/*!< Use single integrator pulse*/
#define BITM_INTEG_WIDTH_J_INTEG_WIDTH_J        	(0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_WIDTH_J_ADC_COUNT_J          	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_J_CH1_AMP_DISABLE_J    	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_J_AFE_INT_C_BUF_J      	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_J_CH2_AMP_DISABLE_J    	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_J_SINGLE_INTEG_J       	(0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_J_INTEG_FINE_OFFSET_J 	(0U)			/*!< Integrator clock fine offset*/
#define BITP_INTEG_OFFSET_J_INTEG_OFFSET_J      	(5U)			/*!< Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_J_INTEG_FINE_OFFSET_J 	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_J_INTEG_OFFSET_J      	(0x1fe0U)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_J_MOD_OFFSET_J           	(0U)			/*!< modulation pulse offset*/
#define BITP_MOD_PULSE_J_MOD_WIDTH_J            	(8U)			/*!< modulation pulse width.*/
#define BITM_MOD_PULSE_J_MOD_OFFSET_J           	(0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_J_MOD_WIDTH_J            	(0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_J_REVERSE_INTEG_J          	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_J_SUBTRACT_J               	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_J_MOD_DISABLE_J            	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_J_LED_DISABLE_J            	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITM_PATTERN_J_REVERSE_INTEG_J          	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_J_SUBTRACT_J               	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_J_MOD_DISABLE_J            	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_J_LED_DISABLE_J            	(0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_J_CH1_ADC_ADJUST_J        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF1_J_CH1_ADC_ADJUST_J        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_J_CH2_ADC_ADJUST_J        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF2_J_CH2_ADC_ADJUST_J        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_J_SIGNAL_SIZE_J              	(0U)			/*!< Signal data size*/
#define BITP_DATA1_J_SIGNAL_SHIFT_J             	(3U)			/*!< Signal data shift*/
#define BITP_DATA1_J_DARK_SIZE_J                	(8U)			/*!< Dark data size*/
#define BITP_DATA1_J_DARK_SHIFT_J               	(11U)			/*!< Dark data shift*/
#define BITM_DATA1_J_SIGNAL_SIZE_J              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA1_J_SIGNAL_SHIFT_J             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA1_J_DARK_SIZE_J                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA1_J_DARK_SHIFT_J               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_J_LIT_SIZE_J                 	(0U)			/*!< Lit data size*/
#define BITP_DATA2_J_LIT_SHIFT_J                	(3U)			/*!< Lit data shift*/
#define BITM_DATA2_J_LIT_SIZE_J                 	(0x0007U)		/*!< Lit data size*/
#define BITM_DATA2_J_LIT_SHIFT_J                	(0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_J_DECIMATE_TYPE_J         	(0U)			/*!< Decimation Type Select*/
#define BITP_DECIMATE_J_DECIMATE_FACTOR_J       	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_J_DECIMATE_TYPE_J         	(0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_J_DECIMATE_FACTOR_J       	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_J_LIT_OFFSET_J          	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_J_LIT_OFFSET_J          	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_J_DARK1_OFFSET_J       	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_J_DARK2_OFFSET_J       	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_J_DARK1_OFFSET_J       	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_J_DARK2_OFFSET_J       	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_J_THRESH0_TYPE_J        	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_J_THRESH0_DIR_J         	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_J_THRESH0_CHAN_J        	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_J_THRESH1_TYPE_J        	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_J_THRESH1_DIR_J         	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_J_THRESH1_CHAN_J        	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_J_THRESH0_TYPE_J        	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_J_THRESH0_DIR_J         	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_J_THRESH0_CHAN_J        	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_J_THRESH1_TYPE_J        	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_J_THRESH1_DIR_J         	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_J_THRESH1_CHAN_J        	(0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_J_THRESH0_VALUE_J          	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_J_THRESH0_SHIFT_J          	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_J_THRESH0_VALUE_J          	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_J_THRESH0_SHIFT_J          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_J_THRESH1_VALUE_J          	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_J_THRESH1_SHIFT_J          	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_J_THRESH1_VALUE_J          	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_J_THRESH1_SHIFT_J          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN2_J_AFE_SWAP_J              	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITM_PATTERN2_J_AFE_SWAP_J              	(0x000fU)		/*!< 4 Pulse input polarity pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_K_TIMESLOT_OFFSET_K        	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_K_INPUT_R_SELECT_K         	(10U)			/*!< Input resistor select*/
#define BITP_TS_CTRL_K_SAMPLE_TYPE_K            	(12U)			/*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_K_CH2_EN_K                 	(14U)			/*!< Channel 2 enable*/
#define BITP_TS_CTRL_K_SUBSAMPLE_K              	(15U)			/*!< Subsample using decimate_factor*/
#define BITM_TS_CTRL_K_TIMESLOT_OFFSET_K        	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_K_INPUT_R_SELECT_K         	(0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_K_SAMPLE_TYPE_K            	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_K_CH2_EN_K                 	(0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_K_SUBSAMPLE_K              	(0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_K_AFE_PATH_CFG_K           	(0U)			/*!< Bypass and input mux select*/
#define BITP_TS_PATH_K_GOUT_K                   	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_K_INP_REF_CH_K             	(10U)			/*!< Reference channel input select*/
#define BITP_TS_PATH_K_PRE_WIDTH_K              	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITM_TS_PATH_K_AFE_PATH_CFG_K           	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_K_GOUT_K                   	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_K_INP_REF_CH_K             	(0x0c00U)		/*!< Reference channel input select*/
#define BITM_TS_PATH_K_PRE_WIDTH_K              	(0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_K_INP12_K                   	(0U)			/*!< Input pair12 enable*/
#define BITP_INPUTS_K_INP34_K                   	(4U)			/*!< Input pair34 enable*/
#define BITP_INPUTS_K_INP56_K                   	(8U)			/*!< Input pair56 enable*/
#define BITP_INPUTS_K_INP78_K                   	(12U)			/*!< input pair78 enable*/
#define BITM_INPUTS_K_INP12_K                   	(0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_K_INP34_K                   	(0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_K_INP56_K                   	(0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_K_INP78_K                   	(0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_K_VC1_SEL_K                	(0U)			/*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_K_VC1_ALT_K                	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_K_VC1_PULSE_K              	(4U)			/*!< VC1 pulse control*/
#define BITP_CATHODE_K_VC2_SEL_K                	(6U)			/*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_K_VC2_ALT_K                	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_K_VC2_PULSE_K              	(10U)			/*!< VC2 pulse control*/
#define BITP_CATHODE_K_PRECON_K                 	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_K_VC1_SEL_K                	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_K_VC1_ALT_K                	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_K_VC1_PULSE_K              	(0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_K_VC2_SEL_K                	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_K_VC2_ALT_K                	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_K_VC2_PULSE_K              	(0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_K_PRECON_K                 	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_K_TIA_GAIN_CH1_K          	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_K_TIA_GAIN_CH2_K          	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_K_VREF_PULSE_VAL_K        	(6U)			/*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_K_AFE_TRIM_VREF_K         	(8U)			/*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_K_VREF_PULSE_K            	(10U)			/*!< Vref pulse control*/
#define BITP_AFE_TRIM_K_AFE_TRIM_INT1_K         	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_K_AFE_TRIM_INT2_K         	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_K_AFE_TIA_SAT_DETECT_EN_K 	(15U)			/*!< Enable tia saturation detection*/
#define BITM_AFE_TRIM_K_TIA_GAIN_CH1_K          	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_K_TIA_GAIN_CH2_K          	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_K_VREF_PULSE_VAL_K        	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_K_AFE_TRIM_VREF_K         	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_K_VREF_PULSE_K            	(0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_K_AFE_TRIM_INT1_K         	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_K_AFE_TRIM_INT2_K         	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_K_AFE_TIA_SAT_DETECT_EN_K 	(0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_K_LED_CURRENT1_K         	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_K_LED_DRIVESIDE1_K       	(7U)			/*!< Led output select for LED1*/
#define BITP_LED_POW12_K_LED_CURRENT2_K         	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_K_LED_DRIVESIDE2_K       	(15U)			/*!< Led output select for LED2*/
#define BITM_LED_POW12_K_LED_CURRENT1_K         	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_K_LED_DRIVESIDE1_K       	(0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_K_LED_CURRENT2_K         	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_K_LED_DRIVESIDE2_K       	(0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_K_LED_CURRENT3_K         	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_K_LED_DRIVESIDE3_K       	(7U)			/*!< Led output select for LED3*/
#define BITP_LED_POW34_K_LED_CURRENT4_K         	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_K_LED_DRIVESIDE4_K       	(15U)			/*!< Led output select for LED4*/
#define BITM_LED_POW34_K_LED_CURRENT3_K         	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_K_LED_DRIVESIDE3_K       	(0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_K_LED_CURRENT4_K         	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_K_LED_DRIVESIDE4_K       	(0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_K_NUM_REPEAT_K              	(0U)			/*!< Number of sequence repeats.*/
#define BITP_COUNTS_K_NUM_INT_K                 	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITM_COUNTS_K_NUM_REPEAT_K              	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_K_NUM_INT_K                 	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_K_MIN_PERIOD_K              	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_K_MOD_TYPE_K                	(12U)			/*!< Modulation Connection type*/
#define BITM_PERIOD_K_MIN_PERIOD_K              	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_K_MOD_TYPE_K                	(0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_K_LED_OFFSET_K           	(0U)			/*!< LED pulse offset*/
#define BITP_LED_PULSE_K_LED_WIDTH_K            	(8U)			/*!< LED pulse width*/
#define BITM_LED_PULSE_K_LED_OFFSET_K           	(0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_K_LED_WIDTH_K            	(0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_K_INTEG_WIDTH_K        	(0U)			/*!< Integrator clock width*/
#define BITP_INTEG_WIDTH_K_ADC_COUNT_K          	(6U)			/*!< ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_K_CH1_AMP_DISABLE_K    	(8U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_K_AFE_INT_C_BUF_K      	(11U)			/*!< Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_K_CH2_AMP_DISABLE_K    	(12U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_K_SINGLE_INTEG_K       	(15U)			/*!< Use single integrator pulse*/
#define BITM_INTEG_WIDTH_K_INTEG_WIDTH_K        	(0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_WIDTH_K_ADC_COUNT_K          	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_K_CH1_AMP_DISABLE_K    	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_K_AFE_INT_C_BUF_K      	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_K_CH2_AMP_DISABLE_K    	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_K_SINGLE_INTEG_K       	(0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_K_INTEG_FINE_OFFSET_K 	(0U)			/*!< Integrator clock fine offset*/
#define BITP_INTEG_OFFSET_K_INTEG_OFFSET_K      	(5U)			/*!< Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_K_INTEG_FINE_OFFSET_K 	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_K_INTEG_OFFSET_K      	(0x1fe0U)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_K_MOD_OFFSET_K           	(0U)			/*!< modulation pulse offset*/
#define BITP_MOD_PULSE_K_MOD_WIDTH_K            	(8U)			/*!< modulation pulse width.*/
#define BITM_MOD_PULSE_K_MOD_OFFSET_K           	(0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_K_MOD_WIDTH_K            	(0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_K_REVERSE_INTEG_K          	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_K_SUBTRACT_K               	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_K_MOD_DISABLE_K            	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_K_LED_DISABLE_K            	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITM_PATTERN_K_REVERSE_INTEG_K          	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_K_SUBTRACT_K               	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_K_MOD_DISABLE_K            	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_K_LED_DISABLE_K            	(0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_K_CH1_ADC_ADJUST_K        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF1_K_CH1_ADC_ADJUST_K        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_K_CH2_ADC_ADJUST_K        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF2_K_CH2_ADC_ADJUST_K        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_K_SIGNAL_SIZE_K              	(0U)			/*!< Signal data size*/
#define BITP_DATA1_K_SIGNAL_SHIFT_K             	(3U)			/*!< Signal data shift*/
#define BITP_DATA1_K_DARK_SIZE_K                	(8U)			/*!< Dark data size*/
#define BITP_DATA1_K_DARK_SHIFT_K               	(11U)			/*!< Dark data shift*/
#define BITM_DATA1_K_SIGNAL_SIZE_K              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA1_K_SIGNAL_SHIFT_K             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA1_K_DARK_SIZE_K                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA1_K_DARK_SHIFT_K               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_K_LIT_SIZE_K                 	(0U)			/*!< Lit data size*/
#define BITP_DATA2_K_LIT_SHIFT_K                	(3U)			/*!< Lit data shift*/
#define BITM_DATA2_K_LIT_SIZE_K                 	(0x0007U)		/*!< Lit data size*/
#define BITM_DATA2_K_LIT_SHIFT_K                	(0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_K_DECIMATE_TYPE_K         	(0U)			/*!< Decimation Type Select*/
#define BITP_DECIMATE_K_DECIMATE_FACTOR_K       	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_K_DECIMATE_TYPE_K         	(0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_K_DECIMATE_FACTOR_K       	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_K_LIT_OFFSET_K          	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_K_LIT_OFFSET_K          	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_K_DARK1_OFFSET_K       	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_K_DARK2_OFFSET_K       	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_K_DARK1_OFFSET_K       	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_K_DARK2_OFFSET_K       	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_K_THRESH0_TYPE_K        	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_K_THRESH0_DIR_K         	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_K_THRESH0_CHAN_K        	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_K_THRESH1_TYPE_K        	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_K_THRESH1_DIR_K         	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_K_THRESH1_CHAN_K        	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_K_THRESH0_TYPE_K        	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_K_THRESH0_DIR_K         	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_K_THRESH0_CHAN_K        	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_K_THRESH1_TYPE_K        	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_K_THRESH1_DIR_K         	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_K_THRESH1_CHAN_K        	(0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_K_THRESH0_VALUE_K          	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_K_THRESH0_SHIFT_K          	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_K_THRESH0_VALUE_K          	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_K_THRESH0_SHIFT_K          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_K_THRESH1_VALUE_K          	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_K_THRESH1_SHIFT_K          	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_K_THRESH1_VALUE_K          	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_K_THRESH1_SHIFT_K          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN2_K_AFE_SWAP_K              	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITM_PATTERN2_K_AFE_SWAP_K              	(0x000fU)		/*!< 4 Pulse input polarity pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_L_TIMESLOT_OFFSET_L        	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_L_INPUT_R_SELECT_L         	(10U)			/*!< Input resistor select*/
#define BITP_TS_CTRL_L_SAMPLE_TYPE_L            	(12U)			/*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_L_CH2_EN_L                 	(14U)			/*!< Channel 2 enable*/
#define BITP_TS_CTRL_L_SUBSAMPLE_L              	(15U)			/*!< Subsample using decimate_factor*/
#define BITM_TS_CTRL_L_TIMESLOT_OFFSET_L        	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_L_INPUT_R_SELECT_L         	(0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_L_SAMPLE_TYPE_L            	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_L_CH2_EN_L                 	(0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_L_SUBSAMPLE_L              	(0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_L_AFE_PATH_CFG_L           	(0U)			/*!< Bypass and input mux select*/
#define BITP_TS_PATH_L_GOUT_L                   	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_L_INP_REF_CH_L             	(10U)			/*!< Reference channel input select*/
#define BITP_TS_PATH_L_PRE_WIDTH_L              	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITM_TS_PATH_L_AFE_PATH_CFG_L           	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_L_GOUT_L                   	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_L_INP_REF_CH_L             	(0x0c00U)		/*!< Reference channel input select*/
#define BITM_TS_PATH_L_PRE_WIDTH_L              	(0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_L_INP12_L                   	(0U)			/*!< Input pair12 enable*/
#define BITP_INPUTS_L_INP34_L                   	(4U)			/*!< Input pair34 enable*/
#define BITP_INPUTS_L_INP56_L                   	(8U)			/*!< Input pair56 enable*/
#define BITP_INPUTS_L_INP78_L                   	(12U)			/*!< input pair78 enable*/
#define BITM_INPUTS_L_INP12_L                   	(0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_L_INP34_L                   	(0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_L_INP56_L                   	(0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_L_INP78_L                   	(0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_L_VC1_SEL_L                	(0U)			/*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_L_VC1_ALT_L                	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_L_VC1_PULSE_L              	(4U)			/*!< VC1 pulse control*/
#define BITP_CATHODE_L_VC2_SEL_L                	(6U)			/*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_L_VC2_ALT_L                	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_L_VC2_PULSE_L              	(10U)			/*!< VC2 pulse control*/
#define BITP_CATHODE_L_PRECON_L                 	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_L_VC1_SEL_L                	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_L_VC1_ALT_L                	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_L_VC1_PULSE_L              	(0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_L_VC2_SEL_L                	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_L_VC2_ALT_L                	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_L_VC2_PULSE_L              	(0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_L_PRECON_L                 	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_L_TIA_GAIN_CH1_L          	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_L_TIA_GAIN_CH2_L          	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_L_VREF_PULSE_VAL_L        	(6U)			/*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_L_AFE_TRIM_VREF_L         	(8U)			/*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_L_VREF_PULSE_L            	(10U)			/*!< Vref pulse control*/
#define BITP_AFE_TRIM_L_AFE_TRIM_INT1_L         	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_L_AFE_TRIM_INT2_L         	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_L_AFE_TIA_SAT_DETECT_EN_L 	(15U)			/*!< Enable tia saturation detection*/
#define BITM_AFE_TRIM_L_TIA_GAIN_CH1_L          	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_L_TIA_GAIN_CH2_L          	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_L_VREF_PULSE_VAL_L        	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_L_AFE_TRIM_VREF_L         	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_L_VREF_PULSE_L            	(0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_L_AFE_TRIM_INT1_L         	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_L_AFE_TRIM_INT2_L         	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_L_AFE_TIA_SAT_DETECT_EN_L 	(0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_L_LED_CURRENT1_L         	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_L_LED_DRIVESIDE1_L       	(7U)			/*!< Led output select for LED1*/
#define BITP_LED_POW12_L_LED_CURRENT2_L         	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_L_LED_DRIVESIDE2_L       	(15U)			/*!< Led output select for LED2*/
#define BITM_LED_POW12_L_LED_CURRENT1_L         	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_L_LED_DRIVESIDE1_L       	(0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_L_LED_CURRENT2_L         	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_L_LED_DRIVESIDE2_L       	(0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_L_LED_CURRENT3_L         	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_L_LED_DRIVESIDE3_L       	(7U)			/*!< Led output select for LED3*/
#define BITP_LED_POW34_L_LED_CURRENT4_L         	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_L_LED_DRIVESIDE4_L       	(15U)			/*!< Led output select for LED4*/
#define BITM_LED_POW34_L_LED_CURRENT3_L         	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_L_LED_DRIVESIDE3_L       	(0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_L_LED_CURRENT4_L         	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_L_LED_DRIVESIDE4_L       	(0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_L_NUM_REPEAT_L              	(0U)			/*!< Number of sequence repeats.*/
#define BITP_COUNTS_L_NUM_INT_L                 	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITM_COUNTS_L_NUM_REPEAT_L              	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_L_NUM_INT_L                 	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_L_MIN_PERIOD_L              	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_L_MOD_TYPE_L                	(12U)			/*!< Modulation Connection type*/
#define BITM_PERIOD_L_MIN_PERIOD_L              	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_L_MOD_TYPE_L                	(0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_L_LED_OFFSET_L           	(0U)			/*!< LED pulse offset*/
#define BITP_LED_PULSE_L_LED_WIDTH_L            	(8U)			/*!< LED pulse width*/
#define BITM_LED_PULSE_L_LED_OFFSET_L           	(0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_L_LED_WIDTH_L            	(0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_L_INTEG_WIDTH_L        	(0U)			/*!< Integrator clock width*/
#define BITP_INTEG_WIDTH_L_ADC_COUNT_L          	(6U)			/*!< ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_L_CH1_AMP_DISABLE_L    	(8U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_L_AFE_INT_C_BUF_L      	(11U)			/*!< Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_L_CH2_AMP_DISABLE_L    	(12U)			/*!< Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_L_SINGLE_INTEG_L       	(15U)			/*!< Use single integrator pulse*/
#define BITM_INTEG_WIDTH_L_INTEG_WIDTH_L        	(0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_WIDTH_L_ADC_COUNT_L          	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_L_CH1_AMP_DISABLE_L    	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_L_AFE_INT_C_BUF_L      	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_L_CH2_AMP_DISABLE_L    	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_L_SINGLE_INTEG_L       	(0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_L_INTEG_FINE_OFFSET_L 	(0U)			/*!< Integrator clock fine offset*/
#define BITP_INTEG_OFFSET_L_INTEG_OFFSET_L      	(5U)			/*!< Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_L_INTEG_FINE_OFFSET_L 	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_L_INTEG_OFFSET_L      	(0x1fe0U)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_L_MOD_OFFSET_L           	(0U)			/*!< modulation pulse offset*/
#define BITP_MOD_PULSE_L_MOD_WIDTH_L            	(8U)			/*!< modulation pulse width.*/
#define BITM_MOD_PULSE_L_MOD_OFFSET_L           	(0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_L_MOD_WIDTH_L            	(0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_L_REVERSE_INTEG_L          	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_L_SUBTRACT_L               	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_L_MOD_DISABLE_L            	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_L_LED_DISABLE_L            	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITM_PATTERN_L_REVERSE_INTEG_L          	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_L_SUBTRACT_L               	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_L_MOD_DISABLE_L            	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_L_LED_DISABLE_L            	(0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_L_CH1_ADC_ADJUST_L        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF1_L_CH1_ADC_ADJUST_L        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_L_CH2_ADC_ADJUST_L        	(0U)			/*!< Adjustment to ADC value.*/
#define BITM_ADC_OFF2_L_CH2_ADC_ADJUST_L        	(0x3fffU)		/*!< Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_L_SIGNAL_SIZE_L              	(0U)			/*!< Signal data size*/
#define BITP_DATA1_L_SIGNAL_SHIFT_L             	(3U)			/*!< Signal data shift*/
#define BITP_DATA1_L_DARK_SIZE_L                	(8U)			/*!< Dark data size*/
#define BITP_DATA1_L_DARK_SHIFT_L               	(11U)			/*!< Dark data shift*/
#define BITM_DATA1_L_SIGNAL_SIZE_L              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA1_L_SIGNAL_SHIFT_L             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA1_L_DARK_SIZE_L                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA1_L_DARK_SHIFT_L               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_L_LIT_SIZE_L                 	(0U)			/*!< Lit data size*/
#define BITP_DATA2_L_LIT_SHIFT_L                	(3U)			/*!< Lit data shift*/
#define BITM_DATA2_L_LIT_SIZE_L                 	(0x0007U)		/*!< Lit data size*/
#define BITM_DATA2_L_LIT_SHIFT_L                	(0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_L_DECIMATE_TYPE_L         	(0U)			/*!< Decimation Type Select*/
#define BITP_DECIMATE_L_DECIMATE_FACTOR_L       	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_L_DECIMATE_TYPE_L         	(0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_L_DECIMATE_FACTOR_L       	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_L_LIT_OFFSET_L          	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_L_LIT_OFFSET_L          	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_L_DARK1_OFFSET_L       	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_L_DARK2_OFFSET_L       	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_L_DARK1_OFFSET_L       	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_L_DARK2_OFFSET_L       	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_L_THRESH0_TYPE_L        	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_L_THRESH0_DIR_L         	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_L_THRESH0_CHAN_L        	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_L_THRESH1_TYPE_L        	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_L_THRESH1_DIR_L         	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_L_THRESH1_CHAN_L        	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_L_THRESH0_TYPE_L        	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_L_THRESH0_DIR_L         	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_L_THRESH0_CHAN_L        	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_L_THRESH1_TYPE_L        	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_L_THRESH1_DIR_L         	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_L_THRESH1_CHAN_L        	(0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_L_THRESH0_VALUE_L          	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_L_THRESH0_SHIFT_L          	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_L_THRESH0_VALUE_L          	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_L_THRESH0_SHIFT_L          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_L_THRESH1_VALUE_L          	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_L_THRESH1_SHIFT_L          	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_L_THRESH1_VALUE_L          	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_L_THRESH1_SHIFT_L          	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN2_L_AFE_SWAP_L              	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITM_PATTERN2_L_AFE_SWAP_L              	(0x000fU)		/*!< 4 Pulse input polarity pattern*/


/*! \cond TS Register Offset
*/

#define REGOFFSET_SIGNAL1_L                     	(0x0030U)
#define REGOFFSET_SIGNAL1_H                     	(0x0031U)
#define REGOFFSET_SIGNAL2_L                     	(0x0032U)
#define REGOFFSET_SIGNAL2_H                     	(0x0033U)
#define REGOFFSET_DARK1_L                       	(0x0034U)
#define REGOFFSET_DARK1_H                       	(0x0035U)
#define REGOFFSET_DARK2_L                       	(0x0036U)
#define REGOFFSET_DARK2_H                       	(0x0037U)
#define REGOFFSET_TS_CTRL                       	(0x0100U)
#define REGOFFSET_TS_PATH                       	(0x0101U)
#define REGOFFSET_INPUTS                        	(0x0102U)
#define REGOFFSET_CATHODE                       	(0x0103U)
#define REGOFFSET_AFE_TRIM                      	(0x0104U)
#define REGOFFSET_LED_POW12                     	(0x0105U)
#define REGOFFSET_LED_POW34                     	(0x0106U)
#define REGOFFSET_COUNTS                        	(0x0107U)
#define REGOFFSET_PERIOD                        	(0x0108U)
#define REGOFFSET_LED_PULSE                     	(0x0109U)
#define REGOFFSET_INTEG_WIDTH                   	(0x010AU)
#define REGOFFSET_INTEG_OFFSET                  	(0x010BU)
#define REGOFFSET_MOD_PULSE                     	(0x010CU)
#define REGOFFSET_PATTERN                       	(0x010DU)
#define REGOFFSET_ADC_OFF1                      	(0x010EU)
#define REGOFFSET_ADC_OFF2                      	(0x010FU)
#define REGOFFSET_DATA1                         	(0x0110U)
#define REGOFFSET_DATA2                         	(0x0111U)
#define REGOFFSET_DECIMATE                      	(0x0112U)
#define REGOFFSET_DIGINT_LIT                    	(0x0113U)
#define REGOFFSET_DIGINT_DARK                   	(0x0114U)
#define REGOFFSET_THRESH_CFG                    	(0x0115U)
#define REGOFFSET_THRESH0                       	(0x0116U)
#define REGOFFSET_THRESH1                       	(0x0117U)
#define REGOFFSET_PATTERN2                      	(0x0118U)

/*!< \endcond */

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_DATA						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_STATUS_DATA_INT_DATA               	(0U)			/*!< Timeslot A data register interrupt status*/
#define BITMOFFSET_INT_STATUS_DATA_INT_DATA               	(0x0001U)		/*!< Timeslot A data register interrupt status*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_LEV0						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_STATUS_LEV0_INT_LEV0               	(0U)			/*!< Timeslot A level 0 interrupt status*/
#define BITMOFFSET_INT_STATUS_LEV0_INT_LEV0               	(0x0001U)		/*!< Timeslot A level 0 interrupt status*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_LEV1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_STATUS_LEV1_INT_LEV1               	(0U)			/*!< Timeslot A level 1 interrupt status*/
#define BITMOFFSET_INT_STATUS_LEV1_INT_LEV1               	(0x0001U)		/*!< Timeslot A level 1 interrupt status*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_TS1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_STATUS_TS1_INT_TSAT1               	(0U)			/*!< Tia channel 1 saturated interrupt Timeslot a*/
#define BITMOFFSET_INT_STATUS_TS1_INT_TSAT1               	(0x0001U)		/*!< Tia channel 1 saturated interrupt Timeslot a*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_TS2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_STATUS_TS2_INT_TSAT2               	(0U)			/*!< Tia channel 2 saturated interrupt Timeslot a*/
#define BITMOFFSET_INT_STATUS_TS2_INT_TSAT2               	(0x0001U)		/*!< Tia channel 2 saturated interrupt Timeslot a*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ACLEAR						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_ACLEAR_INT_ACLEAR_DATA             	(0U)			/*!< Timeslot A Interrupt auto clear enable*/
#define BITMOFFSET_INT_ACLEAR_INT_ACLEAR_DATA             	(0x0001U)		/*!< Timeslot A Interrupt auto clear enable*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XD						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_ENABLE_XD_INTX_EN_DATA             	(0U)			/*!< Interrupt channel X Timeslot A data interrupt enable*/
#define BITMOFFSET_INT_ENABLE_XD_INTX_EN_DATA             	(0x0001U)		/*!< Interrupt channel X Timeslot A data interrupt enable*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YD						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_ENABLE_YD_INTY_EN_DATA             	(0U)			/*!< interrupt channel Y Timeslot A data interrupt enable*/
#define BITMOFFSET_INT_ENABLE_YD_INTY_EN_DATA             	(0x0001U)		/*!< interrupt channel Y Timeslot A data interrupt enable*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XL0						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_ENABLE_XL0_INTX_EN_LEV0            	(0U)			/*!< Interrupt channel X Timeslot A level 0 interrupt enable*/
#define BITMOFFSET_INT_ENABLE_XL0_INTX_EN_LEV0            	(0x0001U)		/*!< Interrupt channel X Timeslot A level 0 interrupt enable*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XL1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_ENABLE_XL1_INTX_EN_LEV1            	(0U)			/*!< Interrupt channel X Timeslot A level 1 interrupt enable*/
#define BITMOFFSET_INT_ENABLE_XL1_INTX_EN_LEV1            	(0x0001U)		/*!< Interrupt channel X Timeslot A level 1 interrupt enable*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XT1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_ENABLE_XT1_INTX_EN_TSAT1           	(0U)			/*!< Interrupt function X chan 1 saturated interrupt Timeslot a*/
#define BITMOFFSET_INT_ENABLE_XT1_INTX_EN_TSAT1           	(0x0001U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot a*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XT2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_ENABLE_XT2_INTX_EN_TSAT2           	(0U)			/*!< Interrupt function X chan 2 saturated interrupt Timeslot a*/
#define BITMOFFSET_INT_ENABLE_XT2_INTX_EN_TSAT2           	(0x0001U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot a*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YL0						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_ENABLE_YL0_INTY_EN_LEV0            	(0U)			/*!< interrupt channel Y Timeslot A level 0 interrupt enable*/
#define BITMOFFSET_INT_ENABLE_YL0_INTY_EN_LEV0            	(0x0001U)		/*!< interrupt channel Y Timeslot A level 0 interrupt enable*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YL1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_ENABLE_YL1_INTY_EN_LEV1            	(0U)			/*!< interrupt channel Y Timeslot A level 1 interrupt enable*/
#define BITMOFFSET_INT_ENABLE_YL1_INTY_EN_LEV1            	(0x0001U)		/*!< interrupt channel Y Timeslot A level 1 interrupt enable*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YT1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_ENABLE_YT1_INTY_EN_TSAT1           	(0U)			/*!< Interrupt function Y chan 1 saturated interrupt Timeslot a*/
#define BITMOFFSET_INT_ENABLE_YT1_INTY_EN_TSAT1           	(0x0001U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot a*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YT2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INT_ENABLE_YT2_INTY_EN_TSAT2           	(0U)			/*!< Interrupt function Y chan 2 saturated interrupt Timeslot a*/
#define BITMOFFSET_INT_ENABLE_YT2_INTY_EN_TSAT2           	(0x0001U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot a*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA_HOLD_FLAG						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_DATA_HOLD_FLAG_HOLD_REGS               	(0U)			/*!< Prevent Update of Timeslot A data registers*/
#define BITMOFFSET_DATA_HOLD_FLAG_HOLD_REGS               	(0x0001U)		/*!< Prevent Update of Timeslot A data registers*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_SIGNAL1_L_A_SIGNAL1_L                  	(0U)			/*!< Signal channel 1 lower half timeslot a*/
#define BITMOFFSET_SIGNAL1_L_A_SIGNAL1_L                  	(0xffffU)		/*!< Signal channel 1 lower half timeslot a*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_SIGNAL1_H_A_SIGNAL1_H                  	(0U)			/*!< Signal channel 1 upper half timeslot a*/
#define BITMOFFSET_SIGNAL1_H_A_SIGNAL1_H                  	(0xffffU)		/*!< Signal channel 1 upper half timeslot a*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_SIGNAL2_L_A_SIGNAL2_L                  	(0U)			/*!< Signal channel 2 lower half timeslot a*/
#define BITMOFFSET_SIGNAL2_L_A_SIGNAL2_L                  	(0xffffU)		/*!< Signal channel 2 lower half timeslot a*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_SIGNAL2_H_A_SIGNAL2_H                  	(0U)			/*!< Signal channel 2 upper half timeslot a*/
#define BITMOFFSET_SIGNAL2_H_A_SIGNAL2_H                  	(0xffffU)		/*!< Signal channel 2 upper half timeslot a*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_DARK1_L_A_DARK1_L                      	(0U)			/*!< Dark channel 1 value lower half*/
#define BITMOFFSET_DARK1_L_A_DARK1_L                      	(0xffffU)		/*!< Dark channel 1 value lower half*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_DARK1_H_A_DARK1_H                      	(0U)			/*!< Dark channel 1 value upper half*/
#define BITMOFFSET_DARK1_H_A_DARK1_H                      	(0xffffU)		/*!< Dark channel 1 value upper half*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_DARK2_L_A_DARK2_L                      	(0U)			/*!< Dark channel 2 value lower half*/
#define BITMOFFSET_DARK2_L_A_DARK2_L                      	(0xffffU)		/*!< Dark channel 2 value lower half*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_DARK2_H_A_DARK2_H                      	(0U)			/*!< Dark channel 2 value upper half*/
#define BITMOFFSET_DARK2_H_A_DARK2_H                      	(0xffffU)		/*!< Dark channel 2 value upper half*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_TS_CTRL_A_TIMESLOT_OFFSET              	(0U)			/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITPOFFSET_TS_CTRL_A_INPUT_R_SELECT               	(10U)			/*!< Input resistor select*/
#define BITPOFFSET_TS_CTRL_A_SAMPLE_TYPE                  	(12U)			/*!< Timeslot Sampling Type*/
#define BITPOFFSET_TS_CTRL_A_CH2_EN                       	(14U)			/*!< Channel 2 enable*/
#define BITPOFFSET_TS_CTRL_A_SUBSAMPLE                    	(15U)			/*!< Subsample using decimate_factor*/
#define BITMOFFSET_TS_CTRL_A_TIMESLOT_OFFSET              	(0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITMOFFSET_TS_CTRL_A_INPUT_R_SELECT               	(0x0c00U)		/*!< Input resistor select*/
#define BITMOFFSET_TS_CTRL_A_SAMPLE_TYPE                  	(0x3000U)		/*!< Timeslot Sampling Type*/
#define BITMOFFSET_TS_CTRL_A_CH2_EN                       	(0x4000U)		/*!< Channel 2 enable*/
#define BITMOFFSET_TS_CTRL_A_SUBSAMPLE                    	(0x8000U)		/*!< Subsample using decimate_factor*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_TS_PATH_A_AFE_PATH_CFG                 	(0U)			/*!< Bypass and input mux select*/
#define BITPOFFSET_TS_PATH_A_GOUT                         	(9U)			/*!< Timeslot specific gpio value for this timeslot*/
#define BITPOFFSET_TS_PATH_A_INP_REF_CH                   	(10U)			/*!< Reference channel input select*/
#define BITPOFFSET_TS_PATH_A_PRE_WIDTH                    	(12U)			/*!< Precondition duration for this timeslot.*/
#define BITMOFFSET_TS_PATH_A_AFE_PATH_CFG                 	(0x01ffU)		/*!< Bypass and input mux select*/
#define BITMOFFSET_TS_PATH_A_GOUT                         	(0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITMOFFSET_TS_PATH_A_INP_REF_CH                   	(0x0c00U)		/*!< Reference channel input select*/
#define BITMOFFSET_TS_PATH_A_PRE_WIDTH                    	(0xf000U)		/*!< Precondition duration for this timeslot.*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INPUTS_A_INP12                         	(0U)			/*!< Input pair12 enable*/
#define BITPOFFSET_INPUTS_A_INP34                         	(4U)			/*!< Input pair34 enable*/
#define BITPOFFSET_INPUTS_A_INP56                         	(8U)			/*!< Input pair56 enable*/
#define BITPOFFSET_INPUTS_A_INP78                         	(12U)			/*!< input pair78 enable*/
#define BITMOFFSET_INPUTS_A_INP12                         	(0x000fU)		/*!< Input pair12 enable*/
#define BITMOFFSET_INPUTS_A_INP34                         	(0x00f0U)		/*!< Input pair34 enable*/
#define BITMOFFSET_INPUTS_A_INP56                         	(0x0f00U)		/*!< Input pair56 enable*/
#define BITMOFFSET_INPUTS_A_INP78                         	(0xf000U)		/*!< input pair78 enable*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_CATHODE_A_VC1_SEL                      	(0U)			/*!< VC1 active state for this timeslot*/
#define BITPOFFSET_CATHODE_A_VC1_ALT                      	(2U)			/*!< VC1 alternate pulsed state for this timeslot*/
#define BITPOFFSET_CATHODE_A_VC1_PULSE                    	(4U)			/*!< VC1 pulse control*/
#define BITPOFFSET_CATHODE_A_VC2_SEL                      	(6U)			/*!< VC2 active state for this timeslot*/
#define BITPOFFSET_CATHODE_A_VC2_ALT                      	(8U)			/*!< VC2 alternate pulsed state for this timeslot*/
#define BITPOFFSET_CATHODE_A_VC2_PULSE                    	(10U)			/*!< VC2 pulse control*/
#define BITPOFFSET_CATHODE_A_PRECON                       	(12U)			/*!< Precondition value for enabled inputs during this timeslot*/
#define BITMOFFSET_CATHODE_A_VC1_SEL                      	(0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITMOFFSET_CATHODE_A_VC1_ALT                      	(0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITMOFFSET_CATHODE_A_VC1_PULSE                    	(0x0030U)		/*!< VC1 pulse control*/
#define BITMOFFSET_CATHODE_A_VC2_SEL                      	(0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITMOFFSET_CATHODE_A_VC2_ALT                      	(0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITMOFFSET_CATHODE_A_VC2_PULSE                    	(0x0c00U)		/*!< VC2 pulse control*/
#define BITMOFFSET_CATHODE_A_PRECON                       	(0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_AFE_TRIM_A_TIA_GAIN_CH1                	(0U)			/*!< Tia Resistor gain setting for channel 1*/
#define BITPOFFSET_AFE_TRIM_A_TIA_GAIN_CH2                	(3U)			/*!< Tia Resistor gain setting for channel 2*/
#define BITPOFFSET_AFE_TRIM_A_VREF_PULSE_VAL              	(6U)			/*!< Vref pulse alternate value*/
#define BITPOFFSET_AFE_TRIM_A_AFE_TRIM_VREF               	(8U)			/*!< Voltage trim for ref buffer*/
#define BITPOFFSET_AFE_TRIM_A_VREF_PULSE                  	(10U)			/*!< Vref pulse control*/
#define BITPOFFSET_AFE_TRIM_A_AFE_TRIM_INT1               	(11U)			/*!< Channel 1 integrator resistor or buffer gain*/
#define BITPOFFSET_AFE_TRIM_A_AFE_TRIM_INT2               	(13U)			/*!< Channel 2 integrator resistor or buffer gain*/
#define BITPOFFSET_AFE_TRIM_A_AFE_TIA_SAT_DETECT_EN       	(15U)			/*!< Enable tia saturation detection*/
#define BITMOFFSET_AFE_TRIM_A_TIA_GAIN_CH1                	(0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITMOFFSET_AFE_TRIM_A_TIA_GAIN_CH2                	(0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITMOFFSET_AFE_TRIM_A_VREF_PULSE_VAL              	(0x00c0U)		/*!< Vref pulse alternate value*/
#define BITMOFFSET_AFE_TRIM_A_AFE_TRIM_VREF               	(0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITMOFFSET_AFE_TRIM_A_VREF_PULSE                  	(0x0400U)		/*!< Vref pulse control*/
#define BITMOFFSET_AFE_TRIM_A_AFE_TRIM_INT1               	(0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITMOFFSET_AFE_TRIM_A_AFE_TRIM_INT2               	(0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITMOFFSET_AFE_TRIM_A_AFE_TIA_SAT_DETECT_EN       	(0x8000U)		/*!< Enable tia saturation detection*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_LED_POW12_A_LED_CURRENT1               	(0U)			/*!< Led current setting for LED1A or LED1B output*/
#define BITPOFFSET_LED_POW12_A_LED_DRIVESIDE1             	(7U)			/*!< Led output select for LED1*/
#define BITPOFFSET_LED_POW12_A_LED_CURRENT2               	(8U)			/*!< Led current setting for LED2A or LED2B output*/
#define BITPOFFSET_LED_POW12_A_LED_DRIVESIDE2             	(15U)			/*!< Led output select for LED2*/
#define BITMOFFSET_LED_POW12_A_LED_CURRENT1               	(0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITMOFFSET_LED_POW12_A_LED_DRIVESIDE1             	(0x0080U)		/*!< Led output select for LED1*/
#define BITMOFFSET_LED_POW12_A_LED_CURRENT2               	(0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITMOFFSET_LED_POW12_A_LED_DRIVESIDE2             	(0x8000U)		/*!< Led output select for LED2*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_LED_POW34_A_LED_CURRENT3               	(0U)			/*!< Led current setting for LED3A or LED3B output*/
#define BITPOFFSET_LED_POW34_A_LED_DRIVESIDE3             	(7U)			/*!< Led output select for LED3*/
#define BITPOFFSET_LED_POW34_A_LED_CURRENT4               	(8U)			/*!< Led current setting for LED4A or LED4B output*/
#define BITPOFFSET_LED_POW34_A_LED_DRIVESIDE4             	(15U)			/*!< Led output select for LED4*/
#define BITMOFFSET_LED_POW34_A_LED_CURRENT3               	(0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITMOFFSET_LED_POW34_A_LED_DRIVESIDE3             	(0x0080U)		/*!< Led output select for LED3*/
#define BITMOFFSET_LED_POW34_A_LED_CURRENT4               	(0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITMOFFSET_LED_POW34_A_LED_DRIVESIDE4             	(0x8000U)		/*!< Led output select for LED4*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_COUNTS_A_NUM_REPEAT                    	(0U)			/*!< Number of sequence repeats.*/
#define BITPOFFSET_COUNTS_A_NUM_INT                       	(8U)			/*!< Number of integrates/adc or acquisition width.*/
#define BITMOFFSET_COUNTS_A_NUM_REPEAT                    	(0x00ffU)		/*!< Number of sequence repeats.*/
#define BITMOFFSET_COUNTS_A_NUM_INT                       	(0xff00U)		/*!< Number of integrates/adc or acquisition width.*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_PERIOD_A_MIN_PERIOD                    	(0U)			/*!< Minimum Period for pulse repetition.*/
#define BITPOFFSET_PERIOD_A_MOD_TYPE                      	(12U)			/*!< Modulation Connection type*/
#define BITMOFFSET_PERIOD_A_MIN_PERIOD                    	(0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITMOFFSET_PERIOD_A_MOD_TYPE                      	(0x3000U)		/*!< Modulation Connection type*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_LED_PULSE_A_LED_OFFSET                 	(0U)			/*!< LED pulse offset*/
#define BITPOFFSET_LED_PULSE_A_LED_WIDTH                  	(8U)			/*!< LED pulse width*/
#define BITMOFFSET_LED_PULSE_A_LED_OFFSET                 	(0x00ffU)		/*!< LED pulse offset*/
#define BITMOFFSET_LED_PULSE_A_LED_WIDTH                  	(0xff00U)		/*!< LED pulse width*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INTEG_WIDTH_A_INTEG_WIDTH              	(0U)			/*!< Integrator clock width*/
#define BITPOFFSET_INTEG_WIDTH_A_ADC_COUNT                	(6U)			/*!< ADC conversions per pulse*/
#define BITPOFFSET_INTEG_WIDTH_A_CH1_AMP_DISABLE          	(8U)			/*!< Amplifier disables for power control*/
#define BITPOFFSET_INTEG_WIDTH_A_AFE_INT_C_BUF            	(11U)			/*!< Convert integrator to buffer*/
#define BITPOFFSET_INTEG_WIDTH_A_CH2_AMP_DISABLE          	(12U)			/*!< Amplifier disables for power control*/
#define BITPOFFSET_INTEG_WIDTH_A_SINGLE_INTEG             	(15U)			/*!< Use single integrator pulse*/
#define BITMOFFSET_INTEG_WIDTH_A_INTEG_WIDTH              	(0x001fU)		/*!< Integrator clock width*/
#define BITMOFFSET_INTEG_WIDTH_A_ADC_COUNT                	(0x00c0U)		/*!< ADC conversions per pulse*/
#define BITMOFFSET_INTEG_WIDTH_A_CH1_AMP_DISABLE          	(0x0700U)		/*!< Amplifier disables for power control*/
#define BITMOFFSET_INTEG_WIDTH_A_AFE_INT_C_BUF            	(0x0800U)		/*!< Convert integrator to buffer*/
#define BITMOFFSET_INTEG_WIDTH_A_CH2_AMP_DISABLE          	(0x7000U)		/*!< Amplifier disables for power control*/
#define BITMOFFSET_INTEG_WIDTH_A_SINGLE_INTEG             	(0x8000U)		/*!< Use single integrator pulse*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_INTEG_OFFSET_A_INTEG_FINE_OFFSET       	(0U)			/*!< Integrator clock fine offset*/
#define BITPOFFSET_INTEG_OFFSET_A_INTEG_OFFSET            	(5U)			/*!< Integrator clock coarse offset*/
#define BITMOFFSET_INTEG_OFFSET_A_INTEG_FINE_OFFSET       	(0x001fU)		/*!< Integrator clock fine offset*/
#define BITMOFFSET_INTEG_OFFSET_A_INTEG_OFFSET            	(0x1fe0U)		/*!< Integrator clock coarse offset*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_MOD_PULSE_A_MOD_OFFSET                 	(0U)			/*!< modulation pulse offset*/
#define BITPOFFSET_MOD_PULSE_A_MOD_WIDTH                  	(8U)			/*!< modulation pulse width.*/
#define BITMOFFSET_MOD_PULSE_A_MOD_OFFSET                 	(0x00ffU)		/*!< modulation pulse offset*/
#define BITMOFFSET_MOD_PULSE_A_MOD_WIDTH                  	(0xff00U)		/*!< modulation pulse width.*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_PATTERN_A_REVERSE_INTEG                	(0U)			/*!< 4 Pulse integration reverse pattern*/
#define BITPOFFSET_PATTERN_A_SUBTRACT                     	(4U)			/*!< 4 Pulse subtract pattern*/
#define BITPOFFSET_PATTERN_A_MOD_DISABLE                  	(8U)			/*!< 4 Pulse modulation disable pattern*/
#define BITPOFFSET_PATTERN_A_LED_DISABLE                  	(12U)			/*!< 4 Pulse LED disable pattern*/
#define BITMOFFSET_PATTERN_A_REVERSE_INTEG                	(0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITMOFFSET_PATTERN_A_SUBTRACT                     	(0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITMOFFSET_PATTERN_A_MOD_DISABLE                  	(0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITMOFFSET_PATTERN_A_LED_DISABLE                  	(0xf000U)		/*!< 4 Pulse LED disable pattern*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_ADC_OFF1_A_CH1_ADC_ADJUST              	(0U)			/*!< Adjustment to ADC value.*/
#define BITMOFFSET_ADC_OFF1_A_CH1_ADC_ADJUST              	(0x3fffU)		/*!< Adjustment to ADC value.*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_ADC_OFF2_A_CH2_ADC_ADJUST              	(0U)			/*!< Adjustment to ADC value.*/
#define BITMOFFSET_ADC_OFF2_A_CH2_ADC_ADJUST              	(0x3fffU)		/*!< Adjustment to ADC value.*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_DATA1_A_SIGNAL_SIZE                    	(0U)			/*!< Signal data size*/
#define BITPOFFSET_DATA1_A_SIGNAL_SHIFT                   	(3U)			/*!< Signal data shift*/
#define BITPOFFSET_DATA1_A_DARK_SIZE                      	(8U)			/*!< Dark data size*/
#define BITPOFFSET_DATA1_A_DARK_SHIFT                     	(11U)			/*!< Dark data shift*/
#define BITMOFFSET_DATA1_A_SIGNAL_SIZE                    	(0x0007U)		/*!< Signal data size*/
#define BITMOFFSET_DATA1_A_SIGNAL_SHIFT                   	(0x00f8U)		/*!< Signal data shift*/
#define BITMOFFSET_DATA1_A_DARK_SIZE                      	(0x0700U)		/*!< Dark data size*/
#define BITMOFFSET_DATA1_A_DARK_SHIFT                     	(0xf800U)		/*!< Dark data shift*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_DATA2_A_LIT_SIZE                       	(0U)			/*!< Lit data size*/
#define BITPOFFSET_DATA2_A_LIT_SHIFT                      	(3U)			/*!< Lit data shift*/
#define BITMOFFSET_DATA2_A_LIT_SIZE                       	(0x0007U)		/*!< Lit data size*/
#define BITMOFFSET_DATA2_A_LIT_SHIFT                      	(0x00f8U)		/*!< Lit data shift*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_DECIMATE_A_DECIMATE_TYPE               	(0U)			/*!< Decimation Type Select*/
#define BITPOFFSET_DECIMATE_A_DECIMATE_FACTOR             	(4U)			/*!< Decimate Sample Divider (minus 1)*/
#define BITMOFFSET_DECIMATE_A_DECIMATE_TYPE               	(0x000fU)		/*!< Decimation Type Select*/
#define BITMOFFSET_DECIMATE_A_DECIMATE_FACTOR             	(0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_DIGINT_LIT_A_LIT_OFFSET                	(0U)			/*!< Acquisition Window Lit Offset for Timeslot A*/
#define BITMOFFSET_DIGINT_LIT_A_LIT_OFFSET                	(0x01ffU)		/*!< Acquisition Window Lit Offset for Timeslot A*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_DIGINT_DARK_A_DARK1_OFFSET             	(0U)			/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITPOFFSET_DIGINT_DARK_A_DARK2_OFFSET             	(7U)			/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITMOFFSET_DIGINT_DARK_A_DARK1_OFFSET             	(0x007fU)		/*!< Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITMOFFSET_DIGINT_DARK_A_DARK2_OFFSET             	(0xff80U)		/*!< Acquisition Window Dark Offset 2 for Timeslot A*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_THRESH_CFG_A_THRESH0_TYPE              	(0U)			/*!< Type of comparison for level interrupt 0*/
#define BITPOFFSET_THRESH_CFG_A_THRESH0_DIR               	(2U)			/*!< Type of comparison for level interrupt 0*/
#define BITPOFFSET_THRESH_CFG_A_THRESH0_CHAN              	(3U)			/*!< Type of comparison for level interrupt 0*/
#define BITPOFFSET_THRESH_CFG_A_THRESH1_TYPE              	(4U)			/*!< Type of comparison for level interrupt 1*/
#define BITPOFFSET_THRESH_CFG_A_THRESH1_DIR               	(6U)			/*!< Type of comparison for level interrupt 1*/
#define BITPOFFSET_THRESH_CFG_A_THRESH1_CHAN              	(7U)			/*!< Type of comparison for level interrupt 1*/
#define BITMOFFSET_THRESH_CFG_A_THRESH0_TYPE              	(0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITMOFFSET_THRESH_CFG_A_THRESH0_DIR               	(0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITMOFFSET_THRESH_CFG_A_THRESH0_CHAN              	(0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITMOFFSET_THRESH_CFG_A_THRESH1_TYPE              	(0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITMOFFSET_THRESH_CFG_A_THRESH1_DIR               	(0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITMOFFSET_THRESH_CFG_A_THRESH1_CHAN              	(0x0080U)		/*!< Type of comparison for level interrupt 1*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_THRESH0_A_THRESH0_VALUE                	(0U)			/*!< Value for threshold compare level interrupt 0*/
#define BITPOFFSET_THRESH0_A_THRESH0_SHIFT                	(8U)			/*!< Shift for threshold compare level interrupt 0*/
#define BITMOFFSET_THRESH0_A_THRESH0_VALUE                	(0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITMOFFSET_THRESH0_A_THRESH0_SHIFT                	(0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_THRESH1_A_THRESH1_VALUE                	(0U)			/*!< Value for threshold compare level interrupt 1*/
#define BITPOFFSET_THRESH1_A_THRESH1_SHIFT                	(8U)			/*!< Shift for threshold compare level interrupt 1*/
#define BITMOFFSET_THRESH1_A_THRESH1_VALUE                	(0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITMOFFSET_THRESH1_A_THRESH1_SHIFT                	(0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/
/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN2_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITPOFFSET_PATTERN2_A_AFE_SWAP                    	(0U)			/*!< 4 Pulse input polarity pattern*/
#define BITMOFFSET_PATTERN2_A_AFE_SWAP                    	(0x000fU)		/*!< 4 Pulse input polarity pattern*/



#endif

