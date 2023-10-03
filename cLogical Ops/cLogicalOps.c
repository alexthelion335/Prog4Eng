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
        }}
    else
    {
        printf("%s", "\n1-You must be employed to qualify for the special interest loan.\n");
    }

    //Date: Oct. 3, 2023

    /*printf("%s", "How many years have you worked at your organization? ");
    scanf("%d", &years);
    printf("%d\n", years);*/

    //Using the logical AND to replace the nested if above
    if ((employed == 'Y') && (recentGrad == 'Y'))
        printf("%s", "\n    2-You qualify for the loan.\n");
    else{
        printf("%s", "\n    2-You must be employed and have graduated from College");
        printf("%s", "\n    in the past 2 years to qualify for the special interest loan.");
    }

    //EXAMPLE 2: IMPLEMENTING LOGICAL OR
    // In this case we will say that the applicant is eligible for the loan if s/he makes $40,000 per annum or
    // has been at the job for more than 5 years

    //get the date
    float income;
    int years;

    printf("%s", "\n\nWhat is your annual income? ");
    scanf("%f", &income);
    printf("%10.1f\n", income);
    printf("%s", "How many years have you worked at your organization? ");
    scanf("%d", &years);
    printf("%d\n", years);

    // Using nested ifs
    if (income >= 40000)
        printf("%s", "3-You qualify for the loan.\n");
    else if (years > 5)
        printf("%s", "3-You qualify for the loan.\n");
    else
        printf("%s", "3-You do not qualify for the loan.\n");

    //Using logical OR
    if ((income >= 40000) || (years > 5))
        printf("%s", "\n4-You qualify for the loan.\n");
    else{
        printf("%s", "\n4-You must make at least $40,000 or have been");
        printf("%s", "\nwith your organization for at least 5 years.");
    }

    // EXAMPLE 3: USE OF LOGICAL NEGATION (!)
    if (!((income >= 40000) || (years > 5))){
        printf("%s", "\n4-You must make at least $40,000 or have been");
        printf("%s", "\nwith your organization for at least 5 years.");
    }
    else
        printf("%s", "\n4-You qualify for the loan.\n");

    return 0;
}
