#include <stdio.h>

void f2c(void) {
    double fahrenheit, celsius;
	// (a) Prompt user to enter value.
    printf("What is the temperature in Fahrenheit degrees?\n");
	// (b) Declare local variable to hold input value.
	// (c) Read input value.
    scanf("%lf", &fahrenheit);
	// (d) Compute output value.
    celsius = (fahrenheit - 32) * 5.0 / 9;
	// (e) Display the result.
    // printf("%d Fahrenheit is the same as %.5f Celsius.", fahrenheit, celsius);
    printf("%.5f Fahrenheit is the same as %.5f Celsius.\n", fahrenheit, celsius);

}

int main(void) {
	f2c();
	return 0;
}