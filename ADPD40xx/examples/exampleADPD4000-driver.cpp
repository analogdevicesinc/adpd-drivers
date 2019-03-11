/**
***************************************************************************
* @file         main.cpp
* @author       ADI
* @version      V1.0.0
* @date         25-Feb-2019
* @brief        Source file contains steps to read the data from fifo.
***************************************************************************
* @attention    The example shows, how to read data from fifo as below 
                format and Dark and Signal data size set as 2bytes.
                Slot A: CH1-> Dark, CH1-> Signal, CH2-> Dark, CH2-> Sugnal
***************************************************************************
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
#include "mbed.h"
#include "stdint.h" 
extern "C" {
#include "Adpd400xDrv.h"
#include "Adpd400xReg.h"
}
// macro definition
#define ADPD400x_I2C_DEVICE_ID 0x48
#define BAUDRATE 115200
#
// ADPD400x interrupt configuration instance
InterruptIn adpd400x_interrupt(D9);
EventFlags adpd400x_int_event;
// I2C instance
I2C i2c(I2C_SDA,I2C_SCL);
// SPI instance
SPI spi(SPI_MOSI, SPI_MISO, SPI_SCK); // mosi, miso, sclk
DigitalOut spi_cs(SPI_CS);
DigitalOut spi_cs_mux(A6); // 0 = CS_ADXL; 1 = CS_ADPD
// Serial Port instance
Serial serial_to_pc(USBTX, USBRX, BAUDRATE);


extern "C"  ADI_HAL_STATUS_t Adpd400x_I2C_TxRx(uint8_t *register_address, 
                                               uint8_t * buffer, 
                                               uint16_t txsize, 
                                               uint16_t rxsize);
extern "C"  ADI_HAL_STATUS_t Adpd400x_I2C_Transmit(uint8_t *register_address, 
                                                   uint16_t txsize);
extern "C"  ADI_HAL_STATUS_t Adpd400x_SPI_Receive(uint8_t *pTxData, 
                                                  uint8_t *pRxData, 
                                                  uint16_t TxSize, 
                                                  uint16_t RxSize);
extern "C"  ADI_HAL_STATUS_t Adpd400x_SPI_Transmit(uint8_t *pTxData, 
                                                   uint16_t TxSize);
extern "C" void MCU_HAL_Delay(uint32_t ms_delay);

/**
    * @brief    function to write a byte and read specified number of bytes from Adpd400x I2C
    * @param    8-bit register address pointer
    * @param    8-bit data pointer
    * @param    16-bit size of the data to write to the hardware
    * @param    16-bit size of the data to read from the hardware
    * @retval   HAL error status
    */
