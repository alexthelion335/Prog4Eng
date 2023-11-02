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
           isalpha('A') ? "A is a " : "A is not a ", "letter",
           isalpha('b') ? "b is a " : "b is not a ", "letter",
           isalpha('&') ? "& is a " : "& is not a ", "letter",
           isalpha('4') ? "4 is a " : "4 is not a ", "letter");
    return 0;
}
