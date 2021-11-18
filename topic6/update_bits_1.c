#include <stdio.h>
#include <stdlib.h>

//  Declare two global variables, each of them suitable to store a single byte.
//  The names of the variables should be in_var_01 and output_reg_01.
//  *  DO NOT ASSIGN VALUEs TO THESE VARIABLES AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char in_var_01, output_reg_01;

//  Declare two global variables, each of them suitable to store a single byte.
//  The names of the variables should be in_var_02 and output_reg_02.
//  *  DO NOT ASSIGN VALUEs TO THESE VARIABLES AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char in_var_02, output_reg_02;

//  Declare two global variables, each of them suitable to store a single byte.
//  The names of the variables should be in_var_03 and output_reg_03.
//  *  DO NOT ASSIGN VALUEs TO THESE VARIABLES AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char in_var_03, output_reg_03;

//  Declare two global variables, each of them suitable to store a single byte.
//  The names of the variables should be in_var_04 and output_reg_04.
//  *  DO NOT ASSIGN VALUEs TO THESE VARIABLES AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char in_var_04, output_reg_04;

//  Declare two global variables, each of them suitable to store a single byte.
//  The names of the variables should be in_var_05 and output_reg_05.
//  *  DO NOT ASSIGN VALUEs TO THESE VARIABLES AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char in_var_05, output_reg_05;

//  Declare two global variables, each of them suitable to store a single byte.
//  The names of the variables should be in_var_06 and output_reg_06.
//  *  DO NOT ASSIGN VALUEs TO THESE VARIABLES AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char in_var_06, output_reg_06;

//  Declare two global variables, each of them suitable to store a single byte.
//  The names of the variables should be in_var_07 and output_reg_07.
//  *  DO NOT ASSIGN VALUEs TO THESE VARIABLES AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char in_var_07, output_reg_07;

//  Declare two global variables, each of them suitable to store a single byte.
//  The names of the variables should be in_var_08 and output_reg_08.
//  *  DO NOT ASSIGN VALUEs TO THESE VARIABLES AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char in_var_08, output_reg_08;

//  Declare two global variables, each of them suitable to store a single byte.
//  The names of the variables should be in_var_09 and output_reg_09.
//  *  DO NOT ASSIGN VALUEs TO THESE VARIABLES AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char in_var_09, output_reg_09;

//  Declare two global variables, each of them suitable to store a single byte.
//  The names of the variables should be in_var_10 and output_reg_10.
//  *  DO NOT ASSIGN VALUEs TO THESE VARIABLES AT THE POINT OF DECLARATION.
// INSERT CODE HERE.
unsigned char in_var_10, output_reg_10;

