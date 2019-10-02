/*	Author: Yuhang Xing
 *      Partner(s) Name: Hao Wu
 *	Lab Section:Lab 2
 *	Assignment: Lab #  Exercise 1 #
 *	Exercise Description: [light control]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif


int main(void) {
	DDRA = 0x00; 
	DDRB = 0xFF; PORTB = 0x00;
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00; 
while(1) {
                 PORTB=0x00;
	         tmpA = PINA;
		 if (tmpA == 0x01)
		   {
		     tmpB =0x01;
		     PORTB=tmpB;
		   }   
	       
        
         }
	return 0;
}

