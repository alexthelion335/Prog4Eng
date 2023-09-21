/*
Filename: cLoops.c
Author: Alex Kinch
Date: Sep. 21, 2023
Purpose: To demonstrate the structure and functioning of all the C loops
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h> // For some of the calculations we will do

int main()
{
    // While loop as a counter-controlled loop
    int total = 0; // To be used as an accumulator, initialized to zero
    int counter = 1; // To be used as a counter, initialized to one

    // The while loop --- counter loop
    while (counter <= 7) // iterate 7 times
    {
        printf("%s", "Enter grade: ");
        int grade = 0; // Grade value
        scanf("%d", &grade); // Read value
        total += grade; // Equivalent to total = total + grade
        counter++; // Equivalent to counter = counter + 1

    } // end while
    // Display the average score
    float average = (float)total / 7; // Adding (float) casts one of the numbers as a float, so floating point division is done, not integer division
    printf("Class average = %f\n", average);

    // While loop as a conditional loop; using a sentinel value to control the loop
    printf("%s", "\nEnter grade, -1 to end: ");
    int grade1 = 0;
    scanf("%d", &grade1);
    total = 0;
    counter = 0;
    while (grade1 != -1)
    {
        total += grade1;
        counter++;
        printf("%s", "Enter grade, -1 to end: ");
        scanf("%d", &grade1);
    } // end while
    printf("\nThe total of grade = %d", total);
    printf("\nThe average = %f", total/(float)counter);

    // do-while loop
    int grade2 = 0;
    total = 0;
    counter = 0;
    printf("%s", "\nEnter grade, -1 to end: ");
    scanf("%d", &grade2);
    do {
        total += grade2;
        counter++;
        printf("%s", "Enter grade, -1 to end: ");
        scanf("%d", &grade2);
    }   while (grade2 != -1); // end do-while
    printf("\nThe total of grade = %d", total);
    printf("\nThe average = %f", total/(float)counter);

    // The for loop
    printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\n\n%d squared = %.1f\n", i, pow(i, 2.0));
    } // end for

    return 0;
}
