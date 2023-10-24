/*
Filename: cPointers02.c
Author: Alex Kinch
Date: Oct. 24, 2023
Purpose: To demonstrate pass-by-value and pass-by-reference methods.
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int cubeByValue(int);
void cubeByReference(int*);


int main()
{
    int number = 5;                 // Initialize number
    int number2;

    printf("The original value of number is %d", number);
    number2 = cubeByValue(number);   // Pass number by value to the function cubeByValue()
    printf("\nThe value of number is %d and the value returned by the function is %d\n", number, number2);

    int number1 = 10;

    printf("The original value of number1 is %d", number1);
    cubeByReference(&number1);   // Pass address of number1 to the function cubeByReference()
    printf("\nThe new value of number1 is %d\n", number1);

    printf("The name of a function is a pointer:\n");
    printf("The name of the entry point of the function cubeByValue() = %p", cubeByValue);

    return 0;
}

// Calculate and return of integer argument
int cubeByValue(int n)
{
    return n * n * n;       // Cube local variable and return result
}   // end cubeByValue()

// Calculate cube of *nPtr and actually modify the number in main
void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;  // Cube *nPtr
}   // end cubeByReference()
