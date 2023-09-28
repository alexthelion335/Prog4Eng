/*
Filename: cConditionalOp.c
Author: Alex Kinch
Date: Sep. 28, 2023
Purpose: To demonstrate the syntax and use of the conditional operator in C. It is a ternary operator and it is the only ternary operator in C.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, smallest, largest, z; // int variable declaration

    // EXAMPLE FOR THE CONDITIONAL OPERATOR
    //puts("Enter positive integers and the app will display the smallest and the largest integers in the series."); // printf is security issue with one argument
    //puts("To end the entry use a negative number.\n");      // use puts if you want one argument
    printf("%s", "Enter 2 positive integers: ");   // or use %s for formatting first
    scanf("%d %d", &k, &largest);

    // The following statement will determine which variable is greater of the two
    z = (k > largest) ? k : largest; // This is the syntax of the conditional operator which is (?:) and how it is used
    // if k is biggest, the value will be k, if not it is largest variable
    printf("\nTHe bigger of the two values is %d\n", z);
    /* The statement z = (k > largest) ? k : largest; is equivalent to the following
        if (k > largest)
            z = k;
        else
            z = largest;
    */


    //EXAMPLE FOR CONDITIONAL FOR
    puts("Enter positive integers and the app will display the smallest and the largest integers in the series.");
    puts("To end the entry use a negative number.\n");
    smallest = k;
    largest = k;

    printf("%s", "Enter an integer: ");
    scanf("%d", &k); // priming read for loop

    // Loop
    for (; k >= 0;)
    {
        if (k < smallest)
            smallest = k;
        if (k > smallest)
            largest = k;
        printf("%s", "Enter an integer: ");
        scanf("%d", &k); // remaining reads in loop
    } //end for

    puts("");
    printf("%s %d\n", "Smallest number: ", smallest);
    printf("%s %d\n", "Largest number: ", largest);

    return 0;
}
