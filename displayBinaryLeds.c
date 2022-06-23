#include <xc.h>

// Read header file:
#include "displayBinaryLeds.h"

void int_to_bits(unsigned char number, unsigned char bits[BITS]){
	// Take each individual binary digit of an 8bit unsigned integer
	// and store them as array members:
	// bits[0] is the least significant bit
	for (unsigned char i=0; i<BITS; i++){
		// Store each bit in an array
		unsigned char bitMask = (unsigned char)(1 << i);
		unsigned char maskedNumber = number & bitMask;
		bits[i] = maskedNumber >> i;
	}
}

int display_bits_leds(unsigned char bits[BITS]){
		LED_BIT_0 = bits[0];
	if (BITS == 1) return 0;
		LED_BIT_1 = bits[1];
	if (BITS == 2) return 0;
		LED_BIT_2 = bits[2];
	if (BITS == 3) return 0;
		LED_BIT_3 = bits[3];
	if (BITS == 4) return 0;
		LED_BIT_4 = bits[4];
	if (BITS == 5) return 0;
		LED_BIT_5 = bits[5];
	if (BITS == 6) return 0;
		LED_BIT_6 = bits[6];
	if (BITS == 7) return 0;
		LED_BIT_7 = bits[7];
	if (BITS == 8) return 0;

	// More than 8bit integers not allowed
	// Return ERR
	return 1;
}
