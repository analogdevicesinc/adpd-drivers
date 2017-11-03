/*
Copyright (c) 2012 Analog Devices, Inc.

All rights reserved.

*/

#ifndef _COMMON_H_
#define _COMMON_H_
#include <stdint.h>
#include <string.h>
#include <stdio.h>

/* --------------------------- definitions -------------------------------- */
#ifndef ABS
#define ABS(i_x) (((i_x) > 0) ? (i_x): -(i_x))
#endif

typedef enum {
  ADI_HAL_OK       = 0x00,
  ADI_HAL_ERROR    = 0x01,
  ADI_HAL_BUSY     = 0x02,
  ADI_HAL_TIMEOUT  = 0x03
} ADI_HAL_STATUS_t;

#define BUF_SIZE (256)
char _SBZ[BUF_SIZE];

#define debug(M, ...)  {_SBZ[0] = 0; \
                        snprintf(_SBZ, BUF_SIZE, "" M "", ##__VA_ARGS__); \
                        adi_printf("%s", _SBZ);}

void  MCU_HAL_Delay(uint32_t delay);
ADI_HAL_STATUS_t ADPD_SPI_Transmit(uint8_t *pTxData, uint16_t Size);
ADI_HAL_STATUS_t ADPD_SPI_Receive(uint8_t *pTxData, uint8_t *pRxData,
                                     uint16_t TxSize, uint16_t RxSize);
#endif
