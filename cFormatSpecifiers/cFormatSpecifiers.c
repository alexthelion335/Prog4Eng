/*
Filename: cFormatSpecifiers.c
Author: Alex Kinch
Date: Sep. 14, 2023
Purpose: To demonstrate the behavior of format specifiers.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The number is %4d\n", 123); // Field width wider than the number
    printf("The number is %4d\n", 1234); // Field same size as the number
    printf("The number is %4d\n", 12345); // Number larger than the field
    printf("The number is %5d\n", 1234); // Field width wider than the number
    printf("The number is %8.6d\n", 1234); // Integer > precision, point 6 refers to precision with an integer
    printf("The number is %+8.6d\n", 1234); // Puts the + sign
    printf("The number is %+8.6f\n", 1234.); // Floating-point number
    printf("The number is %+8.2f\n", -1.234); // Float number
    printf("The number is %-8.2f\n", -1.234); // Float number, left align

    return 0;
}
