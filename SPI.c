/*
 * SPI.c
 *
 * Created: 12/14/2020 4:24:50 PM
 *  Author: 20100
 */ 

#include "SPI.h"

void SPI_Master_Init(void)
{
	DIO_SetPinDir(DIO_PORTB,DIO_PIN4,DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTB,DIO_PIN5,DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTB,DIO_PIN6,DIO_PIN_INPUT);
	DIO_SetPinDir(DIO_PORTB,DIO_PIN7,DIO_PIN_OUTPUT);
	SPCR |= 0X53;
	
}

void SPI_Slave_Init(void)
{
	DIO_SetPinDir(DIO_PORTB,DIO_PIN4,DIO_PIN_INPUT);
	DIO_SetPinDir(DIO_PORTB,DIO_PIN5,DIO_PIN_INPUT);
	DIO_SetPinDir(DIO_PORTB,DIO_PIN6,DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTB,DIO_PIN7,DIO_PIN_INPUT);
	SPCR |= 0X40;
}

void SPI_Master_Init_Trans(void)
{
	DIO_SetPinValue(DIO_PORTB,DIO_PIN4,DIO_PORT_LOW);
}

void SPI_Master_Tar_Trans(void)
{
	DIO_SetPinValue(DIO_PORTB,DIO_PIN4,DIO_PORT_HIGH);
}

uint8 SPI_TranSiver(uint8 data)
{
	 SPDR |= data;
	 while(GET_BIT(SPSR,DIO_PIN7) ==0);
	 return SPDR;
}