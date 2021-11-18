#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int array_search(double values[], int num_vals, double query, double tol)
{
   int index = -1;
   if (num_vals < 0)
      return index;
   else
   {
      for (int i = 0; i < num_vals; i++)
      {
         if (fabs(values[i] - query) <= tol)
         {
            index = i;
         }
      }
      return index;
   }
}

#define MAX_ITEMS (100)

int main(void)
{
   double items[MAX_ITEMS];
   int array_size;
   double query;
   double error;

   // Get number of items.
   printf("Please enter number of items (up to %d) that will be processed: ", MAX_ITEMS);
   scanf("%d", &array_size);

   // if number of items exceeds array size, restrict it to that value.
   if (array_size > MAX_ITEMS)
   {
      array_size = MAX_ITEMS;
   }

   for (int i = 0; i < array_size; i++)
   {
      printf("Please enter (floating point) item %d of %d: ", (i + 1), array_size);
      scanf("%lf", &items[i]);
   }

   printf("Please enter (floating point) query value: ");
   scanf("%lf", &query);

   printf("Please enter (floating point) error margin: ");
   scanf("%lf", &error);

   int result = array_search(items, array_size, query, error);

   printf("The last approximate match to the query is at position %d.\n", result);

   return 0;
}
