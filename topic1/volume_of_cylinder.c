#include <stdio.h>
#include <math.h>

void volume_of_cylinder(void) {
	// Insert your solution here.
    printf("What is the radius of the cylinder?\n");
    double radius;
    scanf("%lf", &radius);
    printf("What is the height of the cylinder?\n");
    double height;
    scanf("%lf", &height);
    double volume = M_PI*pow(radius, 2)*height;
    printf("When the radius is %.6f units and the height is %.6f units then the volume will be %.6f cubic units.\n", radius, height, volume);
}

int main(void) {
	volume_of_cylinder();
	return 0;
}
