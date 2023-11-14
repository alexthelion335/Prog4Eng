/*
Filename: cFormattedIO02.c
Author: Alex Kinch
Date: Nov. 9, 2023
Purpose: To demonstrate the use of alignment, precision, and flags with conversion specifiers.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // fig09_05.c
    // Right-aligning integers in a field
    printf("%4d\n", 1);
    printf("%4d\n", 12);
    printf("%4d\n", 123);
    printf("%4d\n", 1234);
    printf("%4d\n\n", 12345);

    printf("%4d\n", -1);
    printf("%4d\n", -12);
    printf("%4d\n", -123);
    printf("%4d\n", -1234);
    printf("%4d\n", -12345);

    puts("");

    // fig09_06.c
    // Printing integers, floating-point numbers and strings with precisions
    puts("Using precision for integers");
    int i = 873; // initialize int i
    printf("\t%.4d\n\t%.9d\n\n", i, i);

    puts("Using precision for floating-point numbers");
    double f = 123.94536; // initialize double f
    printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);

    puts("Using precision for strings");
    char s[] = "Happy Birthday"; // initialize char array s
    printf("\t%.11s\n", s);


    puts("");

    // fig09_07.c
    // Right- and left-aligning values
    puts("1234567890123456789012345678901234567890");
    printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
    puts("1234567890123456789012345678901234567890");
    printf("%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23);


    puts("");


    // fig09_08.c
    // Printing positive and negative numbers with and without the + flag
    printf("%d\n%d\n", 786, -786);
    printf("%+d\n%+d\n", 786, -786);

    puts("");

    // fig09_09.c
    // Using the space flag
    // not preceded by + or -
    printf("% d\n% d\n", 547, -547);

    puts("");


    // fig09_10.c
    // Using the # flag with conversion specifiers
    // o, x, X and any floating-point specifier
    int c = 1427; // initialize c
    printf("%#o\n", c);
    printf("%#x\n", c);
    printf("%#X\n", c);

    double p = 1427.0; // initialize p
    printf("\n%g\n", p);
    printf("%#g\n", p);

    puts("");

    // Date: Nov. 14, 2023
    // The 0 flag
    printf("%+09d\n", 452);
    printf("%09d\n", 452);

    return 0;
}
