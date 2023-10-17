// fig06_10.c
// Date: Oct. 17, 2023
// Array name is the same as the address of the array’s first element.
#include <stdio.h>

// function main begins program execution
int main(void) {
   char array[5] = ""; // define an array of size 5

   printf("    array = %p\n&array[0] = %p\n   &array = %p\n",
      array, &array[0], &array);
}
