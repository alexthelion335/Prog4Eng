/*
Filename: cArithmeticOps.c
Author: Alex Kinch
Date: Sep. 12, 2023
Purpose: To demonstrate the various arithmetic operations on integers and floating point numbers.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable declarations
    int a, b, c;
    float x, y, z;

    // Multiple Assignments
    z = y = x = 10;

    // Assignment Statements
    a = 5;
    b = 3;
    c = 2;

    x = 7.5;
    y = 5.3;
    z = 2.4;

    //Arithmetic operations with integers
    printf("Arithmetic operations with integers: ");
    printf("\nThe sum of %d and %d is: %10d\n", a, b, a + b); // 10 is field width
    printf("\nThe difference of %d and %d is: %d\n", b, c, b - c);
    printf("\nThe product of %d and %d is: %d\n", a, c, a * c);
    printf("\nThe quotient of %d and %d is: %d\n", a, b, a / b);
    printf("\nThe remainder of the quotient of %d and %d is: %d\n", a, b, a % b);
    printf("\nThe regular division of %d and %d is: %f\n", a, b, (a*1.0) / b); // Multiplying a by 1.0 to get floating point output

    //Arithmetis operations with floating point numbers
    printf("\n\nArithmetic operations with floating-point numbers: ");
    printf("\nThe sum of %5.2f and %5.2f is: %5.2f\n", x, y, x + y); // 5.2 limits numbers of decimal spaces
    printf("\nThe difference of %f and %f is: %f\n", y, z, y - z);
    printf("\nThe product of %f and %f is: %f\n", x, z, x * z);
    printf("\nThe quotient of %f and %f is: %f\n", x, y, x / y);
    printf("\nThe quotient of %d and %f is: %5.5f\n", a, z, a / z);


    return 0;
}
