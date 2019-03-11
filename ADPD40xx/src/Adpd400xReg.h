/**
******************************************************************************
* @file     Adpd400xReg.h
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
#ifndef ADPD400x_REG_DEF_H
	#define ADPD400x_REG_DEF_H

#define ADPD400x_REG_INT_STATUS_FIFO 	0x0000
#define ADPD400x_REG_INT_STATUS_DATA 	0x0001
#define ADPD400x_REG_INT_STATUS_LEV0 	0x0002
#define ADPD400x_REG_INT_STATUS_LEV1 	0x0003
#define ADPD400x_REG_FIFO_CTL        	0x0006
#define ADPD400x_REG_INT_ACLEAR      	0x0007
#define ADPD400x_REG_CHIP_ID         	0x0008
#define ADPD400x_REG_OSC32M          	0x0009
#define ADPD400x_REG_OSC32M_CAL      	0x000a
#define ADPD400x_REG_OSC1M           	0x000b
#define ADPD400x_REG_OSC32K          	0x000c
#define ADPD400x_REG_TS_FREQ         	0x000d
#define ADPD400x_REG_TS_FREQH        	0x000e
#define ADPD400x_REG_SYS_CTL         	0x000F
#define ADPD400x_REG_OPMODE          	0x0010
#define ADPD400x_REG_STAMP_L         	0x0011
#define ADPD400x_REG_STAMP_H         	0x0012
#define ADPD400x_REG_STAMPDELTA      	0x0013
#define ADPD400x_REG_INT_ENABLE_XD   	0x0014
#define ADPD400x_REG_INT_ENABLE_YD   	0x0015
#define ADPD400x_REG_INT_ENABLE_XL0  	0x0016
#define ADPD400x_REG_INT_ENABLE_XL1  	0x0017
#define ADPD400x_REG_INT_ENABLE_YL0  	0x001a
#define ADPD400x_REG_INT_ENABLE_YL1  	0x001b
#define ADPD400x_REG_FIFO_STATUS_BYTES	0x001E
#define ADPD400x_REG_INPUT_SLEEP     	0x0020
#define ADPD400x_REG_INPUT_CFG       	0x0021
#define ADPD400x_REG_GPIO_CFG        	0x0022
#define ADPD400x_REG_GPIO01          	0x0023
#define ADPD400x_REG_GPIO23          	0x0024
#define ADPD400x_REG_GPIO_EXT           0x0026
#define ADPD400x_REG_GPIO_IN         	0x0025
#define ADPD400x_REG_DATA_HOLD_FLAG  	0x002E
#define ADPD400x_REG_FIFO_DATA       	0x002F
#define ADPD400x_REG_SIGNAL1_L_A     	0x0030
#define ADPD400x_REG_SIGNAL1_H_A     	0x0031
#define ADPD400x_REG_SIGNAL2_L_A     	0x0032
#define ADPD400x_REG_SIGNAL2_H_A     	0x0033
#define ADPD400x_REG_DARK1_L_A       	0x0034
#define ADPD400x_REG_DARK1_H_A       	0x0035
#define ADPD400x_REG_DARK2_L_A       	0x0036
#define ADPD400x_REG_DARK2_H_A       	0x0037
#define ADPD400x_REG_SIGNAL1_L_B     	0x0038
#define ADPD400x_REG_SIGNAL1_H_B     	0x0039
#define ADPD400x_REG_SIGNAL2_L_B     	0x003A
#define ADPD400x_REG_SIGNAL2_H_B     	0x003B
#define ADPD400x_REG_DARK1_L_B       	0x003C
#define ADPD400x_REG_DARK1_H_B       	0x003D
#define ADPD400x_REG_DARK2_L_B       	0x003E
#define ADPD400x_REG_DARK2_H_B       	0x003F
#define ADPD400x_REG_SIGNAL1_L_C     	0x0040
#define ADPD400x_REG_SIGNAL1_H_C     	0x0041
#define ADPD400x_REG_SIGNAL2_L_C     	0x0042
#define ADPD400x_REG_SIGNAL2_H_C     	0x0043
#define ADPD400x_REG_DARK1_L_C       	0x0044
#define ADPD400x_REG_DARK1_H_C       	0x0045
#define ADPD400x_REG_DARK2_L_C       	0x0046
#define ADPD400x_REG_DARK2_H_C       	0x0047
#define ADPD400x_REG_SIGNAL1_L_D     	0x0048
#define ADPD400x_REG_SIGNAL1_H_D     	0x0049
#define ADPD400x_REG_SIGNAL2_L_D     	0x004A
#define ADPD400x_REG_SIGNAL2_H_D     	0x004B
#define ADPD400x_REG_DARK1_L_D       	0x004C
#define ADPD400x_REG_DARK1_H_D       	0x004D
#define ADPD400x_REG_DARK2_L_D       	0x004E
#define ADPD400x_REG_DARK2_H_D       	0x004F
#define ADPD400x_REG_SIGNAL1_L_E     	0x0050
#define ADPD400x_REG_SIGNAL1_H_E     	0x0051
#define ADPD400x_REG_SIGNAL2_L_E     	0x0052
#define ADPD400x_REG_SIGNAL2_H_E     	0x0053
#define ADPD400x_REG_DARK1_L_E       	0x0054
#define ADPD400x_REG_DARK1_H_E       	0x0055
#define ADPD400x_REG_DARK2_L_E       	0x0056
#define ADPD400x_REG_DARK2_H_E       	0x0057
#define ADPD400x_REG_SIGNAL1_L_F     	0x0058
#define ADPD400x_REG_SIGNAL1_H_F     	0x0059
#define ADPD400x_REG_SIGNAL2_L_F     	0x005A
#define ADPD400x_REG_SIGNAL2_H_F     	0x005B
#define ADPD400x_REG_DARK1_L_F       	0x005C
#define ADPD400x_REG_DARK1_H_F       	0x005D
#define ADPD400x_REG_DARK2_L_F       	0x005E
#define ADPD400x_REG_DARK2_H_F       	0x005F
#define ADPD400x_REG_SIGNAL1_L_G     	0x0060
#define ADPD400x_REG_SIGNAL1_H_G     	0x0061
#define ADPD400x_REG_SIGNAL2_L_G     	0x0062
#define ADPD400x_REG_SIGNAL2_H_G     	0x0063
#define ADPD400x_REG_DARK1_L_G       	0x0064
#define ADPD400x_REG_DARK1_H_G       	0x0065
#define ADPD400x_REG_DARK2_L_G       	0x0066
#define ADPD400x_REG_DARK2_H_G       	0x0067
#define ADPD400x_REG_SIGNAL1_L_H     	0x0068
#define ADPD400x_REG_SIGNAL1_H_H     	0x0069
#define ADPD400x_REG_SIGNAL2_L_H     	0x006A
#define ADPD400x_REG_SIGNAL2_H_H     	0x006B
#define ADPD400x_REG_DARK1_L_H       	0x006C
#define ADPD400x_REG_DARK1_H_H       	0x006D
#define ADPD400x_REG_DARK2_L_H       	0x006E
#define ADPD400x_REG_DARK2_H_H       	0x006F
#define ADPD400x_REG_SIGNAL1_L_I     	0x0070
#define ADPD400x_REG_SIGNAL1_H_I     	0x0071
#define ADPD400x_REG_SIGNAL2_L_I     	0x0072
#define ADPD400x_REG_SIGNAL2_H_I     	0x0073
#define ADPD400x_REG_DARK1_L_I       	0x0074
#define ADPD400x_REG_DARK1_H_I       	0x0075
#define ADPD400x_REG_DARK2_L_I       	0x0076
#define ADPD400x_REG_DARK2_H_I       	0x0077
#define ADPD400x_REG_SIGNAL1_L_J     	0x0078
#define ADPD400x_REG_SIGNAL1_H_J     	0x0079
#define ADPD400x_REG_SIGNAL2_L_J     	0x007A
#define ADPD400x_REG_SIGNAL2_H_J     	0x007B
#define ADPD400x_REG_DARK1_L_J       	0x007C
#define ADPD400x_REG_DARK1_H_J       	0x007D
#define ADPD400x_REG_DARK2_L_J       	0x007E
#define ADPD400x_REG_DARK2_H_J       	0x007F
#define ADPD400x_REG_SIGNAL1_L_K     	0x0080
#define ADPD400x_REG_SIGNAL1_H_K     	0x0081
#define ADPD400x_REG_SIGNAL2_L_K     	0x0082
#define ADPD400x_REG_SIGNAL2_H_K     	0x0083
#define ADPD400x_REG_DARK1_L_K       	0x0084
#define ADPD400x_REG_DARK1_H_K       	0x0085
#define ADPD400x_REG_DARK2_L_K       	0x0086
#define ADPD400x_REG_DARK2_H_K       	0x0087
#define ADPD400x_REG_SIGNAL1_L_L     	0x0088
#define ADPD400x_REG_SIGNAL1_H_L     	0x0089
#define ADPD400x_REG_SIGNAL2_L_L     	0x008A
#define ADPD400x_REG_SIGNAL2_H_L     	0x008B
#define ADPD400x_REG_DARK1_L_L       	0x008C
#define ADPD400x_REG_DARK1_H_L       	0x008D
#define ADPD400x_REG_DARK2_L_L       	0x008E
#define ADPD400x_REG_DARK2_H_L       	0x008F
#define ADPD400x_REG_OSC_TRIM        	0x00A0
#define ADPD400x_REG_OSC32K_TRIM     	0x00A1
#define ADPD400x_REG_LED_TRIM        	0x00B1
#define ADPD400x_REG_I2C_KEY         	0x00B6
#define ADPD400x_REG_I2C_ADDR        	0x00B7
#define ADPD400x_REG_TS_CTRL_A       	0x0100
#define ADPD400x_REG_TS_PATH_A       	0x0101
#define ADPD400x_REG_INPUTS_A        	0x0102
#define ADPD400x_REG_CATHODE_A       	0x0103
#define ADPD400x_REG_AFE_TRIM_A      	0x0104
#define ADPD400x_REG_LED_POW12_A     	0x0105
#define ADPD400x_REG_LED_POW34_A     	0x0106
#define ADPD400x_REG_COUNTS_A        	0x0107
#define ADPD400x_REG_PERIOD_A        	0x0108
#define ADPD400x_REG_LED_PULSE_A     	0x0109
#define ADPD400x_REG_INTEG_WIDTH_A   	0x010A
#define ADPD400x_REG_INTEG_OFFSET_A  	0x010B
#define ADPD400x_REG_MOD_PULSE_A     	0x010C
#define ADPD400x_REG_PATTERN_A       	0x010D
#define ADPD400x_REG_ADC_OFF1_A      	0x010E
#define ADPD400x_REG_ADC_OFF2_A      	0x010F
#define ADPD400x_REG_DATA1_A         	0x0110
#define ADPD400x_REG_DATA2_A         	0x0111
#define ADPD400x_REG_DECIMATE_A      	0x0112
#define ADPD400x_REG_DIGINT_LIT_A    	0x0113
#define ADPD400x_REG_DIGINT_DARK_A   	0x0114
#define ADPD400x_REG_THRESH_CFG_A    	0x0115
#define ADPD400x_REG_THRESH0_A       	0x0116
#define ADPD400x_REG_THRESH1_A       	0x0117
#define ADPD400x_REG_TS_CTRL_B       	0x0120
#define ADPD400x_REG_TS_PATH_B       	0x0121
#define ADPD400x_REG_INPUTS_B        	0x0122
#define ADPD400x_REG_CATHODE_B       	0x0123
#define ADPD400x_REG_AFE_TRIM_B      	0x0124
#define ADPD400x_REG_LED_POW12_B     	0x0125
#define ADPD400x_REG_LED_POW34_B     	0x0126
#define ADPD400x_REG_COUNTS_B        	0x0127
#define ADPD400x_REG_PERIOD_B        	0x0128
#define ADPD400x_REG_LED_PULSE_B     	0x0129
#define ADPD400x_REG_INTEG_WIDTH_B   	0x012A
#define ADPD400x_REG_INTEG_OFFSET_B  	0x012B
#define ADPD400x_REG_MOD_PULSE_B     	0x012C
#define ADPD400x_REG_PATTERN_B       	0x012D
#define ADPD400x_REG_ADC_OFF1_B      	0x012E
#define ADPD400x_REG_ADC_OFF2_B      	0x012F
#define ADPD400x_REG_DATA1_B         	0x0130
#define ADPD400x_REG_DATA2_B         	0x0131
#define ADPD400x_REG_DECIMATE_B      	0x0132
#define ADPD400x_REG_DIGINT_LIT_B    	0x0133
#define ADPD400x_REG_DIGINT_DARK_B   	0x0134
#define ADPD400x_REG_THRESH_CFG_B    	0x0135
#define ADPD400x_REG_THRESH0_B       	0x0136
#define ADPD400x_REG_THRESH1_B       	0x0137
#define ADPD400x_REG_TS_CTRL_C       	0x0140
#define ADPD400x_REG_TS_PATH_C       	0x0141
#define ADPD400x_REG_INPUTS_C        	0x0142
#define ADPD400x_REG_CATHODE_C       	0x0143
#define ADPD400x_REG_AFE_TRIM_C      	0x0144
#define ADPD400x_REG_LED_POW12_C     	0x0145
#define ADPD400x_REG_LED_POW34_C     	0x0146
#define ADPD400x_REG_COUNTS_C        	0x0147
#define ADPD400x_REG_PERIOD_C        	0x0148
#define ADPD400x_REG_LED_PULSE_C     	0x0149
#define ADPD400x_REG_INTEG_WIDTH_C   	0x014A
#define ADPD400x_REG_INTEG_OFFSET_C  	0x014B
#define ADPD400x_REG_MOD_PULSE_C     	0x014C
#define ADPD400x_REG_PATTERN_C       	0x014D
#define ADPD400x_REG_ADC_OFF1_C      	0x014E
#define ADPD400x_REG_ADC_OFF2_C      	0x014F
#define ADPD400x_REG_DATA1_C         	0x0150
#define ADPD400x_REG_DATA2_C         	0x0151
#define ADPD400x_REG_DECIMATE_C      	0x0152
#define ADPD400x_REG_DIGINT_LIT_C    	0x0153
#define ADPD400x_REG_DIGINT_DARK_C   	0x0154
#define ADPD400x_REG_THRESH_CFG_C    	0x0155
#define ADPD400x_REG_THRESH0_C       	0x0156
#define ADPD400x_REG_THRESH1_C       	0x0157
#define ADPD400x_REG_TS_CTRL_D       	0x0160
#define ADPD400x_REG_TS_PATH_D       	0x0161
#define ADPD400x_REG_INPUTS_D        	0x0162
#define ADPD400x_REG_CATHODE_D       	0x0163
#define ADPD400x_REG_AFE_TRIM_D      	0x0164
#define ADPD400x_REG_LED_POW12_D     	0x0165
#define ADPD400x_REG_LED_POW34_D     	0x0166
#define ADPD400x_REG_COUNTS_D        	0x0167
#define ADPD400x_REG_PERIOD_D        	0x0168
#define ADPD400x_REG_LED_PULSE_D     	0x0169
#define ADPD400x_REG_INTEG_WIDTH_D   	0x016A
#define ADPD400x_REG_INTEG_OFFSET_D  	0x016B
#define ADPD400x_REG_MOD_PULSE_D     	0x016C
#define ADPD400x_REG_PATTERN_D       	0x016D
#define ADPD400x_REG_ADC_OFF1_D      	0x016E
#define ADPD400x_REG_ADC_OFF2_D      	0x016F
#define ADPD400x_REG_DATA1_D         	0x0170
#define ADPD400x_REG_DATA2_D         	0x0171
#define ADPD400x_REG_DECIMATE_D      	0x0172
#define ADPD400x_REG_DIGINT_LIT_D    	0x0173
#define ADPD400x_REG_DIGINT_DARK_D   	0x0174
#define ADPD400x_REG_THRESH_CFG_D    	0x0175
#define ADPD400x_REG_THRESH0_D       	0x0176
#define ADPD400x_REG_THRESH1_D       	0x0177
#define ADPD400x_REG_TS_CTRL_E       	0x0180
#define ADPD400x_REG_TS_PATH_E       	0x0181
#define ADPD400x_REG_INPUTS_E        	0x0182
#define ADPD400x_REG_CATHODE_E       	0x0183
#define ADPD400x_REG_AFE_TRIM_E      	0x0184
#define ADPD400x_REG_LED_POW12_E     	0x0185
#define ADPD400x_REG_LED_POW34_E     	0x0186
#define ADPD400x_REG_COUNTS_E        	0x0187
#define ADPD400x_REG_PERIOD_E        	0x0188
#define ADPD400x_REG_LED_PULSE_E     	0x0189
#define ADPD400x_REG_INTEG_WIDTH_E   	0x018A
#define ADPD400x_REG_INTEG_OFFSET_E  	0x018B
#define ADPD400x_REG_MOD_PULSE_E     	0x018C
#define ADPD400x_REG_PATTERN_E       	0x018D
#define ADPD400x_REG_ADC_OFF1_E      	0x018E
#define ADPD400x_REG_ADC_OFF2_E      	0x018F
#define ADPD400x_REG_DATA1_E         	0x0190
#define ADPD400x_REG_DATA2_E         	0x0191
#define ADPD400x_REG_DECIMATE_E      	0x0192
#define ADPD400x_REG_DIGINT_LIT_E    	0x0193
#define ADPD400x_REG_DIGINT_DARK_E   	0x0194
#define ADPD400x_REG_THRESH_CFG_E    	0x0195
#define ADPD400x_REG_THRESH0_E       	0x0196
#define ADPD400x_REG_THRESH1_E       	0x0197
#define ADPD400x_REG_TS_CTRL_F       	0x01A0
#define ADPD400x_REG_TS_PATH_F       	0x01A1
#define ADPD400x_REG_INPUTS_F        	0x01A2
#define ADPD400x_REG_CATHODE_F       	0x01A3
#define ADPD400x_REG_AFE_TRIM_F      	0x01A4
#define ADPD400x_REG_LED_POW12_F     	0x01A5
#define ADPD400x_REG_LED_POW34_F     	0x01A6
#define ADPD400x_REG_COUNTS_F        	0x01A7
#define ADPD400x_REG_PERIOD_F        	0x01A8
#define ADPD400x_REG_LED_PULSE_F     	0x01A9
#define ADPD400x_REG_INTEG_WIDTH_F   	0x01AA
#define ADPD400x_REG_INTEG_OFFSET_F  	0x01AB
#define ADPD400x_REG_MOD_PULSE_F     	0x01AC
#define ADPD400x_REG_PATTERN_F       	0x01AD
#define ADPD400x_REG_ADC_OFF1_F      	0x01AE
#define ADPD400x_REG_ADC_OFF2_F      	0x01AF
#define ADPD400x_REG_DATA1_F         	0x01B0
#define ADPD400x_REG_DATA2_F         	0x01B1
#define ADPD400x_REG_DECIMATE_F      	0x01B2
#define ADPD400x_REG_DIGINT_LIT_F    	0x01B3
#define ADPD400x_REG_DIGINT_DARK_F   	0x01B4
#define ADPD400x_REG_THRESH_CFG_F    	0x01B5
#define ADPD400x_REG_THRESH0_F       	0x01B6
#define ADPD400x_REG_THRESH1_F       	0x01B7
#define ADPD400x_REG_TS_CTRL_G       	0x01C0
#define ADPD400x_REG_TS_PATH_G       	0x01C1
#define ADPD400x_REG_INPUTS_G        	0x01C2
#define ADPD400x_REG_CATHODE_G       	0x01C3
#define ADPD400x_REG_AFE_TRIM_G      	0x01C4
#define ADPD400x_REG_LED_POW12_G     	0x01C5
#define ADPD400x_REG_LED_POW34_G     	0x01C6
#define ADPD400x_REG_COUNTS_G        	0x01C7
#define ADPD400x_REG_PERIOD_G        	0x01C8
#define ADPD400x_REG_LED_PULSE_G     	0x01C9
#define ADPD400x_REG_INTEG_WIDTH_G   	0x01CA
#define ADPD400x_REG_INTEG_OFFSET_G  	0x01CB
#define ADPD400x_REG_MOD_PULSE_G     	0x01CC
#define ADPD400x_REG_PATTERN_G       	0x01CD
#define ADPD400x_REG_ADC_OFF1_G      	0x01CE
#define ADPD400x_REG_ADC_OFF2_G      	0x01CF
#define ADPD400x_REG_DATA1_G         	0x01D0
#define ADPD400x_REG_DATA2_G         	0x01D1
#define ADPD400x_REG_DECIMATE_G      	0x01D2
#define ADPD400x_REG_DIGINT_LIT_G    	0x01D3
#define ADPD400x_REG_DIGINT_DARK_G   	0x01D4
#define ADPD400x_REG_THRESH_CFG_G    	0x01D5
#define ADPD400x_REG_THRESH0_G       	0x01D6
#define ADPD400x_REG_THRESH1_G       	0x01D7
#define ADPD400x_REG_TS_CTRL_H       	0x01E0
#define ADPD400x_REG_TS_PATH_H       	0x01E1
#define ADPD400x_REG_INPUTS_H        	0x01E2
#define ADPD400x_REG_CATHODE_H       	0x01E3
#define ADPD400x_REG_AFE_TRIM_H      	0x01E4
#define ADPD400x_REG_LED_POW12_H     	0x01E5
#define ADPD400x_REG_LED_POW34_H     	0x01E6
#define ADPD400x_REG_COUNTS_H        	0x01E7
#define ADPD400x_REG_PERIOD_H        	0x01E8
#define ADPD400x_REG_LED_PULSE_H     	0x01E9
#define ADPD400x_REG_INTEG_WIDTH_H   	0x01EA
#define ADPD400x_REG_INTEG_OFFSET_H  	0x01EB
#define ADPD400x_REG_MOD_PULSE_H     	0x01EC
#define ADPD400x_REG_PATTERN_H       	0x01ED
#define ADPD400x_REG_ADC_OFF1_H      	0x01EE
#define ADPD400x_REG_ADC_OFF2_H      	0x01EF
#define ADPD400x_REG_DATA1_H         	0x01F0
#define ADPD400x_REG_DATA2_H         	0x01F1
#define ADPD400x_REG_DECIMATE_H      	0x01F2
#define ADPD400x_REG_DIGINT_LIT_H    	0x01F3
#define ADPD400x_REG_DIGINT_DARK_H   	0x01F4
#define ADPD400x_REG_THRESH_CFG_H    	0x01F5
#define ADPD400x_REG_THRESH0_H       	0x01F6
#define ADPD400x_REG_THRESH1_H       	0x01F7
#define ADPD400x_REG_TS_CTRL_I       	0x0200
#define ADPD400x_REG_TS_PATH_I       	0x0201
#define ADPD400x_REG_INPUTS_I        	0x0202
#define ADPD400x_REG_CATHODE_I       	0x0203
#define ADPD400x_REG_AFE_TRIM_I      	0x0204
#define ADPD400x_REG_LED_POW12_I     	0x0205
#define ADPD400x_REG_LED_POW34_I     	0x0206
#define ADPD400x_REG_COUNTS_I        	0x0207
#define ADPD400x_REG_PERIOD_I        	0x0208
#define ADPD400x_REG_LED_PULSE_I     	0x0209
#define ADPD400x_REG_INTEG_WIDTH_I   	0x020A
#define ADPD400x_REG_INTEG_OFFSET_I  	0x020B
#define ADPD400x_REG_MOD_PULSE_I     	0x020C
#define ADPD400x_REG_PATTERN_I       	0x020D
#define ADPD400x_REG_ADC_OFF1_I      	0x020E
#define ADPD400x_REG_ADC_OFF2_I      	0x020F
#define ADPD400x_REG_DATA1_I         	0x0210
#define ADPD400x_REG_DATA2_I         	0x0211
#define ADPD400x_REG_DECIMATE_I      	0x0212
#define ADPD400x_REG_DIGINT_LIT_I    	0x0213
#define ADPD400x_REG_DIGINT_DARK_I   	0x0214
#define ADPD400x_REG_THRESH_CFG_I    	0x0215
#define ADPD400x_REG_THRESH0_I       	0x0216
#define ADPD400x_REG_THRESH1_I       	0x0217
#define ADPD400x_REG_TS_CTRL_J       	0x0220
#define ADPD400x_REG_TS_PATH_J       	0x0221
#define ADPD400x_REG_INPUTS_J        	0x0222
#define ADPD400x_REG_CATHODE_J       	0x0223
#define ADPD400x_REG_AFE_TRIM_J      	0x0224
#define ADPD400x_REG_LED_POW12_J     	0x0225
#define ADPD400x_REG_LED_POW34_J     	0x0226
#define ADPD400x_REG_COUNTS_J        	0x0227
#define ADPD400x_REG_PERIOD_J        	0x0228
#define ADPD400x_REG_LED_PULSE_J     	0x0229
#define ADPD400x_REG_INTEG_WIDTH_J   	0x022A
#define ADPD400x_REG_INTEG_OFFSET_J  	0x022B
#define ADPD400x_REG_MOD_PULSE_J     	0x022C
#define ADPD400x_REG_PATTERN_J       	0x022D
#define ADPD400x_REG_ADC_OFF1_J      	0x022E
#define ADPD400x_REG_ADC_OFF2_J      	0x022F
#define ADPD400x_REG_DATA1_J         	0x0230
#define ADPD400x_REG_DATA2_J         	0x0231
#define ADPD400x_REG_DECIMATE_J      	0x0232
#define ADPD400x_REG_DIGINT_LIT_J    	0x0233
#define ADPD400x_REG_DIGINT_DARK_J   	0x0234
#define ADPD400x_REG_THRESH_CFG_J    	0x0235
#define ADPD400x_REG_THRESH0_J       	0x0236
#define ADPD400x_REG_THRESH1_J       	0x0237
#define ADPD400x_REG_TS_CTRL_K       	0x0240
#define ADPD400x_REG_TS_PATH_K       	0x0241
#define ADPD400x_REG_INPUTS_K        	0x0242
#define ADPD400x_REG_CATHODE_K       	0x0243
#define ADPD400x_REG_AFE_TRIM_K      	0x0244
#define ADPD400x_REG_LED_POW12_K     	0x0245
#define ADPD400x_REG_LED_POW34_K     	0x0246
#define ADPD400x_REG_COUNTS_K        	0x0247
#define ADPD400x_REG_PERIOD_K        	0x0248
#define ADPD400x_REG_LED_PULSE_K     	0x0249
#define ADPD400x_REG_INTEG_WIDTH_K   	0x024A
#define ADPD400x_REG_INTEG_OFFSET_K  	0x024B
#define ADPD400x_REG_MOD_PULSE_K     	0x024C
#define ADPD400x_REG_PATTERN_K       	0x024D
#define ADPD400x_REG_ADC_OFF1_K      	0x024E
#define ADPD400x_REG_ADC_OFF2_K      	0x024F
#define ADPD400x_REG_DATA1_K         	0x0250
#define ADPD400x_REG_DATA2_K         	0x0251
#define ADPD400x_REG_DECIMATE_K      	0x0252
#define ADPD400x_REG_DIGINT_LIT_K    	0x0253
#define ADPD400x_REG_DIGINT_DARK_K   	0x0254
#define ADPD400x_REG_THRESH_CFG_K    	0x0255
#define ADPD400x_REG_THRESH0_K       	0x0256
#define ADPD400x_REG_THRESH1_K       	0x0257
#define ADPD400x_REG_TS_CTRL_L       	0x0260
#define ADPD400x_REG_TS_PATH_L       	0x0261
#define ADPD400x_REG_INPUTS_L        	0x0262
#define ADPD400x_REG_CATHODE_L       	0x0263
#define ADPD400x_REG_AFE_TRIM_L      	0x0264
#define ADPD400x_REG_LED_POW12_L     	0x0265
#define ADPD400x_REG_LED_POW34_L     	0x0266
#define ADPD400x_REG_COUNTS_L        	0x0267
#define ADPD400x_REG_PERIOD_L        	0x0268
#define ADPD400x_REG_LED_PULSE_L     	0x0269
#define ADPD400x_REG_INTEG_WIDTH_L   	0x026A
#define ADPD400x_REG_INTEG_OFFSET_L  	0x026B
#define ADPD400x_REG_MOD_PULSE_L     	0x026C
#define ADPD400x_REG_PATTERN_L       	0x026D
#define ADPD400x_REG_ADC_OFF1_L      	0x026E
#define ADPD400x_REG_ADC_OFF2_L      	0x026F
#define ADPD400x_REG_DATA1_L         	0x0270
#define ADPD400x_REG_DATA2_L         	0x0271
#define ADPD400x_REG_DECIMATE_L      	0x0272
#define ADPD400x_REG_DIGINT_LIT_L    	0x0273
#define ADPD400x_REG_DIGINT_DARK_L   	0x0274
#define ADPD400x_REG_THRESH_CFG_L    	0x0275
#define ADPD400x_REG_THRESH0_L       	0x0276
#define ADPD400x_REG_THRESH1_L       	0x0277


/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_FIFO						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_FIFO_FIFO_BYTE_COUNT    	0			/*Number of bytes in fifo*/
#define BITP_INT_STATUS_FIFO_INT_FIFO_OFLOW     	13			/*Fifo overflow error.*/
#define BITP_INT_STATUS_FIFO_INT_FIFO_UFLOW     	14			/*Timeslot A data register interrupt status*/
#define BITP_INT_STATUS_FIFO_CLEAR_FIFO         	15			/*Clear FIFO*/
#define BITM_INT_STATUS_FIFO_FIFO_BYTE_COUNT    	0x07ff		/*Number of bytes in fifo*/
#define BITM_INT_STATUS_FIFO_INT_FIFO_OFLOW     	0x2000		/*Fifo overflow error.*/
#define BITM_INT_STATUS_FIFO_INT_FIFO_UFLOW     	0x4000		/*Timeslot A data register interrupt status*/
#define BITM_INT_STATUS_FIFO_CLEAR_FIFO         	0x8000		/*Clear FIFO*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_DATA						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_DATA_INT_DATA_A         	0			/*Timeslot A data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_B         	1			/*Timeslot B data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_C         	2			/*Timeslot C data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_D         	3			/*Timeslot D data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_E         	4			/*Timeslot E data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_F         	5			/*Timeslot F data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_G         	6			/*Timeslot G data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_H         	7			/*Timeslot H data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_I         	8			/*Timeslot I data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_J         	9			/*Timeslot J data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_K         	10			/*Timeslot K data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_L         	11			/*Timeslot L data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_FIFO_TH        	15			/*Fifo_th interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_A         	0x0001		/*Timeslot A data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_B         	0x0002		/*Timeslot B data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_C         	0x0004		/*Timeslot C data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_D         	0x0008		/*Timeslot D data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_E         	0x0010		/*Timeslot E data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_F         	0x0020		/*Timeslot F data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_G         	0x0040		/*Timeslot G data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_H         	0x0080		/*Timeslot H data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_I         	0x0100		/*Timeslot I data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_J         	0x0200		/*Timeslot J data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_K         	0x0400		/*Timeslot K data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_L         	0x0800		/*Timeslot L data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_FIFO_TH        	0x8000		/*Fifo_th interrupt status*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_LEV0						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_LEV0_INT_LEV0_A         	0			/*Timeslot A level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_B         	1			/*Timeslot B level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_C         	2			/*Timeslot C level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_D         	3			/*Timeslot D level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_E         	4			/*Timeslot E level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_F         	5			/*Timeslot F level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_G         	6			/*Timeslot G level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_H         	7			/*Timeslot H level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_I         	8			/*Timeslot I level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_J         	9			/*Timeslot J level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_K         	10			/*Timeslot K level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_L         	11			/*Timeslot L level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_A         	0x0001		/*Timeslot A level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_B         	0x0002		/*Timeslot B level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_C         	0x0004		/*Timeslot C level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_D         	0x0008		/*Timeslot D level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_E         	0x0010		/*Timeslot E level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_F         	0x0020		/*Timeslot F level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_G         	0x0040		/*Timeslot G level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_H         	0x0080		/*Timeslot H level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_I         	0x0100		/*Timeslot I level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_J         	0x0200		/*Timeslot J level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_K         	0x0400		/*Timeslot K level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_L         	0x0800		/*Timeslot L level 0 interrupt status*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_LEV1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_LEV1_INT_LEV1_A         	0			/*Timeslot A level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_B         	1			/*Timeslot B level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_C         	2			/*Timeslot C level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_D         	3			/*Timeslot D level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_E         	4			/*Timeslot E level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_F         	5			/*Timeslot F level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_G         	6			/*Timeslot G level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_H         	7			/*Timeslot H level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_I         	8			/*Timeslot I level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_J         	9			/*Timeslot J level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_K         	10			/*Timeslot K level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_L         	11			/*Timeslot L level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_A         	0x0001		/*Timeslot A level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_B         	0x0002		/*Timeslot B level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_C         	0x0004		/*Timeslot C level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_D         	0x0008		/*Timeslot D level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_E         	0x0010		/*Timeslot E level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_F         	0x0020		/*Timeslot F level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_G         	0x0040		/*Timeslot G level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_H         	0x0080		/*Timeslot H level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_I         	0x0100		/*Timeslot I level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_J         	0x0200		/*Timeslot J level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_K         	0x0400		/*Timeslot K level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_L         	0x0800		/*Timeslot L level 1 interrupt status*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_FIFO_CTL						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FIFO_CTL_FIFO_TH                   	0			/*Fifo Interrupt Generation Threshold.*/
#define BITM_FIFO_CTL_FIFO_TH                   	0x03ff		/*Fifo Interrupt Generation Threshold.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ACLEAR						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_A       	0			/*Timeslot A Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_B       	1			/*Timeslot B Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_C       	2			/*Timeslot C Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_D       	3			/*Timeslot D Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_E       	4			/*Timeslot E Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_F       	5			/*Timeslot F Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_G       	6			/*Timeslot G Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_H       	7			/*Timeslot H Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_I       	8			/*Timeslot I Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_J       	9			/*Timeslot J Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_K       	10			/*Timeslot K Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_L       	11			/*Timeslot L Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_FIFO         	15			/*FIFO Threshold Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_A       	0x0001		/*Timeslot A Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_B       	0x0002		/*Timeslot B Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_C       	0x0004		/*Timeslot C Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_D       	0x0008		/*Timeslot D Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_E       	0x0010		/*Timeslot E Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_F       	0x0020		/*Timeslot F Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_G       	0x0040		/*Timeslot G Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_H       	0x0080		/*Timeslot H Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_I       	0x0100		/*Timeslot I Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_J       	0x0200		/*Timeslot J Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_K       	0x0400		/*Timeslot K Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_L       	0x0800		/*Timeslot L Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_FIFO         	0x8000		/*FIFO Threshold Interrupt auto clear enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CHIP_ID						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CHIP_ID_CHIP_ID                    	0			/*Chip ID*/
#define BITP_CHIP_ID_VERSION                    	8			/*Mask Version*/
#define BITM_CHIP_ID_CHIP_ID                    	0x00ff		/*Chip ID*/
#define BITM_CHIP_ID_VERSION                    	0xff00		/*Mask Version*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OSC32M						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OSC32M_OSC_32M_FREQ_ADJ            	0			/*High Freq Oscillator Frequency Control*/
#define BITM_OSC32M_OSC_32M_FREQ_ADJ            	0x00ff		/*High Freq Oscillator Frequency Control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OSC32M_CAL						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OSC32M_CAL_OSC_32M_CAL_COUNT       	0			/*High Freq Oscillator Calibration Count*/
#define BITP_OSC32M_CAL_OSC_32M_CAL_START       	15			/*Start High Freq Oscillator Calibration cycle*/
#define BITM_OSC32M_CAL_OSC_32M_CAL_COUNT       	0x7fff		/*High Freq Oscillator Calibration Count*/
#define BITM_OSC32M_CAL_OSC_32M_CAL_START       	0x8000		/*Start High Freq Oscillator Calibration cycle*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OSC1M						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OSC1M_OSC_1M_FREQ_ADJ              	0			/*Low Freq Oscillator Frequency Control*/
#define BITM_OSC1M_OSC_1M_FREQ_ADJ              	0x03ff		/*Low Freq Oscillator Frequency Control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OSC32K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OSC32K_OSC_32K_ADJUST              	0			/*32KHz oscillator trim*/
#define BITP_OSC32K_CAPTURE_TIMESTAMP           	15			/*Enable Timestamp capture*/
#define BITM_OSC32K_OSC_32K_ADJUST              	0x003f		/*32KHz oscillator trim*/
#define BITM_OSC32K_CAPTURE_TIMESTAMP           	0x8000		/*Enable Timestamp capture*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_FREQ						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_FREQ_TIMESLOT_PERIOD_L          	0			/*Lower 16 bits of timeslot period in lfosc cycles.*/
#define BITM_TS_FREQ_TIMESLOT_PERIOD_L          	0xffff		/*Lower 16 bits of timeslot period in lfosc cycles.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_FREQH						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_FREQH_TIMESLOT_PERIOD_H         	0			/*Upper 7 bits of timeslot period in lfosc cycles.*/
#define BITM_TS_FREQH_TIMESLOT_PERIOD_H         	0x007f		/*Upper 7 bits of timeslot period in lfosc cycles.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SYS_CTL						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SYS_CTL_OSC_32K_EN                 	0			/*Enable Low Frequency Oscillator*/
#define BITP_SYS_CTL_OSC_1M_EN                  	1			/*Enable Low Frequency Oscillator*/
#define BITP_SYS_CTL_LFOSC_SEL                  	2			/*Select Low Frequency Oscillator*/
#define BITP_SYS_CTL_RANDOM_SLEEP               	3			/*Enable Random Sleep LSFR*/
#define BITP_SYS_CTL_GO_SLEEP                   	4			/*Sleep before first timeslot group on GO*/
#define BITP_SYS_CTL_ALT_CLK_GPIO               	6			/*Alternate Clock GPIO Select*/
#define BITP_SYS_CTL_ALT_CLOCKS                 	8			/*External clock select*/
#define BITP_SYS_CTL_SW_RESET                   	15			/*Software Reset*/
#define BITM_SYS_CTL_OSC_32K_EN                 	0x0001		/*Enable Low Frequency Oscillator*/
#define BITM_SYS_CTL_OSC_1M_EN                  	0x0002		/*Enable Low Frequency Oscillator*/
#define BITM_SYS_CTL_LFOSC_SEL                  	0x0004		/*Select Low Frequency Oscillator*/
#define BITM_SYS_CTL_RANDOM_SLEEP               	0x0008		/*Enable Random Sleep LSFR*/
#define BITM_SYS_CTL_GO_SLEEP                   	0x0010		/*Sleep before first timeslot group on GO*/
#define BITM_SYS_CTL_ALT_CLK_GPIO               	0x00c0		/*Alternate Clock GPIO Select*/
#define BITM_SYS_CTL_ALT_CLOCKS                 	0x0300		/*External clock select*/
#define BITM_SYS_CTL_SW_RESET                   	0x8000		/*Software Reset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OPMODE						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OPMODE_OP_MODE                     	0			/*Operating Mode*/
#define BITP_OPMODE_TIMESLOT_EN                 	8			/*Timeslot enable control*/
#define BITM_OPMODE_OP_MODE                     	0x0007		/*Operating Mode*/
#define BITM_OPMODE_TIMESLOT_EN                 	0x0f00		/*Timeslot enable control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_STAMP_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_STAMP_L_TIMESTAMP_COUNT_L          	0			/*Count at last timestamp*/
#define BITM_STAMP_L_TIMESTAMP_COUNT_L          	0xffff		/*Count at last timestamp*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_STAMP_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_STAMP_H_TIMESTAMP_COUNT_H          	0			/*Count at last timestamp*/
#define BITM_STAMP_H_TIMESTAMP_COUNT_H          	0xffff		/*Count at last timestamp*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_STAMPDELTA						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_STAMPDELTA_TIMESTAMP_SLOT_DELTA    	0			/*Count remaining until next wakeup start*/
#define BITM_STAMPDELTA_TIMESTAMP_SLOT_DELTA    	0xffff		/*Count remaining until next wakeup start*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XD						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_A       	0			/*Interrupt channel X Timeslot A data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_B       	1			/*Interrupt channel X Timeslot B data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_C       	2			/*Interrupt channel X Timeslot C data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_D       	3			/*Interrupt channel X Timeslot D data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_E       	4			/*Interrupt channel X Timeslot E data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_F       	5			/*Interrupt channel X Timeslot F data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_G       	6			/*Interrupt channel X Timeslot G data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_H       	7			/*Interrupt channel X Timeslot H data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_I       	8			/*Interrupt channel X Timeslot I data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_J       	9			/*Interrupt channel X Timeslot J data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_K       	10			/*Interrupt channel X Timeslot K data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_L       	11			/*Interrupt channel X Timeslot L data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_FIFO_OFLOW   	13			/*FIFO overflow Interrupt enable for interrupt channel X*/
#define BITP_INT_ENABLE_XD_INTX_EN_FIFO_UFLOW   	14			/*FIFO underflow Interrupt enable for interrupt channel X*/
#define BITP_INT_ENABLE_XD_INTX_EN_FIFO_TH      	15			/*FIFO Threshold Interrupt Enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_A       	0x0001		/*Interrupt channel X Timeslot A data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_B       	0x0002		/*Interrupt channel X Timeslot B data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_C       	0x0004		/*Interrupt channel X Timeslot C data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_D       	0x0008		/*Interrupt channel X Timeslot D data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_E       	0x0010		/*Interrupt channel X Timeslot E data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_F       	0x0020		/*Interrupt channel X Timeslot F data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_G       	0x0040		/*Interrupt channel X Timeslot G data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_H       	0x0080		/*Interrupt channel X Timeslot H data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_I       	0x0100		/*Interrupt channel X Timeslot I data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_J       	0x0200		/*Interrupt channel X Timeslot J data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_K       	0x0400		/*Interrupt channel X Timeslot K data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_L       	0x0800		/*Interrupt channel X Timeslot L data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_FIFO_OFLOW   	0x2000		/*FIFO overflow Interrupt enable for interrupt channel X*/
#define BITM_INT_ENABLE_XD_INTX_EN_FIFO_UFLOW   	0x4000		/*FIFO underflow Interrupt enable for interrupt channel X*/
#define BITM_INT_ENABLE_XD_INTX_EN_FIFO_TH      	0x8000		/*FIFO Threshold Interrupt Enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YD						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_A       	0			/*interrupt channel Y Timeslot A data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_B       	1			/*interrupt channel Y Timeslot B data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_C       	2			/*interrupt channel Y Timeslot C data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_D       	3			/*interrupt channel Y Timeslot D data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_E       	4			/*interrupt channel Y Timeslot E data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_F       	5			/*interrupt channel Y Timeslot F data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_G       	6			/*interrupt channel Y Timeslot G data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_H       	7			/*interrupt channel Y Timeslot H data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_I       	8			/*interrupt channel Y Timeslot I data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_J       	9			/*interrupt channel Y Timeslot J data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_K       	10			/*interrupt channel Y Timeslot K data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_L       	11			/*interrupt channel Y Timeslot L data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_FIFO_OFLOW   	13			/*FIFO overflow Interrupt enable for interrupt channel Y*/
#define BITP_INT_ENABLE_YD_INTY_EN_FIFO_UFLOW   	14			/*FIFO underflow Interrupt enable for interrupt channel Y*/
#define BITP_INT_ENABLE_YD_INTY_EN_FIFO_TH      	15			/*FIFO Threshold Interrupt Enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_A       	0x0001		/*interrupt channel Y Timeslot A data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_B       	0x0002		/*interrupt channel Y Timeslot B data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_C       	0x0004		/*interrupt channel Y Timeslot C data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_D       	0x0008		/*interrupt channel Y Timeslot D data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_E       	0x0010		/*interrupt channel Y Timeslot E data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_F       	0x0020		/*interrupt channel Y Timeslot F data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_G       	0x0040		/*interrupt channel Y Timeslot G data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_H       	0x0080		/*interrupt channel Y Timeslot H data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_I       	0x0100		/*interrupt channel Y Timeslot I data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_J       	0x0200		/*interrupt channel Y Timeslot J data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_K       	0x0400		/*interrupt channel Y Timeslot K data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_L       	0x0800		/*interrupt channel Y Timeslot L data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_FIFO_OFLOW   	0x2000		/*FIFO overflow Interrupt enable for interrupt channel Y*/
#define BITM_INT_ENABLE_YD_INTY_EN_FIFO_UFLOW   	0x4000		/*FIFO underflow Interrupt enable for interrupt channel Y*/
#define BITM_INT_ENABLE_YD_INTY_EN_FIFO_TH      	0x8000		/*FIFO Threshold Interrupt Enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XL0						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_A      	0			/*Interrupt channel X Timeslot A level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_B      	1			/*Interrupt channel X Timeslot B level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_C      	2			/*Interrupt channel X Timeslot C level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_D      	3			/*Interrupt channel X Timeslot D level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_E      	4			/*Interrupt channel X Timeslot E level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_F      	5			/*Interrupt channel X Timeslot F level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_G      	6			/*Interrupt channel X Timeslot G level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_H      	7			/*Interrupt channel X Timeslot H level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_I      	8			/*Interrupt channel X Timeslot I level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_J      	9			/*Interrupt channel X Timeslot J level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_K      	10			/*Interrupt channel X Timeslot K level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_L      	11			/*Interrupt channel X Timeslot L level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_A      	0x0001		/*Interrupt channel X Timeslot A level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_B      	0x0002		/*Interrupt channel X Timeslot B level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_C      	0x0004		/*Interrupt channel X Timeslot C level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_D      	0x0008		/*Interrupt channel X Timeslot D level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_E      	0x0010		/*Interrupt channel X Timeslot E level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_F      	0x0020		/*Interrupt channel X Timeslot F level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_G      	0x0040		/*Interrupt channel X Timeslot G level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_H      	0x0080		/*Interrupt channel X Timeslot H level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_I      	0x0100		/*Interrupt channel X Timeslot I level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_J      	0x0200		/*Interrupt channel X Timeslot J level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_K      	0x0400		/*Interrupt channel X Timeslot K level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_L      	0x0800		/*Interrupt channel X Timeslot L level 0 interrupt enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XL1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_A      	0			/*Interrupt channel X Timeslot A level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_B      	1			/*Interrupt channel X Timeslot B level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_C      	2			/*Interrupt channel X Timeslot C level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_D      	3			/*Interrupt channel X Timeslot D level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_E      	4			/*Interrupt channel X Timeslot E level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_F      	5			/*Interrupt channel X Timeslot F level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_G      	6			/*Interrupt channel X Timeslot G level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_H      	7			/*Interrupt channel X Timeslot H level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_I      	8			/*Interrupt channel X Timeslot I level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_J      	9			/*Interrupt channel X Timeslot J level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_K      	10			/*Interrupt channel X Timeslot K level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_L      	11			/*Interrupt channel X Timeslot L level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_A      	0x0001		/*Interrupt channel X Timeslot A level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_B      	0x0002		/*Interrupt channel X Timeslot B level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_C      	0x0004		/*Interrupt channel X Timeslot C level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_D      	0x0008		/*Interrupt channel X Timeslot D level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_E      	0x0010		/*Interrupt channel X Timeslot E level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_F      	0x0020		/*Interrupt channel X Timeslot F level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_G      	0x0040		/*Interrupt channel X Timeslot G level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_H      	0x0080		/*Interrupt channel X Timeslot H level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_I      	0x0100		/*Interrupt channel X Timeslot I level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_J      	0x0200		/*Interrupt channel X Timeslot J level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_K      	0x0400		/*Interrupt channel X Timeslot K level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_L      	0x0800		/*Interrupt channel X Timeslot L level 1 interrupt enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YL0						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_A      	0			/*interrupt channel Y Timeslot A level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_B      	1			/*interrupt channel Y Timeslot B level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_C      	2			/*interrupt channel Y Timeslot C level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_D      	3			/*interrupt channel Y Timeslot D level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_E      	4			/*interrupt channel Y Timeslot E level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_F      	5			/*interrupt channel Y Timeslot F level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_G      	6			/*interrupt channel Y Timeslot G level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_H      	7			/*interrupt channel Y Timeslot H level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_I      	8			/*interrupt channel Y Timeslot I level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_J      	9			/*interrupt channel Y Timeslot J level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_K      	10			/*interrupt channel Y Timeslot K level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_L      	11			/*interrupt channel Y Timeslot L level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_A      	0x0001		/*interrupt channel Y Timeslot A level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_B      	0x0002		/*interrupt channel Y Timeslot B level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_C      	0x0004		/*interrupt channel Y Timeslot C level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_D      	0x0008		/*interrupt channel Y Timeslot D level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_E      	0x0010		/*interrupt channel Y Timeslot E level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_F      	0x0020		/*interrupt channel Y Timeslot F level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_G      	0x0040		/*interrupt channel Y Timeslot G level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_H      	0x0080		/*interrupt channel Y Timeslot H level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_I      	0x0100		/*interrupt channel Y Timeslot I level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_J      	0x0200		/*interrupt channel Y Timeslot J level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_K      	0x0400		/*interrupt channel Y Timeslot K level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_L      	0x0800		/*interrupt channel Y Timeslot L level 0 interrupt enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YL1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_A      	0			/*interrupt channel Y Timeslot A level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_B      	1			/*interrupt channel Y Timeslot B level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_C      	2			/*interrupt channel Y Timeslot C level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_D      	3			/*interrupt channel Y Timeslot D level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_E      	4			/*interrupt channel Y Timeslot E level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_F      	5			/*interrupt channel Y Timeslot F level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_G      	6			/*interrupt channel Y Timeslot G level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_H      	7			/*interrupt channel Y Timeslot H level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_I      	8			/*interrupt channel Y Timeslot I level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_J      	9			/*interrupt channel Y Timeslot J level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_K      	10			/*interrupt channel Y Timeslot K level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_L      	11			/*interrupt channel Y Timeslot L level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_A      	0x0001		/*interrupt channel Y Timeslot A level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_B      	0x0002		/*interrupt channel Y Timeslot B level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_C      	0x0004		/*interrupt channel Y Timeslot C level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_D      	0x0008		/*interrupt channel Y Timeslot D level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_E      	0x0010		/*interrupt channel Y Timeslot E level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_F      	0x0020		/*interrupt channel Y Timeslot F level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_G      	0x0040		/*interrupt channel Y Timeslot G level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_H      	0x0080		/*interrupt channel Y Timeslot H level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_I      	0x0100		/*interrupt channel Y Timeslot I level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_J      	0x0200		/*interrupt channel Y Timeslot J level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_K      	0x0400		/*interrupt channel Y Timeslot K level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_L      	0x0800		/*interrupt channel Y Timeslot L level 1 interrupt enable*/


