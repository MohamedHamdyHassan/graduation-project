/*
 * SPI.h
 *
 * Created: 12/14/2020 4:25:07 PM
 *  Author: 20100
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "ATMEGA32_Regs.h"
#include "BIT_Math.h"
#include "DIO.h"

void SPI_Master_Init(void);

void SPI_Slave_Init(void); 

void SPI_Master_Init_Trans(void);

void SPI_Master_Tar_Trans(void);

uint8 SPI_TranSiver(uint8 data);


#endif /* SPI_H_ */