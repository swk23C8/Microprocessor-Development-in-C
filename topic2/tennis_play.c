#include <stdio.h>

void tennis_play(void) {
   // Insert your solution here
   char usrInput;
   printf("How does the weather look?\ns - sunny\no - overcast\nr - rainy\n");
   scanf(" %c", &usrInput);

   switch (usrInput) {
      case 's':
         printf("Please rate the humidity:\nh - high\nn - normal\n");
         scanf(" %c", &usrInput);
         if (usrInput == 'h') {
            printf("Boo hoo, we cannot play tennis because it is too sticky!!!\n");
         } else if (usrInput == 'n') {
            printf("Woo hoo, we get to play tennis!!!\n");
         } else {
            printf("Invalid choice for humidity: '%c'\nValid options are 'h', and 'n'.\n", usrInput);
         }
         break;
      case 'o':
         printf("Woo hoo, we get to play tennis!!!\n");
         break;
      case 'r':
         printf("Please rate the wind strength:\nw - windy\nc - calm\n");
         scanf(" %c", &usrInput);
         if (usrInput == 'w') {
            printf("Boo hoo, we cannot play tennis because it is too wet and windy!!!\n");
         } else if (usrInput == 'c') {
            printf("Woo hoo, we get to play tennis!!!\n");
         } else {
            printf("Invalid choice for wind: '%c'\nValid options are 'w', and 'c'.\n", usrInput);
         }
         break;
      default:
         printf("Invalid choice for outlook: '%c'\nValid options are 's', 'o', and 'r'.\n", usrInput);
         break;
   }
}

int main(void) {
   tennis_play();
   return 0;
}
