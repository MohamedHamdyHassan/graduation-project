/*
 * LED1.h
 *
 * Created: 10/31/2020 7:42:35 PM
 *  Author: 20100
 */ 


#ifndef LED1_H_
#define LED1_H_

#include "ATMEGA32_Regs.h"
#include "Bit_Math.h"
#include "STD.h"
void LED1_Init(void);

void LED1_ON(void);

void LED_OFF(void);

void Toggle_LED1(void);



#endif /* LED1_H_ */