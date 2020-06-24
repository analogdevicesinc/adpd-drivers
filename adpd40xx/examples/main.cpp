/**
***************************************************************************
* @file         main.cpp
* @author       ADI
* @version      V1.0.0
* @date         15-June-2020
* @brief        Source file contains steps to read the data from fifo.
				The example shows, how to read data from fifo as below 
                format Signal data size set as 4bytes.
                Slot A: CH1-> Signal
***************************************************************************
* @attention    
***************************************************************************
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

#include "mbed.h"
#include "platform/mbed_thread.h"
#include "stdint.h" 
#include "app_config.h"

/* macro definition */
#define ADPD400x_I2C_DEVICE_ID 0x48 /* 8-bit slave address */
#define BAUDRATE 115200            /* Baudrate for the Uart serial com */
/* Blinking rate in milliseconds */
#define SLEEP_TIME 500
#define ADI_HAL_OK      0
#define ADI_HAL_ERROR  -1
/* ADPD400x interrupt configuration instance */
InterruptIn adpd4x_interrupt(ADPD_INT_PIN);
EventFlags adpd4x_int_event;
/* I2C instance */
mbed::I2C i2c(I2C_SDA,I2C_SCL);
/* SPI instance */
SPI spi(SPI_MOSI, SPI_MISO, SPI_SCK); // mosi, miso, sclk
DigitalOut spi_cs(SPI_CS);
DigitalOut spi_cs_mux(D3); // 0 = CS_ADXL; 1 = CS_ADPD
/* Serial Port instance */
Serial serial_to_pc(USBTX, USBRX, BAUDRATE);

/* Function Prototype -------------------------------------------------------*/
uint16_t Adpd400x_I2C_TxRx(uint8_t *register_address, uint8_t *buffer, 
                           uint16_t txsize, uint16_t rxsize);
uint16_t Adpd400x_I2C_Transmit(uint8_t *register_address, uint16_t txsize);
uint16_t Adpd400x_SPI_Receive(uint8_t *pTxData, uint8_t *pRxData, 
                              uint16_t TxSize, uint16_t RxSize);
uint16_t Adpd400x_SPI_Transmit(uint8_t *pTxData, uint16_t TxSize);
void MCU_HAL_Delay(uint32_t ms_delay);

/***********************private variables*********************/
tAdiAdpdDcfgInst dcfg_ADPD4000[39] =
{
  {0x0009U, 0x0085U},
  {0x000bU, 0x02faU},
  {0x000fU, 0x0006U},
  {0x000dU, 0x4E20U},
  {0x0006U, 0x0003U},
  {0x0014U, 0x8000U},
  {0x001eU, 0x0000U},
  {0x0020U, 0x0004U},
  {0x0021U, 0x0000U},
  {0x0022U, 0x0403U},
  {0x0023U, 0x0002U},
  {0x0024U, 0x0000U},
  {0x0100U, 0x0000U},
  {0x0101U, 0x41daU},
  {0x0102U, 0x0005U},
  {0x0103U, 0x5002U},
  {0x0104U, 0x03C9U},
  {0x0105U, 0x008aU},
  {0x0107U, 0x0101U},
  {0x010aU, 0x0003U},
  {0x010bU, 0x0206U},
  {0x010eU, 0x2000U},
  {0x0110U, 0x0004U},
  {0x0010U, 0x0000U}
};

static tAdiAdpdSSmInst oAdiAppInst;
uint8_t aFifoDataBuf[MAX_SAMPLES_IN_FIFO];

/**
 * @brief    function to write a byte and read specified number of bytes from Adpd400x I2C
 * @param    8-bit register address pointer
 * @param    8-bit data pointer
 * @param    16-bit size of the data to write to the hardware
 * @param    16-bit size of the data to read from the hardware
 * @retval   status: 0 (Success), -1 (Error)
 */
uint16_t Adpd400x_I2C_TxRx(uint8_t *register_address, 
                                   uint8_t *buffer, 
                                   uint16_t txsize, 
                                   uint16_t rxsize)
{
    int status = -1;
    status = i2c.write(ADPD400x_I2C_DEVICE_ID, (char *)register_address, txsize);
    status |= i2c.read(ADPD400x_I2C_DEVICE_ID, (char *)buffer, rxsize);
    if(status != -1)
    {
        return ADI_HAL_OK;
    }
    else
    {
        return ADI_HAL_ERROR;
    }
}

/**
 * @brief    function to transmit data through Adpd400x I2C
 * @param    8-bit register address pointer
 * @param    16-bit size of the data to write to the hardware
 * @retval   status: 0 (Success), -1 (Error)
 */
uint16_t Adpd400x_I2C_Transmit(uint8_t *register_address, 
                                       uint16_t txsize)
{
    int status = -1;
    status = i2c.write(ADPD400x_I2C_DEVICE_ID, (char *)register_address, txsize);
    if(status != -1)
    {
        return ADI_HAL_OK;
    }
    else
    {
        return ADI_HAL_ERROR;
    }
}

/**
 * @brief    function to write a byte and read specified number of bytes from Adpd400x SPI
 * @param    8-bit register address pointer
 * @param    8-bit data pointer
 * @param    16-bit size of the data to write to the hardware
 * @param    16-bit size of the data to read from the hardware
 * @retval   status: 0 (Success), -1 (Error)
 */
