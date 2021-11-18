#include <avr/io.h>
#include <stdlib.h>
#include <util/delay.h>

//  Define a parameterless function called led_setup which returns nothing.
//
//  The function must enable digital output to a LED connected to the I/O pin
//  labelled "PD7" on an Arduino Uno board.
//
//  The function must update only those bits required to enable digital output
//  to that LED. The function must achieve the required side effect regardless
//  of the prior state of all registers. In particular, **do not assume** that
//  memory has previously been initialised with some value, zero or otherwise.

// INSERT CODE HERE.

void led_setup(void) { DDRD |= (1 << 7); }

//  Define a parameterless function called light_on which returns nothing.
//
//  The function must turn on a LED connected to the I/O pin labelled "PD7"
//  on an Arduino Uno board.
//
//  The function must update only those bits required to turn on the LED. The
//  function must achieve the required side effect regardless of the prior
//  state of all registers.

// INSERT CODE HERE.

void light_on(void) { PORTD |= (1 << 7); }

//  Define a parameterless function called light_off which returns nothing.
//
//  The function must turn off a LED connected to the I/O pin labelled "PD7"
//  on an Arduino Uno board.
//
//  The function must update only those bits required to turn off the LED. The
//  function must achieve the required side effect regardless of the prior
//  state of all registers.

// INSERT CODE HERE.

void light_off(void) { PORTD &= ~(1 << 7); }

void simulate_other_setup();

int main(void) {
   simulate_other_setup();
   led_setup();

   while (1) {
      light_on();
      _delay_ms(500);

      light_off();
      _delay_ms(500);
   }
}

void simulate_other_setup(void) {
   //  Simulate situation where other important setup actions have been
   //  performed prior to calling our functions.
   srand(23185);
   DDRB = rand() & 255;
   PINB = rand() & 255;
   PORTB = rand() & 255;
   DDRC = rand() & 255;
   PINC = rand() & 255;
   PORTC = rand() & 255;
   DDRD = rand() & 255;
   PIND = rand() & 255;
   PORTD = rand() & 255;
}
