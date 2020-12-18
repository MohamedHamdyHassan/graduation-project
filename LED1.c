/*
 * LED1.c
 *
 * Created: 10/31/2020 7:41:59 PM
 *  Author: 20100
 */ 

#include "LED1.h"


void LED1_Init(void)
{
	SET_BIT(DDRC,7);
}

void LED1_ON(void)
{
	SET_BIT(PORTC,7);
}

void LED_OFF(void)
{
	CLR_BIT(PORTC,7);
}

void Toggle_LED1(void)
{
	Toggle_BIT(PORTC,7);
}