/* -------------------------------------------------------------------------------------------------------------------------
				REG_FIFO_STATUS_BYTES						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_SUM     	0			/*Enable status summary byte.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_D1      	1			/*Enable data interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_D2      	2			/*Enable data interrupt status byte upper.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_L0      	3			/*Enable level 0 interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_L1      	4			/*Enable level 1 interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_LX      	5			/*Enable level 0 and level 1 interrupt status byte upper.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_TS1     	6			/*Enable TIA sat chan 1 interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_TS2     	7			/*Enable TIA sat chan 2 interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_TSX     	8			/*Enable TIA sat chan 1/2 interrupt status byte upper.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_SUM     	0x0001		/*Enable status summary byte.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_D1      	0x0002		/*Enable data interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_D2      	0x0004		/*Enable data interrupt status byte upper.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_L0      	0x0008		/*Enable level 0 interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_L1      	0x0010		/*Enable level 1 interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_LX      	0x0020		/*Enable level 0 and level 1 interrupt status byte upper.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_TS1     	0x0040		/*Enable TIA sat chan 1 interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_TS2     	0x0080		/*Enable TIA sat chan 2 interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_TSX     	0x0100		/*Enable TIA sat chan 1/2 interrupt status byte upper.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUT_SLEEP						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUT_SLEEP_INP_SLEEP_12           	0			/*Input pair sleep state for inputs 1 and 2*/
