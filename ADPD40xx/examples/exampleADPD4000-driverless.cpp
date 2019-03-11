// Copyright (C) 2019 Analog Devices, Inc. - All Rights Reserved
#include "mbed.h"

// macro definition
#define ADPD400x_DEVICE_ID 0x48 /* 8-bit address of ADPD4000 */

// I2C instance
I2C i2c(I2C_SDA,I2C_SCL);
// Serial Port instance
Serial pc(USBTX, USBRX);

uint16_t ADPD400x_Read_Register(uint16_t register_address)
{
    char data[2];
    char buffer[2];
    char txsize;
    if(register_address < 0x7f)
    {
        data[0] = register_address;
        data[1] = 0x00;
        txsize = 1;
    }
    else
    {
        data[0] = register_address >> 8 | 0x80; // Set MSB bit as one
        data[1] = register_address;
        txsize = 2;
    }
    i2c.write(ADPD400x_DEVICE_ID, data, txsize);
    i2c.read(ADPD400x_DEVICE_ID, buffer, 2);
    uint16_t register_value = buffer[0]*256 + buffer[1];
    return(register_value);
}

void ADPD400x_Write_Register(uint16_t register_address, uint16_t register_value)
{
    char data[4];
    char txsize;
    if(register_address < 0x7f)
    {
        data[0] = register_address;
        data[1] = register_value>>8;
        data[2] = register_value;
        txsize = 3;
    }
    else
    {
        data[0] = register_address >> 8 | 0x80; // Set MSB bit as one
        data[1] = register_address;
        data[2] = register_value>>8;
        data[3] = register_value;
        txsize = 4;
    }
    i2c.write(ADPD400x_DEVICE_ID, data, txsize);
}

void LoadConfiguration()
{
    ADPD400x_Write_Register(0x00F, 0x8000); // reset
    wait_ms(100);
    ADPD400x_Write_Register(0x009, 0x0097);
    ADPD400x_Write_Register(0x00B, 0x02F6);
    ADPD400x_Write_Register(0x00C, 0x0012);
    ADPD400x_Write_Register(0x00D, 0x2710);
    ADPD400x_Write_Register(0x00E, 0x0000);
    ADPD400x_Write_Register(0x00F, 0x0006);
    ADPD400x_Write_Register(0x020, 0x2222);
    ADPD400x_Write_Register(0x021, 0x0000);
    ADPD400x_Write_Register(0x007, 0x8FFF);
    ADPD400x_Write_Register(0x100, 0x0000);
    ADPD400x_Write_Register(0x101, 0x41DA);
    ADPD400x_Write_Register(0x102, 0x0001);
    ADPD400x_Write_Register(0x103, 0x5001);
    ADPD400x_Write_Register(0x104, 0xE2C1);
    ADPD400x_Write_Register(0x10B, 0x0E10);
    ADPD400x_Write_Register(0x105, 0x2525);
    ADPD400x_Write_Register(0x106, 0x0025);
    ADPD400x_Write_Register(0x10E, 0x2000);
    ADPD400x_Write_Register(0x10F, 0x0000);
    ADPD400x_Write_Register(0x107, 0x0110);
    ADPD400x_Write_Register(0x112, 0x0010);
    ADPD400x_Write_Register(0x110, 0x0004); // 32-bit mode
}

int main()
{
    uint8_t datacount = 0;
    // Initialize Serial Port
    pc.baud(115200);
    // Set I2C Bus frequency
    i2c.frequency(100000);    
    LoadConfiguration();
    // Set Sensor to sample mode
    ADPD400x_Write_Register(0x0010, 0x0001);
    while(1)
    {
        // Read the sample count from FIFO status register
        datacount = (uint8_t)ADPD400x_Read_Register(0x00);
        
        if((datacount & 0x7FF) > 4*4)
        {
            uint32_t samples[4];
            for (int i = 0; i < 4; i++)
            {
                uint16_t l;
                uint16_t h;
                
                
                l = ADPD400x_Read_Register(0x2f);
                h = ADPD400x_Read_Register(0x2f);
                samples[i] = h;
                samples[i] <<= 16;
                samples[i] += l;
            }
            pc.printf("%lu %lu %lu %lu\r\n", 
                      samples[0],
                      samples[1],
                      samples[2],
                      samples[3]
                      );
        }
    }
    return 0;
}
