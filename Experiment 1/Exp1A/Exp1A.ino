//Blink an external LED connected to Digital Pin 8 (or PB0 of Atmega)
#include <avr/io.h>
#include <util/delay.h>

unsigned long prev, curr;
void setup()
{
    DDRB |= 0x01;  // Direction of Port B Pin 0 set as Output. 0x01 is hex for B00000001
    PORTB&=~0x01;  // Initially, LED remains OFF.
}

void loop()
{
    PORTB &= ~0x10;   // Clear bit PB0. Turns LED OFF.
    _delay_ms(1000);  // Wait for 1s.
    PORTB |= 0x10;    // Set bit PB0. Turns LED ON.
    _delay_ms(1000);  // Wait for 1s.
    
}
