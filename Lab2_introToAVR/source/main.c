/*	Author: yxing024
 *  Partner(s) Name: Hao Wu
 *	Lab Section:lab 2
 *	Assignment: Lab #  Exercise 4#
 *	Exercise Description: [ride cart]
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
  DDRB = 0x00;
  DDRC = 0x00;
  DDRD = 0xFF;
  PORTD = 0x00;
  unsigned char weightA = 0x00;
  unsigned char weightB = 0x00;
  unsigned char weightC = 0x00;
  unsigned char sweight = 0x00;
  unsigned char tweight = 0x00;
  unsigned char tmpD = 0x00;



    /* Insert your solution below */
    while (1)
      {
	weightA = PINA;
        weightB = PINB;
        weightC = PINC;

        tmpD = 0x00;        
        tweight = weightA + weightB + weightC;

        if (tweight > 140)
	  {
	    tmpD = tmpD|0x01;
	  }
        if (((weightA - weightC) > 80)||((weightC - weightA) > 80))
	  {
	    tmpD = tmpD|0x02;
	  }

	sweight = tweight>>2;
	tmpD = (sweight<<2)|tmpD;
        PORTD = tmpD;
 
      }
    return 1;
}
