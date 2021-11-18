#include <stdio.h>

void count_down(void) {
   //  Insert your solution here
   for (int i = 3110; i >= 98; i-=5) {
      printf("%d\n", i);
   }
}

int main(void) {
   count_down();
   return 0;
}