#include <ctype.h>
#include <stdio.h>

//  HERE: Declare a global array of char called item with capacity to hold
//  128 elements. AMS will insert data into this array prior to calling your function.
char item[128];
//  HERE: Declare a global array of int called list_size with capacity to hold
//  one element for each symbol in the designated character range.
//  AMS will read results from this array after calling your function.
//  The contents of this array will be overwritten by AMS before calling your
//  function, so you should not make any assumptions about it.
int list_size[10];

void string_char_count_2() {
   for (int i = 0; i < sizeof(list_size) / sizeof(int); i++) {
      list_size[i] = 0;
   }
   for (int i = 0; item[i] != 0; i++) {
      char tmp = item[i];
      if (tmp >= '0' && tmp <= '9') F {
            int index = tmp - '0';
            list_size[index]++;
         }
   }
}

#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
   // AMS will do something a bit like this before it calls your solution.
   // Do not change any of this; instead, write your solution in such a way
   //  that it works correctly even with this.
   srand(time(NULL));

#define CHAR_SET_SIZE (1 + '9' - '0')

   for (int i = 0; i < CHAR_SET_SIZE; i++) {
      list_size[i] = rand();
   }

   //  Read as much data from stdin as we can, and append each char to the
   //  buffer.
   int chars_read = 0;

   for (chars_read = 0; chars_read < (128 - 1); chars_read++) {
      int scanf_result = scanf("%c", &item[chars_read]);

      if (1 != scanf_result) break;
   }

   //  Terminate the string in the buffer.
   item[chars_read] = 0;

   // Pad remainder of string with garbage to help with debugging.
   for (int i = chars_read + 1; i < (128); i++) {
      item[i] = '0' + rand() % CHAR_SET_SIZE;
   }

   // Call submitted code.
   string_char_count_2();

   // Display contents of string, and number of occurrences of each symbol.
   printf("Input string        = '%s'\n", item);
   printf("Input string length = %zu\n", strlen(item));
   printf("Array capacity      = %d\n", 128);
   printf("Symbol frequencies:\n");

   for (int i = 0; i < CHAR_SET_SIZE; i++) {
      printf("%c\t%d\n", '0' + i, list_size[i]);
   }

   return 0;
}
