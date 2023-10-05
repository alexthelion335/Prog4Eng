/*
Filename: cUserDefinedFunction.c
Author: Alex Kinch
Date: Oct. 5, 2023
Purpose: To demonstrated how to define and use your own defined functions.
*/

#include <stdio.h>
#include <stdlib.h>

// Need to have function prototypes for some compilers to make square available to main
// Only need to include datatype in parenthesis
int square(int);


int main()
{
    int x, y;      // Local variable in main()

    // Iterate 10 times to calculate the square of the loop control variable
    for (int i = 0; i < 10; i++)
    {
        printf("The square of %d = %d\n", i+1, square(i + 1));    // Function call to square()
    } // end for

    printf("\n\nUsing pow(), the square of 10 = %f\n", pow(10.0, 2));
    return 0;
} // end main()

// Definition of the square function
int square(int x)
{
    //int y = x * x;
    //return y;
    // Originally used y because not available to main
    // Do calc within return statement
    return x*x;
} //end square