ADI_HAL_STATUS_t Adpd400x_I2C_TxRx(uint8_t *register_address, 
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
    * @retval   HAL error status
    */
ADI_HAL_STATUS_t Adpd400x_I2C_Transmit(uint8_t *register_address, 
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

ADI_HAL_STATUS_t Adpd400x_SPI_Receive(uint8_t *pTxData, uint8_t *pRxData, 
                                      uint16_t TxSize, uint16_t RxSize)
{
    spi_cs_mux = 1;
    spi_cs = 0;                    
    for (int iter = 0; iter < TxSize; iter++)
    {
        spi.write(*(pTxData + iter));
    }
    for (int iter = 0; iter < RxSize; iter++)
    {
        *(pRxData + iter) = spi.write(0);
    }
    spi_cs = 1;
        
    return ADI_HAL_OK;
}

ADI_HAL_STATUS_t Adpd400x_SPI_Transmit(uint8_t *pTxData, uint16_t TxSize)
{   
    spi_cs_mux = 1;
    spi_cs = 0;
    for (int iter = 0; iter < TxSize; iter++)
    {
        spi.write(*(pTxData + iter));
    }
    spi_cs = 1;
    
    return ADI_HAL_OK;
}

void MCU_HAL_Delay(uint32_t ms_delay)
{
    wait_ms(ms_delay);
}

/**
  *  @brief    Load ADPD400x default configuration
  *  @param    None
  *  @retval   int16_t A 16-bit integer: 0 - success; < 0 - failure
*/
int16_t LoadConfiguration()
{    
    int16_t err;
    
    err = Adpd400xDrvRegWrite(0x00F, 0x8000); // Reset ADPD400x
    /* Note: the ADPD reset is trapped by the driver.
    *  The driver will reset and apply an appropriate delay.
    *  Please note, Adpd400xDrvOpenDriver applies a reset as well,
    *  making this register write operation redundant.
    */
    
    err |= Adpd400xDrvRegWrite(0x009, 0x0097);
    err |= Adpd400xDrvRegWrite(0x00B, 0x02F6);
    err |= Adpd400xDrvRegWrite(0x00C, 0x0012);
    err |= Adpd400xDrvRegWrite(0x00D, 0x2710);
    err |= Adpd400xDrvRegWrite(0x00E, 0x0000);
    err |= Adpd400xDrvRegWrite(0x00F, 0x0006);
    err |= Adpd400xDrvRegWrite(0x020, 0x2222);
    err |= Adpd400xDrvRegWrite(0x021, 0x0000);
    err |= Adpd400xDrvRegWrite(0x007, 0x8FFF);
    err |= Adpd400xDrvRegWrite(0x100, 0x0000);
    err |= Adpd400xDrvRegWrite(0x101, 0x41DA);
    err |= Adpd400xDrvRegWrite(0x102, 0x0001);
    err |= Adpd400xDrvRegWrite(0x103, 0x5001);
    err |= Adpd400xDrvRegWrite(0x104, 0xE2C1);
    err |= Adpd400xDrvRegWrite(0x10B, 0x0E10);
    err |= Adpd400xDrvRegWrite(0x105, 0x2525);
    err |= Adpd400xDrvRegWrite(0x106, 0x0025);
    err |= Adpd400xDrvRegWrite(0x10E, 0x2000);
    err |= Adpd400xDrvRegWrite(0x10F, 0x0000);
    err |= Adpd400xDrvRegWrite(0x107, 0x0110);
    err |= Adpd400xDrvRegWrite(0x112, 0x0010);
    
    err |= Adpd400xDrvRegWrite(0x006, 16); // FIFO Threshold: 4 Samples
    err |= Adpd400xDrvRegWrite(0x014, 0x8000); // INT_ENABLE_XD - INTX_EN_FIFO_TH
    err |= Adpd400xDrvRegWrite(0x022, 0x0003); // GPIO0 as output
    err |= Adpd400xDrvRegWrite(0x023, 0x0002); //GPIO0 as INTX
    
    return err;
}

void ADPD400x_ISR(void)
{
    adpd400x_int_event.set(1);
}

/**
  *  @brief    Main program.
  *  @param    None
  *  @retval   None
*/
int main()
{
    uint16_t nTotalSlotSize;
    Adpd400xComMode_t bus_mode;
    
    spi_cs = 1;
    spi.format(8, 0);
    spi.frequency(1000000);
    i2c.frequency(400000);
    if (Adpd400xDrvOpenDriver() == ADPD400xDrv_ERROR)
    {
        serial_to_pc.printf("# Error: Cannot open driver. Halt.\r\n");
        adpd400x_int_event.wait_any(0xFFFF); // Do nothing
    }
    
    bus_mode = Adpd400xDrvGetComMode();
    if (bus_mode == ADPD400x_I2C_BUS)
    {
        serial_to_pc.printf("# ADPD400x found on I2C\r\n");
    } else if (bus_mode == ADPD400x_SPI_BUS)
    {
        serial_to_pc.printf("# ADPD400x found on SPI\r\n");
    } else
    {
        serial_to_pc.printf("# Error: Unknown bus\r\n");
        adpd400x_int_event.wait_any(0xFFFF); // Do nothing
    }
    
    if (LoadConfiguration() == ADPD400xDrv_ERROR)
    {
        serial_to_pc.printf("# Error: Cannot configure ADPD400x. Halt.\r\n");
        adpd400x_int_event.wait_any(0xFFFF); // Do nothing
    }
    
    adpd400x_interrupt.fall(&ADPD400x_ISR);
    
    // Configure the Slot A: Slot A, Enable, r-bytes, Channel Number
    if (Adpd400xDrvSlotSetup(0, 1, 0x04, 1) == ADPD400xDrv_ERROR)
    {
        serial_to_pc.printf("# Error: Cannot configure sample mode. Halt.\r\n");
        adpd400x_int_event.wait_any(0xFFFF); // Do nothing
    }
     
    // Set Sensor to "Go Mode"
    if (Adpd400xDrvSetOperationMode(ADPD400xDrv_MODE_SAMPLE) == ADPD400xDrv_ERROR)
    {
        serial_to_pc.printf("# Error: Cannot set to GO mode. Halt.\r\n");
        adpd400x_int_event.wait_any(0xFFFF); // Do nothing
    }
    
    // Read the total slot data size
    Adpd400xDrvGetParameter(ADPD400x_SUM_SLOT_DATASIZE, 0, &nTotalSlotSize);
    
    uint16_t datarate = 0;
    if (Adpd400xDrvGetParameter(ADPD400x_OUTPUTDATARATE, 0, &datarate)  == 
        ADPD400xDrv_ERROR)
    {
        serial_to_pc.printf("# Error: Cannot get data rate. Halt.\r\n");
        adpd400x_int_event.wait_any(0xFFFF); // Do nothing
    }
    serial_to_pc.printf("# Datarate = %u Hz\r\n", datarate);
    
    // LED 1 @ 3mA; all other LEDs are off
    Adpd400xDrvSetLedCurrent(1, ADPD400xDrv_LED1, ADPD400xDrv_SLOTA);
    Adpd400xDrvSetLedCurrent(0, ADPD400xDrv_LED2, ADPD400xDrv_SLOTA);
    Adpd400xDrvSetLedCurrent(0, ADPD400xDrv_LED3, ADPD400xDrv_SLOTA);
    Adpd400xDrvSetLedCurrent(0, ADPD400xDrv_LED4, ADPD400xDrv_SLOTA);
        
    while(1)
    {
        uint8_t buffer[16];
        uint32_t samples[4];
        
        /* Wait for FIFO_TH Interrupt, see ADPD400x_ISR
        *  Wait forever for event '1', auto clear 
        */
        adpd400x_int_event.wait_any(1); 

        // Not using ADPD400x auto clear int flag -> need to clear
        Adpd400xDrvRegWrite(ADPD400x_REG_INT_STATUS_DATA, 0x8000);
        
        Adpd400xDrvReadFifoData(buffer, nTotalSlotSize * 4);
        
        for (uint8_t i = 0; i < 4; i++)
        {
            samples[i] = (buffer[4 * i] << 8) +
                        (buffer[4 * i + 1]) + 
                        (buffer[4 * i + 2] << 24) +
                        (buffer[4 * i + 3] << 16);
        }

        serial_to_pc.printf("%lu %lu %lu %lu\r\n", 
                              samples[0],
                              samples[1],
                              samples[2],
                              samples[3]
                              );
    }
    return 0;
}
