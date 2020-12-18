/*
 * Final Project.c
 *
 * Created: 14/12/2020 11:37:03 م
 * Author : mns
 */ 
#include <avr/io.h>
#define F_CPU 8000000
#include <util/delay.h>


#include "UART.h"
#include "SPI.h"

int main(void)
{
	uint8 rec_data ;
	uint8 trans_data = 0;
	
	 UART_Iniat();
	 
	SPI_Master_Init();
	SPI_Master_Init_Trans();
	
	_delay_ms(1000);
	while (1)
	{
		trans_data=UART_Rx();
		
		if (trans_data ==1)
		{
         	rec_data = SPI_TranSiver(trans_data);
			 trans_data=0;
		}
	
	}
}


