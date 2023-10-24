// Filename: cPointers01.c
// Date: Oct. 24, 2023
// fig07_01.c
// Using the & and * pointer operators.
#include <stdio.h>

int main(void) {
   int a = 7;
   int *aPtr = &a; // set aPtr to the address of a

   printf("Address of a is %p\nValue of aPtr is %p\n\n", &a, aPtr);
   printf("Value of a is %d\nValue of *aPtr is %d\n\n", a, *aPtr);
   printf("Showing that * and & are complements of each other\n");
   printf("&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);

   // Addition to the code in the text
   int b = 10;
   aPtr = &b;
   printf("\nThe new address stored in aPtr is %p", aPtr);
   printf("\nThe new address stored in aPtr is %x", aPtr);
   printf("\nThe new address stored in aPtr is %d", aPtr);

   *aPtr =50;
   printf("\n\nThe new value of b = %d\n", b);
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
