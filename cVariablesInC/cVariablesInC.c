/*
Filename: cVariablesInC.c
Author: Alex Kinch
Date: Sep. 7, 2023
Purpose TO demonstrate a C program with multiple instructions. Introduce the concept of variable and arithmetic operators

*/

#include <stdio.h>
#include <stdlib.h>

int main() // This is the function header
{
    // Variable declarations
    int num1;
    int num2 = 0;   // Initialization of a variable

    // Display a prompt to enter data
    printf("\n\n\nEnter the first integer: ");
    // Read the data entered by the user and hold it in one of the variables
    scanf("%d", &num1); // First argument is format starting with a percent symbol and a letter, d is integer, second argument is the variable to store it in, beginning with an ampersand
    // Confirm the value that was read
    printf("The number you entered = %d", num1);
    // Prompt for the second number and read the number
    printf("\n\nEnter the second integer: ");
    scanf("%d", &num2);
    printf("The number you entered = %d", num2);

    int sum = num1 + num2;

    // Display the result
    printf("\n\nSum of the two integers = %d\n", sum);

    return 0;
}