#define BITP_INPUT_SLEEP_INP_SLEEP_34           	4			/*Input pair sleep state for inputs 3 and 4*/
#define BITP_INPUT_SLEEP_INP_SLEEP_56           	8			/*Input pair sleep state for inputs 5 and 6*/
#define BITP_INPUT_SLEEP_INP_SLEEP_78           	12			/*Input pair sleep state for inputs 7 and 8*/
#define BITM_INPUT_SLEEP_INP_SLEEP_12           	0x000f		/*Input pair sleep state for inputs 1 and 2*/
#define BITM_INPUT_SLEEP_INP_SLEEP_34           	0x00f0		/*Input pair sleep state for inputs 3 and 4*/
#define BITM_INPUT_SLEEP_INP_SLEEP_56           	0x0f00		/*Input pair sleep state for inputs 5 and 6*/
#define BITM_INPUT_SLEEP_INP_SLEEP_78           	0xf000		/*Input pair sleep state for inputs 7 and 8*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUT_CFG						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUT_CFG_PAIR12                   	0			/*Input pair configuration*/
#define BITP_INPUT_CFG_PAIR34                   	1			/*Input pair configuration*/
#define BITP_INPUT_CFG_PAIR56                   	2			/*Input pair configuration*/
#define BITP_INPUT_CFG_PAIR78                   	3			/*Input pair configuration*/
#define BITP_INPUT_CFG_VC1_SLEEP                	4			/*Cathode1 sleep state*/
#define BITP_INPUT_CFG_VC2_SLEEP                	6			/*Cathode2 sleep state*/
#define BITM_INPUT_CFG_PAIR12                   	0x0001		/*Input pair configuration*/
#define BITM_INPUT_CFG_PAIR34                   	0x0002		/*Input pair configuration*/
#define BITM_INPUT_CFG_PAIR56                   	0x0004		/*Input pair configuration*/
#define BITM_INPUT_CFG_PAIR78                   	0x0008		/*Input pair configuration*/
#define BITM_INPUT_CFG_VC1_SLEEP                	0x0030		/*Cathode1 sleep state*/
#define BITM_INPUT_CFG_VC2_SLEEP                	0x00c0		/*Cathode2 sleep state*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO_CFG						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_CFG_GPIO_PIN_CFG0             	0			/*GPIO[0] Pin Configuration*/
#define BITP_GPIO_CFG_GPIO_PIN_CFG1             	3			/*GPIO[1] Pin Configuration*/
#define BITP_GPIO_CFG_GPIO_PIN_CFG2             	6			/*GPIO[2] Pin Configuration*/
#define BITP_GPIO_CFG_GPIO_PIN_CFG3             	9			/*GPIO[3] Pin Configuration*/
#define BITP_GPIO_CFG_GPIO_DRV                  	12			/*Drive Control for GPIO Pins*/
#define BITP_GPIO_CFG_GPIO_SLEW                 	14			/*Slew Control for GPIO Pins*/
#define BITM_GPIO_CFG_GPIO_PIN_CFG0             	0x0007		/*GPIO[0] Pin Configuration*/
#define BITM_GPIO_CFG_GPIO_PIN_CFG1             	0x0038		/*GPIO[1] Pin Configuration*/
#define BITM_GPIO_CFG_GPIO_PIN_CFG2             	0x01c0		/*GPIO[2] Pin Configuration*/
#define BITM_GPIO_CFG_GPIO_PIN_CFG3             	0x0e00		/*GPIO[3] Pin Configuration*/
#define BITM_GPIO_CFG_GPIO_DRV                  	0x3000		/*Drive Control for GPIO Pins*/
#define BITM_GPIO_CFG_GPIO_SLEW                 	0xc000		/*Slew Control for GPIO Pins*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO01						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO01_GPIOOUT0                    	0			/*GPIO Pin 0 Output Select*/
#define BITP_GPIO01_GPIOOUT1                    	8			/*GPIO Pin 1 Output Select*/
#define BITP_GPIO01_TIMESTAMP_INV               	14			/*Timestamp Trigger Invert*/
#define BITP_GPIO01_TIMESTAMP_ALWAYS_EN         	15			/*Enable Timestamp Always on*/
#define BITM_GPIO01_GPIOOUT0                    	0x001f		/*GPIO Pin 0 Output Select*/
#define BITM_GPIO01_GPIOOUT1                    	0x1f00		/*GPIO Pin 1 Output Select*/
#define BITM_GPIO01_TIMESTAMP_INV               	0x4000		/*Timestamp Trigger Invert*/
#define BITM_GPIO01_TIMESTAMP_ALWAYS_EN         	0x8000		/*Enable Timestamp Always on*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO23						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO23_GPIOOUT2                    	0			/*GPIO Pin 2 Output Select*/
#define BITP_GPIO23_GPIOOUT3                    	8			/*GPIO Pin 3 Output Select*/
#define BITP_GPIO23_EXT_SYNC_EN                 	14			/*External sync enable*/
#define BITM_GPIO23_GPIOOUT2                    	0x001f		/*GPIO Pin 2 Output Select*/
#define BITM_GPIO23_GPIOOUT3                    	0x1f00		/*GPIO Pin 3 Output Select*/
#define BITM_GPIO23_EXT_SYNC_EN                 	0x4000		/*External sync enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO_IN						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_IN_GPIO_INPUT                 	0			/*GPIO Input value (if enabled)*/
#define BITM_GPIO_IN_GPIO_INPUT                 	0x000f		/*GPIO Input value (if enabled)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA_HOLD_FLAG						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_A         	0			/*Prevent Update of Timeslot A data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_B         	1			/*Prevent Update of Timeslot B data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_C         	2			/*Prevent Update of Timeslot C data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_D         	3			/*Prevent Update of Timeslot D data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_E         	4			/*Prevent Update of Timeslot E data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_F         	5			/*Prevent Update of Timeslot F data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_G         	6			/*Prevent Update of Timeslot G data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_H         	7			/*Prevent Update of Timeslot H data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_I         	8			/*Prevent Update of Timeslot I data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_J         	9			/*Prevent Update of Timeslot J data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_K         	10			/*Prevent Update of Timeslot K data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_L         	11			/*Prevent Update of Timeslot L data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_A         	0x0001		/*Prevent Update of Timeslot A data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_B         	0x0002		/*Prevent Update of Timeslot B data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_C         	0x0004		/*Prevent Update of Timeslot C data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_D         	0x0008		/*Prevent Update of Timeslot D data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_E         	0x0010		/*Prevent Update of Timeslot E data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_F         	0x0020		/*Prevent Update of Timeslot F data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_G         	0x0040		/*Prevent Update of Timeslot G data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_H         	0x0080		/*Prevent Update of Timeslot H data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_I         	0x0100		/*Prevent Update of Timeslot I data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_J         	0x0200		/*Prevent Update of Timeslot J data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_K         	0x0400		/*Prevent Update of Timeslot K data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_L         	0x0800		/*Prevent Update of Timeslot L data registers*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_FIFO_DATA						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FIFO_DATA_FIFO_DATA                	0			/*FIFO data port*/
#define BITM_FIFO_DATA_FIFO_DATA                	0xffff		/*FIFO data port*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_A_SIGNAL1_L_A            	0			/*Signal channel 1 lower half timeslot a*/
#define BITM_SIGNAL1_L_A_SIGNAL1_L_A            	0xffff		/*Signal channel 1 lower half timeslot a*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_A_SIGNAL1_H_A            	0			/*Signal channel 1 upper half timeslot a*/
#define BITM_SIGNAL1_H_A_SIGNAL1_H_A            	0xffff		/*Signal channel 1 upper half timeslot a*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_A_SIGNAL2_L_A            	0			/*Signal channel 2 lower half timeslot a*/
#define BITM_SIGNAL2_L_A_SIGNAL2_L_A            	0xffff		/*Signal channel 2 lower half timeslot a*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_A_SIGNAL2_H_A            	0			/*Signal channel 2 upper half timeslot a*/
#define BITM_SIGNAL2_H_A_SIGNAL2_H_A            	0xffff		/*Signal channel 2 upper half timeslot a*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_A_DARK1_L_A                	0			/*Dark channel 1 value lower half*/
#define BITM_DARK1_L_A_DARK1_L_A                	0xffff		/*Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_A_DARK1_H_A                	0			/*Dark channel 1 value upper half*/
#define BITM_DARK1_H_A_DARK1_H_A                	0xffff		/*Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_A_DARK2_L_A                	0			/*Dark channel 2 value lower half*/
#define BITM_DARK2_L_A_DARK2_L_A                	0xffff		/*Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_A_DARK2_H_A                	0			/*Dark channel 2 value upper half*/
#define BITM_DARK2_H_A_DARK2_H_A                	0xffff		/*Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_B_SIGNAL1_L_B            	0			/*Signal channel 1 lower half timeslot b*/
#define BITM_SIGNAL1_L_B_SIGNAL1_L_B            	0xffff		/*Signal channel 1 lower half timeslot b*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_B_SIGNAL1_H_B            	0			/*Signal channel 1 upper half timeslot b*/
#define BITM_SIGNAL1_H_B_SIGNAL1_H_B            	0xffff		/*Signal channel 1 upper half timeslot b*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_B_SIGNAL2_L_B            	0			/*Signal channel 2 lower half timeslot b*/
#define BITM_SIGNAL2_L_B_SIGNAL2_L_B            	0xffff		/*Signal channel 2 lower half timeslot b*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_B_SIGNAL2_H_B            	0			/*Signal channel 2 upper half timeslot b*/
#define BITM_SIGNAL2_H_B_SIGNAL2_H_B            	0xffff		/*Signal channel 2 upper half timeslot b*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_B_DARK1_L_B                	0			/*Dark channel 1 value lower half*/
#define BITM_DARK1_L_B_DARK1_L_B                	0xffff		/*Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_B_DARK1_H_B                	0			/*Dark channel 1 value upper half*/
#define BITM_DARK1_H_B_DARK1_H_B                	0xffff		/*Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_B_DARK2_L_B                	0			/*Dark channel 2 value lower half*/
#define BITM_DARK2_L_B_DARK2_L_B                	0xffff		/*Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_B_DARK2_H_B                	0			/*Dark channel 2 value upper half*/
#define BITM_DARK2_H_B_DARK2_H_B                	0xffff		/*Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_C_SIGNAL1_L_C            	0			/*Signal channel 1 lower half timeslot c*/
#define BITM_SIGNAL1_L_C_SIGNAL1_L_C            	0xffff		/*Signal channel 1 lower half timeslot c*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_C_SIGNAL1_H_C            	0			/*Signal channel 1 upper half timeslot c*/
#define BITM_SIGNAL1_H_C_SIGNAL1_H_C            	0xffff		/*Signal channel 1 upper half timeslot c*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_C_SIGNAL2_L_C            	0			/*Signal channel 2 lower half timeslot c*/
#define BITM_SIGNAL2_L_C_SIGNAL2_L_C            	0xffff		/*Signal channel 2 lower half timeslot c*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_C_SIGNAL2_H_C            	0			/*Signal channel 2 upper half timeslot c*/
#define BITM_SIGNAL2_H_C_SIGNAL2_H_C            	0xffff		/*Signal channel 2 upper half timeslot c*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_C_DARK1_L_C                	0			/*Dark channel 1 value lower half*/
#define BITM_DARK1_L_C_DARK1_L_C                	0xffff		/*Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_C_DARK1_H_C                	0			/*Dark channel 1 value upper half*/
#define BITM_DARK1_H_C_DARK1_H_C                	0xffff		/*Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_C_DARK2_L_C                	0			/*Dark channel 2 value lower half*/
#define BITM_DARK2_L_C_DARK2_L_C                	0xffff		/*Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_C_DARK2_H_C                	0			/*Dark channel 2 value upper half*/
#define BITM_DARK2_H_C_DARK2_H_C                	0xffff		/*Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_D_SIGNAL1_L_D            	0			/*Signal channel 1 lower half timeslot d*/
#define BITM_SIGNAL1_L_D_SIGNAL1_L_D            	0xffff		/*Signal channel 1 lower half timeslot d*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_D_SIGNAL1_H_D            	0			/*Signal channel 1 upper half timeslot d*/
#define BITM_SIGNAL1_H_D_SIGNAL1_H_D            	0xffff		/*Signal channel 1 upper half timeslot d*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_D_SIGNAL2_L_D            	0			/*Signal channel 2 lower half timeslot d*/
#define BITM_SIGNAL2_L_D_SIGNAL2_L_D            	0xffff		/*Signal channel 2 lower half timeslot d*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_D_SIGNAL2_H_D            	0			/*Signal channel 2 upper half timeslot d*/
#define BITM_SIGNAL2_H_D_SIGNAL2_H_D            	0xffff		/*Signal channel 2 upper half timeslot d*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_D_DARK1_L_D                	0			/*Dark channel 1 value lower half*/
#define BITM_DARK1_L_D_DARK1_L_D                	0xffff		/*Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_D_DARK1_H_D                	0			/*Dark channel 1 value upper half*/
#define BITM_DARK1_H_D_DARK1_H_D                	0xffff		/*Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_D_DARK2_L_D                	0			/*Dark channel 2 value lower half*/
#define BITM_DARK2_L_D_DARK2_L_D                	0xffff		/*Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_D_DARK2_H_D                	0			/*Dark channel 2 value upper half*/
#define BITM_DARK2_H_D_DARK2_H_D                	0xffff		/*Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_E_SIGNAL1_L_E            	0			/*Signal channel 1 lower half timeslot e*/
#define BITM_SIGNAL1_L_E_SIGNAL1_L_E            	0xffff		/*Signal channel 1 lower half timeslot e*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_E_SIGNAL1_H_E            	0			/*Signal channel 1 upper half timeslot e*/
#define BITM_SIGNAL1_H_E_SIGNAL1_H_E            	0xffff		/*Signal channel 1 upper half timeslot e*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_E_SIGNAL2_L_E            	0			/*Signal channel 2 lower half timeslot e*/
#define BITM_SIGNAL2_L_E_SIGNAL2_L_E            	0xffff		/*Signal channel 2 lower half timeslot e*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_E_SIGNAL2_H_E            	0			/*Signal channel 2 upper half timeslot e*/
#define BITM_SIGNAL2_H_E_SIGNAL2_H_E            	0xffff		/*Signal channel 2 upper half timeslot e*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_E_DARK1_L_E                	0			/*Dark channel 1 value lower half*/
#define BITM_DARK1_L_E_DARK1_L_E                	0xffff		/*Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_E_DARK1_H_E                	0			/*Dark channel 1 value upper half*/
#define BITM_DARK1_H_E_DARK1_H_E                	0xffff		/*Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_E_DARK2_L_E                	0			/*Dark channel 2 value lower half*/
#define BITM_DARK2_L_E_DARK2_L_E                	0xffff		/*Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_E_DARK2_H_E                	0			/*Dark channel 2 value upper half*/
#define BITM_DARK2_H_E_DARK2_H_E                	0xffff		/*Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_F_SIGNAL1_L_F            	0			/*Signal channel 1 lower half timeslot f*/
#define BITM_SIGNAL1_L_F_SIGNAL1_L_F            	0xffff		/*Signal channel 1 lower half timeslot f*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_F_SIGNAL1_H_F            	0			/*Signal channel 1 upper half timeslot f*/
#define BITM_SIGNAL1_H_F_SIGNAL1_H_F            	0xffff		/*Signal channel 1 upper half timeslot f*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_F_SIGNAL2_L_F            	0			/*Signal channel 2 lower half timeslot f*/
#define BITM_SIGNAL2_L_F_SIGNAL2_L_F            	0xffff		/*Signal channel 2 lower half timeslot f*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_F_SIGNAL2_H_F            	0			/*Signal channel 2 upper half timeslot f*/
#define BITM_SIGNAL2_H_F_SIGNAL2_H_F            	0xffff		/*Signal channel 2 upper half timeslot f*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_F_DARK1_L_F                	0			/*Dark channel 1 value lower half*/
#define BITM_DARK1_L_F_DARK1_L_F                	0xffff		/*Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_F_DARK1_H_F                	0			/*Dark channel 1 value upper half*/
#define BITM_DARK1_H_F_DARK1_H_F                	0xffff		/*Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_F_DARK2_L_F                	0			/*Dark channel 2 value lower half*/
#define BITM_DARK2_L_F_DARK2_L_F                	0xffff		/*Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_F_DARK2_H_F                	0			/*Dark channel 2 value upper half*/
#define BITM_DARK2_H_F_DARK2_H_F                	0xffff		/*Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_G_SIGNAL1_L_G            	0			/*Signal channel 1 lower half timeslot g*/
#define BITM_SIGNAL1_L_G_SIGNAL1_L_G            	0xffff		/*Signal channel 1 lower half timeslot g*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_G_SIGNAL1_H_G            	0			/*Signal channel 1 upper half timeslot g*/
#define BITM_SIGNAL1_H_G_SIGNAL1_H_G            	0xffff		/*Signal channel 1 upper half timeslot g*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_G_SIGNAL2_L_G            	0			/*Signal channel 2 lower half timeslot g*/
#define BITM_SIGNAL2_L_G_SIGNAL2_L_G            	0xffff		/*Signal channel 2 lower half timeslot g*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_G_SIGNAL2_H_G            	0			/*Signal channel 2 upper half timeslot g*/
#define BITM_SIGNAL2_H_G_SIGNAL2_H_G            	0xffff		/*Signal channel 2 upper half timeslot g*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_G_DARK1_L_G                	0			/*Dark channel 1 value lower half*/
#define BITM_DARK1_L_G_DARK1_L_G                	0xffff		/*Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_G_DARK1_H_G                	0			/*Dark channel 1 value upper half*/
#define BITM_DARK1_H_G_DARK1_H_G                	0xffff		/*Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_G_DARK2_L_G                	0			/*Dark channel 2 value lower half*/
#define BITM_DARK2_L_G_DARK2_L_G                	0xffff		/*Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_G_DARK2_H_G                	0			/*Dark channel 2 value upper half*/
#define BITM_DARK2_H_G_DARK2_H_G                	0xffff		/*Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_H_SIGNAL1_L_H            	0			/*Signal channel 1 lower half timeslot h*/
#define BITM_SIGNAL1_L_H_SIGNAL1_L_H            	0xffff		/*Signal channel 1 lower half timeslot h*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_H_SIGNAL1_H_H            	0			/*Signal channel 1 upper half timeslot h*/
#define BITM_SIGNAL1_H_H_SIGNAL1_H_H            	0xffff		/*Signal channel 1 upper half timeslot h*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_H_SIGNAL2_L_H            	0			/*Signal channel 2 lower half timeslot h*/
#define BITM_SIGNAL2_L_H_SIGNAL2_L_H            	0xffff		/*Signal channel 2 lower half timeslot h*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_H_SIGNAL2_H_H            	0			/*Signal channel 2 upper half timeslot h*/
#define BITM_SIGNAL2_H_H_SIGNAL2_H_H            	0xffff		/*Signal channel 2 upper half timeslot h*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_H_DARK1_L_H                	0			/*Dark channel 1 value lower half*/
#define BITM_DARK1_L_H_DARK1_L_H                	0xffff		/*Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_H_DARK1_H_H                	0			/*Dark channel 1 value upper half*/
#define BITM_DARK1_H_H_DARK1_H_H                	0xffff		/*Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_H_DARK2_L_H                	0			/*Dark channel 2 value lower half*/
#define BITM_DARK2_L_H_DARK2_L_H                	0xffff		/*Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_H_DARK2_H_H                	0			/*Dark channel 2 value upper half*/
#define BITM_DARK2_H_H_DARK2_H_H                	0xffff		/*Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_I_SIGNAL1_L_I            	0			/*Signal channel 1 lower half timeslot i*/
#define BITM_SIGNAL1_L_I_SIGNAL1_L_I            	0xffff		/*Signal channel 1 lower half timeslot i*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_I_SIGNAL1_H_I            	0			/*Signal channel 1 upper half timeslot i*/
#define BITM_SIGNAL1_H_I_SIGNAL1_H_I            	0xffff		/*Signal channel 1 upper half timeslot i*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_I_SIGNAL2_L_I            	0			/*Signal channel 2 lower half timeslot i*/
#define BITM_SIGNAL2_L_I_SIGNAL2_L_I            	0xffff		/*Signal channel 2 lower half timeslot i*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_I_SIGNAL2_H_I            	0			/*Signal channel 2 upper half timeslot i*/
#define BITM_SIGNAL2_H_I_SIGNAL2_H_I            	0xffff		/*Signal channel 2 upper half timeslot i*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_I_DARK1_L_I                	0			/*Dark channel 1 value lower half*/
#define BITM_DARK1_L_I_DARK1_L_I                	0xffff		/*Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_I_DARK1_H_I                	0			/*Dark channel 1 value upper half*/
#define BITM_DARK1_H_I_DARK1_H_I                	0xffff		/*Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_I_DARK2_L_I                	0			/*Dark channel 2 value lower half*/
#define BITM_DARK2_L_I_DARK2_L_I                	0xffff		/*Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_I_DARK2_H_I                	0			/*Dark channel 2 value upper half*/
#define BITM_DARK2_H_I_DARK2_H_I                	0xffff		/*Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_J_SIGNAL1_L_J            	0			/*Signal channel 1 lower half timeslot j*/
#define BITM_SIGNAL1_L_J_SIGNAL1_L_J            	0xffff		/*Signal channel 1 lower half timeslot j*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_J_SIGNAL1_H_J            	0			/*Signal channel 1 upper half timeslot j*/
#define BITM_SIGNAL1_H_J_SIGNAL1_H_J            	0xffff		/*Signal channel 1 upper half timeslot j*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_J_SIGNAL2_L_J            	0			/*Signal channel 2 lower half timeslot j*/
#define BITM_SIGNAL2_L_J_SIGNAL2_L_J            	0xffff		/*Signal channel 2 lower half timeslot j*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_J_SIGNAL2_H_J            	0			/*Signal channel 2 upper half timeslot j*/
#define BITM_SIGNAL2_H_J_SIGNAL2_H_J            	0xffff		/*Signal channel 2 upper half timeslot j*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_J_DARK1_L_J                	0			/*Dark channel 1 value lower half*/
#define BITM_DARK1_L_J_DARK1_L_J                	0xffff		/*Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_J_DARK1_H_J                	0			/*Dark channel 1 value upper half timeslot j*/
#define BITM_DARK1_H_J_DARK1_H_J                	0xffff		/*Dark channel 1 value upper half timeslot j*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_J_DARK2_L_J                	0			/*Dark channel 2 value lower half*/
#define BITM_DARK2_L_J_DARK2_L_J                	0xffff		/*Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_J_DARK2_H_J                	0			/*Dark channel 2 value upper half timeslot j*/
#define BITM_DARK2_H_J_DARK2_H_J                	0xffff		/*Dark channel 2 value upper half timeslot j*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_K_SIGNAL1_L_K            	0			/*Signal channel 1 lower half timeslot k*/
#define BITM_SIGNAL1_L_K_SIGNAL1_L_K            	0xffff		/*Signal channel 1 lower half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_K_SIGNAL1_H_K            	0			/*Signal channel 1 upper half timeslot k*/
#define BITM_SIGNAL1_H_K_SIGNAL1_H_K            	0xffff		/*Signal channel 1 upper half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_K_SIGNAL2_L_K            	0			/*Signal channel 2 lower half timeslot k*/
#define BITM_SIGNAL2_L_K_SIGNAL2_L_K            	0xffff		/*Signal channel 2 lower half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_K_SIGNAL2_H_K            	0			/*Signal channel 2 upper half timeslot k*/
#define BITM_SIGNAL2_H_K_SIGNAL2_H_K            	0xffff		/*Signal channel 2 upper half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_K_DARK1_L_K                	0			/*Dark channel 1 value lower half timeslot k*/
#define BITM_DARK1_L_K_DARK1_L_K                	0xffff		/*Dark channel 1 value lower half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_K_DARK1_H_K                	0			/*Dark channel 1 value upper half timeslot k*/
#define BITM_DARK1_H_K_DARK1_H_K                	0xffff		/*Dark channel 1 value upper half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_K_DARK2_L_K                	0			/*Dark channel 2 value lower half timeslot k*/
#define BITM_DARK2_L_K_DARK2_L_K                	0xffff		/*Dark channel 2 value lower half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_K_DARK2_H_K                	0			/*Dark channel 2 value upper half timeslot k*/
#define BITM_DARK2_H_K_DARK2_H_K                	0xffff		/*Dark channel 2 value upper half timeslot k*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_L_SIGNAL1_L_L            	0			/*Signal channel 1 lower half timeslot l*/
#define BITM_SIGNAL1_L_L_SIGNAL1_L_L            	0xffff		/*Signal channel 1 lower half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_L_SIGNAL1_H_L            	0			/*Signal channel 1 upper half timeslot l*/
#define BITM_SIGNAL1_H_L_SIGNAL1_H_L            	0xffff		/*Signal channel 1 upper half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_L_SIGNAL2_L_L            	0			/*Signal channel 2 lower half timeslot l*/
#define BITM_SIGNAL2_L_L_SIGNAL2_L_L            	0xffff		/*Signal channel 2 lower half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_L_SIGNAL2_H_L            	0			/*Signal channel 2 upper half timeslot l*/
#define BITM_SIGNAL2_H_L_SIGNAL2_H_L            	0xffff		/*Signal channel 2 upper half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_L_DARK1_L_L                	0			/*Dark channel 1 value lower half timeslot l*/
#define BITM_DARK1_L_L_DARK1_L_L                	0xffff		/*Dark channel 1 value lower half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_L_DARK1_H_L                	0			/*Dark channel 1 value upper half timeslot l*/
#define BITM_DARK1_H_L_DARK1_H_L                	0xffff		/*Dark channel 1 value upper half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_L_DARK2_L_L                	0			/*Dark channel 2 value lower half timeslot l*/
#define BITM_DARK2_L_L_DARK2_L_L                	0xffff		/*Dark channel 2 value lower half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_L_DARK2_H_L                	0			/*Dark channel 2 value upper half timeslot l*/
#define BITM_DARK2_H_L_DARK2_H_L                	0xffff		/*Dark channel 2 value upper half timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_EFUSE						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_EFUSE_EFUSE_REG_EN                 	0			/*Efuse register access enable*/
#define BITP_EFUSE_EFUSE_EN                     	1			/*Efuse Enable*/
#define BITM_EFUSE_EFUSE_REG_EN                 	0x0001		/*Efuse register access enable*/
#define BITM_EFUSE_EFUSE_EN                     	0x0006		/*Efuse Enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_CTRL1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_CTRL1_ADC_GAIN                 	0			/*Thermometric control code*/
#define BITP_ADC_CTRL1_ADC_SHORT                	8			/*Thermometric control code*/
#define BITM_ADC_CTRL1_ADC_GAIN                 	0x00ff		/*Thermometric control code*/
#define BITM_ADC_CTRL1_ADC_SHORT                	0xff00		/*Thermometric control code*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_CTRL2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_CTRL2_ADC_RANGE                	0			/*Control input range of ADC*/
#define BITP_ADC_CTRL2_ADC_BAND                 	2			/*Band-limit the ADC to reduce noise*/
#define BITP_ADC_CTRL2_ADC_DELAY                	4			/*Test mode related to band-limiting*/
#define BITP_ADC_CTRL2_ADC_A_DEL                	5			/*adc_a_del*/
#define BITP_ADC_CTRL2_ADC_B_DEL                	6			/*adc_b_del*/
#define BITP_ADC_CTRL2_ADC_C_DEL                	7			/*adc_c_del*/
#define BITM_ADC_CTRL2_ADC_RANGE                	0x0003		/*Control input range of ADC*/
#define BITM_ADC_CTRL2_ADC_BAND                 	0x000c		/*Band-limit the ADC to reduce noise*/
#define BITM_ADC_CTRL2_ADC_DELAY                	0x0010		/*Test mode related to band-limiting*/
#define BITM_ADC_CTRL2_ADC_A_DEL                	0x0020		/*adc_a_del*/
#define BITM_ADC_CTRL2_ADC_B_DEL                	0x0040		/*adc_b_del*/
#define BITM_ADC_CTRL2_ADC_C_DEL                	0x0080		/*adc_c_del*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_POST						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_POST_DIFFN_PDIFF               	0			/*ADC_TM_DIFFN_PDIFF*/
#define BITP_ADC_POST_CONV_START                	2			/*Register control for conv_start*/
#define BITP_ADC_POST_CONV_FROMINT              	3			/*Conv_start select control*/
#define BITP_ADC_POST_ADC_RETIME_EDGE           	4			/*Retime edge selection*/
#define BITP_ADC_POST_ADC_PIPE                  	8			/*Adjust sample clock timing*/
#define BITP_ADC_POST_ADC_TESTMODE              	10			/*ADC test mode*/
#define BITP_ADC_POST_ADC_INPUT_SHORT           	12			/*ADC input short duration*/
#define BITP_ADC_POST_ADC_DUMMY_CYCLE           	14			/*Insert extra dummy cycle before first channel conversion*/
#define BITM_ADC_POST_DIFFN_PDIFF               	0x0001		/*ADC_TM_DIFFN_PDIFF*/
#define BITM_ADC_POST_CONV_START                	0x0004		/*Register control for conv_start*/
#define BITM_ADC_POST_CONV_FROMINT              	0x0008		/*Conv_start select control*/
#define BITM_ADC_POST_ADC_RETIME_EDGE           	0x0010		/*Retime edge selection*/
#define BITM_ADC_POST_ADC_PIPE                  	0x0300		/*Adjust sample clock timing*/
#define BITM_ADC_POST_ADC_TESTMODE              	0x0c00		/*ADC test mode*/
#define BITM_ADC_POST_ADC_INPUT_SHORT           	0x3000		/*ADC input short duration*/
#define BITM_ADC_POST_ADC_DUMMY_CYCLE           	0x4000		/*Insert extra dummy cycle before first channel conversion*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_REF_CTRL						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_REF_CTRL_REF_ABS                   	0			/*Trim REF output value*/
#define BITP_REF_CTRL_REF_LIMIT                 	9			/*Control charging time*/
#define BITP_REF_CTRL_REF_TM                    	10			/*MUX test points*/
#define BITM_REF_CTRL_REF_ABS                   	0x00ff		/*Trim REF output value*/
#define BITM_REF_CTRL_REF_LIMIT                 	0x0200		/*Control charging time*/
#define BITM_REF_CTRL_REF_TM                    	0x0c00		/*MUX test points*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_BIAS_CTRL						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BIAS_CTRL_BIAS_I5U1_PD             	0			/*Power down of 5uA output1 for adc*/
#define BITP_BIAS_CTRL_BIAS_I5U2_PD             	1			/*Power down of 5uA output2 for adc*/
#define BITP_BIAS_CTRL_BIAS_I5U3_PD             	2			/*Power down of 5uA output3 for vref*/
#define BITP_BIAS_CTRL_BIAS_I5U4_PD             	3			/*Power down of 5uA output4 for vref*/
#define BITP_BIAS_CTRL_BIAS_I10U1_PD            	4			/*Power down of 10uA output1 for TBD*/
#define BITP_BIAS_CTRL_BIAS_I10U2_PD            	5			/*Power down of 10uA output2 for TBD*/
#define BITP_BIAS_CTRL_BIAS_I10U3_PD            	6			/*Power down of 10uA output3 for LED Driver*/
#define BITP_BIAS_CTRL_BIAS_I10U4_PD            	7			/*Power down of 10uA output4 for LED Driver*/
#define BITP_BIAS_CTRL_BIAS_I10U5_PD            	8			/*Power down of 10uA output5 AFE Vref*/
#define BITP_BIAS_CTRL_BIAS_I10U6_PD            	9			/*Power down of 10uA output6 for VICM*/
#define BITP_BIAS_CTRL_BIAS_I50U_PD             	10			/*Power down of 50uA output*/
#define BITP_BIAS_CTRL_BIAS_TEST                	11			/*Output of 10uA test current*/
#define BITP_BIAS_CTRL_AFE_HALF_CURRENT         	12			/*Set TIA, BPF, or INT to half bias current.*/
#define BITM_BIAS_CTRL_BIAS_I5U1_PD             	0x0001		/*Power down of 5uA output1 for adc*/
#define BITM_BIAS_CTRL_BIAS_I5U2_PD             	0x0002		/*Power down of 5uA output2 for adc*/
#define BITM_BIAS_CTRL_BIAS_I5U3_PD             	0x0004		/*Power down of 5uA output3 for vref*/
#define BITM_BIAS_CTRL_BIAS_I5U4_PD             	0x0008		/*Power down of 5uA output4 for vref*/
#define BITM_BIAS_CTRL_BIAS_I10U1_PD            	0x0010		/*Power down of 10uA output1 for TBD*/
#define BITM_BIAS_CTRL_BIAS_I10U2_PD            	0x0020		/*Power down of 10uA output2 for TBD*/
#define BITM_BIAS_CTRL_BIAS_I10U3_PD            	0x0040		/*Power down of 10uA output3 for LED Driver*/
#define BITM_BIAS_CTRL_BIAS_I10U4_PD            	0x0080		/*Power down of 10uA output4 for LED Driver*/
#define BITM_BIAS_CTRL_BIAS_I10U5_PD            	0x0100		/*Power down of 10uA output5 AFE Vref*/
#define BITM_BIAS_CTRL_BIAS_I10U6_PD            	0x0200		/*Power down of 10uA output6 for VICM*/
#define BITM_BIAS_CTRL_BIAS_I50U_PD             	0x0400		/*Power down of 50uA output*/
#define BITM_BIAS_CTRL_BIAS_TEST                	0x0800		/*Output of 10uA test current*/
#define BITM_BIAS_CTRL_AFE_HALF_CURRENT         	0x7000		/*Set TIA, BPF, or INT to half bias current.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_BIAS_TRIM1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BIAS_TRIM1_BIAS_TRIM10U5           	0			/*Bias trim 10uA for AFE VREF*/
#define BITP_BIAS_TRIM1_BIAS_TRIM10U6           	2			/*Bias trim 10uA for VICM*/
#define BITP_BIAS_TRIM1_BIAS_ATRIM              	4			/*Trim all bias current outputs (50uA, 10uA and 5uA)*/
#define BITP_BIAS_TRIM1_BIAS_TRIM50U            	8			/*Trim 50uA output*/
#define BITP_BIAS_TRIM1_AFE_TRIM_50U            	11			/*Bias trim for 50u AFE current.*/
#define BITM_BIAS_TRIM1_BIAS_TRIM10U5           	0x0003		/*Bias trim 10uA for AFE VREF*/
#define BITM_BIAS_TRIM1_BIAS_TRIM10U6           	0x000c		/*Bias trim 10uA for VICM*/
#define BITM_BIAS_TRIM1_BIAS_ATRIM              	0x0070		/*Trim all bias current outputs (50uA, 10uA and 5uA)*/
#define BITM_BIAS_TRIM1_BIAS_TRIM50U            	0x0700		/*Trim 50uA output*/
#define BITM_BIAS_TRIM1_AFE_TRIM_50U            	0xf800		/*Bias trim for 50u AFE current.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_BIAS_TRIM2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BIAS_TRIM2_BIAS_TRIM5U1            	0			/*Trim bias for ADC*/
#define BITP_BIAS_TRIM2_BIAS_TRIM5U2            	2			/*Trim bias for ADC*/
#define BITP_BIAS_TRIM2_BIAS_TRIM5U3            	4			/*Trim bias for REF*/
#define BITP_BIAS_TRIM2_BIAS_TRIM5U4            	6			/*Trim bias for REF*/
#define BITP_BIAS_TRIM2_BIAS_TRIM10U1           	8			/*Trim bias for TBD*/
#define BITP_BIAS_TRIM2_BIAS_TRIM10U2           	10			/*Trim bias to TBD*/
#define BITP_BIAS_TRIM2_BIAS_TRIM10U3           	12			/*Trim bias for LED driver*/
#define BITP_BIAS_TRIM2_BIAS_TRIM10U4           	14			/*Trim bias for LED driver*/
#define BITM_BIAS_TRIM2_BIAS_TRIM5U1            	0x0003		/*Trim bias for ADC*/
#define BITM_BIAS_TRIM2_BIAS_TRIM5U2            	0x000c		/*Trim bias for ADC*/
#define BITM_BIAS_TRIM2_BIAS_TRIM5U3            	0x0030		/*Trim bias for REF*/
#define BITM_BIAS_TRIM2_BIAS_TRIM5U4            	0x00c0		/*Trim bias for REF*/
#define BITM_BIAS_TRIM2_BIAS_TRIM10U1           	0x0300		/*Trim bias for TBD*/
#define BITM_BIAS_TRIM2_BIAS_TRIM10U2           	0x0c00		/*Trim bias to TBD*/
#define BITM_BIAS_TRIM2_BIAS_TRIM10U3           	0x3000		/*Trim bias for LED driver*/
#define BITM_BIAS_TRIM2_BIAS_TRIM10U4           	0xc000		/*Trim bias for LED driver*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_BG_CTRL						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_BG_CTRL_BG_TRIM                    	0			/*Trim bandgap current output*/
#define BITP_BG_CTRL_AFE_TRIM_BPF               	4			/*Global bpf trim*/
#define BITM_BG_CTRL_BG_TRIM                    	0x000f		/*Trim bandgap current output*/
#define BITM_BG_CTRL_AFE_TRIM_BPF               	0x0030		/*Global bpf trim*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_POWER_FRC						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_POWER_FRC_PWR_TIA1             	0			/*Channel1 TIA Amp power force control*/
#define BITP_AFE_POWER_FRC_PWR_TIA2             	2			/*Channel2 TIA Amp power force control*/
#define BITP_AFE_POWER_FRC_PWR_INT1             	4			/*Channel1 Integrator Amp power force control*/
#define BITP_AFE_POWER_FRC_PWR_INT2             	6			/*Channel2 Integrator Amp power force control*/
#define BITP_AFE_POWER_FRC_PWR_BPF1             	8			/*Channel1 BPF Amp power force control*/
#define BITP_AFE_POWER_FRC_PWR_BPF2             	10			/*Channel2 BPF Amp power force control*/
#define BITP_AFE_POWER_FRC_PWR_AFE_VREF         	12			/*AFE vref power force control*/
#define BITP_AFE_POWER_FRC_PWR_VICMREF          	14			/*Channel2 TIA Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_TIA1             	0x0003		/*Channel1 TIA Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_TIA2             	0x000c		/*Channel2 TIA Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_INT1             	0x0030		/*Channel1 Integrator Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_INT2             	0x00c0		/*Channel2 Integrator Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_BPF1             	0x0300		/*Channel1 BPF Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_BPF2             	0x0c00		/*Channel2 BPF Amp power force control*/
#define BITM_AFE_POWER_FRC_PWR_AFE_VREF         	0x3000		/*AFE vref power force control*/
#define BITM_AFE_POWER_FRC_PWR_VICMREF          	0xc000		/*Channel2 TIA Amp power force control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_REF_POWER_FRC						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_REF_POWER_FRC_PWR_BG               	0			/*Bandgap power force control*/
#define BITP_REF_POWER_FRC_PWR_BIAS             	2			/*Bias distribution power force control*/
#define BITP_REF_POWER_FRC_PWR_ADC              	4			/*ADC power force control*/
#define BITP_REF_POWER_FRC_PWR_ADC_VREF         	6			/*ADC vref power force control*/
#define BITM_REF_POWER_FRC_PWR_BG               	0x0003		/*Bandgap power force control*/
#define BITM_REF_POWER_FRC_PWR_BIAS             	0x000c		/*Bias distribution power force control*/
#define BITM_REF_POWER_FRC_PWR_ADC              	0x0030		/*ADC power force control*/
#define BITM_REF_POWER_FRC_PWR_ADC_VREF         	0x00c0		/*ADC vref power force control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POWER_FRC						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POWER_FRC_PWR_LED1A            	0			/*Led1A Amp  power force control*/
#define BITP_LED_POWER_FRC_PWR_LED1B            	2			/*Led1B Amp  power force control*/
#define BITP_LED_POWER_FRC_PWR_LED2A            	4			/*Led2A Amp  power force control*/
#define BITP_LED_POWER_FRC_PWR_LED2B            	6			/*Led2B Amp  power force control*/
#define BITP_LED_POWER_FRC_PWR_LED3A            	8			/*Led3A Amp  power force control*/
#define BITP_LED_POWER_FRC_PWR_LED3B            	10			/*Led3B Amp  power force control*/
#define BITP_LED_POWER_FRC_PWR_LED4A            	12			/*Led4A Amp  power force control*/
#define BITP_LED_POWER_FRC_PWR_LED4B            	14			/*Led4B Amp  power force control*/
#define BITM_LED_POWER_FRC_PWR_LED1A            	0x0003		/*Led1A Amp  power force control*/
#define BITM_LED_POWER_FRC_PWR_LED1B            	0x000c		/*Led1B Amp  power force control*/
#define BITM_LED_POWER_FRC_PWR_LED2A            	0x0030		/*Led2A Amp  power force control*/
#define BITM_LED_POWER_FRC_PWR_LED2B            	0x00c0		/*Led2B Amp  power force control*/
#define BITM_LED_POWER_FRC_PWR_LED3A            	0x0300		/*Led3A Amp  power force control*/
#define BITM_LED_POWER_FRC_PWR_LED3B            	0x0c00		/*Led3B Amp  power force control*/
#define BITM_LED_POWER_FRC_PWR_LED4A            	0x3000		/*Led4A Amp  power force control*/
#define BITM_LED_POWER_FRC_PWR_LED4B            	0xc000		/*Led4B Amp  power force control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_TRIM						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_TRIM_LED1_ISEL                 	0			/*Led slew control for LED1 output pair*/
#define BITP_LED_TRIM_LED2_ISEL                 	2			/*Led slew control for LED2 output pair*/
#define BITP_LED_TRIM_LED3_ISEL                 	4			/*Led slew control for LED3 output pair*/
#define BITP_LED_TRIM_LED4_ISEL                 	6			/*Led slew control for LED4 output pair*/
#define BITM_LED_TRIM_LED1_ISEL                 	0x0003		/*Led slew control for LED1 output pair*/
#define BITM_LED_TRIM_LED2_ISEL                 	0x000c		/*Led slew control for LED2 output pair*/
#define BITM_LED_TRIM_LED3_ISEL                 	0x0030		/*Led slew control for LED3 output pair*/
#define BITM_LED_TRIM_LED4_ISEL                 	0x00c0		/*Led slew control for LED4 output pair*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_A_TIMESLOT_OFFSET_A        	0			/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_A_INPUT_R_SELECT_A         	10			/*Input resistor select*/
#define BITP_TS_CTRL_A_SAMPLE_TYPE_A            	12			/*Timeslot Sampling Type*/
#define BITP_TS_CTRL_A_CH2_EN_A                 	14			/*Channel 2 enable*/
#define BITM_TS_CTRL_A_TIMESLOT_OFFSET_A        	0x03ff		/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_A_INPUT_R_SELECT_A         	0x0c00		/*Input resistor select*/
#define BITM_TS_CTRL_A_SAMPLE_TYPE_A            	0x3000		/*Timeslot Sampling Type*/
#define BITM_TS_CTRL_A_CH2_EN_A                 	0x4000		/*Channel 2 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_A_AFE_PATH_CFG_A           	0			/*Bypass and input mux select*/
#define BITP_TS_PATH_A_PRE_WIDTH_A              	12			/*Precondition duration for this timeslot.*/
#define BITM_TS_PATH_A_AFE_PATH_CFG_A           	0x01ff		/*Bypass and input mux select*/
#define BITM_TS_PATH_A_PRE_WIDTH_A              	0xf000		/*Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_A_INP12_A                   	0			/*Input pair12 enable*/
#define BITP_INPUTS_A_INP34_A                   	4			/*Input pair34 enable*/
#define BITP_INPUTS_A_INP56_A                   	8			/*Input pair56 enable*/
#define BITP_INPUTS_A_INP78_A                   	12			/*input pair78 enable*/
#define BITM_INPUTS_A_INP12_A                   	0x000f		/*Input pair12 enable*/
#define BITM_INPUTS_A_INP34_A                   	0x00f0		/*Input pair34 enable*/
#define BITM_INPUTS_A_INP56_A                   	0x0f00		/*Input pair56 enable*/
#define BITM_INPUTS_A_INP78_A                   	0xf000		/*input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_A_VC1_SEL_A                	0			/*VC1 active state for this timeslot*/
#define BITP_CATHODE_A_VC1_ALT_A                	2			/*VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_A_VC1_PULSE_A              	4			/*VC1 pulse control*/
#define BITP_CATHODE_A_VC2_SEL_A                	6			/*VC2 active state for this timeslot*/
#define BITP_CATHODE_A_VC2_ALT_A                	8			/*VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_A_VC2_PULSE_A              	10			/*VC2 pulse control*/
#define BITP_CATHODE_A_PRECON_A                 	12			/*Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_A_VC1_SEL_A                	0x0003		/*VC1 active state for this timeslot*/
#define BITM_CATHODE_A_VC1_ALT_A                	0x000c		/*VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_A_VC1_PULSE_A              	0x0030		/*VC1 pulse control*/
#define BITM_CATHODE_A_VC2_SEL_A                	0x00c0		/*VC2 active state for this timeslot*/
#define BITM_CATHODE_A_VC2_ALT_A                	0x0300		/*VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_A_VC2_PULSE_A              	0x0c00		/*VC2 pulse control*/
#define BITM_CATHODE_A_PRECON_A                 	0x7000		/*Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_A_TIA_GAIN_CH1_A          	0			/*Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_A_TIA_GAIN_CH2_A          	3			/*Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_A_VREF_PULSE_VAL_A        	6			/*Vref pulse alternate value*/
#define BITP_AFE_TRIM_A_AFE_TRIM_VREF_A         	8			/*Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_A_VREF_PULSE_A            	10			/*Vref pulse control*/
#define BITP_AFE_TRIM_A_AFE_TRIM_INT_A          	11			/*Integrator resistor and capacitor select*/
#define BITM_AFE_TRIM_A_TIA_GAIN_CH1_A          	0x0007		/*Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_A_TIA_GAIN_CH2_A          	0x0038		/*Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_A_VREF_PULSE_VAL_A        	0x00c0		/*Vref pulse alternate value*/
#define BITM_AFE_TRIM_A_AFE_TRIM_VREF_A         	0x0300		/*Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_A_VREF_PULSE_A            	0x0400		/*Vref pulse control*/
#define BITM_AFE_TRIM_A_AFE_TRIM_INT_A          	0xf800		/*Integrator resistor and capacitor select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_A_LED_CURRENT1_A         	0			/*Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_A_LED_DRIVESIDE1_A       	7			/*Led output select for LED1*/
#define BITP_LED_POW12_A_LED_CURRENT2_A         	8			/*Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_A_LED_DRIVESIDE2_A       	15			/*Led output select for LED2*/
#define BITM_LED_POW12_A_LED_CURRENT1_A         	0x007f		/*Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_A_LED_DRIVESIDE1_A       	0x0080		/*Led output select for LED1*/
#define BITM_LED_POW12_A_LED_CURRENT2_A         	0x7f00		/*Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_A_LED_DRIVESIDE2_A       	0x8000		/*Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_A_LED_CURRENT3_A         	0			/*Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_A_LED_DRIVESIDE3_A       	7			/*Led output select for LED3*/
#define BITP_LED_POW34_A_LED_CURRENT4_A         	8			/*Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_A_LED_DRIVESIDE4_A       	15			/*Led output select for LED4*/
#define BITM_LED_POW34_A_LED_CURRENT3_A         	0x007f		/*Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_A_LED_DRIVESIDE3_A       	0x0080		/*Led output select for LED3*/
#define BITM_LED_POW34_A_LED_CURRENT4_A         	0x7f00		/*Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_A_LED_DRIVESIDE4_A       	0x8000		/*Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_A_NUM_REPEAT_A              	0			/*Number of sequence repeats.*/
#define BITP_COUNTS_A_NUM_INT_A                 	8			/*Number of ADC cycles or acquisition width*/
#define BITM_COUNTS_A_NUM_REPEAT_A              	0x00ff		/*Number of sequence repeats.*/
#define BITM_COUNTS_A_NUM_INT_A                 	0xff00		/*Number of ADC cycles or acquisition width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_A_MIN_PERIOD_A              	0			/*Minimum Period for pulse repetition.*/
#define BITP_PERIOD_A_MOD_TYPE_A                	12			/*Modulation Connection type*/
#define BITM_PERIOD_A_MIN_PERIOD_A              	0x03ff		/*Minimum Period for pulse repetition.*/
#define BITM_PERIOD_A_MOD_TYPE_A                	0x3000		/*Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_A_LED_OFFSET_A           	0			/*LED pulse offset*/
#define BITP_LED_PULSE_A_LED_WIDTH_A            	8			/*LED pulse width*/
#define BITM_LED_PULSE_A_LED_OFFSET_A           	0x00ff		/*LED pulse offset*/
#define BITM_LED_PULSE_A_LED_WIDTH_A            	0xff00		/*LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_A_INTEG_WIDTH_A        	0			/*Integrator clock width*/
#define BITP_INTEG_WIDTH_A_ADC_COUNT_A          	6			/*ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_A_CH1_AMP_DISABLE_A    	8			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_A_AFE_INT_C_BUF_A      	11			/*Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_A_CH2_AMP_DISABLE_A    	12			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_A_SINGLE_INTEG_A       	15			/*Use single integrator pulse*/
#define BITM_INTEG_WIDTH_A_INTEG_WIDTH_A        	0x001f		/*Integrator clock width*/
#define BITM_INTEG_WIDTH_A_ADC_COUNT_A          	0x00c0		/*ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_A_CH1_AMP_DISABLE_A    	0x0700		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_A_AFE_INT_C_BUF_A      	0x0800		/*Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_A_CH2_AMP_DISABLE_A    	0x7000		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_A_SINGLE_INTEG_A       	0x8000		/*Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_A_INTEG_OFFSET_A      	0			/*Integrator clock coarse offset*/
#define BITP_INTEG_OFFSET_A_INTEG_FINE_OFFSET_A 	8			/*Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_A_INTEG_OFFSET_A      	0x00ff		/*Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_A_INTEG_FINE_OFFSET_A 	0x1f00		/*Integrator clock fine offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_A_MOD_OFFSET_A           	0			/*modulation pulse offset*/
#define BITP_MOD_PULSE_A_MOD_WIDTH_A            	8			/*modulation pulse width.*/
#define BITM_MOD_PULSE_A_MOD_OFFSET_A           	0x00ff		/*modulation pulse offset*/
#define BITM_MOD_PULSE_A_MOD_WIDTH_A            	0xff00		/*modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_A_REVERSE_INTEG_A          	0			/*4 Pulse integration reverse pattern*/
#define BITP_PATTERN_A_SUBTRACT_A               	4			/*4 Pulse subtract pattern*/
#define BITP_PATTERN_A_MOD_DISABLE_A            	8			/*4 Pulse modulation disable pattern*/
#define BITP_PATTERN_A_LED_DISABLE_A            	12			/*4 Pulse LED disable pattern*/
#define BITM_PATTERN_A_REVERSE_INTEG_A          	0x000f		/*4 Pulse integration reverse pattern*/
#define BITM_PATTERN_A_SUBTRACT_A               	0x00f0		/*4 Pulse subtract pattern*/
#define BITM_PATTERN_A_MOD_DISABLE_A            	0x0f00		/*4 Pulse modulation disable pattern*/
#define BITM_PATTERN_A_LED_DISABLE_A            	0xf000		/*4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_A_CH1_ADC_ADJUST_A        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF1_A_CH1_ADC_ADJUST_A        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_A_CH2_ADC_ADJUST_A        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF2_A_CH2_ADC_ADJUST_A        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_A_SIGNAL_SIZE_A              	0			/*Signal data size*/
#define BITP_DATA1_A_SIGNAL_SHIFT_A             	3			/*Signal data shift*/
#define BITP_DATA1_A_DARK_SIZE_A                	8			/*Dark data size*/
#define BITP_DATA1_A_DARK_SHIFT_A               	11			/*Dark data shift*/
#define BITM_DATA1_A_SIGNAL_SIZE_A              	0x0007		/*Signal data size*/
#define BITM_DATA1_A_SIGNAL_SHIFT_A             	0x00f8		/*Signal data shift*/
#define BITM_DATA1_A_DARK_SIZE_A                	0x0700		/*Dark data size*/
#define BITM_DATA1_A_DARK_SHIFT_A               	0xf800		/*Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_A_LIT_SIZE_A                 	0			/*Lit data size*/
#define BITP_DATA2_A_LIT_SHIFT_A                	3			/*Lit data shift*/
#define BITM_DATA2_A_LIT_SIZE_A                 	0x0007		/*Lit data size*/
#define BITM_DATA2_A_LIT_SHIFT_A                	0x00f8		/*Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_A_DECIMATE_TYPE_A         	0			/*Decimation Type Select*/
#define BITP_DECIMATE_A_DECIMATE_FACTOR_A       	4			/*Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_A_DECIMATE_TYPE_A         	0x000f		/*Decimation Type Select*/
#define BITM_DECIMATE_A_DECIMATE_FACTOR_A       	0x07f0		/*Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_A_LIT_OFFSET_A          	0			/*Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_A_LIT_OFFSET_A          	0x01ff		/*Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_A_DARK1_OFFSET_A       	0			/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_A_DARK2_OFFSET_A       	7			/*Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_A_DARK1_OFFSET_A       	0x007f		/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_A_DARK2_OFFSET_A       	0xff80		/*Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_A_THRESH0_TYPE_A        	0			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_A_THRESH0_DIR_A         	2			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_A_THRESH0_CHAN_A        	3			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_A_THRESH1_TYPE_A        	4			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_A_THRESH1_DIR_A         	6			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_A_THRESH1_CHAN_A        	7			/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_A_THRESH0_TYPE_A        	0x0003		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_A_THRESH0_DIR_A         	0x0004		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_A_THRESH0_CHAN_A        	0x0008		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_A_THRESH1_TYPE_A        	0x0030		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_A_THRESH1_DIR_A         	0x0040		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_A_THRESH1_CHAN_A        	0x0080		/*Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_A_THRESH0_VALUE_A          	0			/*Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_A_THRESH0_SHIFT_A          	8			/*Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_A_THRESH0_VALUE_A          	0x00ff		/*Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_A_THRESH0_SHIFT_A          	0x1f00		/*Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_A						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_A_THRESH1_VALUE_A          	0			/*Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_A_THRESH1_SHIFT_A          	8			/*Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_A_THRESH1_VALUE_A          	0x00ff		/*Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_A_THRESH1_SHIFT_A          	0x1f00		/*Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_B_TIMESLOT_OFFSET_B        	0			/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_B_INPUT_R_SELECT_B         	10			/*Input resistor select*/
#define BITP_TS_CTRL_B_SAMPLE_TYPE_B            	12			/*Timeslot Sampling Type*/
#define BITP_TS_CTRL_B_CH2_EN_B                 	14			/*Channel 2 enable*/
#define BITM_TS_CTRL_B_TIMESLOT_OFFSET_B        	0x03ff		/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_B_INPUT_R_SELECT_B         	0x0c00		/*Input resistor select*/
#define BITM_TS_CTRL_B_SAMPLE_TYPE_B            	0x3000		/*Timeslot Sampling Type*/
#define BITM_TS_CTRL_B_CH2_EN_B                 	0x4000		/*Channel 2 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_B_AFE_PATH_CFG_B           	0			/*Bypass and input mux select*/
#define BITP_TS_PATH_B_PRE_WIDTH_B              	12			/*Precondition duration for this timeslot.*/
#define BITM_TS_PATH_B_AFE_PATH_CFG_B           	0x01ff		/*Bypass and input mux select*/
#define BITM_TS_PATH_B_PRE_WIDTH_B              	0xf000		/*Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_B_INP12_B                   	0			/*Input pair12 enable*/
#define BITP_INPUTS_B_INP34_B                   	4			/*Input pair34 enable*/
#define BITP_INPUTS_B_INP56_B                   	8			/*Input pair56 enable*/
#define BITP_INPUTS_B_INP78_B                   	12			/*input pair78 enable*/
#define BITM_INPUTS_B_INP12_B                   	0x000f		/*Input pair12 enable*/
#define BITM_INPUTS_B_INP34_B                   	0x00f0		/*Input pair34 enable*/
#define BITM_INPUTS_B_INP56_B                   	0x0f00		/*Input pair56 enable*/
#define BITM_INPUTS_B_INP78_B                   	0xf000		/*input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_B_VC1_SEL_B                	0			/*VC1 active state for this timeslot*/
#define BITP_CATHODE_B_VC1_ALT_B                	2			/*VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_B_VC1_PULSE_B              	4			/*VC1 pulse control*/
#define BITP_CATHODE_B_VC2_SEL_B                	6			/*VC2 active state for this timeslot*/
#define BITP_CATHODE_B_VC2_ALT_B                	8			/*VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_B_VC2_PULSE_B              	10			/*VC2 pulse control*/
#define BITP_CATHODE_B_PRECON_B                 	12			/*Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_B_VC1_SEL_B                	0x0003		/*VC1 active state for this timeslot*/
#define BITM_CATHODE_B_VC1_ALT_B                	0x000c		/*VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_B_VC1_PULSE_B              	0x0030		/*VC1 pulse control*/
#define BITM_CATHODE_B_VC2_SEL_B                	0x00c0		/*VC2 active state for this timeslot*/
#define BITM_CATHODE_B_VC2_ALT_B                	0x0300		/*VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_B_VC2_PULSE_B              	0x0c00		/*VC2 pulse control*/
#define BITM_CATHODE_B_PRECON_B                 	0x7000		/*Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_B_TIA_GAIN_CH1_B          	0			/*Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_B_TIA_GAIN_CH2_B          	3			/*Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_B_VREF_PULSE_VAL_B        	6			/*Vref pulse alternate value*/
#define BITP_AFE_TRIM_B_AFE_TRIM_VREF_B         	8			/*Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_B_VREF_PULSE_B            	10			/*Vref pulse control*/
#define BITP_AFE_TRIM_B_AFE_TRIM_INT_B          	11			/*Integrator resistor and capacitor select*/
#define BITM_AFE_TRIM_B_TIA_GAIN_CH1_B          	0x0007		/*Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_B_TIA_GAIN_CH2_B          	0x0038		/*Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_B_VREF_PULSE_VAL_B        	0x00c0		/*Vref pulse alternate value*/
#define BITM_AFE_TRIM_B_AFE_TRIM_VREF_B         	0x0300		/*Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_B_VREF_PULSE_B            	0x0400		/*Vref pulse control*/
#define BITM_AFE_TRIM_B_AFE_TRIM_INT_B          	0xf800		/*Integrator resistor and capacitor select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_B_LED_CURRENT1_B         	0			/*Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_B_LED_DRIVESIDE1_B       	7			/*Led output select for LED1*/
#define BITP_LED_POW12_B_LED_CURRENT2_B         	8			/*Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_B_LED_DRIVESIDE2_B       	15			/*Led output select for LED2*/
#define BITM_LED_POW12_B_LED_CURRENT1_B         	0x007f		/*Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_B_LED_DRIVESIDE1_B       	0x0080		/*Led output select for LED1*/
#define BITM_LED_POW12_B_LED_CURRENT2_B         	0x7f00		/*Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_B_LED_DRIVESIDE2_B       	0x8000		/*Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_B_LED_CURRENT3_B         	0			/*Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_B_LED_DRIVESIDE3_B       	7			/*Led output select for LED3*/
#define BITP_LED_POW34_B_LED_CURRENT4_B         	8			/*Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_B_LED_DRIVESIDE4_B       	15			/*Led output select for LED4*/
#define BITM_LED_POW34_B_LED_CURRENT3_B         	0x007f		/*Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_B_LED_DRIVESIDE3_B       	0x0080		/*Led output select for LED3*/
#define BITM_LED_POW34_B_LED_CURRENT4_B         	0x7f00		/*Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_B_LED_DRIVESIDE4_B       	0x8000		/*Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_B_NUM_REPEAT_B              	0			/*Number of sequence repeats.*/
#define BITP_COUNTS_B_NUM_INT_B                 	8			/*Number of ADC cycles or acquisition width*/
#define BITM_COUNTS_B_NUM_REPEAT_B              	0x00ff		/*Number of sequence repeats.*/
#define BITM_COUNTS_B_NUM_INT_B                 	0xff00		/*Number of ADC cycles or acquisition width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_B_MIN_PERIOD_B              	0			/*Minimum Period for pulse repetition.*/
#define BITP_PERIOD_B_MOD_TYPE_B                	12			/*Modulation Connection type*/
#define BITM_PERIOD_B_MIN_PERIOD_B              	0x03ff		/*Minimum Period for pulse repetition.*/
#define BITM_PERIOD_B_MOD_TYPE_B                	0x3000		/*Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_B_LED_OFFSET_B           	0			/*LED pulse offset*/
#define BITP_LED_PULSE_B_LED_WIDTH_B            	8			/*LED pulse width*/
#define BITM_LED_PULSE_B_LED_OFFSET_B           	0x00ff		/*LED pulse offset*/
#define BITM_LED_PULSE_B_LED_WIDTH_B            	0xff00		/*LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_B_INTEG_WIDTH_B        	0			/*Integrator clock width*/
#define BITP_INTEG_WIDTH_B_ADC_COUNT_B          	6			/*ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_B_CH1_AMP_DISABLE_B    	8			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_B_AFE_INT_C_BUF_B      	11			/*Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_B_CH2_AMP_DISABLE_B    	12			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_B_SINGLE_INTEG_B       	15			/*Use single integrator pulse*/
#define BITM_INTEG_WIDTH_B_INTEG_WIDTH_B        	0x001f		/*Integrator clock width*/
#define BITM_INTEG_WIDTH_B_ADC_COUNT_B          	0x00c0		/*ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_B_CH1_AMP_DISABLE_B    	0x0700		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_B_AFE_INT_C_BUF_B      	0x0800		/*Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_B_CH2_AMP_DISABLE_B    	0x7000		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_B_SINGLE_INTEG_B       	0x8000		/*Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_B_INTEG_OFFSET_B      	0			/*Integrator clock coarse offset*/
#define BITP_INTEG_OFFSET_B_INTEG_FINE_OFFSET_B 	8			/*Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_B_INTEG_OFFSET_B      	0x00ff		/*Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_B_INTEG_FINE_OFFSET_B 	0x1f00		/*Integrator clock fine offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_B_MOD_OFFSET_B           	0			/*modulation pulse offset*/
#define BITP_MOD_PULSE_B_MOD_WIDTH_B            	8			/*modulation pulse width.*/
#define BITM_MOD_PULSE_B_MOD_OFFSET_B           	0x00ff		/*modulation pulse offset*/
#define BITM_MOD_PULSE_B_MOD_WIDTH_B            	0xff00		/*modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_B_REVERSE_INTEG_B          	0			/*4 Pulse integration reverse pattern*/
#define BITP_PATTERN_B_SUBTRACT_B               	4			/*4 Pulse subtract pattern*/
#define BITP_PATTERN_B_MOD_DISABLE_B            	8			/*4 Pulse modulation disable pattern*/
#define BITP_PATTERN_B_LED_DISABLE_B            	12			/*4 Pulse LED disable pattern*/
#define BITM_PATTERN_B_REVERSE_INTEG_B          	0x000f		/*4 Pulse integration reverse pattern*/
#define BITM_PATTERN_B_SUBTRACT_B               	0x00f0		/*4 Pulse subtract pattern*/
#define BITM_PATTERN_B_MOD_DISABLE_B            	0x0f00		/*4 Pulse modulation disable pattern*/
#define BITM_PATTERN_B_LED_DISABLE_B            	0xf000		/*4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_B_CH1_ADC_ADJUST_B        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF1_B_CH1_ADC_ADJUST_B        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_B_CH2_ADC_ADJUST_B        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF2_B_CH2_ADC_ADJUST_B        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_B_SIGNAL_SIZE_B              	0			/*Signal data size*/
#define BITP_DATA1_B_SIGNAL_SHIFT_B             	3			/*Signal data shift*/
#define BITP_DATA1_B_DARK_SIZE_B                	8			/*Dark data size*/
#define BITP_DATA1_B_DARK_SHIFT_B               	11			/*Dark data shift*/
#define BITM_DATA1_B_SIGNAL_SIZE_B              	0x0007		/*Signal data size*/
#define BITM_DATA1_B_SIGNAL_SHIFT_B             	0x00f8		/*Signal data shift*/
#define BITM_DATA1_B_DARK_SIZE_B                	0x0700		/*Dark data size*/
#define BITM_DATA1_B_DARK_SHIFT_B               	0xf800		/*Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_B_LIT_SIZE_B                 	0			/*Lit data size*/
#define BITP_DATA2_B_LIT_SHIFT_B                	3			/*Lit data shift*/
#define BITM_DATA2_B_LIT_SIZE_B                 	0x0007		/*Lit data size*/
#define BITM_DATA2_B_LIT_SHIFT_B                	0x00f8		/*Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_B_DECIMATE_TYPE_B         	0			/*Decimation Type Select*/
#define BITP_DECIMATE_B_DECIMATE_FACTOR_B       	4			/*Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_B_DECIMATE_TYPE_B         	0x000f		/*Decimation Type Select*/
#define BITM_DECIMATE_B_DECIMATE_FACTOR_B       	0x07f0		/*Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_B_LIT_OFFSET_B          	0			/*Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_B_LIT_OFFSET_B          	0x01ff		/*Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_B_DARK1_OFFSET_B       	0			/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_B_DARK2_OFFSET_B       	7			/*Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_B_DARK1_OFFSET_B       	0x007f		/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_B_DARK2_OFFSET_B       	0xff80		/*Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_B_THRESH0_TYPE_B        	0			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_B_THRESH0_DIR_B         	2			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_B_THRESH0_CHAN_B        	3			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_B_THRESH1_TYPE_B        	4			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_B_THRESH1_DIR_B         	6			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_B_THRESH1_CHAN_B        	7			/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_B_THRESH0_TYPE_B        	0x0003		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_B_THRESH0_DIR_B         	0x0004		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_B_THRESH0_CHAN_B        	0x0008		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_B_THRESH1_TYPE_B        	0x0030		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_B_THRESH1_DIR_B         	0x0040		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_B_THRESH1_CHAN_B        	0x0080		/*Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_B_THRESH0_VALUE_B          	0			/*Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_B_THRESH0_SHIFT_B          	8			/*Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_B_THRESH0_VALUE_B          	0x00ff		/*Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_B_THRESH0_SHIFT_B          	0x1f00		/*Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_B						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_B_THRESH1_VALUE_B          	0			/*Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_B_THRESH1_SHIFT_B          	8			/*Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_B_THRESH1_VALUE_B          	0x00ff		/*Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_B_THRESH1_SHIFT_B          	0x1f00		/*Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_C_TIMESLOT_OFFSET_C        	0			/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_C_INPUT_R_SELECT_C         	10			/*Input resistor select*/
#define BITP_TS_CTRL_C_SAMPLE_TYPE_C            	12			/*Timeslot Sampling Type*/
#define BITP_TS_CTRL_C_CH2_EN_C                 	14			/*Channel 2 enable*/
#define BITM_TS_CTRL_C_TIMESLOT_OFFSET_C        	0x03ff		/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_C_INPUT_R_SELECT_C         	0x0c00		/*Input resistor select*/
#define BITM_TS_CTRL_C_SAMPLE_TYPE_C            	0x3000		/*Timeslot Sampling Type*/
#define BITM_TS_CTRL_C_CH2_EN_C                 	0x4000		/*Channel 2 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_C_AFE_PATH_CFG_C           	0			/*Bypass and input mux select*/
#define BITP_TS_PATH_C_PRE_WIDTH_C              	12			/*Precondition duration for this timeslot.*/
#define BITM_TS_PATH_C_AFE_PATH_CFG_C           	0x01ff		/*Bypass and input mux select*/
#define BITM_TS_PATH_C_PRE_WIDTH_C              	0xf000		/*Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_C_INP12_C                   	0			/*Input pair12 enable*/
#define BITP_INPUTS_C_INP34_C                   	4			/*Input pair34 enable*/
#define BITP_INPUTS_C_INP56_C                   	8			/*Input pair56 enable*/
#define BITP_INPUTS_C_INP78_C                   	12			/*input pair78 enable*/
#define BITM_INPUTS_C_INP12_C                   	0x000f		/*Input pair12 enable*/
#define BITM_INPUTS_C_INP34_C                   	0x00f0		/*Input pair34 enable*/
#define BITM_INPUTS_C_INP56_C                   	0x0f00		/*Input pair56 enable*/
#define BITM_INPUTS_C_INP78_C                   	0xf000		/*input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_C_VC1_SEL_C                	0			/*VC1 active state for this timeslot*/
#define BITP_CATHODE_C_VC1_ALT_C                	2			/*VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_C_VC1_PULSE_C              	4			/*VC1 pulse control*/
#define BITP_CATHODE_C_VC2_SEL_C                	6			/*VC2 active state for this timeslot*/
#define BITP_CATHODE_C_VC2_ALT_C                	8			/*VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_C_VC2_PULSE_C              	10			/*VC2 pulse control*/
#define BITP_CATHODE_C_PRECON_C                 	12			/*Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_C_VC1_SEL_C                	0x0003		/*VC1 active state for this timeslot*/
#define BITM_CATHODE_C_VC1_ALT_C                	0x000c		/*VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_C_VC1_PULSE_C              	0x0030		/*VC1 pulse control*/
#define BITM_CATHODE_C_VC2_SEL_C                	0x00c0		/*VC2 active state for this timeslot*/
#define BITM_CATHODE_C_VC2_ALT_C                	0x0300		/*VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_C_VC2_PULSE_C              	0x0c00		/*VC2 pulse control*/
#define BITM_CATHODE_C_PRECON_C                 	0x7000		/*Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_C_TIA_GAIN_CH1_C          	0			/*Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_C_TIA_GAIN_CH2_C          	3			/*Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_C_VREF_PULSE_VAL_C        	6			/*Vref pulse alternate value*/
#define BITP_AFE_TRIM_C_AFE_TRIM_VREF_C         	8			/*Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_C_VREF_PULSE_C            	10			/*Vref pulse control*/
#define BITP_AFE_TRIM_C_AFE_TRIM_INT_C          	11			/*Integrator resistor and capacitor select*/
#define BITM_AFE_TRIM_C_TIA_GAIN_CH1_C          	0x0007		/*Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_C_TIA_GAIN_CH2_C          	0x0038		/*Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_C_VREF_PULSE_VAL_C        	0x00c0		/*Vref pulse alternate value*/
#define BITM_AFE_TRIM_C_AFE_TRIM_VREF_C         	0x0300		/*Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_C_VREF_PULSE_C            	0x0400		/*Vref pulse control*/
#define BITM_AFE_TRIM_C_AFE_TRIM_INT_C          	0xf800		/*Integrator resistor and capacitor select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_C_LED_CURRENT1_C         	0			/*Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_C_LED_DRIVESIDE1_C       	7			/*Led output select for LED1*/
#define BITP_LED_POW12_C_LED_CURRENT2_C         	8			/*Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_C_LED_DRIVESIDE2_C       	15			/*Led output select for LED2*/
#define BITM_LED_POW12_C_LED_CURRENT1_C         	0x007f		/*Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_C_LED_DRIVESIDE1_C       	0x0080		/*Led output select for LED1*/
#define BITM_LED_POW12_C_LED_CURRENT2_C         	0x7f00		/*Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_C_LED_DRIVESIDE2_C       	0x8000		/*Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_C_LED_CURRENT3_C         	0			/*Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_C_LED_DRIVESIDE3_C       	7			/*Led output select for LED3*/
#define BITP_LED_POW34_C_LED_CURRENT4_C         	8			/*Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_C_LED_DRIVESIDE4_C       	15			/*Led output select for LED4*/
#define BITM_LED_POW34_C_LED_CURRENT3_C         	0x007f		/*Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_C_LED_DRIVESIDE3_C       	0x0080		/*Led output select for LED3*/
#define BITM_LED_POW34_C_LED_CURRENT4_C         	0x7f00		/*Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_C_LED_DRIVESIDE4_C       	0x8000		/*Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_C_NUM_REPEAT_C              	0			/*Number of sequence repeats.*/
#define BITP_COUNTS_C_NUM_INT_C                 	8			/*Number of ADC cycles or acquisition width*/
#define BITM_COUNTS_C_NUM_REPEAT_C              	0x00ff		/*Number of sequence repeats.*/
#define BITM_COUNTS_C_NUM_INT_C                 	0xff00		/*Number of ADC cycles or acquisition width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_C_MIN_PERIOD_C              	0			/*Minimum Period for pulse repetition.*/
#define BITP_PERIOD_C_MOD_TYPE_C                	12			/*Modulation Connection type*/
#define BITM_PERIOD_C_MIN_PERIOD_C              	0x03ff		/*Minimum Period for pulse repetition.*/
#define BITM_PERIOD_C_MOD_TYPE_C                	0x3000		/*Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_C_LED_OFFSET_C           	0			/*LED pulse offset*/
#define BITP_LED_PULSE_C_LED_WIDTH_C            	8			/*LED pulse width*/
#define BITM_LED_PULSE_C_LED_OFFSET_C           	0x00ff		/*LED pulse offset*/
#define BITM_LED_PULSE_C_LED_WIDTH_C            	0xff00		/*LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_C_INTEG_WIDTH_C        	0			/*Integrator clock width*/
#define BITP_INTEG_WIDTH_C_ADC_COUNT_C          	6			/*ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_C_CH1_AMP_DISABLE_C    	8			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_C_AFE_INT_C_BUF_C      	11			/*Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_C_CH2_AMP_DISABLE_C    	12			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_C_SINGLE_INTEG_C       	15			/*Use single integrator pulse*/
#define BITM_INTEG_WIDTH_C_INTEG_WIDTH_C        	0x001f		/*Integrator clock width*/
#define BITM_INTEG_WIDTH_C_ADC_COUNT_C          	0x00c0		/*ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_C_CH1_AMP_DISABLE_C    	0x0700		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_C_AFE_INT_C_BUF_C      	0x0800		/*Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_C_CH2_AMP_DISABLE_C    	0x7000		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_C_SINGLE_INTEG_C       	0x8000		/*Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_C_INTEG_OFFSET_C      	0			/*Integrator clock coarse offset*/
#define BITP_INTEG_OFFSET_C_INTEG_FINE_OFFSET_C 	8			/*Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_C_INTEG_OFFSET_C      	0x00ff		/*Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_C_INTEG_FINE_OFFSET_C 	0x1f00		/*Integrator clock fine offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_C_MOD_OFFSET_C           	0			/*modulation pulse offset*/
#define BITP_MOD_PULSE_C_MOD_WIDTH_C            	8			/*modulation pulse width.*/
#define BITM_MOD_PULSE_C_MOD_OFFSET_C           	0x00ff		/*modulation pulse offset*/
#define BITM_MOD_PULSE_C_MOD_WIDTH_C            	0xff00		/*modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_C_REVERSE_INTEG_C          	0			/*4 Pulse integration reverse pattern*/
#define BITP_PATTERN_C_SUBTRACT_C               	4			/*4 Pulse subtract pattern*/
#define BITP_PATTERN_C_MOD_DISABLE_C            	8			/*4 Pulse modulation disable pattern*/
#define BITP_PATTERN_C_LED_DISABLE_C            	12			/*4 Pulse LED disable pattern*/
#define BITM_PATTERN_C_REVERSE_INTEG_C          	0x000f		/*4 Pulse integration reverse pattern*/
#define BITM_PATTERN_C_SUBTRACT_C               	0x00f0		/*4 Pulse subtract pattern*/
#define BITM_PATTERN_C_MOD_DISABLE_C            	0x0f00		/*4 Pulse modulation disable pattern*/
#define BITM_PATTERN_C_LED_DISABLE_C            	0xf000		/*4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_C_CH1_ADC_ADJUST_C        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF1_C_CH1_ADC_ADJUST_C        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_C_CH2_ADC_ADJUST_C        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF2_C_CH2_ADC_ADJUST_C        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_C_SIGNAL_SIZE_C              	0			/*Signal data size*/
#define BITP_DATA1_C_SIGNAL_SHIFT_C             	3			/*Signal data shift*/
#define BITP_DATA1_C_DARK_SIZE_C                	8			/*Dark data size*/
#define BITP_DATA1_C_DARK_SHIFT_C               	11			/*Dark data shift*/
#define BITM_DATA1_C_SIGNAL_SIZE_C              	0x0007		/*Signal data size*/
#define BITM_DATA1_C_SIGNAL_SHIFT_C             	0x00f8		/*Signal data shift*/
#define BITM_DATA1_C_DARK_SIZE_C                	0x0700		/*Dark data size*/
#define BITM_DATA1_C_DARK_SHIFT_C               	0xf800		/*Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_C_LIT_SIZE_C                 	0			/*Lit data size*/
#define BITP_DATA2_C_LIT_SHIFT_C                	3			/*Lit data shift*/
#define BITM_DATA2_C_LIT_SIZE_C                 	0x0007		/*Lit data size*/
#define BITM_DATA2_C_LIT_SHIFT_C                	0x00f8		/*Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_C_DECIMATE_TYPE_C         	0			/*Decimation Type Select*/
#define BITP_DECIMATE_C_DECIMATE_FACTOR_C       	4			/*Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_C_DECIMATE_TYPE_C         	0x000f		/*Decimation Type Select*/
#define BITM_DECIMATE_C_DECIMATE_FACTOR_C       	0x07f0		/*Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_C_LIT_OFFSET_C          	0			/*Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_C_LIT_OFFSET_C          	0x01ff		/*Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_C_DARK1_OFFSET_C       	0			/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_C_DARK2_OFFSET_C       	7			/*Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_C_DARK1_OFFSET_C       	0x007f		/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_C_DARK2_OFFSET_C       	0xff80		/*Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_C_THRESH0_TYPE_C        	0			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_C_THRESH0_DIR_C         	2			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_C_THRESH0_CHAN_C        	3			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_C_THRESH1_TYPE_C        	4			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_C_THRESH1_DIR_C         	6			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_C_THRESH1_CHAN_C        	7			/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_C_THRESH0_TYPE_C        	0x0003		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_C_THRESH0_DIR_C         	0x0004		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_C_THRESH0_CHAN_C        	0x0008		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_C_THRESH1_TYPE_C        	0x0030		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_C_THRESH1_DIR_C         	0x0040		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_C_THRESH1_CHAN_C        	0x0080		/*Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_C_THRESH0_VALUE_C          	0			/*Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_C_THRESH0_SHIFT_C          	8			/*Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_C_THRESH0_VALUE_C          	0x00ff		/*Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_C_THRESH0_SHIFT_C          	0x1f00		/*Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_C						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_C_THRESH1_VALUE_C          	0			/*Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_C_THRESH1_SHIFT_C          	8			/*Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_C_THRESH1_VALUE_C          	0x00ff		/*Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_C_THRESH1_SHIFT_C          	0x1f00		/*Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_D_TIMESLOT_OFFSET_D        	0			/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_D_INPUT_R_SELECT_D         	10			/*Input resistor select*/
#define BITP_TS_CTRL_D_SAMPLE_TYPE_D            	12			/*Timeslot Sampling Type*/
#define BITP_TS_CTRL_D_CH2_EN_D                 	14			/*Channel 2 enable*/
#define BITM_TS_CTRL_D_TIMESLOT_OFFSET_D        	0x03ff		/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_D_INPUT_R_SELECT_D         	0x0c00		/*Input resistor select*/
#define BITM_TS_CTRL_D_SAMPLE_TYPE_D            	0x3000		/*Timeslot Sampling Type*/
#define BITM_TS_CTRL_D_CH2_EN_D                 	0x4000		/*Channel 2 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_D_AFE_PATH_CFG_D           	0			/*Bypass and input mux select*/
#define BITP_TS_PATH_D_PRE_WIDTH_D              	12			/*Precondition duration for this timeslot.*/
#define BITM_TS_PATH_D_AFE_PATH_CFG_D           	0x01ff		/*Bypass and input mux select*/
#define BITM_TS_PATH_D_PRE_WIDTH_D              	0xf000		/*Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_D_INP12_D                   	0			/*Input pair12 enable*/
#define BITP_INPUTS_D_INP34_D                   	4			/*Input pair34 enable*/
#define BITP_INPUTS_D_INP56_D                   	8			/*Input pair56 enable*/
#define BITP_INPUTS_D_INP78_D                   	12			/*input pair78 enable*/
#define BITM_INPUTS_D_INP12_D                   	0x000f		/*Input pair12 enable*/
#define BITM_INPUTS_D_INP34_D                   	0x00f0		/*Input pair34 enable*/
#define BITM_INPUTS_D_INP56_D                   	0x0f00		/*Input pair56 enable*/
#define BITM_INPUTS_D_INP78_D                   	0xf000		/*input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_D_VC1_SEL_D                	0			/*VC1 active state for this timeslot*/
#define BITP_CATHODE_D_VC1_ALT_D                	2			/*VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_D_VC1_PULSE_D              	4			/*VC1 pulse control*/
#define BITP_CATHODE_D_VC2_SEL_D                	6			/*VC2 active state for this timeslot*/
#define BITP_CATHODE_D_VC2_ALT_D                	8			/*VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_D_VC2_PULSE_D              	10			/*VC2 pulse control*/
#define BITP_CATHODE_D_PRECON_D                 	12			/*Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_D_VC1_SEL_D                	0x0003		/*VC1 active state for this timeslot*/
#define BITM_CATHODE_D_VC1_ALT_D                	0x000c		/*VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_D_VC1_PULSE_D              	0x0030		/*VC1 pulse control*/
#define BITM_CATHODE_D_VC2_SEL_D                	0x00c0		/*VC2 active state for this timeslot*/
#define BITM_CATHODE_D_VC2_ALT_D                	0x0300		/*VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_D_VC2_PULSE_D              	0x0c00		/*VC2 pulse control*/
#define BITM_CATHODE_D_PRECON_D                 	0x7000		/*Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_D_TIA_GAIN_CH1_D          	0			/*Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_D_TIA_GAIN_CH2_D          	3			/*Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_D_VREF_PULSE_VAL_D        	6			/*Vref pulse alternate value*/
#define BITP_AFE_TRIM_D_AFE_TRIM_VREF_D         	8			/*Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_D_VREF_PULSE_D            	10			/*Vref pulse control*/
#define BITP_AFE_TRIM_D_AFE_TRIM_INT_D          	11			/*Integrator resistor and capacitor select*/
#define BITM_AFE_TRIM_D_TIA_GAIN_CH1_D          	0x0007		/*Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_D_TIA_GAIN_CH2_D          	0x0038		/*Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_D_VREF_PULSE_VAL_D        	0x00c0		/*Vref pulse alternate value*/
#define BITM_AFE_TRIM_D_AFE_TRIM_VREF_D         	0x0300		/*Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_D_VREF_PULSE_D            	0x0400		/*Vref pulse control*/
#define BITM_AFE_TRIM_D_AFE_TRIM_INT_D          	0xf800		/*Integrator resistor and capacitor select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_D_LED_CURRENT1_D         	0			/*Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_D_LED_DRIVESIDE1_D       	7			/*Led output select for LED1*/
#define BITP_LED_POW12_D_LED_CURRENT2_D         	8			/*Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_D_LED_DRIVESIDE2_D       	15			/*Led output select for LED2*/
#define BITM_LED_POW12_D_LED_CURRENT1_D         	0x007f		/*Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_D_LED_DRIVESIDE1_D       	0x0080		/*Led output select for LED1*/
#define BITM_LED_POW12_D_LED_CURRENT2_D         	0x7f00		/*Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_D_LED_DRIVESIDE2_D       	0x8000		/*Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_D_LED_CURRENT3_D         	0			/*Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_D_LED_DRIVESIDE3_D       	7			/*Led output select for LED3*/
#define BITP_LED_POW34_D_LED_CURRENT4_D         	8			/*Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_D_LED_DRIVESIDE4_D       	15			/*Led output select for LED4*/
#define BITM_LED_POW34_D_LED_CURRENT3_D         	0x007f		/*Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_D_LED_DRIVESIDE3_D       	0x0080		/*Led output select for LED3*/
#define BITM_LED_POW34_D_LED_CURRENT4_D         	0x7f00		/*Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_D_LED_DRIVESIDE4_D       	0x8000		/*Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_D_NUM_REPEAT_D              	0			/*Number of sequence repeats.*/
#define BITP_COUNTS_D_NUM_INT_D                 	8			/*Number of ADC cycles or acquisition width*/
#define BITM_COUNTS_D_NUM_REPEAT_D              	0x00ff		/*Number of sequence repeats.*/
#define BITM_COUNTS_D_NUM_INT_D                 	0xff00		/*Number of ADC cycles or acquisition width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_D_MIN_PERIOD_D              	0			/*Minimum Period for pulse repetition.*/
#define BITP_PERIOD_D_MOD_TYPE_D                	12			/*Modulation Connection type*/
#define BITM_PERIOD_D_MIN_PERIOD_D              	0x03ff		/*Minimum Period for pulse repetition.*/
#define BITM_PERIOD_D_MOD_TYPE_D                	0x3000		/*Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_D_LED_OFFSET_D           	0			/*LED pulse offset*/
#define BITP_LED_PULSE_D_LED_WIDTH_D            	8			/*LED pulse width*/
#define BITM_LED_PULSE_D_LED_OFFSET_D           	0x00ff		/*LED pulse offset*/
#define BITM_LED_PULSE_D_LED_WIDTH_D            	0xff00		/*LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_D_INTEG_WIDTH_D        	0			/*Integrator clock width*/
#define BITP_INTEG_WIDTH_D_ADC_COUNT_D          	6			/*ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_D_CH1_AMP_DISABLE_D    	8			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_D_AFE_INT_C_BUF_D      	11			/*Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_D_CH2_AMP_DISABLE_D    	12			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_D_SINGLE_INTEG_D       	15			/*Use single integrator pulse*/
#define BITM_INTEG_WIDTH_D_INTEG_WIDTH_D        	0x001f		/*Integrator clock width*/
#define BITM_INTEG_WIDTH_D_ADC_COUNT_D          	0x00c0		/*ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_D_CH1_AMP_DISABLE_D    	0x0700		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_D_AFE_INT_C_BUF_D      	0x0800		/*Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_D_CH2_AMP_DISABLE_D    	0x7000		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_D_SINGLE_INTEG_D       	0x8000		/*Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_D_INTEG_OFFSET_D      	0			/*Integrator clock coarse offset*/
#define BITP_INTEG_OFFSET_D_INTEG_FINE_OFFSET_D 	8			/*Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_D_INTEG_OFFSET_D      	0x00ff		/*Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_D_INTEG_FINE_OFFSET_D 	0x1f00		/*Integrator clock fine offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_D_MOD_OFFSET_D           	0			/*modulation pulse offset*/
#define BITP_MOD_PULSE_D_MOD_WIDTH_D            	8			/*modulation pulse width.*/
#define BITM_MOD_PULSE_D_MOD_OFFSET_D           	0x00ff		/*modulation pulse offset*/
#define BITM_MOD_PULSE_D_MOD_WIDTH_D            	0xff00		/*modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_D_REVERSE_INTEG_D          	0			/*4 Pulse integration reverse pattern*/
#define BITP_PATTERN_D_SUBTRACT_D               	4			/*4 Pulse subtract pattern*/
#define BITP_PATTERN_D_MOD_DISABLE_D            	8			/*4 Pulse modulation disable pattern*/
#define BITP_PATTERN_D_LED_DISABLE_D            	12			/*4 Pulse LED disable pattern*/
#define BITM_PATTERN_D_REVERSE_INTEG_D          	0x000f		/*4 Pulse integration reverse pattern*/
#define BITM_PATTERN_D_SUBTRACT_D               	0x00f0		/*4 Pulse subtract pattern*/
#define BITM_PATTERN_D_MOD_DISABLE_D            	0x0f00		/*4 Pulse modulation disable pattern*/
#define BITM_PATTERN_D_LED_DISABLE_D            	0xf000		/*4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_D_CH1_ADC_ADJUST_D        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF1_D_CH1_ADC_ADJUST_D        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_D_CH2_ADC_ADJUST_D        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF2_D_CH2_ADC_ADJUST_D        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_D_SIGNAL_SIZE_D              	0			/*Signal data size*/
#define BITP_DATA1_D_SIGNAL_SHIFT_D             	3			/*Signal data shift*/
#define BITP_DATA1_D_DARK_SIZE_D                	8			/*Dark data size*/
#define BITP_DATA1_D_DARK_SHIFT_D               	11			/*Dark data shift*/
#define BITM_DATA1_D_SIGNAL_SIZE_D              	0x0007		/*Signal data size*/
#define BITM_DATA1_D_SIGNAL_SHIFT_D             	0x00f8		/*Signal data shift*/
#define BITM_DATA1_D_DARK_SIZE_D                	0x0700		/*Dark data size*/
#define BITM_DATA1_D_DARK_SHIFT_D               	0xf800		/*Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_D_LIT_SIZE_D                 	0			/*Lit data size*/
#define BITP_DATA2_D_LIT_SHIFT_D                	3			/*Lit data shift*/
#define BITM_DATA2_D_LIT_SIZE_D                 	0x0007		/*Lit data size*/
#define BITM_DATA2_D_LIT_SHIFT_D                	0x00f8		/*Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_D_DECIMATE_TYPE_D         	0			/*Decimation Type Select*/
#define BITP_DECIMATE_D_DECIMATE_FACTOR_D       	4			/*Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_D_DECIMATE_TYPE_D         	0x000f		/*Decimation Type Select*/
#define BITM_DECIMATE_D_DECIMATE_FACTOR_D       	0x07f0		/*Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_D_LIT_OFFSET_D          	0			/*Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_D_LIT_OFFSET_D          	0x01ff		/*Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_D_DARK1_OFFSET_D       	0			/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_D_DARK2_OFFSET_D       	7			/*Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_D_DARK1_OFFSET_D       	0x007f		/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_D_DARK2_OFFSET_D       	0xff80		/*Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_D_THRESH0_TYPE_D        	0			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_D_THRESH0_DIR_D         	2			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_D_THRESH0_CHAN_D        	3			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_D_THRESH1_TYPE_D        	4			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_D_THRESH1_DIR_D         	6			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_D_THRESH1_CHAN_D        	7			/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_D_THRESH0_TYPE_D        	0x0003		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_D_THRESH0_DIR_D         	0x0004		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_D_THRESH0_CHAN_D        	0x0008		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_D_THRESH1_TYPE_D        	0x0030		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_D_THRESH1_DIR_D         	0x0040		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_D_THRESH1_CHAN_D        	0x0080		/*Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_D_THRESH0_VALUE_D          	0			/*Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_D_THRESH0_SHIFT_D          	8			/*Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_D_THRESH0_VALUE_D          	0x00ff		/*Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_D_THRESH0_SHIFT_D          	0x1f00		/*Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_D						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_D_THRESH1_VALUE_D          	0			/*Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_D_THRESH1_SHIFT_D          	8			/*Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_D_THRESH1_VALUE_D          	0x00ff		/*Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_D_THRESH1_SHIFT_D          	0x1f00		/*Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_E_TIMESLOT_OFFSET_E        	0			/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_E_INPUT_R_SELECT_E         	10			/*Input resistor select*/
#define BITP_TS_CTRL_E_SAMPLE_TYPE_E            	12			/*Timeslot Sampling Type*/
#define BITP_TS_CTRL_E_CH2_EN_E                 	14			/*Channel 2 enable*/
#define BITM_TS_CTRL_E_TIMESLOT_OFFSET_E        	0x03ff		/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_E_INPUT_R_SELECT_E         	0x0c00		/*Input resistor select*/
#define BITM_TS_CTRL_E_SAMPLE_TYPE_E            	0x3000		/*Timeslot Sampling Type*/
#define BITM_TS_CTRL_E_CH2_EN_E                 	0x4000		/*Channel 2 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_E_AFE_PATH_CFG_E           	0			/*Bypass and input mux select*/
#define BITP_TS_PATH_E_PRE_WIDTH_E              	12			/*Precondition duration for this timeslot.*/
#define BITM_TS_PATH_E_AFE_PATH_CFG_E           	0x01ff		/*Bypass and input mux select*/
#define BITM_TS_PATH_E_PRE_WIDTH_E              	0xf000		/*Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_E_INP12_E                   	0			/*Input pair12 enable*/
#define BITP_INPUTS_E_INP34_E                   	4			/*Input pair34 enable*/
#define BITP_INPUTS_E_INP56_E                   	8			/*Input pair56 enable*/
#define BITP_INPUTS_E_INP78_E                   	12			/*input pair78 enable*/
#define BITM_INPUTS_E_INP12_E                   	0x000f		/*Input pair12 enable*/
#define BITM_INPUTS_E_INP34_E                   	0x00f0		/*Input pair34 enable*/
#define BITM_INPUTS_E_INP56_E                   	0x0f00		/*Input pair56 enable*/
#define BITM_INPUTS_E_INP78_E                   	0xf000		/*input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_E_VC1_SEL_E                	0			/*VC1 active state for this timeslot*/
#define BITP_CATHODE_E_VC1_ALT_E                	2			/*VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_E_VC1_PULSE_E              	4			/*VC1 pulse control*/
#define BITP_CATHODE_E_VC2_SEL_E                	6			/*VC2 active state for this timeslot*/
#define BITP_CATHODE_E_VC2_ALT_E                	8			/*VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_E_VC2_PULSE_E              	10			/*VC2 pulse control*/
#define BITP_CATHODE_E_PRECON_E                 	12			/*Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_E_VC1_SEL_E                	0x0003		/*VC1 active state for this timeslot*/
#define BITM_CATHODE_E_VC1_ALT_E                	0x000c		/*VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_E_VC1_PULSE_E              	0x0030		/*VC1 pulse control*/
#define BITM_CATHODE_E_VC2_SEL_E                	0x00c0		/*VC2 active state for this timeslot*/
#define BITM_CATHODE_E_VC2_ALT_E                	0x0300		/*VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_E_VC2_PULSE_E              	0x0c00		/*VC2 pulse control*/
#define BITM_CATHODE_E_PRECON_E                 	0x7000		/*Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_E_TIA_GAIN_CH1_E          	0			/*Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_E_TIA_GAIN_CH2_E          	3			/*Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_E_VREF_PULSE_VAL_E        	6			/*Vref pulse alternate value*/
#define BITP_AFE_TRIM_E_AFE_TRIM_VREF_E         	8			/*Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_E_VREF_PULSE_E            	10			/*Vref pulse control*/
#define BITP_AFE_TRIM_E_AFE_TRIM_INT_E          	11			/*Integrator resistor and capacitor select*/
#define BITM_AFE_TRIM_E_TIA_GAIN_CH1_E          	0x0007		/*Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_E_TIA_GAIN_CH2_E          	0x0038		/*Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_E_VREF_PULSE_VAL_E        	0x00c0		/*Vref pulse alternate value*/
#define BITM_AFE_TRIM_E_AFE_TRIM_VREF_E         	0x0300		/*Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_E_VREF_PULSE_E            	0x0400		/*Vref pulse control*/
#define BITM_AFE_TRIM_E_AFE_TRIM_INT_E          	0xf800		/*Integrator resistor and capacitor select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_E_LED_CURRENT1_E         	0			/*Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_E_LED_DRIVESIDE1_E       	7			/*Led output select for LED1*/
#define BITP_LED_POW12_E_LED_CURRENT2_E         	8			/*Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_E_LED_DRIVESIDE2_E       	15			/*Led output select for LED2*/
#define BITM_LED_POW12_E_LED_CURRENT1_E         	0x007f		/*Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_E_LED_DRIVESIDE1_E       	0x0080		/*Led output select for LED1*/
#define BITM_LED_POW12_E_LED_CURRENT2_E         	0x7f00		/*Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_E_LED_DRIVESIDE2_E       	0x8000		/*Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_E_LED_CURRENT3_E         	0			/*Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_E_LED_DRIVESIDE3_E       	7			/*Led output select for LED3*/
#define BITP_LED_POW34_E_LED_CURRENT4_E         	8			/*Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_E_LED_DRIVESIDE4_E       	15			/*Led output select for LED4*/
#define BITM_LED_POW34_E_LED_CURRENT3_E         	0x007f		/*Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_E_LED_DRIVESIDE3_E       	0x0080		/*Led output select for LED3*/
#define BITM_LED_POW34_E_LED_CURRENT4_E         	0x7f00		/*Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_E_LED_DRIVESIDE4_E       	0x8000		/*Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_E_NUM_REPEAT_E              	0			/*Number of sequence repeats.*/
#define BITP_COUNTS_E_NUM_INT_E                 	8			/*Number of ADC cycles or acquisition width*/
#define BITM_COUNTS_E_NUM_REPEAT_E              	0x00ff		/*Number of sequence repeats.*/
#define BITM_COUNTS_E_NUM_INT_E                 	0xff00		/*Number of ADC cycles or acquisition width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_E_MIN_PERIOD_E              	0			/*Minimum Period for pulse repetition.*/
#define BITP_PERIOD_E_MOD_TYPE_E                	12			/*Modulation Connection type*/
#define BITM_PERIOD_E_MIN_PERIOD_E              	0x03ff		/*Minimum Period for pulse repetition.*/
#define BITM_PERIOD_E_MOD_TYPE_E                	0x3000		/*Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_E_LED_OFFSET_E           	0			/*LED pulse offset*/
#define BITP_LED_PULSE_E_LED_WIDTH_E            	8			/*LED pulse width*/
#define BITM_LED_PULSE_E_LED_OFFSET_E           	0x00ff		/*LED pulse offset*/
#define BITM_LED_PULSE_E_LED_WIDTH_E            	0xff00		/*LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_E_INTEG_WIDTH_E        	0			/*Integrator clock width*/
#define BITP_INTEG_WIDTH_E_ADC_COUNT_E          	6			/*ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_E_CH1_AMP_DISABLE_E    	8			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_E_AFE_INT_C_BUF_E      	11			/*Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_E_CH2_AMP_DISABLE_E    	12			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_E_SINGLE_INTEG_E       	15			/*Use single integrator pulse*/
#define BITM_INTEG_WIDTH_E_INTEG_WIDTH_E        	0x001f		/*Integrator clock width*/
#define BITM_INTEG_WIDTH_E_ADC_COUNT_E          	0x00c0		/*ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_E_CH1_AMP_DISABLE_E    	0x0700		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_E_AFE_INT_C_BUF_E      	0x0800		/*Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_E_CH2_AMP_DISABLE_E    	0x7000		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_E_SINGLE_INTEG_E       	0x8000		/*Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_E_INTEG_OFFSET_E      	0			/*Integrator clock coarse offset*/
#define BITP_INTEG_OFFSET_E_INTEG_FINE_OFFSET_E 	8			/*Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_E_INTEG_OFFSET_E      	0x00ff		/*Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_E_INTEG_FINE_OFFSET_E 	0x1f00		/*Integrator clock fine offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_E_MOD_OFFSET_E           	0			/*modulation pulse offset*/
#define BITP_MOD_PULSE_E_MOD_WIDTH_E            	8			/*modulation pulse width.*/
#define BITM_MOD_PULSE_E_MOD_OFFSET_E           	0x00ff		/*modulation pulse offset*/
#define BITM_MOD_PULSE_E_MOD_WIDTH_E            	0xff00		/*modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_E_REVERSE_INTEG_E          	0			/*4 Pulse integration reverse pattern*/
#define BITP_PATTERN_E_SUBTRACT_E               	4			/*4 Pulse subtract pattern*/
#define BITP_PATTERN_E_MOD_DISABLE_E            	8			/*4 Pulse modulation disable pattern*/
#define BITP_PATTERN_E_LED_DISABLE_E            	12			/*4 Pulse LED disable pattern*/
#define BITM_PATTERN_E_REVERSE_INTEG_E          	0x000f		/*4 Pulse integration reverse pattern*/
#define BITM_PATTERN_E_SUBTRACT_E               	0x00f0		/*4 Pulse subtract pattern*/
#define BITM_PATTERN_E_MOD_DISABLE_E            	0x0f00		/*4 Pulse modulation disable pattern*/
#define BITM_PATTERN_E_LED_DISABLE_E            	0xf000		/*4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_E_CH1_ADC_ADJUST_E        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF1_E_CH1_ADC_ADJUST_E        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_E_CH2_ADC_ADJUST_E        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF2_E_CH2_ADC_ADJUST_E        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_E_SIGNAL_SIZE_E              	0			/*Signal data size*/
#define BITP_DATA1_E_SIGNAL_SHIFT_E             	3			/*Signal data shift*/
#define BITP_DATA1_E_DARK_SIZE_E                	8			/*Dark data size*/
#define BITP_DATA1_E_DARK_SHIFT_E               	11			/*Dark data shift*/
#define BITM_DATA1_E_SIGNAL_SIZE_E              	0x0007		/*Signal data size*/
#define BITM_DATA1_E_SIGNAL_SHIFT_E             	0x00f8		/*Signal data shift*/
#define BITM_DATA1_E_DARK_SIZE_E                	0x0700		/*Dark data size*/
#define BITM_DATA1_E_DARK_SHIFT_E               	0xf800		/*Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_E_LIT_SIZE_E                 	0			/*Lit data size*/
#define BITP_DATA2_E_LIT_SHIFT_E                	3			/*Lit data shift*/
#define BITM_DATA2_E_LIT_SIZE_E                 	0x0007		/*Lit data size*/
#define BITM_DATA2_E_LIT_SHIFT_E                	0x00f8		/*Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_E_DECIMATE_TYPE_E         	0			/*Decimation Type Select*/
#define BITP_DECIMATE_E_DECIMATE_FACTOR_E       	4			/*Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_E_DECIMATE_TYPE_E         	0x000f		/*Decimation Type Select*/
#define BITM_DECIMATE_E_DECIMATE_FACTOR_E       	0x07f0		/*Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_E_LIT_OFFSET_E          	0			/*Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_E_LIT_OFFSET_E          	0x01ff		/*Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_E_DARK1_OFFSET_E       	0			/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_E_DARK2_OFFSET_E       	7			/*Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_E_DARK1_OFFSET_E       	0x007f		/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_E_DARK2_OFFSET_E       	0xff80		/*Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_E_THRESH0_TYPE_E        	0			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_E_THRESH0_DIR_E         	2			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_E_THRESH0_CHAN_E        	3			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_E_THRESH1_TYPE_E        	4			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_E_THRESH1_DIR_E         	6			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_E_THRESH1_CHAN_E        	7			/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_E_THRESH0_TYPE_E        	0x0003		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_E_THRESH0_DIR_E         	0x0004		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_E_THRESH0_CHAN_E        	0x0008		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_E_THRESH1_TYPE_E        	0x0030		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_E_THRESH1_DIR_E         	0x0040		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_E_THRESH1_CHAN_E        	0x0080		/*Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_E_THRESH0_VALUE_E          	0			/*Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_E_THRESH0_SHIFT_E          	8			/*Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_E_THRESH0_VALUE_E          	0x00ff		/*Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_E_THRESH0_SHIFT_E          	0x1f00		/*Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_E						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_E_THRESH1_VALUE_E          	0			/*Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_E_THRESH1_SHIFT_E          	8			/*Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_E_THRESH1_VALUE_E          	0x00ff		/*Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_E_THRESH1_SHIFT_E          	0x1f00		/*Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_F_TIMESLOT_OFFSET_F        	0			/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_F_INPUT_R_SELECT_F         	10			/*Input resistor select*/
#define BITP_TS_CTRL_F_SAMPLE_TYPE_F            	12			/*Timeslot Sampling Type*/
#define BITP_TS_CTRL_F_CH2_EN_F                 	14			/*Channel 2 enable*/
#define BITM_TS_CTRL_F_TIMESLOT_OFFSET_F        	0x03ff		/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_F_INPUT_R_SELECT_F         	0x0c00		/*Input resistor select*/
#define BITM_TS_CTRL_F_SAMPLE_TYPE_F            	0x3000		/*Timeslot Sampling Type*/
#define BITM_TS_CTRL_F_CH2_EN_F                 	0x4000		/*Channel 2 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_F_AFE_PATH_CFG_F           	0			/*Bypass and input mux select*/
#define BITP_TS_PATH_F_PRE_WIDTH_F              	12			/*Precondition duration for this timeslot.*/
#define BITM_TS_PATH_F_AFE_PATH_CFG_F           	0x01ff		/*Bypass and input mux select*/
#define BITM_TS_PATH_F_PRE_WIDTH_F              	0xf000		/*Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_F_INP12_F                   	0			/*Input pair12 enable*/
#define BITP_INPUTS_F_INP34_F                   	4			/*Input pair34 enable*/
#define BITP_INPUTS_F_INP56_F                   	8			/*Input pair56 enable*/
#define BITP_INPUTS_F_INP78_F                   	12			/*input pair78 enable*/
#define BITM_INPUTS_F_INP12_F                   	0x000f		/*Input pair12 enable*/
#define BITM_INPUTS_F_INP34_F                   	0x00f0		/*Input pair34 enable*/
#define BITM_INPUTS_F_INP56_F                   	0x0f00		/*Input pair56 enable*/
#define BITM_INPUTS_F_INP78_F                   	0xf000		/*input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_F_VC1_SEL_F                	0			/*VC1 active state for this timeslot*/
#define BITP_CATHODE_F_VC1_ALT_F                	2			/*VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_F_VC1_PULSE_F              	4			/*VC1 pulse control*/
#define BITP_CATHODE_F_VC2_SEL_F                	6			/*VC2 active state for this timeslot*/
#define BITP_CATHODE_F_VC2_ALT_F                	8			/*VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_F_VC2_PULSE_F              	10			/*VC2 pulse control*/
#define BITP_CATHODE_F_PRECON_F                 	12			/*Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_F_VC1_SEL_F                	0x0003		/*VC1 active state for this timeslot*/
#define BITM_CATHODE_F_VC1_ALT_F                	0x000c		/*VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_F_VC1_PULSE_F              	0x0030		/*VC1 pulse control*/
#define BITM_CATHODE_F_VC2_SEL_F                	0x00c0		/*VC2 active state for this timeslot*/
#define BITM_CATHODE_F_VC2_ALT_F                	0x0300		/*VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_F_VC2_PULSE_F              	0x0c00		/*VC2 pulse control*/
#define BITM_CATHODE_F_PRECON_F                 	0x7000		/*Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_F_TIA_GAIN_CH1_F          	0			/*Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_F_TIA_GAIN_CH2_F          	3			/*Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_F_VREF_PULSE_VAL_F        	6			/*Vref pulse alternate value*/
#define BITP_AFE_TRIM_F_AFE_TRIM_VREF_F         	8			/*Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_F_VREF_PULSE_F            	10			/*Vref pulse control*/
#define BITP_AFE_TRIM_F_AFE_TRIM_INT_F          	11			/*Integrator resistor and capacitor select*/
#define BITM_AFE_TRIM_F_TIA_GAIN_CH1_F          	0x0007		/*Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_F_TIA_GAIN_CH2_F          	0x0038		/*Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_F_VREF_PULSE_VAL_F        	0x00c0		/*Vref pulse alternate value*/
#define BITM_AFE_TRIM_F_AFE_TRIM_VREF_F         	0x0300		/*Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_F_VREF_PULSE_F            	0x0400		/*Vref pulse control*/
#define BITM_AFE_TRIM_F_AFE_TRIM_INT_F          	0xf800		/*Integrator resistor and capacitor select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_F_LED_CURRENT1_F         	0			/*Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_F_LED_DRIVESIDE1_F       	7			/*Led output select for LED1*/
#define BITP_LED_POW12_F_LED_CURRENT2_F         	8			/*Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_F_LED_DRIVESIDE2_F       	15			/*Led output select for LED2*/
#define BITM_LED_POW12_F_LED_CURRENT1_F         	0x007f		/*Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_F_LED_DRIVESIDE1_F       	0x0080		/*Led output select for LED1*/
#define BITM_LED_POW12_F_LED_CURRENT2_F         	0x7f00		/*Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_F_LED_DRIVESIDE2_F       	0x8000		/*Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_F_LED_CURRENT3_F         	0			/*Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_F_LED_DRIVESIDE3_F       	7			/*Led output select for LED3*/
#define BITP_LED_POW34_F_LED_CURRENT4_F         	8			/*Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_F_LED_DRIVESIDE4_F       	15			/*Led output select for LED4*/
#define BITM_LED_POW34_F_LED_CURRENT3_F         	0x007f		/*Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_F_LED_DRIVESIDE3_F       	0x0080		/*Led output select for LED3*/
#define BITM_LED_POW34_F_LED_CURRENT4_F         	0x7f00		/*Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_F_LED_DRIVESIDE4_F       	0x8000		/*Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_F_NUM_REPEAT_F              	0			/*Number of sequence repeats.*/
#define BITP_COUNTS_F_NUM_INT_F                 	8			/*Number of ADC cycles or acquisition width*/
#define BITM_COUNTS_F_NUM_REPEAT_F              	0x00ff		/*Number of sequence repeats.*/
#define BITM_COUNTS_F_NUM_INT_F                 	0xff00		/*Number of ADC cycles or acquisition width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_F_MIN_PERIOD_F              	0			/*Minimum Period for pulse repetition.*/
#define BITP_PERIOD_F_MOD_TYPE_F                	12			/*Modulation Connection type*/
#define BITM_PERIOD_F_MIN_PERIOD_F              	0x03ff		/*Minimum Period for pulse repetition.*/
#define BITM_PERIOD_F_MOD_TYPE_F                	0x3000		/*Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_F_LED_OFFSET_F           	0			/*LED pulse offset*/
#define BITP_LED_PULSE_F_LED_WIDTH_F            	8			/*LED pulse width*/
#define BITM_LED_PULSE_F_LED_OFFSET_F           	0x00ff		/*LED pulse offset*/
#define BITM_LED_PULSE_F_LED_WIDTH_F            	0xff00		/*LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_F_INTEG_WIDTH_F        	0			/*Integrator clock width*/
#define BITP_INTEG_WIDTH_F_ADC_COUNT_F          	6			/*ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_F_CH1_AMP_DISABLE_F    	8			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_F_AFE_INT_C_BUF_F      	11			/*Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_F_CH2_AMP_DISABLE_F    	12			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_F_SINGLE_INTEG_F       	15			/*Use single integrator pulse*/
#define BITM_INTEG_WIDTH_F_INTEG_WIDTH_F        	0x001f		/*Integrator clock width*/
#define BITM_INTEG_WIDTH_F_ADC_COUNT_F          	0x00c0		/*ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_F_CH1_AMP_DISABLE_F    	0x0700		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_F_AFE_INT_C_BUF_F      	0x0800		/*Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_F_CH2_AMP_DISABLE_F    	0x7000		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_F_SINGLE_INTEG_F       	0x8000		/*Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_F_INTEG_OFFSET_F      	0			/*Integrator clock coarse offset*/
#define BITP_INTEG_OFFSET_F_INTEG_FINE_OFFSET_F 	8			/*Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_F_INTEG_OFFSET_F      	0x00ff		/*Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_F_INTEG_FINE_OFFSET_F 	0x1f00		/*Integrator clock fine offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_F_MOD_OFFSET_F           	0			/*modulation pulse offset*/
#define BITP_MOD_PULSE_F_MOD_WIDTH_F            	8			/*modulation pulse width.*/
#define BITM_MOD_PULSE_F_MOD_OFFSET_F           	0x00ff		/*modulation pulse offset*/
#define BITM_MOD_PULSE_F_MOD_WIDTH_F            	0xff00		/*modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_F_REVERSE_INTEG_F          	0			/*4 Pulse integration reverse pattern*/
#define BITP_PATTERN_F_SUBTRACT_F               	4			/*4 Pulse subtract pattern*/
#define BITP_PATTERN_F_MOD_DISABLE_F            	8			/*4 Pulse modulation disable pattern*/
#define BITP_PATTERN_F_LED_DISABLE_F            	12			/*4 Pulse LED disable pattern*/
#define BITM_PATTERN_F_REVERSE_INTEG_F          	0x000f		/*4 Pulse integration reverse pattern*/
#define BITM_PATTERN_F_SUBTRACT_F               	0x00f0		/*4 Pulse subtract pattern*/
#define BITM_PATTERN_F_MOD_DISABLE_F            	0x0f00		/*4 Pulse modulation disable pattern*/
#define BITM_PATTERN_F_LED_DISABLE_F            	0xf000		/*4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_F_CH1_ADC_ADJUST_F        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF1_F_CH1_ADC_ADJUST_F        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_F_CH2_ADC_ADJUST_F        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF2_F_CH2_ADC_ADJUST_F        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_F_SIGNAL_SIZE_F              	0			/*Signal data size*/
#define BITP_DATA1_F_SIGNAL_SHIFT_F             	3			/*Signal data shift*/
#define BITP_DATA1_F_DARK_SIZE_F                	8			/*Dark data size*/
#define BITP_DATA1_F_DARK_SHIFT_F               	11			/*Dark data shift*/
#define BITM_DATA1_F_SIGNAL_SIZE_F              	0x0007		/*Signal data size*/
#define BITM_DATA1_F_SIGNAL_SHIFT_F             	0x00f8		/*Signal data shift*/
#define BITM_DATA1_F_DARK_SIZE_F                	0x0700		/*Dark data size*/
#define BITM_DATA1_F_DARK_SHIFT_F               	0xf800		/*Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_F_LIT_SIZE_F                 	0			/*Lit data size*/
#define BITP_DATA2_F_LIT_SHIFT_F                	3			/*Lit data shift*/
#define BITM_DATA2_F_LIT_SIZE_F                 	0x0007		/*Lit data size*/
#define BITM_DATA2_F_LIT_SHIFT_F                	0x00f8		/*Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_F_DECIMATE_TYPE_F         	0			/*Decimation Type Select*/
#define BITP_DECIMATE_F_DECIMATE_FACTOR_F       	4			/*Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_F_DECIMATE_TYPE_F         	0x000f		/*Decimation Type Select*/
#define BITM_DECIMATE_F_DECIMATE_FACTOR_F       	0x07f0		/*Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_F_LIT_OFFSET_F          	0			/*Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_F_LIT_OFFSET_F          	0x01ff		/*Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_F_DARK1_OFFSET_F       	0			/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_F_DARK2_OFFSET_F       	7			/*Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_F_DARK1_OFFSET_F       	0x007f		/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_F_DARK2_OFFSET_F       	0xff80		/*Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_F_THRESH0_TYPE_F        	0			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_F_THRESH0_DIR_F         	2			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_F_THRESH0_CHAN_F        	3			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_F_THRESH1_TYPE_F        	4			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_F_THRESH1_DIR_F         	6			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_F_THRESH1_CHAN_F        	7			/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_F_THRESH0_TYPE_F        	0x0003		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_F_THRESH0_DIR_F         	0x0004		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_F_THRESH0_CHAN_F        	0x0008		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_F_THRESH1_TYPE_F        	0x0030		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_F_THRESH1_DIR_F         	0x0040		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_F_THRESH1_CHAN_F        	0x0080		/*Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_F_THRESH0_VALUE_F          	0			/*Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_F_THRESH0_SHIFT_F          	8			/*Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_F_THRESH0_VALUE_F          	0x00ff		/*Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_F_THRESH0_SHIFT_F          	0x1f00		/*Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_F						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_F_THRESH1_VALUE_F          	0			/*Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_F_THRESH1_SHIFT_F          	8			/*Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_F_THRESH1_VALUE_F          	0x00ff		/*Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_F_THRESH1_SHIFT_F          	0x1f00		/*Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_G_TIMESLOT_OFFSET_G        	0			/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_G_INPUT_R_SELECT_G         	10			/*Input resistor select*/
#define BITP_TS_CTRL_G_SAMPLE_TYPE_G            	12			/*Timeslot Sampling Type*/
#define BITP_TS_CTRL_G_CH2_EN_G                 	14			/*Channel 2 enable*/
#define BITM_TS_CTRL_G_TIMESLOT_OFFSET_G        	0x03ff		/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_G_INPUT_R_SELECT_G         	0x0c00		/*Input resistor select*/
#define BITM_TS_CTRL_G_SAMPLE_TYPE_G            	0x3000		/*Timeslot Sampling Type*/
#define BITM_TS_CTRL_G_CH2_EN_G                 	0x4000		/*Channel 2 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_G_AFE_PATH_CFG_G           	0			/*Bypass and input mux select*/
#define BITP_TS_PATH_G_PRE_WIDTH_G              	12			/*Precondition duration for this timeslot.*/
#define BITM_TS_PATH_G_AFE_PATH_CFG_G           	0x01ff		/*Bypass and input mux select*/
#define BITM_TS_PATH_G_PRE_WIDTH_G              	0xf000		/*Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_G_INP12_G                   	0			/*Input pair12 enable*/
#define BITP_INPUTS_G_INP34_G                   	4			/*Input pair34 enable*/
#define BITP_INPUTS_G_INP56_G                   	8			/*Input pair56 enable*/
#define BITP_INPUTS_G_INP78_G                   	12			/*input pair78 enable*/
#define BITM_INPUTS_G_INP12_G                   	0x000f		/*Input pair12 enable*/
#define BITM_INPUTS_G_INP34_G                   	0x00f0		/*Input pair34 enable*/
#define BITM_INPUTS_G_INP56_G                   	0x0f00		/*Input pair56 enable*/
#define BITM_INPUTS_G_INP78_G                   	0xf000		/*input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_G_VC1_SEL_G                	0			/*VC1 active state for this timeslot*/
#define BITP_CATHODE_G_VC1_ALT_G                	2			/*VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_G_VC1_PULSE_G              	4			/*VC1 pulse control*/
#define BITP_CATHODE_G_VC2_SEL_G                	6			/*VC2 active state for this timeslot*/
#define BITP_CATHODE_G_VC2_ALT_G                	8			/*VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_G_VC2_PULSE_G              	10			/*VC2 pulse control*/
#define BITP_CATHODE_G_PRECON_G                 	12			/*Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_G_VC1_SEL_G                	0x0003		/*VC1 active state for this timeslot*/
#define BITM_CATHODE_G_VC1_ALT_G                	0x000c		/*VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_G_VC1_PULSE_G              	0x0030		/*VC1 pulse control*/
#define BITM_CATHODE_G_VC2_SEL_G                	0x00c0		/*VC2 active state for this timeslot*/
#define BITM_CATHODE_G_VC2_ALT_G                	0x0300		/*VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_G_VC2_PULSE_G              	0x0c00		/*VC2 pulse control*/
#define BITM_CATHODE_G_PRECON_G                 	0x7000		/*Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_G_TIA_GAIN_CH1_G          	0			/*Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_G_TIA_GAIN_CH2_G          	3			/*Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_G_VREF_PULSE_VAL_G        	6			/*Vref pulse alternate value*/
#define BITP_AFE_TRIM_G_AFE_TRIM_VREF_G         	8			/*Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_G_VREF_PULSE_G            	10			/*Vref pulse control*/
#define BITP_AFE_TRIM_G_AFE_TRIM_INT_G          	11			/*Integrator resistor and capacitor select*/
#define BITM_AFE_TRIM_G_TIA_GAIN_CH1_G          	0x0007		/*Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_G_TIA_GAIN_CH2_G          	0x0038		/*Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_G_VREF_PULSE_VAL_G        	0x00c0		/*Vref pulse alternate value*/
#define BITM_AFE_TRIM_G_AFE_TRIM_VREF_G         	0x0300		/*Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_G_VREF_PULSE_G            	0x0400		/*Vref pulse control*/
#define BITM_AFE_TRIM_G_AFE_TRIM_INT_G          	0xf800		/*Integrator resistor and capacitor select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_G_LED_CURRENT1_G         	0			/*Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_G_LED_DRIVESIDE1_G       	7			/*Led output select for LED1*/
#define BITP_LED_POW12_G_LED_CURRENT2_G         	8			/*Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_G_LED_DRIVESIDE2_G       	15			/*Led output select for LED2*/
#define BITM_LED_POW12_G_LED_CURRENT1_G         	0x007f		/*Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_G_LED_DRIVESIDE1_G       	0x0080		/*Led output select for LED1*/
#define BITM_LED_POW12_G_LED_CURRENT2_G         	0x7f00		/*Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_G_LED_DRIVESIDE2_G       	0x8000		/*Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_G_LED_CURRENT3_G         	0			/*Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_G_LED_DRIVESIDE3_G       	7			/*Led output select for LED3*/
#define BITP_LED_POW34_G_LED_CURRENT4_G         	8			/*Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_G_LED_DRIVESIDE4_G       	15			/*Led output select for LED4*/
#define BITM_LED_POW34_G_LED_CURRENT3_G         	0x007f		/*Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_G_LED_DRIVESIDE3_G       	0x0080		/*Led output select for LED3*/
#define BITM_LED_POW34_G_LED_CURRENT4_G         	0x7f00		/*Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_G_LED_DRIVESIDE4_G       	0x8000		/*Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_G_NUM_REPEAT_G              	0			/*Number of sequence repeats.*/
#define BITP_COUNTS_G_NUM_INT_G                 	8			/*Number of ADC cycles or acquisition width*/
#define BITM_COUNTS_G_NUM_REPEAT_G              	0x00ff		/*Number of sequence repeats.*/
#define BITM_COUNTS_G_NUM_INT_G                 	0xff00		/*Number of ADC cycles or acquisition width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_G_MIN_PERIOD_G              	0			/*Minimum Period for pulse repetition.*/
#define BITP_PERIOD_G_MOD_TYPE_G                	12			/*Modulation Connection type*/
#define BITM_PERIOD_G_MIN_PERIOD_G              	0x03ff		/*Minimum Period for pulse repetition.*/
#define BITM_PERIOD_G_MOD_TYPE_G                	0x3000		/*Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_G_LED_OFFSET_G           	0			/*LED pulse offset*/
#define BITP_LED_PULSE_G_LED_WIDTH_G            	8			/*LED pulse width*/
#define BITM_LED_PULSE_G_LED_OFFSET_G           	0x00ff		/*LED pulse offset*/
#define BITM_LED_PULSE_G_LED_WIDTH_G            	0xff00		/*LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_G_INTEG_WIDTH_G        	0			/*Integrator clock width*/
#define BITP_INTEG_WIDTH_G_ADC_COUNT_G          	6			/*ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_G_CH1_AMP_DISABLE_G    	8			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_G_AFE_INT_C_BUF_G      	11			/*Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_G_CH2_AMP_DISABLE_G    	12			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_G_SINGLE_INTEG_G       	15			/*Use single integrator pulse*/
#define BITM_INTEG_WIDTH_G_INTEG_WIDTH_G        	0x001f		/*Integrator clock width*/
#define BITM_INTEG_WIDTH_G_ADC_COUNT_G          	0x00c0		/*ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_G_CH1_AMP_DISABLE_G    	0x0700		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_G_AFE_INT_C_BUF_G      	0x0800		/*Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_G_CH2_AMP_DISABLE_G    	0x7000		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_G_SINGLE_INTEG_G       	0x8000		/*Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_G_INTEG_OFFSET_G      	0			/*Integrator clock coarse offset*/
#define BITP_INTEG_OFFSET_G_INTEG_FINE_OFFSET_G 	8			/*Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_G_INTEG_OFFSET_G      	0x00ff		/*Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_G_INTEG_FINE_OFFSET_G 	0x1f00		/*Integrator clock fine offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_G_MOD_OFFSET_G           	0			/*modulation pulse offset*/
#define BITP_MOD_PULSE_G_MOD_WIDTH_G            	8			/*modulation pulse width.*/
#define BITM_MOD_PULSE_G_MOD_OFFSET_G           	0x00ff		/*modulation pulse offset*/
#define BITM_MOD_PULSE_G_MOD_WIDTH_G            	0xff00		/*modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_G_REVERSE_INTEG_G          	0			/*4 Pulse integration reverse pattern*/
#define BITP_PATTERN_G_SUBTRACT_G               	4			/*4 Pulse subtract pattern*/
#define BITP_PATTERN_G_MOD_DISABLE_G            	8			/*4 Pulse modulation disable pattern*/
#define BITP_PATTERN_G_LED_DISABLE_G            	12			/*4 Pulse LED disable pattern*/
#define BITM_PATTERN_G_REVERSE_INTEG_G          	0x000f		/*4 Pulse integration reverse pattern*/
#define BITM_PATTERN_G_SUBTRACT_G               	0x00f0		/*4 Pulse subtract pattern*/
#define BITM_PATTERN_G_MOD_DISABLE_G            	0x0f00		/*4 Pulse modulation disable pattern*/
#define BITM_PATTERN_G_LED_DISABLE_G            	0xf000		/*4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_G_CH1_ADC_ADJUST_G        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF1_G_CH1_ADC_ADJUST_G        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_G_CH2_ADC_ADJUST_G        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF2_G_CH2_ADC_ADJUST_G        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_G_SIGNAL_SIZE_G              	0			/*Signal data size*/
#define BITP_DATA1_G_SIGNAL_SHIFT_G             	3			/*Signal data shift*/
#define BITP_DATA1_G_DARK_SIZE_G                	8			/*Dark data size*/
#define BITP_DATA1_G_DARK_SHIFT_G               	11			/*Dark data shift*/
#define BITM_DATA1_G_SIGNAL_SIZE_G              	0x0007		/*Signal data size*/
#define BITM_DATA1_G_SIGNAL_SHIFT_G             	0x00f8		/*Signal data shift*/
#define BITM_DATA1_G_DARK_SIZE_G                	0x0700		/*Dark data size*/
#define BITM_DATA1_G_DARK_SHIFT_G               	0xf800		/*Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_G_LIT_SIZE_G                 	0			/*Lit data size*/
#define BITP_DATA2_G_LIT_SHIFT_G                	3			/*Lit data shift*/
#define BITM_DATA2_G_LIT_SIZE_G                 	0x0007		/*Lit data size*/
#define BITM_DATA2_G_LIT_SHIFT_G                	0x00f8		/*Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_G_DECIMATE_TYPE_G         	0			/*Decimation Type Select*/
#define BITP_DECIMATE_G_DECIMATE_FACTOR_G       	4			/*Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_G_DECIMATE_TYPE_G         	0x000f		/*Decimation Type Select*/
#define BITM_DECIMATE_G_DECIMATE_FACTOR_G       	0x07f0		/*Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_G_LIT_OFFSET_G          	0			/*Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_G_LIT_OFFSET_G          	0x01ff		/*Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_G_DARK1_OFFSET_G       	0			/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_G_DARK2_OFFSET_G       	7			/*Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_G_DARK1_OFFSET_G       	0x007f		/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_G_DARK2_OFFSET_G       	0xff80		/*Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_G_THRESH0_TYPE_G        	0			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_G_THRESH0_DIR_G         	2			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_G_THRESH0_CHAN_G        	3			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_G_THRESH1_TYPE_G        	4			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_G_THRESH1_DIR_G         	6			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_G_THRESH1_CHAN_G        	7			/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_G_THRESH0_TYPE_G        	0x0003		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_G_THRESH0_DIR_G         	0x0004		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_G_THRESH0_CHAN_G        	0x0008		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_G_THRESH1_TYPE_G        	0x0030		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_G_THRESH1_DIR_G         	0x0040		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_G_THRESH1_CHAN_G        	0x0080		/*Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_G_THRESH0_VALUE_G          	0			/*Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_G_THRESH0_SHIFT_G          	8			/*Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_G_THRESH0_VALUE_G          	0x00ff		/*Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_G_THRESH0_SHIFT_G          	0x1f00		/*Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_G						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_G_THRESH1_VALUE_G          	0			/*Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_G_THRESH1_SHIFT_G          	8			/*Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_G_THRESH1_VALUE_G          	0x00ff		/*Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_G_THRESH1_SHIFT_G          	0x1f00		/*Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_H_TIMESLOT_OFFSET_H        	0			/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_H_INPUT_R_SELECT_H         	10			/*Input resistor select*/
#define BITP_TS_CTRL_H_SAMPLE_TYPE_H            	12			/*Timeslot Sampling Type*/
#define BITP_TS_CTRL_H_CH2_EN_H                 	14			/*Channel 2 enable*/
#define BITM_TS_CTRL_H_TIMESLOT_OFFSET_H        	0x03ff		/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_H_INPUT_R_SELECT_H         	0x0c00		/*Input resistor select*/
#define BITM_TS_CTRL_H_SAMPLE_TYPE_H            	0x3000		/*Timeslot Sampling Type*/
#define BITM_TS_CTRL_H_CH2_EN_H                 	0x4000		/*Channel 2 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_H_AFE_PATH_CFG_H           	0			/*Bypass and input mux select*/
#define BITP_TS_PATH_H_PRE_WIDTH_H              	12			/*Precondition duration for this timeslot.*/
#define BITM_TS_PATH_H_AFE_PATH_CFG_H           	0x01ff		/*Bypass and input mux select*/
#define BITM_TS_PATH_H_PRE_WIDTH_H              	0xf000		/*Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_H_INP12_H                   	0			/*Input pair12 enable*/
#define BITP_INPUTS_H_INP34_H                   	4			/*Input pair34 enable*/
#define BITP_INPUTS_H_INP56_H                   	8			/*Input pair56 enable*/
#define BITP_INPUTS_H_INP78_H                   	12			/*input pair78 enable*/
#define BITM_INPUTS_H_INP12_H                   	0x000f		/*Input pair12 enable*/
#define BITM_INPUTS_H_INP34_H                   	0x00f0		/*Input pair34 enable*/
#define BITM_INPUTS_H_INP56_H                   	0x0f00		/*Input pair56 enable*/
#define BITM_INPUTS_H_INP78_H                   	0xf000		/*input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_H_VC1_SEL_H                	0			/*VC1 active state for this timeslot*/
#define BITP_CATHODE_H_VC1_ALT_H                	2			/*VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_H_VC1_PULSE_H              	4			/*VC1 pulse control*/
#define BITP_CATHODE_H_VC2_SEL_H                	6			/*VC2 active state for this timeslot*/
#define BITP_CATHODE_H_VC2_ALT_H                	8			/*VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_H_VC2_PULSE_H              	10			/*VC2 pulse control*/
#define BITP_CATHODE_H_PRECON_H                 	12			/*Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_H_VC1_SEL_H                	0x0003		/*VC1 active state for this timeslot*/
#define BITM_CATHODE_H_VC1_ALT_H                	0x000c		/*VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_H_VC1_PULSE_H              	0x0030		/*VC1 pulse control*/
#define BITM_CATHODE_H_VC2_SEL_H                	0x00c0		/*VC2 active state for this timeslot*/
#define BITM_CATHODE_H_VC2_ALT_H                	0x0300		/*VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_H_VC2_PULSE_H              	0x0c00		/*VC2 pulse control*/
#define BITM_CATHODE_H_PRECON_H                 	0x7000		/*Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_H_TIA_GAIN_CH1_H          	0			/*Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_H_TIA_GAIN_CH2_H          	3			/*Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_H_VREF_PULSE_VAL_H        	6			/*Vref pulse alternate value*/
#define BITP_AFE_TRIM_H_AFE_TRIM_VREF_H         	8			/*Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_H_VREF_PULSE_H            	10			/*Vref pulse control*/
#define BITP_AFE_TRIM_H_AFE_TRIM_INT_H          	11			/*Integrator resistor and capacitor select*/
#define BITM_AFE_TRIM_H_TIA_GAIN_CH1_H          	0x0007		/*Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_H_TIA_GAIN_CH2_H          	0x0038		/*Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_H_VREF_PULSE_VAL_H        	0x00c0		/*Vref pulse alternate value*/
#define BITM_AFE_TRIM_H_AFE_TRIM_VREF_H         	0x0300		/*Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_H_VREF_PULSE_H            	0x0400		/*Vref pulse control*/
#define BITM_AFE_TRIM_H_AFE_TRIM_INT_H          	0xf800		/*Integrator resistor and capacitor select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_H_LED_CURRENT1_H         	0			/*Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_H_LED_DRIVESIDE1_H       	7			/*Led output select for LED1*/
#define BITP_LED_POW12_H_LED_CURRENT2_H         	8			/*Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_H_LED_DRIVESIDE2_H       	15			/*Led output select for LED2*/
#define BITM_LED_POW12_H_LED_CURRENT1_H         	0x007f		/*Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_H_LED_DRIVESIDE1_H       	0x0080		/*Led output select for LED1*/
#define BITM_LED_POW12_H_LED_CURRENT2_H         	0x7f00		/*Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_H_LED_DRIVESIDE2_H       	0x8000		/*Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_H_LED_CURRENT3_H         	0			/*Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_H_LED_DRIVESIDE3_H       	7			/*Led output select for LED3*/
#define BITP_LED_POW34_H_LED_CURRENT4_H         	8			/*Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_H_LED_DRIVESIDE4_H       	15			/*Led output select for LED4*/
#define BITM_LED_POW34_H_LED_CURRENT3_H         	0x007f		/*Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_H_LED_DRIVESIDE3_H       	0x0080		/*Led output select for LED3*/
#define BITM_LED_POW34_H_LED_CURRENT4_H         	0x7f00		/*Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_H_LED_DRIVESIDE4_H       	0x8000		/*Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_H_NUM_REPEAT_H              	0			/*Number of sequence repeats.*/
#define BITP_COUNTS_H_NUM_INT_H                 	8			/*Number of ADC cycles or acquisition width*/
#define BITM_COUNTS_H_NUM_REPEAT_H              	0x00ff		/*Number of sequence repeats.*/
#define BITM_COUNTS_H_NUM_INT_H                 	0xff00		/*Number of ADC cycles or acquisition width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_H_MIN_PERIOD_H              	0			/*Minimum Period for pulse repetition.*/
#define BITP_PERIOD_H_MOD_TYPE_H                	12			/*Modulation Connection type*/
#define BITM_PERIOD_H_MIN_PERIOD_H              	0x03ff		/*Minimum Period for pulse repetition.*/
#define BITM_PERIOD_H_MOD_TYPE_H                	0x3000		/*Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_H_LED_OFFSET_H           	0			/*LED pulse offset*/
#define BITP_LED_PULSE_H_LED_WIDTH_H            	8			/*LED pulse width*/
#define BITM_LED_PULSE_H_LED_OFFSET_H           	0x00ff		/*LED pulse offset*/
#define BITM_LED_PULSE_H_LED_WIDTH_H            	0xff00		/*LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_H_INTEG_WIDTH_H        	0			/*Integrator clock width*/
#define BITP_INTEG_WIDTH_H_ADC_COUNT_H          	6			/*ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_H_CH1_AMP_DISABLE_H    	8			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_H_AFE_INT_C_BUF_H      	11			/*Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_H_CH2_AMP_DISABLE_H    	12			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_H_SINGLE_INTEG_H       	15			/*Use single integrator pulse*/
#define BITM_INTEG_WIDTH_H_INTEG_WIDTH_H        	0x001f		/*Integrator clock width*/
#define BITM_INTEG_WIDTH_H_ADC_COUNT_H          	0x00c0		/*ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_H_CH1_AMP_DISABLE_H    	0x0700		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_H_AFE_INT_C_BUF_H      	0x0800		/*Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_H_CH2_AMP_DISABLE_H    	0x7000		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_H_SINGLE_INTEG_H       	0x8000		/*Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_H_INTEG_OFFSET_H      	0			/*Integrator clock coarse offset*/
#define BITP_INTEG_OFFSET_H_INTEG_FINE_OFFSET_H 	8			/*Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_H_INTEG_OFFSET_H      	0x00ff		/*Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_H_INTEG_FINE_OFFSET_H 	0x1f00		/*Integrator clock fine offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_H_MOD_OFFSET_H           	0			/*modulation pulse offset*/
#define BITP_MOD_PULSE_H_MOD_WIDTH_H            	8			/*modulation pulse width.*/
#define BITM_MOD_PULSE_H_MOD_OFFSET_H           	0x00ff		/*modulation pulse offset*/
#define BITM_MOD_PULSE_H_MOD_WIDTH_H            	0xff00		/*modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_H_REVERSE_INTEG_H          	0			/*4 Pulse integration reverse pattern*/
#define BITP_PATTERN_H_SUBTRACT_H               	4			/*4 Pulse subtract pattern*/
#define BITP_PATTERN_H_MOD_DISABLE_H            	8			/*4 Pulse modulation disable pattern*/
#define BITP_PATTERN_H_LED_DISABLE_H            	12			/*4 Pulse LED disable pattern*/
#define BITM_PATTERN_H_REVERSE_INTEG_H          	0x000f		/*4 Pulse integration reverse pattern*/
#define BITM_PATTERN_H_SUBTRACT_H               	0x00f0		/*4 Pulse subtract pattern*/
#define BITM_PATTERN_H_MOD_DISABLE_H            	0x0f00		/*4 Pulse modulation disable pattern*/
#define BITM_PATTERN_H_LED_DISABLE_H            	0xf000		/*4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_H_CH1_ADC_ADJUST_H        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF1_H_CH1_ADC_ADJUST_H        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_H_CH2_ADC_ADJUST_H        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF2_H_CH2_ADC_ADJUST_H        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_H_SIGNAL_SIZE_H              	0			/*Signal data size*/
#define BITP_DATA1_H_SIGNAL_SHIFT_H             	3			/*Signal data shift*/
#define BITP_DATA1_H_DARK_SIZE_H                	8			/*Dark data size*/
#define BITP_DATA1_H_DARK_SHIFT_H               	11			/*Dark data shift*/
#define BITM_DATA1_H_SIGNAL_SIZE_H              	0x0007		/*Signal data size*/
#define BITM_DATA1_H_SIGNAL_SHIFT_H             	0x00f8		/*Signal data shift*/
#define BITM_DATA1_H_DARK_SIZE_H                	0x0700		/*Dark data size*/
#define BITM_DATA1_H_DARK_SHIFT_H               	0xf800		/*Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_H_LIT_SIZE_H                 	0			/*Lit data size*/
#define BITP_DATA2_H_LIT_SHIFT_H                	3			/*Lit data shift*/
#define BITM_DATA2_H_LIT_SIZE_H                 	0x0007		/*Lit data size*/
#define BITM_DATA2_H_LIT_SHIFT_H                	0x00f8		/*Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_H_DECIMATE_TYPE_H         	0			/*Decimation Type Select*/
#define BITP_DECIMATE_H_DECIMATE_FACTOR_H       	4			/*Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_H_DECIMATE_TYPE_H         	0x000f		/*Decimation Type Select*/
#define BITM_DECIMATE_H_DECIMATE_FACTOR_H       	0x07f0		/*Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_H_LIT_OFFSET_H          	0			/*Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_H_LIT_OFFSET_H          	0x01ff		/*Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_H_DARK1_OFFSET_H       	0			/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_H_DARK2_OFFSET_H       	7			/*Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_H_DARK1_OFFSET_H       	0x007f		/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_H_DARK2_OFFSET_H       	0xff80		/*Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_H_THRESH0_TYPE_H        	0			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_H_THRESH0_DIR_H         	2			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_H_THRESH0_CHAN_H        	3			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_H_THRESH1_TYPE_H        	4			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_H_THRESH1_DIR_H         	6			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_H_THRESH1_CHAN_H        	7			/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_H_THRESH0_TYPE_H        	0x0003		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_H_THRESH0_DIR_H         	0x0004		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_H_THRESH0_CHAN_H        	0x0008		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_H_THRESH1_TYPE_H        	0x0030		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_H_THRESH1_DIR_H         	0x0040		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_H_THRESH1_CHAN_H        	0x0080		/*Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_H_THRESH0_VALUE_H          	0			/*Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_H_THRESH0_SHIFT_H          	8			/*Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_H_THRESH0_VALUE_H          	0x00ff		/*Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_H_THRESH0_SHIFT_H          	0x1f00		/*Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_H						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_H_THRESH1_VALUE_H          	0			/*Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_H_THRESH1_SHIFT_H          	8			/*Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_H_THRESH1_VALUE_H          	0x00ff		/*Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_H_THRESH1_SHIFT_H          	0x1f00		/*Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_I_TIMESLOT_OFFSET_I        	0			/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_I_INPUT_R_SELECT_I         	10			/*Input resistor select*/
#define BITP_TS_CTRL_I_SAMPLE_TYPE_I            	12			/*Timeslot Sampling Type*/
#define BITP_TS_CTRL_I_CH2_EN_I                 	14			/*Channel 2 enable*/
#define BITM_TS_CTRL_I_TIMESLOT_OFFSET_I        	0x03ff		/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_I_INPUT_R_SELECT_I         	0x0c00		/*Input resistor select*/
#define BITM_TS_CTRL_I_SAMPLE_TYPE_I            	0x3000		/*Timeslot Sampling Type*/
#define BITM_TS_CTRL_I_CH2_EN_I                 	0x4000		/*Channel 2 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_I_AFE_PATH_CFG_I           	0			/*Bypass and input mux select*/
#define BITP_TS_PATH_I_PRE_WIDTH_I              	12			/*Precondition duration for this timeslot.*/
#define BITM_TS_PATH_I_AFE_PATH_CFG_I           	0x01ff		/*Bypass and input mux select*/
#define BITM_TS_PATH_I_PRE_WIDTH_I              	0xf000		/*Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_I_INP12_I                   	0			/*Input pair12 enable*/
#define BITP_INPUTS_I_INP34_I                   	4			/*Input pair34 enable*/
#define BITP_INPUTS_I_INP56_I                   	8			/*Input pair56 enable*/
#define BITP_INPUTS_I_INP78_I                   	12			/*input pair78 enable*/
#define BITM_INPUTS_I_INP12_I                   	0x000f		/*Input pair12 enable*/
#define BITM_INPUTS_I_INP34_I                   	0x00f0		/*Input pair34 enable*/
#define BITM_INPUTS_I_INP56_I                   	0x0f00		/*Input pair56 enable*/
#define BITM_INPUTS_I_INP78_I                   	0xf000		/*input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_I_VC1_SEL_I                	0			/*VC1 active state for this timeslot*/
#define BITP_CATHODE_I_VC1_ALT_I                	2			/*VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_I_VC1_PULSE_I              	4			/*VC1 pulse control*/
#define BITP_CATHODE_I_VC2_SEL_I                	6			/*VC2 active state for this timeslot*/
#define BITP_CATHODE_I_VC2_ALT_I                	8			/*VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_I_VC2_PULSE_I              	10			/*VC2 pulse control*/
#define BITP_CATHODE_I_PRECON_I                 	12			/*Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_I_VC1_SEL_I                	0x0003		/*VC1 active state for this timeslot*/
#define BITM_CATHODE_I_VC1_ALT_I                	0x000c		/*VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_I_VC1_PULSE_I              	0x0030		/*VC1 pulse control*/
#define BITM_CATHODE_I_VC2_SEL_I                	0x00c0		/*VC2 active state for this timeslot*/
#define BITM_CATHODE_I_VC2_ALT_I                	0x0300		/*VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_I_VC2_PULSE_I              	0x0c00		/*VC2 pulse control*/
#define BITM_CATHODE_I_PRECON_I                 	0x7000		/*Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_I_TIA_GAIN_CH1_I          	0			/*Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_I_TIA_GAIN_CH2_I          	3			/*Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_I_VREF_PULSE_VAL_I        	6			/*Vref pulse alternate value*/
#define BITP_AFE_TRIM_I_AFE_TRIM_VREF_I         	8			/*Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_I_VREF_PULSE_I            	10			/*Vref pulse control*/
#define BITP_AFE_TRIM_I_AFE_TRIM_INT_I          	11			/*Integrator resistor and capacitor select*/
#define BITM_AFE_TRIM_I_TIA_GAIN_CH1_I          	0x0007		/*Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_I_TIA_GAIN_CH2_I          	0x0038		/*Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_I_VREF_PULSE_VAL_I        	0x00c0		/*Vref pulse alternate value*/
#define BITM_AFE_TRIM_I_AFE_TRIM_VREF_I         	0x0300		/*Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_I_VREF_PULSE_I            	0x0400		/*Vref pulse control*/
#define BITM_AFE_TRIM_I_AFE_TRIM_INT_I          	0xf800		/*Integrator resistor and capacitor select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_I_LED_CURRENT1_I         	0			/*Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_I_LED_DRIVESIDE1_I       	7			/*Led output select for LED1*/
#define BITP_LED_POW12_I_LED_CURRENT2_I         	8			/*Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_I_LED_DRIVESIDE2_I       	15			/*Led output select for LED2*/
#define BITM_LED_POW12_I_LED_CURRENT1_I         	0x007f		/*Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_I_LED_DRIVESIDE1_I       	0x0080		/*Led output select for LED1*/
#define BITM_LED_POW12_I_LED_CURRENT2_I         	0x7f00		/*Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_I_LED_DRIVESIDE2_I       	0x8000		/*Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_I_LED_CURRENT3_I         	0			/*Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_I_LED_DRIVESIDE3_I       	7			/*Led output select for LED3*/
#define BITP_LED_POW34_I_LED_CURRENT4_I         	8			/*Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_I_LED_DRIVESIDE4_I       	15			/*Led output select for LED4*/
#define BITM_LED_POW34_I_LED_CURRENT3_I         	0x007f		/*Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_I_LED_DRIVESIDE3_I       	0x0080		/*Led output select for LED3*/
#define BITM_LED_POW34_I_LED_CURRENT4_I         	0x7f00		/*Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_I_LED_DRIVESIDE4_I       	0x8000		/*Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_I_NUM_REPEAT_I              	0			/*Number of sequence repeats.*/
#define BITP_COUNTS_I_NUM_INT_I                 	8			/*Number of ADC cycles or acquisition width*/
#define BITM_COUNTS_I_NUM_REPEAT_I              	0x00ff		/*Number of sequence repeats.*/
#define BITM_COUNTS_I_NUM_INT_I                 	0xff00		/*Number of ADC cycles or acquisition width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_I_MIN_PERIOD_I              	0			/*Minimum Period for pulse repetition.*/
#define BITP_PERIOD_I_MOD_TYPE_I                	12			/*Modulation Connection type*/
#define BITM_PERIOD_I_MIN_PERIOD_I              	0x03ff		/*Minimum Period for pulse repetition.*/
#define BITM_PERIOD_I_MOD_TYPE_I                	0x3000		/*Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_I_LED_OFFSET_I           	0			/*LED pulse offset*/
#define BITP_LED_PULSE_I_LED_WIDTH_I            	8			/*LED pulse width*/
#define BITM_LED_PULSE_I_LED_OFFSET_I           	0x00ff		/*LED pulse offset*/
#define BITM_LED_PULSE_I_LED_WIDTH_I            	0xff00		/*LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_I_INTEG_WIDTH_I        	0			/*Integrator clock width*/
#define BITP_INTEG_WIDTH_I_ADC_COUNT_I          	6			/*ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_I_CH1_AMP_DISABLE_I    	8			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_I_AFE_INT_C_BUF_I      	11			/*Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_I_CH2_AMP_DISABLE_I    	12			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_I_SINGLE_INTEG_I       	15			/*Use single integrator pulse*/
#define BITM_INTEG_WIDTH_I_INTEG_WIDTH_I        	0x001f		/*Integrator clock width*/
#define BITM_INTEG_WIDTH_I_ADC_COUNT_I          	0x00c0		/*ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_I_CH1_AMP_DISABLE_I    	0x0700		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_I_AFE_INT_C_BUF_I      	0x0800		/*Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_I_CH2_AMP_DISABLE_I    	0x7000		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_I_SINGLE_INTEG_I       	0x8000		/*Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_I_INTEG_OFFSET_I      	0			/*Integrator clock coarse offset*/
#define BITP_INTEG_OFFSET_I_INTEG_FINE_OFFSET_I 	8			/*Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_I_INTEG_OFFSET_I      	0x00ff		/*Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_I_INTEG_FINE_OFFSET_I 	0x1f00		/*Integrator clock fine offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_I_MOD_OFFSET_I           	0			/*modulation pulse offset*/
#define BITP_MOD_PULSE_I_MOD_WIDTH_I            	8			/*modulation pulse width.*/
#define BITM_MOD_PULSE_I_MOD_OFFSET_I           	0x00ff		/*modulation pulse offset*/
#define BITM_MOD_PULSE_I_MOD_WIDTH_I            	0xff00		/*modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_I_REVERSE_INTEG_I          	0			/*4 Pulse integration reverse pattern*/
#define BITP_PATTERN_I_SUBTRACT_I               	4			/*4 Pulse subtract pattern*/
#define BITP_PATTERN_I_MOD_DISABLE_I            	8			/*4 Pulse modulation disable pattern*/
#define BITP_PATTERN_I_LED_DISABLE_I            	12			/*4 Pulse LED disable pattern*/
#define BITM_PATTERN_I_REVERSE_INTEG_I          	0x000f		/*4 Pulse integration reverse pattern*/
#define BITM_PATTERN_I_SUBTRACT_I               	0x00f0		/*4 Pulse subtract pattern*/
#define BITM_PATTERN_I_MOD_DISABLE_I            	0x0f00		/*4 Pulse modulation disable pattern*/
#define BITM_PATTERN_I_LED_DISABLE_I            	0xf000		/*4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_I_CH1_ADC_ADJUST_I        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF1_I_CH1_ADC_ADJUST_I        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_I_CH2_ADC_ADJUST_I        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF2_I_CH2_ADC_ADJUST_I        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_I_SIGNAL_SIZE_I              	0			/*Signal data size*/
#define BITP_DATA1_I_SIGNAL_SHIFT_I             	3			/*Signal data shift*/
#define BITP_DATA1_I_DARK_SIZE_I                	8			/*Dark data size*/
#define BITP_DATA1_I_DARK_SHIFT_I               	11			/*Dark data shift*/
#define BITM_DATA1_I_SIGNAL_SIZE_I              	0x0007		/*Signal data size*/
#define BITM_DATA1_I_SIGNAL_SHIFT_I             	0x00f8		/*Signal data shift*/
#define BITM_DATA1_I_DARK_SIZE_I                	0x0700		/*Dark data size*/
#define BITM_DATA1_I_DARK_SHIFT_I               	0xf800		/*Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_I_LIT_SIZE_I                 	0			/*Lit data size*/
#define BITP_DATA2_I_LIT_SHIFT_I                	3			/*Lit data shift*/
#define BITM_DATA2_I_LIT_SIZE_I                 	0x0007		/*Lit data size*/
#define BITM_DATA2_I_LIT_SHIFT_I                	0x00f8		/*Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_I_DECIMATE_TYPE_I         	0			/*Decimation Type Select*/
#define BITP_DECIMATE_I_DECIMATE_FACTOR_I       	4			/*Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_I_DECIMATE_TYPE_I         	0x000f		/*Decimation Type Select*/
#define BITM_DECIMATE_I_DECIMATE_FACTOR_I       	0x07f0		/*Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_I_LIT_OFFSET_I          	0			/*Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_I_LIT_OFFSET_I          	0x01ff		/*Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_I_DARK1_OFFSET_I       	0			/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_I_DARK2_OFFSET_I       	7			/*Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_I_DARK1_OFFSET_I       	0x007f		/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_I_DARK2_OFFSET_I       	0xff80		/*Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_I_THRESH0_TYPE_I        	0			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_I_THRESH0_DIR_I         	2			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_I_THRESH0_CHAN_I        	3			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_I_THRESH1_TYPE_I        	4			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_I_THRESH1_DIR_I         	6			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_I_THRESH1_CHAN_I        	7			/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_I_THRESH0_TYPE_I        	0x0003		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_I_THRESH0_DIR_I         	0x0004		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_I_THRESH0_CHAN_I        	0x0008		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_I_THRESH1_TYPE_I        	0x0030		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_I_THRESH1_DIR_I         	0x0040		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_I_THRESH1_CHAN_I        	0x0080		/*Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_I_THRESH0_VALUE_I          	0			/*Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_I_THRESH0_SHIFT_I          	8			/*Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_I_THRESH0_VALUE_I          	0x00ff		/*Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_I_THRESH0_SHIFT_I          	0x1f00		/*Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_I						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_I_THRESH1_VALUE_I          	0			/*Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_I_THRESH1_SHIFT_I          	8			/*Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_I_THRESH1_VALUE_I          	0x00ff		/*Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_I_THRESH1_SHIFT_I          	0x1f00		/*Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_J_TIMESLOT_OFFSET_J        	0			/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_J_INPUT_R_SELECT_J         	10			/*Input resistor select*/
#define BITP_TS_CTRL_J_SAMPLE_TYPE_J            	12			/*Timeslot Sampling Type*/
#define BITP_TS_CTRL_J_CH2_EN_J                 	14			/*Channel 2 enable*/
#define BITM_TS_CTRL_J_TIMESLOT_OFFSET_J        	0x03ff		/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_J_INPUT_R_SELECT_J         	0x0c00		/*Input resistor select*/
#define BITM_TS_CTRL_J_SAMPLE_TYPE_J            	0x3000		/*Timeslot Sampling Type*/
#define BITM_TS_CTRL_J_CH2_EN_J                 	0x4000		/*Channel 2 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_J_AFE_PATH_CFG_J           	0			/*Bypass and input mux select*/
#define BITP_TS_PATH_J_PRE_WIDTH_J              	12			/*Precondition duration for this timeslot.*/
#define BITM_TS_PATH_J_AFE_PATH_CFG_J           	0x01ff		/*Bypass and input mux select*/
#define BITM_TS_PATH_J_PRE_WIDTH_J              	0xf000		/*Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_J_INP12_J                   	0			/*Input pair12 enable*/
#define BITP_INPUTS_J_INP34_J                   	4			/*Input pair34 enable*/
#define BITP_INPUTS_J_INP56_J                   	8			/*Input pair56 enable*/
#define BITP_INPUTS_J_INP78_J                   	12			/*input pair78 enable*/
#define BITM_INPUTS_J_INP12_J                   	0x000f		/*Input pair12 enable*/
#define BITM_INPUTS_J_INP34_J                   	0x00f0		/*Input pair34 enable*/
#define BITM_INPUTS_J_INP56_J                   	0x0f00		/*Input pair56 enable*/
#define BITM_INPUTS_J_INP78_J                   	0xf000		/*input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_J_VC1_SEL_J                	0			/*VC1 active state for this timeslot*/
#define BITP_CATHODE_J_VC1_ALT_J                	2			/*VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_J_VC1_PULSE_J              	4			/*VC1 pulse control*/
#define BITP_CATHODE_J_VC2_SEL_J                	6			/*VC2 active state for this timeslot*/
#define BITP_CATHODE_J_VC2_ALT_J                	8			/*VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_J_VC2_PULSE_J              	10			/*VC2 pulse control*/
#define BITP_CATHODE_J_PRECON_J                 	12			/*Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_J_VC1_SEL_J                	0x0003		/*VC1 active state for this timeslot*/
#define BITM_CATHODE_J_VC1_ALT_J                	0x000c		/*VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_J_VC1_PULSE_J              	0x0030		/*VC1 pulse control*/
#define BITM_CATHODE_J_VC2_SEL_J                	0x00c0		/*VC2 active state for this timeslot*/
#define BITM_CATHODE_J_VC2_ALT_J                	0x0300		/*VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_J_VC2_PULSE_J              	0x0c00		/*VC2 pulse control*/
#define BITM_CATHODE_J_PRECON_J                 	0x7000		/*Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_J_TIA_GAIN_CH1_J          	0			/*Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_J_TIA_GAIN_CH2_J          	3			/*Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_J_VREF_PULSE_VAL_J        	6			/*Vref pulse alternate value*/
#define BITP_AFE_TRIM_J_AFE_TRIM_VREF_J         	8			/*Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_J_VREF_PULSE_J            	10			/*Vref pulse control*/
#define BITP_AFE_TRIM_J_AFE_TRIM_INT_J          	11			/*Integrator resistor and capacitor select*/
#define BITM_AFE_TRIM_J_TIA_GAIN_CH1_J          	0x0007		/*Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_J_TIA_GAIN_CH2_J          	0x0038		/*Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_J_VREF_PULSE_VAL_J        	0x00c0		/*Vref pulse alternate value*/
#define BITM_AFE_TRIM_J_AFE_TRIM_VREF_J         	0x0300		/*Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_J_VREF_PULSE_J            	0x0400		/*Vref pulse control*/
#define BITM_AFE_TRIM_J_AFE_TRIM_INT_J          	0xf800		/*Integrator resistor and capacitor select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_J_LED_CURRENT1_J         	0			/*Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_J_LED_DRIVESIDE1_J       	7			/*Led output select for LED1*/
#define BITP_LED_POW12_J_LED_CURRENT2_J         	8			/*Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_J_LED_DRIVESIDE2_J       	15			/*Led output select for LED2*/
#define BITM_LED_POW12_J_LED_CURRENT1_J         	0x007f		/*Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_J_LED_DRIVESIDE1_J       	0x0080		/*Led output select for LED1*/
#define BITM_LED_POW12_J_LED_CURRENT2_J         	0x7f00		/*Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_J_LED_DRIVESIDE2_J       	0x8000		/*Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_J_LED_CURRENT3_J         	0			/*Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_J_LED_DRIVESIDE3_J       	7			/*Led output select for LED3*/
#define BITP_LED_POW34_J_LED_CURRENT4_J         	8			/*Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_J_LED_DRIVESIDE4_J       	15			/*Led output select for LED4*/
#define BITM_LED_POW34_J_LED_CURRENT3_J         	0x007f		/*Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_J_LED_DRIVESIDE3_J       	0x0080		/*Led output select for LED3*/
#define BITM_LED_POW34_J_LED_CURRENT4_J         	0x7f00		/*Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_J_LED_DRIVESIDE4_J       	0x8000		/*Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_J_NUM_REPEAT_J              	0			/*Number of sequence repeats.*/
#define BITP_COUNTS_J_NUM_INT_J                 	8			/*Number of ADC cycles or acquisition width*/
#define BITM_COUNTS_J_NUM_REPEAT_J              	0x00ff		/*Number of sequence repeats.*/
#define BITM_COUNTS_J_NUM_INT_J                 	0xff00		/*Number of ADC cycles or acquisition width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_J_MIN_PERIOD_J              	0			/*Minimum Period for pulse repetition.*/
#define BITP_PERIOD_J_MOD_TYPE_J                	12			/*Modulation Connection type*/
#define BITM_PERIOD_J_MIN_PERIOD_J              	0x03ff		/*Minimum Period for pulse repetition.*/
#define BITM_PERIOD_J_MOD_TYPE_J                	0x3000		/*Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_J_LED_OFFSET_J           	0			/*LED pulse offset*/
#define BITP_LED_PULSE_J_LED_WIDTH_J            	8			/*LED pulse width*/
#define BITM_LED_PULSE_J_LED_OFFSET_J           	0x00ff		/*LED pulse offset*/
#define BITM_LED_PULSE_J_LED_WIDTH_J            	0xff00		/*LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_J_INTEG_WIDTH_J        	0			/*Integrator clock width*/
#define BITP_INTEG_WIDTH_J_ADC_COUNT_J          	6			/*ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_J_CH1_AMP_DISABLE_J    	8			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_J_AFE_INT_C_BUF_J      	11			/*Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_J_CH2_AMP_DISABLE_J    	12			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_J_SINGLE_INTEG_J       	15			/*Use single integrator pulse*/
#define BITM_INTEG_WIDTH_J_INTEG_WIDTH_J        	0x001f		/*Integrator clock width*/
#define BITM_INTEG_WIDTH_J_ADC_COUNT_J          	0x00c0		/*ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_J_CH1_AMP_DISABLE_J    	0x0700		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_J_AFE_INT_C_BUF_J      	0x0800		/*Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_J_CH2_AMP_DISABLE_J    	0x7000		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_J_SINGLE_INTEG_J       	0x8000		/*Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_J_INTEG_OFFSET_J      	0			/*Integrator clock coarse offset*/
#define BITP_INTEG_OFFSET_J_INTEG_FINE_OFFSET_J 	8			/*Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_J_INTEG_OFFSET_J      	0x00ff		/*Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_J_INTEG_FINE_OFFSET_J 	0x1f00		/*Integrator clock fine offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_J_MOD_OFFSET_J           	0			/*modulation pulse offset*/
#define BITP_MOD_PULSE_J_MOD_WIDTH_J            	8			/*modulation pulse width.*/
#define BITM_MOD_PULSE_J_MOD_OFFSET_J           	0x00ff		/*modulation pulse offset*/
#define BITM_MOD_PULSE_J_MOD_WIDTH_J            	0xff00		/*modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_J_REVERSE_INTEG_J          	0			/*4 Pulse integration reverse pattern*/
#define BITP_PATTERN_J_SUBTRACT_J               	4			/*4 Pulse subtract pattern*/
#define BITP_PATTERN_J_MOD_DISABLE_J            	8			/*4 Pulse modulation disable pattern*/
#define BITP_PATTERN_J_LED_DISABLE_J            	12			/*4 Pulse LED disable pattern*/
#define BITM_PATTERN_J_REVERSE_INTEG_J          	0x000f		/*4 Pulse integration reverse pattern*/
#define BITM_PATTERN_J_SUBTRACT_J               	0x00f0		/*4 Pulse subtract pattern*/
#define BITM_PATTERN_J_MOD_DISABLE_J            	0x0f00		/*4 Pulse modulation disable pattern*/
#define BITM_PATTERN_J_LED_DISABLE_J            	0xf000		/*4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_J_CH1_ADC_ADJUST_J        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF1_J_CH1_ADC_ADJUST_J        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_J_CH2_ADC_ADJUST_J        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF2_J_CH2_ADC_ADJUST_J        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_J_SIGNAL_SIZE_J              	0			/*Signal data size*/
#define BITP_DATA1_J_SIGNAL_SHIFT_J             	3			/*Signal data shift*/
#define BITP_DATA1_J_DARK_SIZE_J                	8			/*Dark data size*/
#define BITP_DATA1_J_DARK_SHIFT_J               	11			/*Dark data shift*/
#define BITM_DATA1_J_SIGNAL_SIZE_J              	0x0007		/*Signal data size*/
#define BITM_DATA1_J_SIGNAL_SHIFT_J             	0x00f8		/*Signal data shift*/
#define BITM_DATA1_J_DARK_SIZE_J                	0x0700		/*Dark data size*/
#define BITM_DATA1_J_DARK_SHIFT_J               	0xf800		/*Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_J_LIT_SIZE_J                 	0			/*Lit data size*/
#define BITP_DATA2_J_LIT_SHIFT_J                	3			/*Lit data shift*/
#define BITM_DATA2_J_LIT_SIZE_J                 	0x0007		/*Lit data size*/
#define BITM_DATA2_J_LIT_SHIFT_J                	0x00f8		/*Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_J_DECIMATE_TYPE_J         	0			/*Decimation Type Select*/
#define BITP_DECIMATE_J_DECIMATE_FACTOR_J       	4			/*Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_J_DECIMATE_TYPE_J         	0x000f		/*Decimation Type Select*/
#define BITM_DECIMATE_J_DECIMATE_FACTOR_J       	0x07f0		/*Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_J_LIT_OFFSET_J          	0			/*Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_J_LIT_OFFSET_J          	0x01ff		/*Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_J_DARK1_OFFSET_J       	0			/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_J_DARK2_OFFSET_J       	7			/*Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_J_DARK1_OFFSET_J       	0x007f		/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_J_DARK2_OFFSET_J       	0xff80		/*Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_J_THRESH0_TYPE_J        	0			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_J_THRESH0_DIR_J         	2			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_J_THRESH0_CHAN_J        	3			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_J_THRESH1_TYPE_J        	4			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_J_THRESH1_DIR_J         	6			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_J_THRESH1_CHAN_J        	7			/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_J_THRESH0_TYPE_J        	0x0003		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_J_THRESH0_DIR_J         	0x0004		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_J_THRESH0_CHAN_J        	0x0008		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_J_THRESH1_TYPE_J        	0x0030		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_J_THRESH1_DIR_J         	0x0040		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_J_THRESH1_CHAN_J        	0x0080		/*Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_J_THRESH0_VALUE_J          	0			/*Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_J_THRESH0_SHIFT_J          	8			/*Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_J_THRESH0_VALUE_J          	0x00ff		/*Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_J_THRESH0_SHIFT_J          	0x1f00		/*Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_J						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_J_THRESH1_VALUE_J          	0			/*Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_J_THRESH1_SHIFT_J          	8			/*Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_J_THRESH1_VALUE_J          	0x00ff		/*Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_J_THRESH1_SHIFT_J          	0x1f00		/*Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_K_TIMESLOT_OFFSET_K        	0			/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_K_INPUT_R_SELECT_K         	10			/*Input resistor select*/
#define BITP_TS_CTRL_K_SAMPLE_TYPE_K            	12			/*Timeslot Sampling Type*/
#define BITP_TS_CTRL_K_CH2_EN_K                 	14			/*Channel 2 enable*/
#define BITM_TS_CTRL_K_TIMESLOT_OFFSET_K        	0x03ff		/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_K_INPUT_R_SELECT_K         	0x0c00		/*Input resistor select*/
#define BITM_TS_CTRL_K_SAMPLE_TYPE_K            	0x3000		/*Timeslot Sampling Type*/
#define BITM_TS_CTRL_K_CH2_EN_K                 	0x4000		/*Channel 2 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_K_AFE_PATH_CFG_K           	0			/*Bypass and input mux select*/
#define BITP_TS_PATH_K_PRE_WIDTH_K              	12			/*Precondition duration for this timeslot.*/
#define BITM_TS_PATH_K_AFE_PATH_CFG_K           	0x01ff		/*Bypass and input mux select*/
#define BITM_TS_PATH_K_PRE_WIDTH_K              	0xf000		/*Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_K_INP12_K                   	0			/*Input pair12 enable*/
#define BITP_INPUTS_K_INP34_K                   	4			/*Input pair34 enable*/
#define BITP_INPUTS_K_INP56_K                   	8			/*Input pair56 enable*/
#define BITP_INPUTS_K_INP78_K                   	12			/*input pair78 enable*/
#define BITM_INPUTS_K_INP12_K                   	0x000f		/*Input pair12 enable*/
#define BITM_INPUTS_K_INP34_K                   	0x00f0		/*Input pair34 enable*/
#define BITM_INPUTS_K_INP56_K                   	0x0f00		/*Input pair56 enable*/
#define BITM_INPUTS_K_INP78_K                   	0xf000		/*input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_K_VC1_SEL_K                	0			/*VC1 active state for this timeslot*/
#define BITP_CATHODE_K_VC1_ALT_K                	2			/*VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_K_VC1_PULSE_K              	4			/*VC1 pulse control*/
#define BITP_CATHODE_K_VC2_SEL_K                	6			/*VC2 active state for this timeslot*/
#define BITP_CATHODE_K_VC2_ALT_K                	8			/*VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_K_VC2_PULSE_K              	10			/*VC2 pulse control*/
#define BITP_CATHODE_K_PRECON_K                 	12			/*Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_K_VC1_SEL_K                	0x0003		/*VC1 active state for this timeslot*/
#define BITM_CATHODE_K_VC1_ALT_K                	0x000c		/*VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_K_VC1_PULSE_K              	0x0030		/*VC1 pulse control*/
#define BITM_CATHODE_K_VC2_SEL_K                	0x00c0		/*VC2 active state for this timeslot*/
#define BITM_CATHODE_K_VC2_ALT_K                	0x0300		/*VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_K_VC2_PULSE_K              	0x0c00		/*VC2 pulse control*/
#define BITM_CATHODE_K_PRECON_K                 	0x7000		/*Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_K_TIA_GAIN_CH1_K          	0			/*Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_K_TIA_GAIN_CH2_K          	3			/*Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_K_VREF_PULSE_VAL_K        	6			/*Vref pulse alternate value*/
#define BITP_AFE_TRIM_K_AFE_TRIM_VREF_K         	8			/*Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_K_VREF_PULSE_K            	10			/*Vref pulse control*/
#define BITP_AFE_TRIM_K_AFE_TRIM_INT_K          	11			/*Integrator resistor and capacitor select*/
#define BITM_AFE_TRIM_K_TIA_GAIN_CH1_K          	0x0007		/*Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_K_TIA_GAIN_CH2_K          	0x0038		/*Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_K_VREF_PULSE_VAL_K        	0x00c0		/*Vref pulse alternate value*/
#define BITM_AFE_TRIM_K_AFE_TRIM_VREF_K         	0x0300		/*Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_K_VREF_PULSE_K            	0x0400		/*Vref pulse control*/
#define BITM_AFE_TRIM_K_AFE_TRIM_INT_K          	0xf800		/*Integrator resistor and capacitor select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_K_LED_CURRENT1_K         	0			/*Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_K_LED_DRIVESIDE1_K       	7			/*Led output select for LED1*/
#define BITP_LED_POW12_K_LED_CURRENT2_K         	8			/*Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_K_LED_DRIVESIDE2_K       	15			/*Led output select for LED2*/
#define BITM_LED_POW12_K_LED_CURRENT1_K         	0x007f		/*Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_K_LED_DRIVESIDE1_K       	0x0080		/*Led output select for LED1*/
#define BITM_LED_POW12_K_LED_CURRENT2_K         	0x7f00		/*Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_K_LED_DRIVESIDE2_K       	0x8000		/*Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_K_LED_CURRENT3_K         	0			/*Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_K_LED_DRIVESIDE3_K       	7			/*Led output select for LED3*/
#define BITP_LED_POW34_K_LED_CURRENT4_K         	8			/*Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_K_LED_DRIVESIDE4_K       	15			/*Led output select for LED4*/
#define BITM_LED_POW34_K_LED_CURRENT3_K         	0x007f		/*Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_K_LED_DRIVESIDE3_K       	0x0080		/*Led output select for LED3*/
#define BITM_LED_POW34_K_LED_CURRENT4_K         	0x7f00		/*Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_K_LED_DRIVESIDE4_K       	0x8000		/*Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_K_NUM_REPEAT_K              	0			/*Number of sequence repeats.*/
#define BITP_COUNTS_K_NUM_INT_K                 	8			/*Number of ADC cycles or acquisition width*/
#define BITM_COUNTS_K_NUM_REPEAT_K              	0x00ff		/*Number of sequence repeats.*/
#define BITM_COUNTS_K_NUM_INT_K                 	0xff00		/*Number of ADC cycles or acquisition width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_K_MIN_PERIOD_K              	0			/*Minimum Period for pulse repetition.*/
#define BITP_PERIOD_K_MOD_TYPE_K                	12			/*Modulation Connection type*/
#define BITM_PERIOD_K_MIN_PERIOD_K              	0x03ff		/*Minimum Period for pulse repetition.*/
#define BITM_PERIOD_K_MOD_TYPE_K                	0x3000		/*Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_K_LED_OFFSET_K           	0			/*LED pulse offset*/
#define BITP_LED_PULSE_K_LED_WIDTH_K            	8			/*LED pulse width*/
#define BITM_LED_PULSE_K_LED_OFFSET_K           	0x00ff		/*LED pulse offset*/
#define BITM_LED_PULSE_K_LED_WIDTH_K            	0xff00		/*LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_K_INTEG_WIDTH_K        	0			/*Integrator clock width*/
#define BITP_INTEG_WIDTH_K_ADC_COUNT_K          	6			/*ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_K_CH1_AMP_DISABLE_K    	8			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_K_AFE_INT_C_BUF_K      	11			/*Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_K_CH2_AMP_DISABLE_K    	12			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_K_SINGLE_INTEG_K       	15			/*Use single integrator pulse*/
#define BITM_INTEG_WIDTH_K_INTEG_WIDTH_K        	0x001f		/*Integrator clock width*/
#define BITM_INTEG_WIDTH_K_ADC_COUNT_K          	0x00c0		/*ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_K_CH1_AMP_DISABLE_K    	0x0700		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_K_AFE_INT_C_BUF_K      	0x0800		/*Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_K_CH2_AMP_DISABLE_K    	0x7000		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_K_SINGLE_INTEG_K       	0x8000		/*Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_K_INTEG_OFFSET_K      	0			/*Integrator clock coarse offset*/
#define BITP_INTEG_OFFSET_K_INTEG_FINE_OFFSET_K 	8			/*Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_K_INTEG_OFFSET_K      	0x00ff		/*Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_K_INTEG_FINE_OFFSET_K 	0x1f00		/*Integrator clock fine offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_K_MOD_OFFSET_K           	0			/*modulation pulse offset*/
#define BITP_MOD_PULSE_K_MOD_WIDTH_K            	8			/*modulation pulse width.*/
#define BITM_MOD_PULSE_K_MOD_OFFSET_K           	0x00ff		/*modulation pulse offset*/
#define BITM_MOD_PULSE_K_MOD_WIDTH_K            	0xff00		/*modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_K_REVERSE_INTEG_K          	0			/*4 Pulse integration reverse pattern*/
#define BITP_PATTERN_K_SUBTRACT_K               	4			/*4 Pulse subtract pattern*/
#define BITP_PATTERN_K_MOD_DISABLE_K            	8			/*4 Pulse modulation disable pattern*/
#define BITP_PATTERN_K_LED_DISABLE_K            	12			/*4 Pulse LED disable pattern*/
#define BITM_PATTERN_K_REVERSE_INTEG_K          	0x000f		/*4 Pulse integration reverse pattern*/
#define BITM_PATTERN_K_SUBTRACT_K               	0x00f0		/*4 Pulse subtract pattern*/
#define BITM_PATTERN_K_MOD_DISABLE_K            	0x0f00		/*4 Pulse modulation disable pattern*/
#define BITM_PATTERN_K_LED_DISABLE_K            	0xf000		/*4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_K_CH1_ADC_ADJUST_K        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF1_K_CH1_ADC_ADJUST_K        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_K_CH2_ADC_ADJUST_K        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF2_K_CH2_ADC_ADJUST_K        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_K_SIGNAL_SIZE_K              	0			/*Signal data size*/
#define BITP_DATA1_K_SIGNAL_SHIFT_K             	3			/*Signal data shift*/
#define BITP_DATA1_K_DARK_SIZE_K                	8			/*Dark data size*/
#define BITP_DATA1_K_DARK_SHIFT_K               	11			/*Dark data shift*/
#define BITM_DATA1_K_SIGNAL_SIZE_K              	0x0007		/*Signal data size*/
#define BITM_DATA1_K_SIGNAL_SHIFT_K             	0x00f8		/*Signal data shift*/
#define BITM_DATA1_K_DARK_SIZE_K                	0x0700		/*Dark data size*/
#define BITM_DATA1_K_DARK_SHIFT_K               	0xf800		/*Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_K_LIT_SIZE_K                 	0			/*Lit data size*/
#define BITP_DATA2_K_LIT_SHIFT_K                	3			/*Lit data shift*/
#define BITM_DATA2_K_LIT_SIZE_K                 	0x0007		/*Lit data size*/
#define BITM_DATA2_K_LIT_SHIFT_K                	0x00f8		/*Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_K_DECIMATE_TYPE_K         	0			/*Decimation Type Select*/
#define BITP_DECIMATE_K_DECIMATE_FACTOR_K       	4			/*Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_K_DECIMATE_TYPE_K         	0x000f		/*Decimation Type Select*/
#define BITM_DECIMATE_K_DECIMATE_FACTOR_K       	0x07f0		/*Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_K_LIT_OFFSET_K          	0			/*Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_K_LIT_OFFSET_K          	0x01ff		/*Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_K_DARK1_OFFSET_K       	0			/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_K_DARK2_OFFSET_K       	7			/*Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_K_DARK1_OFFSET_K       	0x007f		/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_K_DARK2_OFFSET_K       	0xff80		/*Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_K_THRESH0_TYPE_K        	0			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_K_THRESH0_DIR_K         	2			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_K_THRESH0_CHAN_K        	3			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_K_THRESH1_TYPE_K        	4			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_K_THRESH1_DIR_K         	6			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_K_THRESH1_CHAN_K        	7			/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_K_THRESH0_TYPE_K        	0x0003		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_K_THRESH0_DIR_K         	0x0004		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_K_THRESH0_CHAN_K        	0x0008		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_K_THRESH1_TYPE_K        	0x0030		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_K_THRESH1_DIR_K         	0x0040		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_K_THRESH1_CHAN_K        	0x0080		/*Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_K_THRESH0_VALUE_K          	0			/*Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_K_THRESH0_SHIFT_K          	8			/*Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_K_THRESH0_VALUE_K          	0x00ff		/*Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_K_THRESH0_SHIFT_K          	0x1f00		/*Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_K						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_K_THRESH1_VALUE_K          	0			/*Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_K_THRESH1_SHIFT_K          	8			/*Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_K_THRESH1_VALUE_K          	0x00ff		/*Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_K_THRESH1_SHIFT_K          	0x1f00		/*Shift for threshold compare level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_L_TIMESLOT_OFFSET_L        	0			/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_L_INPUT_R_SELECT_L         	10			/*Input resistor select*/
#define BITP_TS_CTRL_L_SAMPLE_TYPE_L            	12			/*Timeslot Sampling Type*/
#define BITP_TS_CTRL_L_CH2_EN_L                 	14			/*Channel 2 enable*/
#define BITM_TS_CTRL_L_TIMESLOT_OFFSET_L        	0x03ff		/*Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_L_INPUT_R_SELECT_L         	0x0c00		/*Input resistor select*/
#define BITM_TS_CTRL_L_SAMPLE_TYPE_L            	0x3000		/*Timeslot Sampling Type*/
#define BITM_TS_CTRL_L_CH2_EN_L                 	0x4000		/*Channel 2 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_L_AFE_PATH_CFG_L           	0			/*Bypass and input mux select*/
#define BITP_TS_PATH_L_PRE_WIDTH_L              	12			/*Precondition duration for this timeslot.*/
#define BITM_TS_PATH_L_AFE_PATH_CFG_L           	0x01ff		/*Bypass and input mux select*/
#define BITM_TS_PATH_L_PRE_WIDTH_L              	0xf000		/*Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_L_INP12_L                   	0			/*Input pair12 enable*/
#define BITP_INPUTS_L_INP34_L                   	4			/*Input pair34 enable*/
#define BITP_INPUTS_L_INP56_L                   	8			/*Input pair56 enable*/
#define BITP_INPUTS_L_INP78_L                   	12			/*input pair78 enable*/
#define BITM_INPUTS_L_INP12_L                   	0x000f		/*Input pair12 enable*/
#define BITM_INPUTS_L_INP34_L                   	0x00f0		/*Input pair34 enable*/
#define BITM_INPUTS_L_INP56_L                   	0x0f00		/*Input pair56 enable*/
#define BITM_INPUTS_L_INP78_L                   	0xf000		/*input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_L_VC1_SEL_L                	0			/*VC1 active state for this timeslot*/
#define BITP_CATHODE_L_VC1_ALT_L                	2			/*VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_L_VC1_PULSE_L              	4			/*VC1 pulse control*/
#define BITP_CATHODE_L_VC2_SEL_L                	6			/*VC2 active state for this timeslot*/
#define BITP_CATHODE_L_VC2_ALT_L                	8			/*VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_L_VC2_PULSE_L              	10			/*VC2 pulse control*/
#define BITP_CATHODE_L_PRECON_L                 	12			/*Precondition value for enabled inputs during this timeslot*/
#define BITM_CATHODE_L_VC1_SEL_L                	0x0003		/*VC1 active state for this timeslot*/
#define BITM_CATHODE_L_VC1_ALT_L                	0x000c		/*VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_L_VC1_PULSE_L              	0x0030		/*VC1 pulse control*/
#define BITM_CATHODE_L_VC2_SEL_L                	0x00c0		/*VC2 active state for this timeslot*/
#define BITM_CATHODE_L_VC2_ALT_L                	0x0300		/*VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_L_VC2_PULSE_L              	0x0c00		/*VC2 pulse control*/
#define BITM_CATHODE_L_PRECON_L                 	0x7000		/*Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_L_TIA_GAIN_CH1_L          	0			/*Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_L_TIA_GAIN_CH2_L          	3			/*Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_L_VREF_PULSE_VAL_L        	6			/*Vref pulse alternate value*/
#define BITP_AFE_TRIM_L_AFE_TRIM_VREF_L         	8			/*Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_L_VREF_PULSE_L            	10			/*Vref pulse control*/
#define BITP_AFE_TRIM_L_AFE_TRIM_INT_L          	11			/*Integrator resistor and capacitor select*/
#define BITM_AFE_TRIM_L_TIA_GAIN_CH1_L          	0x0007		/*Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_L_TIA_GAIN_CH2_L          	0x0038		/*Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_L_VREF_PULSE_VAL_L        	0x00c0		/*Vref pulse alternate value*/
#define BITM_AFE_TRIM_L_AFE_TRIM_VREF_L         	0x0300		/*Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_L_VREF_PULSE_L            	0x0400		/*Vref pulse control*/
#define BITM_AFE_TRIM_L_AFE_TRIM_INT_L          	0xf800		/*Integrator resistor and capacitor select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_L_LED_CURRENT1_L         	0			/*Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_L_LED_DRIVESIDE1_L       	7			/*Led output select for LED1*/
#define BITP_LED_POW12_L_LED_CURRENT2_L         	8			/*Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_L_LED_DRIVESIDE2_L       	15			/*Led output select for LED2*/
#define BITM_LED_POW12_L_LED_CURRENT1_L         	0x007f		/*Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_L_LED_DRIVESIDE1_L       	0x0080		/*Led output select for LED1*/
#define BITM_LED_POW12_L_LED_CURRENT2_L         	0x7f00		/*Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_L_LED_DRIVESIDE2_L       	0x8000		/*Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_L_LED_CURRENT3_L         	0			/*Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_L_LED_DRIVESIDE3_L       	7			/*Led output select for LED3*/
#define BITP_LED_POW34_L_LED_CURRENT4_L         	8			/*Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_L_LED_DRIVESIDE4_L       	15			/*Led output select for LED4*/
#define BITM_LED_POW34_L_LED_CURRENT3_L         	0x007f		/*Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_L_LED_DRIVESIDE3_L       	0x0080		/*Led output select for LED3*/
#define BITM_LED_POW34_L_LED_CURRENT4_L         	0x7f00		/*Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_L_LED_DRIVESIDE4_L       	0x8000		/*Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_L_NUM_REPEAT_L              	0			/*Number of sequence repeats.*/
#define BITP_COUNTS_L_NUM_INT_L                 	8			/*Number of ADC cycles or acquisition width*/
#define BITM_COUNTS_L_NUM_REPEAT_L              	0x00ff		/*Number of sequence repeats.*/
#define BITM_COUNTS_L_NUM_INT_L                 	0xff00		/*Number of ADC cycles or acquisition width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_L_MIN_PERIOD_L              	0			/*Minimum Period for pulse repetition.*/
#define BITP_PERIOD_L_MOD_TYPE_L                	12			/*Modulation Connection type*/
#define BITM_PERIOD_L_MIN_PERIOD_L              	0x03ff		/*Minimum Period for pulse repetition.*/
#define BITM_PERIOD_L_MOD_TYPE_L                	0x3000		/*Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_L_LED_OFFSET_L           	0			/*LED pulse offset*/
#define BITP_LED_PULSE_L_LED_WIDTH_L            	8			/*LED pulse width*/
#define BITM_LED_PULSE_L_LED_OFFSET_L           	0x00ff		/*LED pulse offset*/
#define BITM_LED_PULSE_L_LED_WIDTH_L            	0xff00		/*LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_WIDTH_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_WIDTH_L_INTEG_WIDTH_L        	0			/*Integrator clock width*/
#define BITP_INTEG_WIDTH_L_ADC_COUNT_L          	6			/*ADC conversions per pulse*/
#define BITP_INTEG_WIDTH_L_CH1_AMP_DISABLE_L    	8			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_L_AFE_INT_C_BUF_L      	11			/*Convert integrator to buffer*/
#define BITP_INTEG_WIDTH_L_CH2_AMP_DISABLE_L    	12			/*Amplifier disables for power control*/
#define BITP_INTEG_WIDTH_L_SINGLE_INTEG_L       	15			/*Use single integrator pulse*/
#define BITM_INTEG_WIDTH_L_INTEG_WIDTH_L        	0x001f		/*Integrator clock width*/
#define BITM_INTEG_WIDTH_L_ADC_COUNT_L          	0x00c0		/*ADC conversions per pulse*/
#define BITM_INTEG_WIDTH_L_CH1_AMP_DISABLE_L    	0x0700		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_L_AFE_INT_C_BUF_L      	0x0800		/*Convert integrator to buffer*/
#define BITM_INTEG_WIDTH_L_CH2_AMP_DISABLE_L    	0x7000		/*Amplifier disables for power control*/
#define BITM_INTEG_WIDTH_L_SINGLE_INTEG_L       	0x8000		/*Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OFFSET_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OFFSET_L_INTEG_OFFSET_L      	0			/*Integrator clock coarse offset*/
#define BITP_INTEG_OFFSET_L_INTEG_FINE_OFFSET_L 	8			/*Integrator clock fine offset*/
#define BITM_INTEG_OFFSET_L_INTEG_OFFSET_L      	0x00ff		/*Integrator clock coarse offset*/
#define BITM_INTEG_OFFSET_L_INTEG_FINE_OFFSET_L 	0x1f00		/*Integrator clock fine offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_L_MOD_OFFSET_L           	0			/*modulation pulse offset*/
#define BITP_MOD_PULSE_L_MOD_WIDTH_L            	8			/*modulation pulse width.*/
#define BITM_MOD_PULSE_L_MOD_OFFSET_L           	0x00ff		/*modulation pulse offset*/
#define BITM_MOD_PULSE_L_MOD_WIDTH_L            	0xff00		/*modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_L_REVERSE_INTEG_L          	0			/*4 Pulse integration reverse pattern*/
#define BITP_PATTERN_L_SUBTRACT_L               	4			/*4 Pulse subtract pattern*/
#define BITP_PATTERN_L_MOD_DISABLE_L            	8			/*4 Pulse modulation disable pattern*/
#define BITP_PATTERN_L_LED_DISABLE_L            	12			/*4 Pulse LED disable pattern*/
#define BITM_PATTERN_L_REVERSE_INTEG_L          	0x000f		/*4 Pulse integration reverse pattern*/
#define BITM_PATTERN_L_SUBTRACT_L               	0x00f0		/*4 Pulse subtract pattern*/
#define BITM_PATTERN_L_MOD_DISABLE_L            	0x0f00		/*4 Pulse modulation disable pattern*/
#define BITM_PATTERN_L_LED_DISABLE_L            	0xf000		/*4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_L_CH1_ADC_ADJUST_L        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF1_L_CH1_ADC_ADJUST_L        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_L_CH2_ADC_ADJUST_L        	0			/*Adjustment to ADC value.*/
#define BITM_ADC_OFF2_L_CH2_ADC_ADJUST_L        	0x3fff		/*Adjustment to ADC value.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA1_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA1_L_SIGNAL_SIZE_L              	0			/*Signal data size*/
#define BITP_DATA1_L_SIGNAL_SHIFT_L             	3			/*Signal data shift*/
#define BITP_DATA1_L_DARK_SIZE_L                	8			/*Dark data size*/
#define BITP_DATA1_L_DARK_SHIFT_L               	11			/*Dark data shift*/
#define BITM_DATA1_L_SIGNAL_SIZE_L              	0x0007		/*Signal data size*/
#define BITM_DATA1_L_SIGNAL_SHIFT_L             	0x00f8		/*Signal data shift*/
#define BITM_DATA1_L_DARK_SIZE_L                	0x0700		/*Dark data size*/
#define BITM_DATA1_L_DARK_SHIFT_L               	0xf800		/*Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA2_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA2_L_LIT_SIZE_L                 	0			/*Lit data size*/
#define BITP_DATA2_L_LIT_SHIFT_L                	3			/*Lit data shift*/
#define BITM_DATA2_L_LIT_SIZE_L                 	0x0007		/*Lit data size*/
#define BITM_DATA2_L_LIT_SHIFT_L                	0x00f8		/*Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_L_DECIMATE_TYPE_L         	0			/*Decimation Type Select*/
#define BITP_DECIMATE_L_DECIMATE_FACTOR_L       	4			/*Decimate Sample Divider (minus 1)*/
#define BITM_DECIMATE_L_DECIMATE_TYPE_L         	0x000f		/*Decimation Type Select*/
#define BITM_DECIMATE_L_DECIMATE_FACTOR_L       	0x07f0		/*Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_L_LIT_OFFSET_L          	0			/*Acquisition Window Lit Offset for Timeslot A*/
#define BITM_DIGINT_LIT_L_LIT_OFFSET_L          	0x01ff		/*Acquisition Window Lit Offset for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_L_DARK1_OFFSET_L       	0			/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITP_DIGINT_DARK_L_DARK2_OFFSET_L       	7			/*Acquisition Window Dark Offset 2 for Timeslot A*/
#define BITM_DIGINT_DARK_L_DARK1_OFFSET_L       	0x007f		/*Acquisition Window Dark Offset 1 for Timeslot A*/
#define BITM_DIGINT_DARK_L_DARK2_OFFSET_L       	0xff80		/*Acquisition Window Dark Offset 2 for Timeslot A*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_L_THRESH0_TYPE_L        	0			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_L_THRESH0_DIR_L         	2			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_L_THRESH0_CHAN_L        	3			/*Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_L_THRESH1_TYPE_L        	4			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_L_THRESH1_DIR_L         	6			/*Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_L_THRESH1_CHAN_L        	7			/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_L_THRESH0_TYPE_L        	0x0003		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_L_THRESH0_DIR_L         	0x0004		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_L_THRESH0_CHAN_L        	0x0008		/*Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_L_THRESH1_TYPE_L        	0x0030		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_L_THRESH1_DIR_L         	0x0040		/*Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_L_THRESH1_CHAN_L        	0x0080		/*Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_L_THRESH0_VALUE_L          	0			/*Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_L_THRESH0_SHIFT_L          	8			/*Shift for threshold compare level interrupt 0*/
#define BITM_THRESH0_L_THRESH0_VALUE_L          	0x00ff		/*Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_L_THRESH0_SHIFT_L          	0x1f00		/*Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1_L						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_L_THRESH1_VALUE_L          	0			/*Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_L_THRESH1_SHIFT_L          	8			/*Shift for threshold compare level interrupt 1*/
#define BITM_THRESH1_L_THRESH1_VALUE_L          	0x00ff		/*Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_L_THRESH1_SHIFT_L          	0x1f00		/*Shift for threshold compare level interrupt 1*/




#endif //ADPD400x_REG_DEF_H

