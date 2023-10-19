/*
Filename: cArrays10.c
Author: Alex Kinch
Date: Oct. 19, 2023
Purpose: To demonstrate the use of a two-dimensional array
*/

#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 4

int main()
{
    // Declare a 2-D array with 3 rows and 4 columns
    float sales[ROWS][COLS];
    float totalSales = 0;

    printf("%s", "This program will calculate the total sales of all the company's divisions.\n");
    printf("%s", "Enter the following sales information: \n\n");

    // Nested loops to fill the array with quarterly sales figures for each division of the company
    for (int div = 0; div < ROWS; div++)       // Loop for the row dimension (Division)
    {
        for (int qtr = 0; qtr < COLS; qtr++)   // Loop for the column dimension (Quarter of the year)
        {
            printf("Division %d, Quarter %d: $", (div+1), (qtr+1));
            scanf("%f", &sales[div][qtr]);
        } // end inner loop
    } // end outer loop

    // Nested loops to add all the elements of the array
    for (int div = 0; div < ROWS; div++)
    {
        for (int qtr = 0; qtr < COLS; qtr++)
            totalSales += sales[div][qtr];
    }


    printf("\nThe total sales for the company are: $%.2f\n", totalSales);

    // Two 1-D arrays to store the totals of rows and columns
    float rowTotals[ROWS] = {0.0}, colTotals[COLS] = {0.0};
    // Using two nested for loops to do the row and column totals
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            rowTotals[i] += sales[i][j];
            colTotals[j] += sales[i][j];
        }
    }

    // Display the row and column totals
    printf("\nDivision totals: \n");
    for (int i = 0; i < ROWS; i++)
        printf("%10.2f  ", rowTotals[i]);
    puts("\n\n");
    printf("\nQuarter totals: \n");
    for (int j = 0; j < COLS; j++)
        printf("%10.2f  ", colTotals[j]);
    puts("\n\n");


    return 0;
}
