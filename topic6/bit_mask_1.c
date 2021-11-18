#include <stdio.h>
#include <stdlib.h>

//  Declare a global variable named var_01 which is suitable to 
//  store a single byte. 
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char var_01;

//  Declare a global variable named var_02 which is suitable to 
//  store a single byte. 
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char var_02;

//  Declare a global variable named var_03 which is suitable to 
//  store a single byte. 
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char var_03;

//  Declare a global variable named var_04 which is suitable to 
//  store a single byte. 
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char var_04;

//  Declare a global variable named var_05 which is suitable to 
//  store a single byte. 
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char var_05;

//  Declare a global variable named var_06 which is suitable to 
//  store a single byte. 
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char var_06;

//  Declare a global variable named var_07 which is suitable to 
//  store a single byte. 
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char var_07;

//  Declare a global variable named var_08 which is suitable to 
//  store a single byte. 
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char var_08;

//  Declare a global variable named var_09 which is suitable to 
//  store a single byte. 
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char var_09;

//  Declare a global variable named var_10 which is suitable to 
//  store a single byte. 
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char var_10;

void init_vars () {
    //  Create a bit mask which can be used to access or change bit 0.
    //  Store the bit mask in global variable var_01.
    // INSERT CODE HERE.
    var_01 = (1 << 0);

    //  Create a bit mask which can be used to access or change bit 5.
    //  Store the bit mask in global variable var_02.
    // INSERT CODE HERE.
    var_02 = (1 << 5);

    //  Create a bit mask which can be used to access or change bits 0, 4.
    //  Store the bit mask in global variable var_03.
    // INSERT CODE HERE.
    var_03 = (1 << 0) | (1 << 4);

    //  Create a bit mask which can be used to access or change bits 2, 3.
    //  Store the bit mask in global variable var_04.
    // INSERT CODE HERE.
    var_04 = (1 << 2) | (1 << 3);

    //  Create a bit mask which can be used to access or change bits 0, 1, 2.
    //  Store the bit mask in global variable var_05.
    // INSERT CODE HERE.
    var_05 = (1 << 0) | (1 << 1) | (1 << 2);

    //  Create a bit mask which can be used to access or change bits 1, 6, 7.
    //  Store the bit mask in global variable var_06.
    // INSERT CODE HERE.
    var_06 = (1 << 1) | (1 << 6) | (1 << 7);

    //  Create a bit mask which can be used to access or change bits 0, 1, 4, 6.
    //  Store the bit mask in global variable var_07.
    // INSERT CODE HERE.
    var_07 = (1 << 0) | (1 << 1) | (1 << 4) | (1 << 6);

    //  Create a bit mask which can be used to access or change bits 1, 3, 4, 5.
    //  Store the bit mask in global variable var_08.
    // INSERT CODE HERE.
    var_08 = (1 << 1) | (1 << 3) | (1 << 4) | (1 << 5);

    //  Create a bit mask which can be used to access or change bits 0, 4, 5, 6, 7.
    //  Store the bit mask in global variable var_09.
    // INSERT CODE HERE.
    var_09 = (1 << 0) | (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7);

    //  Create a bit mask which can be used to access or change bits 1, 2, 3, 4, 5.
    //  Store the bit mask in global variable var_10.
    // INSERT CODE HERE.
    var_10 = (1 << 1) | (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5);

}


void print_bits( const char * label, unsigned char val){
    printf("%s bits = {", label);
    
    int deja = 0;

    for (int i = 0; i <= 7; i++) {
        if ( (val & (1 << i)) ) {
            printf("%s%d", (deja ? ", " : ""), i);
            deja = 1;
        }
    }

    printf("}\n");
}

int main(int argc, char * argv[]) {
    unsigned char init_val = 0;
    
    if (argc > 1) init_val = atoi(argv[1]) & 255;

    var_01 = init_val;
    var_02 = init_val;
    var_03 = init_val;
    var_04 = init_val;
    var_05 = init_val;
    var_06 = init_val;
    var_07 = init_val;
    var_08 = init_val;
    var_09 = init_val;
    var_10 = init_val;


    init_vars();

    print_bits("Initial", init_val);
    print_bits("var_01", var_01);
    print_bits("var_02", var_02);
    print_bits("var_03", var_03);
    print_bits("var_04", var_04);
    print_bits("var_05", var_05);
    print_bits("var_06", var_06);
    print_bits("var_07", var_07);
    print_bits("var_08", var_08);
    print_bits("var_09", var_09);
    print_bits("var_10", var_10);


    return 0;
}
