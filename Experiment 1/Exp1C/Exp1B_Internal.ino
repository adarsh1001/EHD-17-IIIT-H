//Interfacing a switch with Internal Pull-up
//LED ----> Digital Pin 8 (or PB0)
//Switch    ----> Digital Pin 10 (or PB2) 
#include <avr/io.h>
#include <util/delay.h>

void setup()
{
    DDRB |= 0x01;  //PB0 (external LED) is set as output
    DDRB &= ~0x04;  //Switch connected to PB2. Set as Input.
    PORTB |= 0x04;  //To Enable Internal Pull up on PB2
    PORTB &= ~0x01;  // LED initially OFF
}

void loop()
{
  unsigned long SW = (PINB & 0x04); //Read PB2 where switch is connected.
  
  if (SW != 0x04)  //Inverted Logic. 
    PORTB |= 0x01; //If switch pressed, turn LED ON.
  else
    PORTB &= ~0x01; //Else, turn LED OFF.

  _delay_ms(20);
}
