#include <math.h>
#include <stdbool.h>
#include <stdio.h>

//  (a) Begin the definition of a function called mul_items
//  which computes the product of the finite elements of an array
//  of double precision floating point values.
//
//  Parameters:
//      items     - an array of double precision floating point values.
//      num_items - an int which specifies the maximum number of items
//                  to process.
//
//  Returns:
//      A double precision floating point value:
//      *   If the array contains at least one finite element: the result
//          is equal to the product of the finite elements.
//      *   Otherwise: return NAN.

long long int mul_items(double items[], int num_items)
{
	double value;
	//  (b) Insert logic required to solve the problem here.
	for (int i = 0; i < num_items; i++)
	{
		if (isfinite(items[i]) == 1)
		{
			value = 1;
		}
		else
		{
			continue;
		}
	}

	for (int i = 0; i < num_items; i++)
	{

		if (isfinite(items[i]) == 0)
		{
			continue;
		}
		else if (isfinite(items[i]) == 1)
		{
			value = value * items[i];
		}
		//  (d) Add the current element of the array to the accumulator.
	}

	return value;
}

void run_test(const char *label, double x[], int count)
{
	double prod = mul_items(x, count);
	printf("%s\n", label);
	printf("\tInput data:\n");

	for (int i = 0; i < count; i++)
	{
		printf("\t%d\t%f\n", i, x[i]);
	}

	printf("\tProduct = %f\n\n", prod);
}

int main(void)
{
	double x1[] = {0};
	run_test("Count == 0", x1, 0);

	double x2[] = {NAN, +INFINITY, -INFINITY};
	run_test("No finite values", x2, 3);

	double x3[] = {1, 2, 3, 4, 5, 6, 7};
	run_test("Several finite values", x3, 7);

	double x4[] = {2, M_PI, NAN, 3, INFINITY, 4};
	run_test("A mix of finite values and infinities", x4, 6);

	double x5[] = {1};
	run_test("Product is 1", x5, 1);

	double x6[] = {1.0, NAN, 1.0, 1.0, INFINITY};
	run_test("Product is also 1", x6, 5);

	return 0;
}