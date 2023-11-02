/*
Filename: cStrings01.c
Author: Alex Kinch
Date: Nov. 2, 2023
Purpose: To demonstrate the use of some C string functions (isalpha, isdigit, isalnum, isxdigit).
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // This is an example of character testing functions
    printf("%s\n%s%s\n\n", "According to isdigit: ",
        isdigit('8') ? "8 is a " : "8 is not a ", "digit");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isalpha: ",
           isalpha('A') ? "A is a " : "A is not a ", "letter",
           isalpha('b') ? "b is a " : "b is not a ", "letter",
           isalpha('&') ? "& is a " : "& is not a ", "letter",
           isalpha('4') ? "4 is a " : "4 is not a ", "letter");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isalnum: ",
           isalnum('A') ? "A is a " : "A is not a ", "digit or letter",
           isalnum('b') ? "b is a " : "b is not a ", "digit or letter",
           isalnum('&') ? "& is a " : "& is not a ", "digit or letter",
           isalnum('4') ? "4 is a " : "4 is not a ", "digit or letter");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to isxdigit: ",
           isxdigit('A') ? "A is a " : "A is not a ", "hexadecimal digit",
           isxdigit('b') ? "b is a " : "b is not a ", "hexadecimal digit",
           isxdigit('&') ? "& is a " : "& is not a ", "hexadecimal digit",
           isxdigit('4') ? "4 is a " : "4 is not a ", "hexadecimal digit",
           isxdigit('J') ? "J is a " : "J is not a ", "hexadecimal digit");

    printf("%s\n%s%s\n\n", "According to ispunct: ",
        ispunct(';') ? "; is a " : "; is not a ", "punctuation mark");

    printf("%s\n%s%s\n\n", "According to isspace: ",
        isspace('\t') ? "\\t is a " : "\\t is not a ", "white space");
    return 0;
}
