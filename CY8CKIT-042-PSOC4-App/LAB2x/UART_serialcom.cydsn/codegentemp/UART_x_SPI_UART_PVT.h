/***************************************************************************//**
* \file UART_x_SPI_UART_PVT.h
* \version 4.0
*
* \brief
*  This private file provides constants and parameter values for the
*  SCB Component in SPI and UART modes.
*  Please do not use this file or its content in your project.
*
* Note:
*
********************************************************************************
* \copyright
* Copyright 2013-2017, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SCB_SPI_UART_PVT_UART_x_H)
#define CY_SCB_SPI_UART_PVT_UART_x_H

#include "UART_x_SPI_UART.h"


/***************************************
*     Internal Global Vars
***************************************/

#if (UART_x_INTERNAL_RX_SW_BUFFER_CONST)
    extern volatile uint32  UART_x_rxBufferHead;
    extern volatile uint32  UART_x_rxBufferTail;
    
    /**
    * \addtogroup group_globals
    * @{
    */
    
    /** Sets when internal software receive buffer overflow
     *  was occurred.
    */  
    extern volatile uint8   UART_x_rxBufferOverflow;
    /** @} globals */
#endif /* (UART_x_INTERNAL_RX_SW_BUFFER_CONST) */

#if (UART_x_INTERNAL_TX_SW_BUFFER_CONST)
    extern volatile uint32  UART_x_txBufferHead;
    extern volatile uint32  UART_x_txBufferTail;
#endif /* (UART_x_INTERNAL_TX_SW_BUFFER_CONST) */

#if (UART_x_INTERNAL_RX_SW_BUFFER)
    extern volatile uint8 UART_x_rxBufferInternal[UART_x_INTERNAL_RX_BUFFER_SIZE];
#endif /* (UART_x_INTERNAL_RX_SW_BUFFER) */

#if (UART_x_INTERNAL_TX_SW_BUFFER)
    extern volatile uint8 UART_x_txBufferInternal[UART_x_TX_BUFFER_SIZE];
#endif /* (UART_x_INTERNAL_TX_SW_BUFFER) */


/***************************************
*     Private Function Prototypes
***************************************/

void UART_x_SpiPostEnable(void);
void UART_x_SpiStop(void);

#if (UART_x_SCB_MODE_SPI_CONST_CFG)
    void UART_x_SpiInit(void);
#endif /* (UART_x_SCB_MODE_SPI_CONST_CFG) */

#if (UART_x_SPI_WAKE_ENABLE_CONST)
    void UART_x_SpiSaveConfig(void);
    void UART_x_SpiRestoreConfig(void);
#endif /* (UART_x_SPI_WAKE_ENABLE_CONST) */

void UART_x_UartPostEnable(void);
void UART_x_UartStop(void);

#if (UART_x_SCB_MODE_UART_CONST_CFG)
    void UART_x_UartInit(void);
#endif /* (UART_x_SCB_MODE_UART_CONST_CFG) */

#if (UART_x_UART_WAKE_ENABLE_CONST)
    void UART_x_UartSaveConfig(void);
    void UART_x_UartRestoreConfig(void);
#endif /* (UART_x_UART_WAKE_ENABLE_CONST) */


/***************************************
*         UART API Constants
***************************************/

/* UART RX and TX position to be used in UART_x_SetPins() */
#define UART_x_UART_RX_PIN_ENABLE    (UART_x_UART_RX)
#define UART_x_UART_TX_PIN_ENABLE    (UART_x_UART_TX)

/* UART RTS and CTS position to be used in  UART_x_SetPins() */
#define UART_x_UART_RTS_PIN_ENABLE    (0x10u)
#define UART_x_UART_CTS_PIN_ENABLE    (0x20u)


/***************************************
* The following code is DEPRECATED and
* must not be used.
***************************************/

/* Interrupt processing */
#define UART_x_SpiUartEnableIntRx(intSourceMask)  UART_x_SetRxInterruptMode(intSourceMask)
#define UART_x_SpiUartEnableIntTx(intSourceMask)  UART_x_SetTxInterruptMode(intSourceMask)
uint32  UART_x_SpiUartDisableIntRx(void);
uint32  UART_x_SpiUartDisableIntTx(void);


#endif /* (CY_SCB_SPI_UART_PVT_UART_x_H) */


/* [] END OF FILE */
