/*
Filename: cString06.c
Author: Alex Kinch
Date: Nov. 7, 2023
Purpose: To demonstrate how to copy one string to another.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE1 25
#define SIZE2 15

int main()
{
    char x[] = "Happy Birthday to You"; // Initialize char array x
    char y[SIZE1] = ""; // Create a char array y
    char z[SIZE2] = ""; // Create a char array z
    char *x1 = "";

    // Copy the contents of x to x1
    x1 = x;
    printf("%p\n%p\n%s\n%s\n", &x, &x1, x, x1);
    puts("\n\n");

    // Copy the contents of x to y using strcpy
    printf("%s%s\n%s%s\n", "The string in array x is ", x, "The string in array y is: ", strcpy(y,x));

    strncpy(z,x, SIZE2 - 1);    // Copy first 14 characters of x into z
    z[SIZE2 - 1] = '\n';
    printf("The string in array z is: %s\n", z);

    return 0;
}
