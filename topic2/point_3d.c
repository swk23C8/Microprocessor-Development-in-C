#include <stdio.h>
#include <math.h>

void point_3d( void ) {
    // Insert your solution here.
    double X, Y, Z;
    printf("What are the values of X and Y:\n");
    scanf("%lf %lf", &X, &Y);

    if (X>=0 && Y>=0){
        Z = 6.16689*X+5.74589*Y;
    }
    else if (X>=0 && Y<=0){
        Z = 6.16689*X + pow(Y, 2);
    }
    else if (X<0 && Y>=0){
        Z = pow(X, 2) + 5.74589*Y;
    }
    else {
        Z = pow(X, 2) + pow(Y, 2);
    }


    printf("Point (%.9f, %.9f) maps to %.9f.\n", X, Y, Z);
}


int main() {
	point_3d();
	return 0;
}
