/*	Author: yxing024
 *  Partner(s) Name: Hao Wu
 *	Lab Section:lab 2
 *	Assignment: Lab #  Exercise 3#
 *	Exercise Description: [new park]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
  DDRA = 0x00;
  DDRC = 0xFF;
  PORTC = 0x00;
  unsigned char tmpA = 0x00;
  unsigned char cntavail = 0x00;
  unsigned char i = 0x00;


    /* Insert your solution below */
    while (1)
      {
      
      cntavail = 0x00;
      tmpA = PINA;
      for (i=0;i<4;i++)
	{
	if (tmpA&(1<<i))
	  {
	  cntavail++;
	  }
	}
   
      if(cntavail == 0x04)
	  {
	    PORTC = 0x84;
	   }
      else
	{
	PORTC = cntavail;
	}
      }
    return 1;
}
