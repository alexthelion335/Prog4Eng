/*
Filename: cPointers06.c
Author: Alex Kinch
Date: Oct. 26, 2023
Purpose: To demonstrate the use of a pointer to display the contents of an integer array
        and to use it in a comparison.
*/

#include <stdio.h>

int main()
{
    const int SIZE = 8;
    int set[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *numPtr = set;

    printf("%s ", "The numbers in set are: \n");
    printf("%d  %X   \n", *numPtr, numPtr);  // Display the first element of the array
    while (numPtr < &set[SIZE - 1])     // Pointer comparison
    {
        // Advance the pointer to the next element
        numPtr++;
        // Display the number the pointer points to
        printf("%d  %X   \n", *numPtr, numPtr);
    }   // end while

    // Display the numbers in reverse order
    printf("%s ", "\nThe numbers of array set in reverse order: \n");
    printf("%d  %X   \n", *numPtr, numPtr);
    while (numPtr > set)     // Pointer comparison
    {
        // Move the pointer backward one element at a time
        numPtr--;
        // Display the number the pointer points to
        printf("%d  %X   \n", *numPtr, numPtr);
    }   // end while
    puts("\n\n");


    return 0;
}
