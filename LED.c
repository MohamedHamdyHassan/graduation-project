/*
 * LED.c
 *
 * Created: 10/3/2020 11:28:27 AM
 *  Author: 20100
 */ 
#include "LED.h"
void LED0_Init(void)
{
	SET_BIT (DDRD,3);
}

void LED0_ON(void)
{
	SET_BIT (PORTD,3);
}

void LED0_OFF(void)
{
	CLR_BIT(PORTD,3);
}

void LED0_Toggle(void)
{
	Toggle_BIT(PORTD,3);
}
