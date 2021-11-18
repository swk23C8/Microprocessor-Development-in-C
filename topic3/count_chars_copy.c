#include <stdio.h>

void count_chars() {
   char n, count = 0;
   char input[100];
   scanf("%c", &n);
   while (n != '\n') {
      scanf("%c", &n);
      input[count] = n;
      count = count + 1;
   }

   printf("The document contains %d characters.\n", count);
}
int main() {
   count_chars();
   return 0;
}