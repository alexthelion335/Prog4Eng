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

    // Date: Oct. 26, 2023
    // 2. Printing a string one character at a time using a non-constant pointer to constant data
    char string2[] = "print characters of a string";

    puts("The string is:");
    printCharacters(string2);
    puts("");

    // 3. Attempting to modify data through a non-constant pointer to constant data
    int y = 7;
    f(&y);  // f attempts to illegally modify y

    // 4. Attempting to modify a constant pointer to non-constant data
    int x1 = 0;
    int y1 = 0;
    // ptr is a constant pointer to an integer that can be modified through ptr, but ptr always points
    // to the same memory location
    int * const ptr1 = &x1;     // how to create constant pointer, initialize to address of x1

    *ptr1 = 7;
    // ptr1 = &y1;

    // 5. Attempting to modify a constant pointer to constant data
    int x2 = 5;
    int y2 = 0;
    // ptr is a constant point to constant integer. ptr always points to the same location; the integer
    // at that location cannot be modified
    const int *const ptr2 = &x2;   // Initialization is OK
    printf("%d\n", *ptr2);
    // *ptr2 = 7;   // error: *ptr is const; cannot assign new value
    // ptr2 = &y2;  // error: ptr2 is read only; cannot assign new address

    return 0;
}

void convertToUpperCase(char * sPtr)
{
    while (*sPtr != '\0')       // The current character is not the string terminating character (\0)
    {
        *sPtr = toupper(*sPtr); // Convert to uppercase
        ++sPtr;     // part of pointer arithmetic
    }   // end while
}   // end convertToUpperCase()

// sPtr cannot be used to modify the character to which it points.
// i.e., sPtr is a read-only pointer (used by item 2 in main()).
void printCharacters(const char *sPtr)
{

    // Loop through the entire string
    for (; *sPtr != '\0'; ++sPtr)      // No initialization, already done
        printf("%c", *sPtr);
}   // end printCharacters()

// sPtr cannot be used to modify the data to which it points to (used in item 3 in main())
void f(const int *xPtr)
{
    //*xPtr = 100;    // Change the value passed to the function
    // error because it can't change the value
}
