#include <stdio.h>

void c2f(void) {
    double fahrenheit, celsius;
	// (a) Prompt user to enter value.
    printf("What is the temperature in Celsius degrees?\n");
	// (b) Declare local variable to hold input value.
	// (c) Read input value.
    scanf("%lf", &celsius);
	// (d) Compute output value.
    fahrenheit = 1.8*celsius+32;
	// (e) Display the result.
    // printf("%d Fahrenheit is the same as %.5f Celsius.", fahrenheit, celsius);
    printf("%.5f Celsius is the same as %.5f Fahrenheit.\n", celsius, fahrenheit);
}

int main(void) {
	c2f();
	return 0;
}