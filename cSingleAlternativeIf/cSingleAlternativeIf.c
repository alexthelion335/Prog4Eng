/*
Filename: cSingleAlternativeIf.c
Author: Alex Kinch
Date: Sept. 19, 2023
Purpose: To demonstrate the functioning of a single alternative if statement in C. We will also use relational operators.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter two integers, and I will display the ");
    printf("relationships between them: \n");

    int num1 = 0; // First number
    int num2 = 0; // Second number
    scanf("%d %d", &num1, &num2);

    if (num1 == num2)
    {
        printf("%d is equal to %d\n", num1, num2);
    }
    if (num1 != num2)
    {
        printf("%d is not equal to %d\n", num1, num2);
    }
    if (num1 < num2)
        printf("%d is less than %d\n", num1, num2);
    if (num1 > num2)
        printf("%d is greater than %d\n", num1, num2);
    if (num1 <= num2)
        printf("%d is less than or equal to %d\n", num1, num2);
    if (num1 >= num2)
        printf("%d is greater than or equal to %d\n", num1, num2);
    return 0;
}
