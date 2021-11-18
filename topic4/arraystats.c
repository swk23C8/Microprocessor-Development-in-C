#include <stdio.h>

//  Declare Global variables here.
double item[26];
int item_count;
double item_mean;
double item_min;
double item_max;

void arraystats() {
   //  Insert your solution here.
   item_count = 0;

   for (int i = 0; i < 26; i++) {
      item[i] = 0;
   }

   while (item_count < 26 && scanf("%lf", &item[item_count]) == 1) {
      if (item[item_count] == ' ') {
         break;
      }
      item_count++;
   }
   item_mean = 0;
   item_min = item_max = item[0];
   // for (int i = 0; i < sizeof(item) / sizeof(item[0]); i++) {
   for (int i = 0; i < item_count; i++) {
      if (item_max < item[i]) {
         item_max = item[i];
      }
      if (item_min > item[i]) {
         item_min = item[i];
      }
      item_mean += item[i];
   }
   if (0 < item_mean) {
      item_mean /= item_count;
   }
}

#include <stdlib.h>
#include <time.h>

int main() {
   // AMS will do something a bit like this before it calls your solution.
   // Do not change any of this; instead, write your solution in such a way
   //  that it works correctly even with this.
   srand(time(NULL));

   for (int i = 0; i < 26; i++) {
      double randVal = ((double)rand()) / RAND_MAX;
      item[i] = randVal;

      if (randVal != item[i]) {
         printf("Incorrect numeric type appears to be in use.\n");
         return 1;
      }
   }

   item_count = rand();
   item_mean = ((double)rand()) / RAND_MAX;
   item_min = ((double)rand()) / RAND_MAX;
   item_max = ((double)rand()) / RAND_MAX;

   // Call submitted code.
   arraystats();

   // Display contents of array item.
   for (int i = 0; i < item_count; i++) {
      printf("%f ", item[i]);
   }

   printf("\n");
   printf("Item count: %d\n", item_count);
   printf("Item mean : %f\n", item_mean);
   printf("Item min  : %f\n", item_min);
   printf("Item max  : %f\n", item_max);

   return 0;
}
