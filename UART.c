/*
 * UART.c
 *
 * Created: 13/12/2020 04:26:21 م
 *  Author: mns
 */ 
#include "UART.h"
#include "DIO.h"


void UART_Iniat (void)
{
	
	uint8 UBRR_Val = 0;
	
	 DIO_SetPinDir( DIO_PIN0,  DIO_PORTD , DIO_PIN_INPUT);

	 DIO_SetPinDir( DIO_PIN1,  DIO_PORTD , DIO_PIN_OUTPUT);
	
    SET_BIT(UCSRB,3);

    SET_BIT(UCSRB,4);
	
	UCSRC|=0*86;
	
	UBRR_Val = (80000/(16*96)) -1 ;
	
	UBRRL = UBRR_Val ;
	
}

void UART_Tx (uint8 data)
{
	UDR = data;
	while(GET_BIT(UCSRA,5)==0);
}

void UART_TxString (uint8* str)
{
	
	uint8 i=0 ;
	
	while(str[i] != '\0')
	{
		UART_Tx(str[i]);
		i++;
	}
	
	}

uint8 UART_Rx (void)
{
	
	uint8 data=0;
	
	while(GET_BIT(UCSRA,7)==0);
	
	data = UDR;
	
	return data ;
	
}