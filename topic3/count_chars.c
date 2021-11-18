#include <stdio.h>

void count_chars() {
   // char input;
   // int count = 0;
   // scanf("%c", &input);
   // while ((input != '\n')&&(input != EOF)) {
   //    scanf("%c", &input);
   //    count++;
   // }
   int count = 0;
   while (getchar() != EOF){
      count++;
   }
   printf("The document contains %d characters.\n", count);
}

int main() {
   count_chars();
   return 0;
}