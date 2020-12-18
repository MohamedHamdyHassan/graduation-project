/*
 * UART.h
 *
 * Created: 13/12/2020 04:26:38 م
 *  Author: mns
 */ 


#ifndef UART_H_
#define UART_H_


#include "ATMEGA32_Regs.h"
#include "BIT_Math.h"

#include "DIO.h"

void UART_Iniat (void);

void UART_Tx (uint8 data);

void UART_TxString (uint8* str);

uint8 UART_Rx (void);



#endif /* UART_H_ */