void query_bits() {
   //  Modify the value of bit 5 of global variable output_reg_01,
   //  such that it is equal to 1 if and only if bit 0
   //  of in_var_01 is set. Leave all other bits unaltered.
   //  Do not alter in_var_01.
   // INSERT CODE HERE.
   if ((in_var_01 & (1 << 0)) == (1 << 0)) {
      output_reg_01 = output_reg_01 | (1 << 5);
   } else {
      output_reg_01 = output_reg_01 & ~(1 << 5);
   }

   //  Modify the value of bit 0 of global variable output_reg_02,
   //  such that it is equal to 1 if and only if bit 6
   //  of in_var_02 is set. Leave all other bits unaltered.
   //  Do not alter in_var_02.
   // INSERT CODE HERE.
   if ((in_var_02 & (1 << 6)) == (1 << 6)) {
      output_reg_02 = output_reg_02 | (1 << 0);
   } else {
      output_reg_02 = output_reg_02 & ~(1 << 0);
   }

   //  Modify the value of bit 1 of global variable output_reg_03,
   //  such that it is equal to 1 if and only if bits 0, 5
   //  of in_var_03 are all set. Leave all other bits unaltered.
   //  Do not alter in_var_03.
   // INSERT CODE HERE.

   // if ((in_var_03 & (((1 << 0) | (1 << 5)) == ((1 << 0) | (1 << 5))))) {
   //    output_reg_03 = output_reg_03 | (1 << 1);
   // } else {
   //    output_reg_03 = output_reg_03 & ~(1 << 1);
   // }

   if ((in_var_03 & ((1 << 0) | (1 << 5))) == ((1 << 0) | (1 << 5)) ) {
      output_reg_03 = output_reg_03 | (1 << 1);
   } else {
      output_reg_03 = output_reg_03 & ~(1 << 1);
   }

   //  Modify the value of bit 3 of global variable output_reg_04,
   //  such that it is equal to 1 if and only if bits 2, 3
   //  of in_var_04 are all set. Leave all other bits unaltered.
   //  Do not alter in_var_04.
   // INSERT CODE HERE.
   if ((in_var_04 & ((1 << 2) | (1 << 3))) == ((1 << 2) | (1 << 3)) ) {
      output_reg_04 = output_reg_04 | (1 << 3);
   } else {
      output_reg_04 = output_reg_04 & ~(1 << 3);
   }

   //  Modify the value of bit 7 of global variable output_reg_05,
   //  such that it is equal to 1 if and only if bits 0, 2, 5
   //  of in_var_05 are all set. Leave all other bits unaltered.
   //  Do not alter in_var_05.
   // INSERT CODE HERE.
   if ((in_var_05 & ((1 << 0) | (1 << 2) | (1 << 5))) == ((1 << 0) | (1 << 2) | (1 << 5)) ) {
      output_reg_05 = output_reg_05 | (1 << 7);
   } else {
      output_reg_05 = output_reg_05 & ~(1 << 7);
   }

   //  Modify the value of bit 6 of global variable output_reg_06,
   //  such that it is equal to 1 if and only if bits 1, 2, 4
   //  of in_var_06 are all set. Leave all other bits unaltered.
   //  Do not alter in_var_06.
   // INSERT CODE HERE.
   if ((in_var_06 & ((1 << 1) | (1 << 2) | (1 << 4))) == ((1 << 1) | (1 << 2) | (1 << 4)) ) {
      output_reg_06 = output_reg_06 | (1 << 6);
   } else {
      output_reg_06 = output_reg_06 & ~(1 << 6);
   }

   //  Modify the value of bit 3 of global variable output_reg_07,
   //  such that it is equal to 1 if and only if bits 0, 2, 4, 6
   //  of in_var_07 are all set. Leave all other bits unaltered.
   //  Do not alter in_var_07.
   // INSERT CODE HERE.
   if ((in_var_07 & ((1 << 0) | (1 << 2) | (1 << 4) | (1 << 6))) == ((1 << 0) | (1 << 2) | (1 << 4) | (1 << 6)) ) {
      output_reg_07 = output_reg_07 | (1 << 3);
   } else {
      output_reg_07 = output_reg_07 & ~(1 << 3);
   }

   //  Modify the value of bit 6 of global variable output_reg_08,
   //  such that it is equal to 1 if and only if bits 1, 2, 4, 6
   //  of in_var_08 are all set. Leave all other bits unaltered.
   //  Do not alter in_var_08.
   // INSERT CODE HERE.
   if ((in_var_08 & ((1 << 1) | (1 << 2) | (1 << 4) | (1 << 6))) == ((1 << 1) | (1 << 2) | (1 << 4) | (1 << 6)) ) {
      output_reg_08 = output_reg_08 | (1 << 6);
   } else {
      output_reg_08 = output_reg_08 & ~(1 << 6);
   }

   //  Modify the value of bit 2 of global variable output_reg_09,
   //  such that it is equal to 1 if and only if bits 0, 1, 3, 4, 6
   //  of in_var_09 are all set. Leave all other bits unaltered.
   //  Do not alter in_var_09.
   // INSERT CODE HERE.
   if ((in_var_09 & ((1 << 0) | (1 << 1) | (1 << 3) | (1 << 4) | (1 << 6))) == ((1 << 0) | (1 << 1) | (1 << 3) | (1 << 4) | (1 << 6)) ) {
      output_reg_09 = output_reg_09 | (1 << 2);
   } else {
      output_reg_09 = output_reg_09 & ~(1 << 2);
   }

   //  Modify the value of bit 5 of global variable output_reg_10,
   //  such that it is equal to 1 if and only if bits 2, 4, 5, 6, 7
   //  of in_var_10 are all set. Leave all other bits unaltered.
   //  Do not alter in_var_10.
   // INSERT CODE HERE.
   if ((in_var_10 & ((1 << 2) | (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7))) == ((1 << 2) | (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7)) ) {
      output_reg_10 = output_reg_10 | (1 << 5);
   } else {
      output_reg_10 = output_reg_10 & ~(1 << 5);
   }
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
   unsigned char out_init = 0;

   if (argc > 1) init_val = atoi(argv[1]) & 255;
   if (argc > 2) out_init = atoi(argv[2]) & 255;

   in_var_01 = init_val;
   output_reg_01 = out_init;

   in_var_02 = init_val;
   output_reg_02 = out_init;

   in_var_03 = init_val;
   output_reg_03 = out_init;

   in_var_04 = init_val;
   output_reg_04 = out_init;

   in_var_05 = init_val;
   output_reg_05 = out_init;

   in_var_06 = init_val;
   output_reg_06 = out_init;

   in_var_07 = init_val;
   output_reg_07 = out_init;

   in_var_08 = init_val;
   output_reg_08 = out_init;

   in_var_09 = init_val;
   output_reg_09 = out_init;

   in_var_10 = init_val;
   output_reg_10 = out_init;

   query_bits();

   print_bits("Input Value         ", init_val);
   print_bits("Initial output Value", out_init);

   printf("\nSearch for bit 0.\n");
   printf("Set or clear bit 5:\n");
   print_bits("output_reg_01", output_reg_01);

   printf("\nSearch for bit 6.\n");
   printf("Set or clear bit 0:\n");
   print_bits("output_reg_02", output_reg_02);

   printf("\nSearch for bits 0, 5.\n");
   printf("Set or clear bit 1:\n");
   print_bits("output_reg_03", output_reg_03);

   printf("\nSearch for bits 2, 3.\n");
   printf("Set or clear bit 3:\n");
   print_bits("output_reg_04", output_reg_04);

   printf("\nSearch for bits 0, 2, 5.\n");
   printf("Set or clear bit 7:\n");
   print_bits("output_reg_05", output_reg_05);

   printf("\nSearch for bits 1, 2, 4.\n");
   printf("Set or clear bit 6:\n");
   print_bits("output_reg_06", output_reg_06);

   printf("\nSearch for bits 0, 2, 4, 6.\n");
   printf("Set or clear bit 3:\n");
   print_bits("output_reg_07", output_reg_07);

   printf("\nSearch for bits 1, 2, 4, 6.\n");
   printf("Set or clear bit 6:\n");
   print_bits("output_reg_08", output_reg_08);

   printf("\nSearch for bits 0, 1, 3, 4, 6.\n");
   printf("Set or clear bit 2:\n");
   print_bits("output_reg_09", output_reg_09);

   printf("\nSearch for bits 2, 4, 5, 6, 7.\n");
   printf("Set or clear bit 5:\n");
   print_bits("output_reg_10", output_reg_10);

   return 0;
}