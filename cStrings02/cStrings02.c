/*
Filename: cStrings02.c
Author: Alex Kinch
Date: Nov. 2, 2023
Purpose: To demonstrate the use of some C character testing functions (islower, isupper)
            and conversion functions (tolower, toupper).
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // This example is for string character testing functions
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to islower: ",
           islower('A') ? "A is a " : "A is not a ", "lowercase letter",
           islower('b') ? "b is a " : "b is not a ", "lowercase letter",
           islower('&') ? "& is a " : "& is not a ", "lowercase letter",
           islower('4') ? "4 is a " : "4 is not a ", "lowercase letter");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isupper: ",
           isupper('A') ? "A is a " : "A is not a ", "uppercase letter",
           isupper('b') ? "b is a " : "b is not a ", "uppercase letter",
           isupper('&') ? "& is a " : "& is not a ", "uppercase letter",
           isupper('4') ? "4 is a " : "4 is not a ", "uppercase letter");

    printf("%s%c\n%s%c\n%s%c\n%s%c\n",
           "u converted to uppercase is ", toupper('u'),
           "$ converted to uppercase is ", toupper('$'),
           "L converted to lowercase is ", tolower('L'),
           "6 converted to lowercase is ", tolower('6'));


    return 0;
}
