/* Main.c file generated by New Project wizard
 * Creater: Pitias T Fessahaie 
 * Email: selamptsegu@gmail.com
 * Created:   6 5 2014
 * Processor: PIC16F506
 * Compiler:  HI-TECH C for PIC10/12/16
 */

#include <htc.h>
__CONFIG(0X3FF1);
#define LEDS PORTC
#define PORTBIT(adr, bit)	((unsigned)(&adr)*8+(bit))
static bit WARN  @ PORTBIT(PORTB, 4);

#define MINVDD 3.5
void main(void)
 {
  TRISC=0b01000000;
  TRISB=0b00111111;
  PORTB=0b00000000;
  CM2CON0=0;
  VRCON=0;
  ADCON0=0b10110001;
   while(1)
   { GO_nDONE = 1;
	   while(GO_nDONE)
		   ;
	  
	   LEDS=ADRES >> 4;
	    
		  if(ADRES>(int)(0.6/MINVDD*255))
	   {WARN=1;}
	   }}