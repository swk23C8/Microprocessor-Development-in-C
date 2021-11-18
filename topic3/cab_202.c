#include <stdio.h>

void cab_202(void) {
   for (int i = 11; i <= 3354; i++) {
      if ((i % 7 == 0) && (i % 17 == 0)) {
         printf("CAB202\n");
      } else if (i % 7 == 0) {
         printf("CAB\n");
      } else if (i % 17 == 0) {
         printf("202\n");
      } else {
         printf("%d\n", i);
      }
   }

   // Insert your solution here.
}

int main(void) {
   cab_202();
   return 0;
}
