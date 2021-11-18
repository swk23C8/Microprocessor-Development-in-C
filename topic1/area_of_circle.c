#include <stdio.h>
#include <math.h>

void area_of_circle(void) {
	// (a) Prompt user to enter value.
    printf("What is the radius of the circle?\n");
	// (b) Declare local variable to hold input value.
    double radius, areaCircle;
	// (c) Read input value.
    scanf("%lf", &radius);
	// (d) Compute output value.
    areaCircle = M_PI * pow(radius,2);
	// (e) Display the result.
    printf("When the radius is %.6f units then the area will be %.6f square units.\n", radius, areaCircle);
}

int main(void) {
	area_of_circle();
	return 0;
}