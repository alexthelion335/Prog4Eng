/*
Filename: cLogicalOps.c
Author: Alex Kinch
Date: Sep. 28, 2023
Purpose: To demonstrate the use of logical operators to combine simple conditions using logical operators.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable declarations
    char employed, // Currently employed? (Y or N)
        recentGrad; // Recent college gradaute? (Y or N)

    // EXAMPLE 1: Implementing the logical AND

    // In this part we wil use simple conditions
    printf("%s", "Answer the following questions\n");
    printf("%s", "with either Y for Yes or N for No.\n");

    printf("%s", "Are you employed? ");
    employed = getchar();
    printf("%c\n", employed);
    getchar();
    printf("%s", "Did you graduate from college within the past 2 years? ");
    recentGrad = getchar();
    printf("%c\n", recentGrad);

    // Using nested ifs
    if (employed == 'Y')
    {
        if (recentGrad == 'Y')
            printf("%s", "\nYou may qualify for the special interest loan.\n");
        else
        {
            printf("%s", "\nYou must have graduated from college in the past 2 years.\n");
            printf("%s", "to qualify for the special interest loan.\n");
        }
        else
        {
            printf("%s", "\n1-You must be employed to qualify for the special interest loan.\n");
        }
    }


    /*printf("%s", "How many years have you worked at your organization? ");
    scanf("%d", &years);
    printf("%d\n", years);*/

    return 0;
}
