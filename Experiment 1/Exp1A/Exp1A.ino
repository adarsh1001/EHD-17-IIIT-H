//Blink an external LED connected to Digital Pin 8 (or PB0 of Atmega)
#include <avr/io.h>
#include <util/delay.h>

unsigned long prev, curr;
void setup()
{
    DDRB |= 0x20;  // Direction of Port B Pin 0 set as Output. 0x01 is hex for B00000001
    prev=millis();
    PORTB&=~0x20;
}

void loop()
{
     curr=millis();
     if ((curr-prev)>=1000)
     {
        PORTB ^= 0x20;   // Set bit for PB0. Turns on LED.
        prev=curr;
     }
}