uint16_t Adpd400x_SPI_Receive(uint8_t *pTxData, uint8_t *pRxData, 
                                      uint16_t TxSize, uint16_t RxSize)
{
    uint16_t cnt = 0;
    
    spi_cs_mux = 1;
    spi_cs = 0;
    cnt = spi.write((const char*)pTxData, (int)TxSize, 
                    (char *)pRxData, (int)RxSize);
    spi_cs = 1;
    
    serial_to_pc.printf("%u\r\n", cnt);
    
    return ((TxSize + RxSize) == cnt)?ADI_HAL_OK:ADI_HAL_ERROR;
}

/**
 * @brief    function to transmit data through Adpd400x SPI
 * @param    8-bit register address pointer
 * @param    16-bit size of the data to write to the hardware
 * @retval   status: 0 (Success), -1 (Error)
 */
uint16_t Adpd400x_SPI_Transmit(uint8_t *pTxData, uint16_t TxSize)
{
    uint16_t cnt = 0;
    
    spi_cs_mux = 1;
    spi_cs = 0;
    cnt = spi.write((const char *)pTxData, (int)TxSize, 0, 0);
    spi_cs = 1;
    
    return (TxSize == cnt)?ADI_HAL_OK:ADI_HAL_ERROR;
}

void MCU_HAL_Delay(uint32_t ms_delay)
{
    thread_sleep_for(ms_delay);
}

/**
*  @brief    Callback function.
*  \param    None
*  @retval   None
*/
static void AdpdFifoCallBack(void)
{
    adpd4x_int_event.set(1);
}

int main(void)
{
    uint16_t nAdpdFifoLevelSize;
    ADI_ADPD_COMM_MODE bus_mode;
    uint32_t adpd_ch1 = 0U;
    uint16_t loop = 0U;
    static uint32_t tick = 0U;
    spi_cs = 1;
    spi.format(8, 0);
    spi.frequency(1000000);
    i2c.frequency(400000);
    if (adi_adpddrv_OpenDriver() != ADI_ADPD_DRV_SUCCESS)
    {
        serial_to_pc.printf("Error: Cannot open driver. Halt.\r\n");
        adpd4x_int_event.wait_any(0xFFFFU); // Do nothing
    }
    
    bus_mode = adi_adpddrv_GetComMode();
    if (bus_mode == E_ADI_ADPD_I2C_BUS)
    {
        serial_to_pc.printf("ADPD found on I2C\r\n");
    } else if (bus_mode == E_ADI_ADPD_SPI_BUS)
    {
        serial_to_pc.printf("ADPD found on SPI\r\n");
    } else
    {
        serial_to_pc.printf("Error: Unknown bus\r\n");
        adpd4x_int_event.wait_any(0xFFFFU); // Do nothing
    }
    
    /* Load default configuration parameters */
    if (adi_adpdssm_loadDcfg(dcfg_ADPD4000, 0xFFU) != ADI_ADPD_SSM_SUCCESS)
    {
        serial_to_pc.printf("Error: Cannot configure ADPD400x. Halt.\r\n");
        adpd4x_int_event.wait_any(0xFFFFU); // Do nothing
    }
    
    adpd4x_interrupt.fall(&AdpdFifoCallBack);
    
    /* Initialize the helper function module with driver instance */
    adi_adpdssm_slotinit(&oAdiAppInst);
    
    /* Set Sensor to "Go Mode" */
    if (adi_adpdssm_setOperationMode(E_ADI_ADPD_MODE_SAMPLE) != ADI_ADPD_DRV_SUCCESS)
    {
        serial_to_pc.printf("Error: Cannot set to GO mode. Halt.\r\n");
        adpd4x_int_event.wait_any(0xFFFFU); // Do nothing
    }
    
    while(1)
    {
        /* Wait for FIFO_TH Interrupt, see ADPD400x_ISR
        *  Wait forever for event '1', auto clear 
        */
        adpd4x_int_event.wait_any(1U); 
        uint32_t nRetValue = 0U;
        // Not using ADPD400x auto clear int flag -> need to clear
        adi_adpddrv_RegWrite(ADPD4x_REG_INT_STATUS_DATA, 0x8000);
        /* Read the size of the data available in the FIFO */
        nRetValue = adi_adpdssm_getFifoLvl(&nAdpdFifoLevelSize);
        if (nRetValue != ADI_ADPD_DRV_SUCCESS)
            continue;
        /* Read the fifo data available in the FIFO */
        nRetValue = adi_adpddrv_ReadFifoData(nAdpdFifoLevelSize, &aFifoDataBuf[0]);
        if (nRetValue != ADI_ADPD_DRV_SUCCESS)
            continue;

        loop = 0U;
        adpd_ch1 = 0U;
        /* Read the data from the FIFO and print them */
        while (nAdpdFifoLevelSize != 0u) {
            /* Byte swapping is needed to print ADPD data in proper format */
            adpd_ch1 = ((aFifoDataBuf[loop] << 8) +
                        (aFifoDataBuf[loop + 1]) +
                        (aFifoDataBuf[loop + 2] << 24) +
                        (aFifoDataBuf[loop + 3] << 16));

            serial_to_pc.printf("%u,%u\r\n", tick, adpd_ch1);

            nAdpdFifoLevelSize -= oAdiAppInst.oAdpdSlotInst.nTotalSlotSz;
            loop += oAdiAppInst.oAdpdSlotInst.nTotalSlotSz;
            tick += 1;
        }
    }
    return 0;
}