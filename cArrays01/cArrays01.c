/*
Filename: cArrays01.c
Author: Alex Kinch
Date: Oct. 10, 2023
Purpose: To introduce arrays.
*/

#include <stdio.h>
#include <stdlib.h>
#define ASIZE 10    // Symbolic constant

// Function prototype
void doubleit(int[], int);

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; // Complete initialization of array arr[]. Size of array in square brackets, elements 0-6
    int arr1[7] = {2, 3, 4};            // Partial initialization of array arr1[]. The rest of the elements are set to zero automatically.
    int arr2[] = {5, 6, 7, 8, 9};       // Initialize the array arr2[] and implicitly size it.
    int arr3[ASIZE] = {0};              // Using a symbolic constant to size an array and initializing the array to zero.
    // int arr4[];          // syntax error because no size
    int arr4[5];

    // Date: Oct. 12, 2023

    // After implicit sizing
    printf("%s", "The implicitly sized array: \n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr2[i]);
    puts("");

    // The completely initialized array
    printf("%s", "The completely initialized array: \n");
    for (int i = 0; i < 7; i++)
        printf("%d ", arr[i]);
    puts("");

    // The partially initialized array
    printf("%s", "The partially initialized array: \n");
    for (int i = 0; i < 7; i++)
        printf("%d ", arr1[i]);
    puts("");

    // The constant initialized array
    printf("%s", "The array sized using a constant: \n");
    for (int i = 0; i < ASIZE; i++)
        printf("%d ", arr3[i]);
    puts("");

    // Assigning a value to an individual element of an array
    arr[1] = 10;        // Second element is set to 10

    // Now we can print it again to see the change
    // The completely initialized array 2: Electric Boogaloo
    printf("%s", "The completely initialized array after changing the second element: \n");
    for (int i = 0; i < 7; i++)
        printf("%d ", arr[i]);
    puts("");

    // Loop for assigning values to array elements
    for (int i = 0; i < ASIZE; i++)
    {
        arr3[i] = i * i;
        printf("The value stored in element %d of the array - %d \n", i, arr3[i]);
    } // end for

    // Printing arr3, but up to 15?
    // Iterating out of bounds in array
    // Prints next values in memory, even though the array is not that length
    // Problem in both C and C++
    // This is why you should use a constant to define the size of the array
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", arr3[i]);
    } // end for

    doubleit(arr3, ASIZE);
    for (int n = 0; n < ASIZE; n++)
        printf("The contents of cell %d is now %d \n", n, arr3[n]);
    puts("");

    return 0;
}

// DoubleIt!
void doubleit(int a[], int i)       // An array being passed to a function
{
    int k = 0;
    a[k] = 1;
    for (k = 1; k < i; k++)
        a[k] = a[k - 1] * 2;
}   // end doubleit()
