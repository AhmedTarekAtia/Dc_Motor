/*
 * main.h
 *
 *  Created on: Oct 1, 2021
 *      Author: Eng Ahmed Tarek
 */
#include "STD_TYPES.h"
#include "MDIO_Interface.h"
#include "avr/delay.h"



void main (void)
{
	MDIO_VoidSetPinDirection(PORTD,PIN0,1);
	MDIO_VoidSetPinDirection(PORTD,PIN1,1);

	while (1)
	{


	MDIO_VoidSetPinValue(PORTD,PIN0,1);
	MDIO_VoidSetPinValue(PORTD,PIN1,0);
		_delay_ms(1000);
	MDIO_VoidSetPinValue(PORTD,PIN0,0);
	MDIO_VoidSetPinValue(PORTD,PIN1,0);
		_delay_ms(1000);
	MDIO_VoidSetPinValue(PORTD,PIN0,0);
	MDIO_VoidSetPinValue(PORTD,PIN1,1);
	_delay_ms(1000);

	}




}

