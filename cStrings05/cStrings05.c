/*
Filename: cStrings05.c
Author: Alex Kinch
Date: Nov. 7, 2023
Purpose: To demonstrate the use of functions fgets() and putchar().
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 80

// Function Prototypes
void reverse(const char * const sPtr);

int main()
{
    char sentence[SIZE] = "";

    puts("Enter a line of text: ");
    fgets(sentence, SIZE, stdin);

    printf("\n%s", "The line printed backward is: ");
    reverse(sentence);
    puts("");

    return 0;
}

// Recursively output characters in string in reverse order
void reverse(const char * const sPtr)
{
    // if end of string
    if ('\0' == sPtr[0])    // End of string
        return;
    else {                  // if not end of string
        reverse(&sPtr[1]);  // Recursion step
        putchar(sPtr[0]);   // use putchar() to display the character
    }
}
