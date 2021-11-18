#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>

//  Define a parameterless function called init_ddrs which returns nothing.
//
//  The function must enable digital input from two pull-down switches, as 
//  follows:
//  *   Connect Button 1 to I/O pin labelled "PC1".
//  *   Connect Button 2 to I/O pin labelled "PC2".
//
//  In addition to this, enable digital output to a collection of LEDs, as 
//  follows:
//  *   Connect LED 0 to I/O pin labelled "PC4".
//  *   Connect LED 1 to I/O pin labelled "PD1".
//  *   Connect LED 2 to I/O pin labelled "PD2".
//  *   Connect LED 3 to I/O pin labelled "PD5".
//  *   Connect LED 4 to I/O pin labelled "PD6".
//  *   Connect LED 5 to I/O pin labelled "PB0".
//  *   Connect LED 6 to I/O pin labelled "PB2".
//  *   Connect LED 7 to I/O pin labelled "PB5".
//
//  The function must update only those bits required to enable digital I/O 
//  using the designated pins. The function must achieve the required side 
//  effect regardless of the prior state of all registers. In particular, 
//  **do not assume** that memory has previously been initialised with some 
//  value, zero or otherwise. 

// INSERT CODE HERE.


//  Define a parameterless function called left_click which returns an 
//  int which indicates that a falling edge has been detected in the signal 
//  coming from I/O pin labelled "PC1" on an Arduino Uno 
//  board. This corresponds to a release event on Button 1.
//
//  The function returns 1 if a falling edge is detected in the signal from the 
//  switch, and 0 otherwise.
//
//  You may use a static local variable to monitor the on-going state of the 
//  pin, or you may use a global variable. Either choice is acceptable.

// INSERT CODE HERE.


//  Define a parameterless function called right_click which returns an 
//  int which indicates that a falling edge has been detected in the signal 
//  coming from I/O pin labelled "PC2" on an Arduino Uno 
//  board. This corresponds to a release event on Button 2.
//
//  The function returns 1 if a falling edge is detected in the signal from the 
//  switch, and 0 otherwise.
//
//  You may use a static local variable to monitor the on-going state of the 
//  pin, or you may use a global variable. Either choice is acceptable.

// INSERT CODE HERE.


//  Define a function called display which returns nothing, but expects 
//  a single argument named x which contains an unsigned 8-bit integer. 
//
//  The function must use 8 LEDs, which are connected to I/O pins as indicated
//  in the init_ddrs function, to display the binary value of the argument.
//  
//  To do this, each of the 8 LEDs must be turned on or off as follows:
//  *  LED 0 must be turned on if and only if bit 0 is set in x.
//  *  LED 1 must be turned on if and only if bit 1 is set in x.
//  *  LED 2 must be turned on if and only if bit 2 is set in x.
//  *  LED 3 must be turned on if and only if bit 3 is set in x.
//  *  LED 4 must be turned on if and only if bit 4 is set in x.
//  *  LED 5 must be turned on if and only if bit 5 is set in x.
//  *  LED 6 must be turned on if and only if bit 6 is set in x.
//  *  LED 7 must be turned on if and only if bit 7 is set in x.
//
//  Other than the digitial I/O pins assigned to the LEDs, no registers or bits 
//  may be altered by this function. 

// INSERT CODE HERE.


void setup_builtin_led(void);
void toggle_builtin_led(void);
void simulate_other_setup();

int main(void) {
    simulate_other_setup();
    
    init_ddrs();

    unsigned char x = 0;

    while(1) {
        if (left_click() ) {
            x++;
        }
        
        if (right_click() ) {
            x--;
        }
        
        display(x);
    } 
}

void setup_builtin_led(void) {
    DDRB |= (1<<5);
}

void toggle_builtin_led(void) {
    PORTB ^= (1<<5);
}

void simulate_other_setup(void) {
    //  Simulate situation where other important setup actions have been 
    //  performed prior to calling our functions.
    srand(30531);
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
