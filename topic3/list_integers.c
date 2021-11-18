#include <stdio.h>

void list_integers(void) {
   // Display the title message.
   printf("Counting from 35 up to 398...\n");
   //  Enter a counter-controlled loop which will start at 35 and
   for (int i = 35; i <= 398; i++) {
      printf("%d\n", i);
      /* code */
   }

   //  continues up to and including 398, advancing by increments of 1.

   //  Print the current value of the counter variable.

   // End the loop.
}

int main(void) {
   list_integers();
   return 0;
}