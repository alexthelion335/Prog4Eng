/*
Filename: cPointers03.c
Author: Alex Kinch
Date: Oct. 24, 2023
Purpose: To demonstrate pass-by-value and pass-by-reference methods.
*/

#include <stdio.h>
#include <stdlib.h>

// Function Prototypes
void convertToUpperCase(char *sPtr);

int main()
{
    char string1[] = "cHaRaCters and $32.98"; // Initialize char array

    // 1. Converting a string to uppercase using a non-constant pointer to non-constant data.
    printf("The string before conversion is: %s\n", string1);
    convertToUpperCase(string1);
    printf("The string after conversion is: %s\n", string1);

    return 0;
}

void convertToUpperCase(char * sPtr)
{
    while (*sPtr != '\0')       // The current character is not the string terminating character (\0)
    {
        *sPtr = toupper(*sPtr); // Convert to uppercase
        ++sPtr;
    }   // end while
}   // end convertToUpperCase()

// sPtr . . . . . . . . .
void printCharacters(const char *sPtr)
{

    // Loop through the entire string
    for (; *sPtr != '\0'; ++sPtr)
        printf("%c", *sPtr);
}   // end printCharacters()
