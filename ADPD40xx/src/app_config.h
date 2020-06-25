/**
****************************************************************************
* @file         app_config.h
* @author       ADI
* @version      V0.1
* @date         15-June-2020
* @brief        Pin configurations for the SDP_1
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

#ifndef _APP_CONFIG_H_
#define _APP_CONFIG_H_

#include <stdint.h>
#include "PinNames.h"

#ifdef __cplusplus
extern "C"
{
#endif
#ifdef __cplusplus
#include "adi_adpd_driver.h"
#include "adi_adpd_ssm.h"
#include "adi_adpd_reg.h"
}
#endif


#define  ARDUINO


/**
  The ADI SDP_K1 can be used with both arduino headers
  or the 120-pin SDP connector found on ADI evaluation
  boards. The default is the SDP connector

  Uncomment the ARDUINO #define above to enable the ARDUINO connector

*/
//#warning  check this
#ifdef ARDUINO
	#define I2C_SCL     	D15
	#define I2C_SDA     	D14

	#define SPI_CS			D10
	#define SPI_MISO		D12
	#define SPI_MOSI		D11
	#define SPI_SCK			D13

	#define ADPD_INT_PIN	D8  
#else
	#define I2C_SCL     SDP_I2C_SCL
	#define I2C_SDA     SDP_I2C_SDA

	#define SPI_CS		SDP_SPI_CS_A
	#define SPI_MISO	SDP_SPI_MISO
	#define SPI_MOSI	SDP_SPI_MOSI
	#define SPI_SCK		SDP_SPI_SCK

	#define	ADPD_INT_PIN SDP_GPIO_0
#endif

#endif //_APP_CONFIG_H_
