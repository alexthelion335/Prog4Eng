/*
Filename: cArithmeticOpsOnIntegers.c
Author: Alex Kinch
Date: Sep. 7, 2023
Purpose: To demonstrate the various arithmetic operations on integers.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable declarations
    int num1, num2, num4;

    // Prompt for data entry and read the data
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Addition operation
    num4 = num1 + num2;
    printf("\nThe sum of num1 and num2 = %d", num4);

    // Subtraction operation
    num4 = num1 - num2;
    printf("\nThe difference of num1 and num2 = %d", num4);

    // Multiplication operation
    num4 = num1 * num2;
    printf("\nThe product of num1 and num2 = %d", num4);

    // Integer division operation
    num4 = num1 / num2;
    printf("\nThe quotient of num1 divided by num2 = %d", num4);

    // Modulus operation
    num4 = num1 % num2;
    printf("\nThe remainder of num1 divided by num2 = %d", num4);

    // Regular division
    float num3 = num1/num2;
    printf("\nIn regular division, the result of num1 divided by num2 = %f\n", num3);



    return 0;
}
