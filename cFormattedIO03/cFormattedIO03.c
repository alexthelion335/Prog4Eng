/*
Filename: cFormattedIO02.c
Author: Alex Kinch
Date: Nov. 14, 2023
Purpose: To demonstrate the use of conversion specifiers with scanf().
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // fig09_12.c
    // Reading input with integer conversion specifiers
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;

    puts("Enter seven integers: ");
    scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g);

    puts("\nThe input displayed as decimal integers is:");
    printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);


    puts("");

    // fig09_13.c
    // Reading input with floating-point conversion specifiers
    double a1 = 0.0;
    double b1 = 0.0;
    double c1 = 0.0;

    puts("Enter three floating-point numbers:");
    scanf("%le%lf%lg", &a1, &b1, &c1);

    puts("\nUser input displayed in plain floating-point notation:");
    printf("%f\n%f\n%f\n", a1, b1, c1);

    puts("");

    // fig09_14.c
    // Reading characters and strings
    char x = '\0';
    char y[9] = "";

    printf("%s", "Enter a string: ");
    scanf("%c%8s", &x, y);

    printf("The input was '%c' and \"%s\"\n", x, y);

    puts("");

    // fig09_15.c
    // Using a scan set
    char z[9] = "";
    getchar();
    printf("%s", "Enter string: ");
    scanf("%8[aeiou]", z); // search for set of characters

    printf("The input was \"%s\"\n", z);

    puts("");


    // fig09_16.c
    // Using an inverted scan set
    //char z[9] = "";

    //printf("%s", "Enter a string: ");
    //scanf("%8[^aeiou]", z); // inverted scan set

    //printf("The input was \"%s\"\n", z);

    puts("");

    getchar();
    // fig09_17.c
    // Inputting data with a field width
    int x2 = 0;
    int y2 = 0;

    printf("%s", "Enter a six digit integer: ");
    scanf("%2d%d", &x2, &y2);

    printf("The integers input were %d and %d\n", x2, y2);

    puts("");

    // fig09_18.c
    // Reading and discarding characters from the input stream
    int month = 0;
    int day = 0;
    int year = 0;
    printf("%s", "Enter a date in the form mm-dd-yyyy: ");
    scanf("%d%*c%d%*c%d", &month, &day, &year);
    printf("month = %d  day = %d  year = %d\n\n", month, day, year);

    printf("%s", "Enter a date in the form mm/dd/yyyy: ");
    scanf("%d%*c%d%*c%d", &month, &day, &year);
    printf("month = %d  day = %d  year = %d\n", month, day, year);

    puts("");
    return 0;
}
