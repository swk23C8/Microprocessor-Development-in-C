#include <ctype.h>
#include <stdio.h>

//  HERE: Declare a global array of char called buffer with capacity to hold 105 elements.
//  AMS will insert data into this array prior to calling your function.
char buffer[105];

//  HERE: Declare a global array of int called input_count with capacity to hold 3 elements.
//  AMS will read results from this array after calling your function.
//  The contents of this array will be overwritten by AMS before calling your
//  function, so you should not make any assumptions about it.
int input_count[3];

void string_char_count() {
   for (int i = 0; i < sizeof(input_count) / sizeof(int); i++) {
      input_count[i] = 0;
   }
   for (int i = 0; buffer[i] != 0; i++) {
      char tmp = tolower(buffer[i]);
      if (tmp >= 'x' && tmp <= 'z') {
         int index = tmp - 'x';
         input_count[index]++;
      }
   }

   //  Traverse buffer with a counted loop which visits each valid char in
   //  succession, stopping when it reaches the end of the string.
   //  Get current character from buffer and convert it to lower case.
   //  If the current character is between 'x' and 'z' inclusive, increment
   //  the element of input_count which corresponds to the character.
   //  Otherwise, ignore the current character.
   //  End loop
}

#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
   // AMS will do something a bit like this before it calls your solution.
   // Do not change any of this; instead, write your solution in such a way
   //  that it works correctly even with this.
   srand(time(NULL));

   for (int i = 0; i < 3; i++) {
      input_count[i] = rand();
   }

   //  Read as much data from stdin as we can, and append each char to the
   //  buffer.
   int chars_read = 0;

   for (chars_read = 0; chars_read < (105 - 1); chars_read++) {
      int scanf_result = scanf("%c", &buffer[chars_read]);

      if (1 != scanf_result) break;
   }

   //  Terminate the string in the buffer.
   buffer[chars_read] = 0;

   // Pad remainder of string with garbage to help with debugging.
   for (int i = chars_read + 1; i < (105); i++) {
      buffer[i] = 'x' + rand() % (1 + 'z' - 'x');
   }

   // Call submitted code.
   string_char_count();

   // Display contents of string, and number of occurrences of each symbol.
   printf("Input string        = '%s'\n", buffer);
   printf("Input string length = %zu\n", strlen(buffer));
   printf("Array capacity      = %d\n", 105);
   printf("Symbol frequencies:\n");

   for (int i = 0; i < 3; i++) {
      printf("%c\t%d\n", 'x' + i, input_count[i]);
   }

   return 0;
}
