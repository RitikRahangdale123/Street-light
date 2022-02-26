/*
 * basics.c
 *
 * Created: 26-Feb 2022
 * Author : Ritik Rahangdale
 */ 

#ifndef __AVR_ATmega328__
#define F_CPU 16000000
#define __AVR_ATmega328__
#endif

#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRB=0xFF;
	unsigned char z;
	while(1)
	{
		
		for(z=0;z<255;z++)
		{
			PORTB=z;
			_delay_ms(1000);
		}
	}
	return 0;
	}