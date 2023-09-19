/*
Filename: cDualAlternativeIf.c
Author: Alex Kinch
Date: Sept. 19, 2023
Purpose: To demonstrate the functioning of a dual alternative if statement in C. We will also use relational operators.
*/

#include <stdio.h>
#include <stdlib.h>
// include for bool variable type
#include <stdbool.h>

int main()
{
    int testScore = 0;
    char grade;
    bool goodScore = true;

    printf("This program will output the letter grade for a numeric score.\n");
    printf("\nEnter the numeric score: ");
    scanf("%d", &testScore);

    // Determine the letter grade
    if (testScore < 60)
        grade = 'F'; // single characters get single quotes, variable type char
    else if (testScore < 70)
        grade = 'D';
    else if (testScore < 80)
        grade = 'C';
    else if (testScore < 90)
        grade = 'B';
    else if (testScore <= 100)
        grade = 'A';
    else
        goodScore = false;

    //Dual alternative if
    if (goodScore)
        printf("1-The grade is %c \n", grade);
    else
        printf("1-Invalid grade.");

    // Breaking it down
    char grade2 = grade;
    bool goodScore2 = true;
    if (testScore < 60)
        grade = 'F'; // single characters get single quotes, variable type char
    else
        if (testScore < 70) {
            grade2 = 'D'; }
        else {
            if (testScore < 80) {
                grade2 = 'C'; }
            else {
                if (testScore < 90) {
                    grade2 = 'B'; }
                else {
                    if (testScore <= 100) {
                        grade2 = 'A'; }
                    else {
                        goodScore2 = false; }
                }
            }
        }
    if (goodScore2)
        printf("2-The grade is %c \n", grade2);
    else
        printf("2-Invalid grade.");

    return 0;
}
