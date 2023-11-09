/*
Filename: cFormattedIO01.c
Author: Alex Kinch
Date: Nov. 9, 2023
Purpose: To demonstrate the use of integer and floating-point conversion specifiers for printf.
*/

#include <stdio.h>

int main(void) {
    // fig09_01.c
    // Integer conversions
   printf("%d\n", 455);
   printf("%i\n", 455); // i same as d in printf
   printf("%d\n", +455); // plus sign does not print
   printf("%d\n", -455); // minus sign prints
   printf("%hd\n", 32000); // print as type short
   printf("%ld\n", 2000000000L); // print as type long
   printf("%o\n", 455); // octal
   printf("%u\n", 455); // unsigned
   printf("%u\n", -455);
   printf("%x\n", 455); // hexadecimal with lowercase letters
   printf("%X\n", 455); // hexadecimal with uppercase letters


    puts("");
   // fig09_02.c
   // Floating point conversions
   printf("%e\n", 1234567.89);
   printf("%e\n", +1234567.89); // plus does not print
   printf("%e\n", -1234567.89); // minus prints
   printf("%E\n", 1234567.89);
   printf("%f\n", 1234567.89); // six digits to right of decimal point
   printf("%g\n", 1234567.89); // prints with lowercase e
   printf("%G\n", 1234567.89); // prints with uppercase E


   puts("");
   // fig09_03
   // Using the character and string conversion specifiers
   char character = 'A'; // initialize char
   printf("%c\n", character);

   printf("%s\n", "This is a string");

   char string[] = "This is a string"; // initialize char array
   printf("%s\n", string);

   const char *stringPtr = "This is also a string"; // char pointer
   printf("%s\n", stringPtr);


   puts("");
   // fig09_04.c
   // Using the p and % conversion specifiers
   int x = 12345;
   int *ptr = &x;

   printf("The value of ptr is %p\n", ptr);
   printf("The address of x is %p\n\n", &x);

   printf("Printing a %% in a format control string\n");
}






/**************************************************************************
 * (C) Copyright 1992-2021 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
