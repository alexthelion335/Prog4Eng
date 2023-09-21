/*
Filename: cBreakContinue.c
Author: Alex Kinch
Date: Sep. 21, 2023
Purpose: To demonstrate the functioning of the break and continue statements.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n; // To hold user input

    // The following is an infinite loop. DO NOT USE IT IN PRACTICE UNLESS THERE IS A SPECIFIC NEED
    for(;;)
    {
        printf("Enter an integer: ");
        scanf("%d", &n);
        if (n % 2 == 0) continue;
        if (n % 3 == 0) break;
        printf("\nBottom of the loop.\n");

    } // end for

    printf("\t Outside of loop\n");

    return 0;
}
