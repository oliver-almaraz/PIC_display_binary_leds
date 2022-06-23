/*****************************************************
*               displayBinaryLeds.h
*   github.com/oliver-almaraz/PIC_display_binary_leds
******************************************************
*
*	Library providing functions to display an 8bit
*	unsigned integer as turned-on LEDs with an 8bit
*	PIC using the xc8 compiler.
*
*	**** USAGE: *****

*	Decide how many bits you need to display and
*	#define BITS.
*	Set the pins you wish to use for the LEDs as
*	digital outputs and #define them as LED_BIT_<X>
*	(see example below).
*	Pass an unsigned integer (maximum 8bit) and an
*	unsigned char array (whose size must be at least the
*	number of bits you need to display) to int_to_bits().
*	Finally, pass the same array to display_bits_leds().
*/

#ifndef DISPLAY_BINARY_LEDS_H
#define DISPLAY_BINARY_LEDS_H

// How many bits to display as leds
#ifndef BITS
#define BITS 8
#endif

// Default bits (pins) for each bit-LED
// Least Significant Bit = LED_BIT_0
// MSB = LED_BIT_7
#ifndef LED_BIT_0
#define LED_BIT_0 PORTBbits.RB0
#endif

#ifndef LED_BIT_1
#define LED_BIT_1 PORTBbits.RB1
#endif

#ifndef LED_BIT_2
#define LED_BIT_2 PORTBbits.RB2
#endif

#ifndef LED_BIT_3
#define LED_BIT_3 PORTBbits.RB3
#endif

#ifndef LED_BIT_4
#define LED_BIT_4 PORTBbits.RB4
#endif

#ifndef LED_BIT_5
#define LED_BIT_5 PORTBbits.RB5
#endif

#ifndef LED_BIT_6
#define LED_BIT_6 PORTBbits.RB6
#endif

#ifndef LED_BIT_7
#define LED_BIT_7 PORTBbits.RB7
#endif

// Take a positive 8bit integer _number_, divide it into
// independent bits and store each bit as a member in
// bits[]
void int_to_bits(unsigned char number, unsigned char bits[BITS]);

// Display the bits stored in bits[] setting HIGH
// output bits defined as LED_BIT_<X>
int display_bits_leds(unsigned char bits[BITS]);

#endif
