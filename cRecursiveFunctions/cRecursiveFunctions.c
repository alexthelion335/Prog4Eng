/*
Filename: cRecursiveFunctions.c
Author: Alex Kinch
Date: Oct. 10, 2023
Purpose: To demonstrate the recursive process. There are two examples here: 1) factorial calculations, and 2) fibonacci series.
*/

#include <stdio.h>

// Function prototypes
unsigned long long int factorial(int number);   // Protoype for factorial
unsigned long long int fibonacci(int n);        // Prototype for fibonacci


int main()
{
    // Calculate factorial(i) and display the result
    for (int i = 0; i < 21; i++) {
        printf("%d! = %llu\n", i, factorial(i));
    }

    puts("");

    // Calculate and display fibonacci series for 0-10
    for (int num = 0; num < 10; num++)
        printf("Fibonacci (%d) = %llu\n", num, fibonacci(num));

    puts("");
    printf("Fibonacci (20) = %llu\n", fibonacci(20));
    printf("Fibonacci (30) = %llu\n", fibonacci(30));
    printf("Fibonacci (40) = %llu\n", fibonacci(40));

    return 0;
}

// Recursive definition of factorial function
unsigned long long int factorial(int number)
{
    if (number <= 1) // base case
        return 1;
    else
        return (number * factorial(number - 1)); // recursive step
} // end factorial()

// Recursive definition of Fibonacci series
unsigned long long int fibonacci(int n)
{
    if (0 == n || 1 == n)       // base case
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);

} // end fibonacci()
