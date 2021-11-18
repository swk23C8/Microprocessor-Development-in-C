#include <stdio.h>

void is_leap( void ) {
    int year;
    //  Insert your solution here
    printf("Tell me which year you are interested in:\n");
    scanf("%d", &year);
    if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)){
        printf("The year you asked about (%d) is a leap year.\n", year);
    }
    else{
        printf("The year you asked about (%d) is not a leap year.\n", year);
    }
}


int main() {
	is_leap();
	return 0;
}
