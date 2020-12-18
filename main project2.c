/*
 * final project MC2.c
 *
 * Created: 14/12/2020 11:58:03 م
 * Author : mns
 */ 

#include <avr/io.h>
#include "SPI.h"
#include "LED1.h"
#include "LED.h"

int main(void)
{
	uint8 data=0 ,REC;
	LED1_Init();
	LED0_Init();
	SPI_Slave_Init();
	while (1)
	{
		REC=SPI_TranSiver(data);
		if(REC ==1)
		{
			LED0_Toggle();
		}
		else if (REC ==2)
		{
			Toggle_LED1();
			REC=0;
		}

	}
	
}

