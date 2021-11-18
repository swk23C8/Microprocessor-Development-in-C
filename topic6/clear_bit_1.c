#include <stdio.h>
#include <stdlib.h>

//  Declare a global variable named Var_01 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char Var_01;

//  Declare a global variable named Var_02 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char Var_02;

//  Declare a global variable named Var_03 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char Var_03;

//  Declare a global variable named Var_04 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char Var_04;

//  Declare a global variable named Var_05 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char Var_05;

//  Declare a global variable named Var_06 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char Var_06;

//  Declare a global variable named Var_07 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char Var_07;

//  Declare a global variable named Var_08 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char Var_08;

//  Declare a global variable named Var_09 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char Var_09;

//  Declare a global variable named Var_10 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char Var_10;

void clear_bits() {
   //  Modify the value of global variable Var_01, clearing
   //  bit 0, and leaving all other bits unaltered.
   // INSERT CODE HERE.
   Var_01 &= ~((1 << 0));

   //  Modify the value of global variable Var_02, clearing
   //  bit 3, and leaving all other bits unaltered.
   // INSERT CODE HERE.
   Var_02 &= ~((1 << 3));

   //  Modify the value of global variable Var_03, clearing
   //  bits 0, 4, and leaving all other bits unaltered.
   // INSERT CODE HERE.
   Var_03 &= ~((1 << 0) | (1 << 4));

   //  Modify the value of global variable Var_04, clearing
   //  bits 4, 6, and leaving all other bits unaltered.
   // INSERT CODE HERE.
   Var_04 &= ~((1 << 4) | (1 << 6));

   //  Modify the value of global variable Var_05, clearing
   //  bits 0, 3, 7, and leaving all other bits unaltered.
   // INSERT CODE HERE.
   Var_05 &= ~((1 << 0) | (1 << 3) | (1 << 7));

   //  Modify the value of global variable Var_06, clearing
   //  bits 2, 5, 7, and leaving all other bits unaltered.
   // INSERT CODE HERE.
   Var_06 &= ~((1 << 2) | (1 << 5) | (1 << 7));

   //  Modify the value of global variable Var_07, clearing
   //  bits 0, 4, 5, 7, and leaving all other bits unaltered.
   // INSERT CODE HERE.
   Var_07 &= ~((1 << 0) | (1 << 4) | (1 << 5) | (1 << 7));

   //  Modify the value of global variable Var_08, clearing
   //  bits 1, 4, 6, 7, and leaving all other bits unaltered.
   // INSERT CODE HERE.
   Var_08 &= ~((1 << 1) | (1 << 4) | (1 << 6) | (1 << 7));

   //  Modify the value of global variable Var_09, clearing
   //  bits 0, 3, 4, 5, 6, and leaving all other bits unaltered.
   // INSERT CODE HERE.
   Var_09 &= ~((1 << 0) | (1 << 3) | (1 << 4) | (1 << 5) | (1 << 6));

   //  Modify the value of global variable Var_10, clearing
   //  bits 1, 2, 5, 6, 7, and leaving all other bits unaltered.
   // INSERT CODE HERE.
   Var_10 &= ~((1 << 1) | (1 << 2) | (1 << 5) | (1 << 6) | (1 << 7));
}

void print_bits(const char* label, unsigned char val) {
   printf("%s bits = {", label);

   int deja = 0;

   for (int i = 0; i <= 7; i++) {
      if ((val & (1 << i))) {
         printf("%s%d", (deja ? ", " : ""), i);
         deja = 1;
      }
   }

   printf("}\n");
}

int main(int argc, char* argv[]) {
   unsigned char init_val = 0;

   if (argc > 1) init_val = atoi(argv[1]) & 255;

   Var_01 = init_val;
   Var_02 = init_val;
   Var_03 = init_val;
   Var_04 = init_val;
   Var_05 = init_val;
   Var_06 = init_val;
   Var_07 = init_val;
   Var_08 = init_val;
   Var_09 = init_val;
   Var_10 = init_val;

   clear_bits();

   print_bits("Initial", init_val);
   print_bits("Var_01", Var_01);
   print_bits("Var_02", Var_02);
   print_bits("Var_03", Var_03);
   print_bits("Var_04", Var_04);
   print_bits("Var_05", Var_05);
   print_bits("Var_06", Var_06);
   print_bits("Var_07", Var_07);
   print_bits("Var_08", Var_08);
   print_bits("Var_09", Var_09);
   print_bits("Var_10", Var_10);

   return 0;
}