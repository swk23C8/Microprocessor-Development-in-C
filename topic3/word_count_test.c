#include <ctype.h>
#include <stdio.h>

void word_count() {
   int lines = 0, words = 0, chars = 0;
   char current, previous = ' ';
   while ((current = getchar()) != EOF) {
      chars++;
      // else if ((getchar() == '\n' || getchar() == ' ' || getchar() == '\t')) {
      if (!isspace(current)) {
         if (isspace(previous)) {
            words++;
         }
      }
      else if (current == '\n') {
         lines++;
      }
      previous = current;
   }
   printf("Document contents: %d lines; %d words; %d characters.", lines, words, chars);
}

int main() {
   word_count();
   return 0;
}