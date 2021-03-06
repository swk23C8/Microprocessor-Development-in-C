#include <avr/io.h>
#include <stdlib.h>
#include <util/delay.h>

// Declare a global variable named old_state which is suitable to store a
//  single byte. Do not initialise the variable at the point of declaration.
//  The value of the variable will be managed by the init_state and is_rising_edge
//  functions.

// INSERT DECLARATION HERE
unsigned char old_state;

//  Define a parameterless function called init_state which returns nothing.
//
//  The function must enable digital input from a pull-down switch connected to
//  the I/O pin labelled "PC3" on an Arduino Uno board. It should also
//  assign zero to global variable .
//
//  Apart from updating the global variable, the function must update only
//  those bits required to enable digital input from the designated switch. The
//  function must achieve the required side effect regardless of the prior
//  state of all registers. In particular, **do not assume** that memory has
//  previously been initialised with some value, zero or otherwise.

// INSERT CODE HERE.
void init_state(void) {
   DDRC &= ~(1 << 3);
   old_state = 0;
}

//  Define a parameterless function called is_rising_edge which returns an
//  int which indicates that a rising edge has been detected in the state of
//  a pull-down switch connected to I/O pin labelled "PC3" on an
//  Arduino Uno board.
//
//  The function returns 1 if a rising edge is detected in the signal from the
//  switch and 0 otherwise.
//
//  The function may read and update the value of global variable old_state
//  but apart from that it may not alter the value of any other register or
//  global variable.

// INSERT CODE HERE.

int is_rising_edge(void){
   unsigned char current_state;

   current_state = PINC & (1<<3);

   int rise = (old_state == 0) && (current_state != 0);
   old_state = current_state;
   return rise;
   }

void setup_builtin_led(void);
void toggle_builtin_led(void);
void simulate_other_setup();

int main(void) {
   simulate_other_setup();
   setup_builtin_led();
   init_state();

   while (1) {
      int rising = is_rising_edge();

      if (rising) toggle_builtin_led();
   }
}

void setup_builtin_led(void) { DDRB |= (1 << 5); }

void toggle_builtin_led(void) { PORTB ^= (1 << 5); }

void simulate_other_setup(void) {
   //  Simulate situation where other important setup actions have been
   //  performed prior to calling our functions.
   srand(29635);
   DDRB = rand() & 255;
   PINB = rand() & 255;
   PORTB = rand() & 255;
   DDRC = rand() & 255;
   PINC = rand() & 255;
   PORTC = rand() & 255;
   DDRD = rand() & 255;
   PIND = rand() & 255;
   PORTD = rand() & 255;
   old_state = rand() & 255;
}
