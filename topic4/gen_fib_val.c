#include <stdio.h>
#include <stdlib.h>

//  Here: Declare a global array called term with capacity to hold 29 elements
//  of the default signed integer type.
int term[29];
void gen_fib_val( void ) {
   scanf(" %d %d", &term[0], &term[1]);
   for (int i=2; i<29; i++){
      term[i] = term[i-1] + term[i-2];
   }
    //  Here: Insert code to populate the array with a generalised Fibonacci 
    //  sequence here.
}

int main(void) {
    //  Fill array with distinctive data pattern to help identify bugs. If you 
    //  see the number 13283842 in your output there must a bug in your code.
    for ( int i = 0; i < 29; i++ ) {
        term[i] = 0xCAB202;
    }

    //  Run your code.
    gen_fib_val();

    //  Display contents of array term.
    for (int i = 0; i < 29; i++) {
        printf("%d\n", term[i]);
    }

    return 0;
}
