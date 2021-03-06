#include <stdio.h>
#include <stdlib.h>

//  Declare an array called rolls with capacity for 56 elements
//  of the default signed integer type.
//
//  Note well:
//  *   Make sure the array is declared as a global variable, that is, outside
//      all the functions.
//  *   Do not use the "static" keyword.
//  *   Do not assume that any initial values you place in this, or any other
//      global variable, will be as you imagine when the roll_dice function is
//      called. The function may be called multiple times, in which case the
//      values of any global variable will probably change after each run.
int rolls[56];

void roll_dice(void) {
   //  Seed the random number generator with the value 666443.
   srand(666443);
   //  Generate 56 random values between 1 and 19 inclusive. To do
   //  this, use a counter-controlled loop which will visit every element of
   //  rolls. The counter should start at zero, and the loop should continue
   //  while the counter is less than 56.
   for (int i = 0; i < 56; i++) {
      //  rand()%(upper-lower+1))+lower
      rolls[i] = (rand() % (19 - 1 + 1)) + 1;
   }
   //  Generate a random value between 1 and 19 inclusive. Store this
   //  value in the current element of rolls - that is, the element
   //  indexed by the loop counter.

   //  End the loop.
}

int main(void) {
   //  Fill array with distinctive data pattern to help identify bugs. If you
   //  see the number 13283842 in your output there must a bug in your code.
   for (int i = 0; i < 56; i++) {
      rolls[i] = 0xCAB202;
   }

   //  Call your code.
   roll_dice();

   //  Display contents of array rolls.
   for (int i = 0; i < 56; i++) {
      if (i > 0) {
         printf(",");
      }
      printf("%d", rolls[i]);
   }

   printf("\n");

   return 0;
}
