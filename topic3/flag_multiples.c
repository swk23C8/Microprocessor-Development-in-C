#include <stdio.h>

void flag_multiples(void) {
   for (int i = 11; i <= 3354; i++) {
      if (i % 7 == 0) {
         printf("%d <===\n", i);
      } else {
         printf("%d\n", i);
      }
   }

   //  Enter a counter controlled loop which starts at 11 and
   //  advances by increments of 1 up to and including 3354
   //  Send the current value of the counter to standard output as a
   //  decimal formatted integer.

   //  If the current value of the counter is divisible by 7 then
   //  highlight the current line by sending the pattern " <===" to
   //  standard output.

   //  Send a linefeed to standard output.

   //  End loop.
}

int main(void) {
   flag_multiples();
   return 0;
}
