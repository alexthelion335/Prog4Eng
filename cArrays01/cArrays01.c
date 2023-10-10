/*
Filename: cArrays01.c
Author: Alex Kinch
Date: Oct. 10, 2023
Purpose: To introduce arrays.
*/

#include <stdio.h>
#include <stdlib.h>
#define ASIZE 10    // Symbolic constant

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; // Complete initialization of array arr[]. Size of array in square brackets, elements 0-6
    int arr1[7] = {2, 3, 4};            // Partial initialization of array arr1[]. The rest of the elements are set to zero automatically.
    int arr2[] = {5, 6, 7, 8, 9};       // Initialize the array arr2[] and implicitly size it.
    int arr3[ASIZE] = {0};              // Using a symbolic constant to size an array and initializing the array to zero.
    // int arr4[];          // syntax error because no size
    int arr4[5];

    return 0;
}
