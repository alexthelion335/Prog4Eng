
/*
Filename: cMenuSwitch.c
Author: Alex Kinch
Date: Oct. 5, 2023
Purpose: To demnstrate how menus are created without a graphical interface and also the use of a switch statement.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Constants
    const double ADULTRATE = 50.0;
    const double CHILDRATE = 25.0;
    const double SENIORRATE = 37.50;

    // Variable Declarations
    int choice;     // for menu choices
    int months;     // number of months for membership
    double charges; // charges for the months

    do {
        // Diplay the menu items and get the user's choice
        puts("\nHEALTH CLUB MEMBERSHIP MENU\n");
        puts("  1. Standard Adult Club Membership");
        puts("  2. Child Membership");
        puts("  3. Senior Citizen Membership");
        puts("  4. Quit the program\n");
        printf("%s", "Enter your choice: ");
        scanf("%d", &choice);

        // Validate the menu selection
        while ((choice < 1) || (choice > 4))
        {
            puts("Please enter 1, 2, 3, or 4: ");
            scanf("%d", &choice);
        } //end while

        // Process the user's choice
        if (choice != 4)        // Validates for numbers only, doesn't know what to do with other characters, fix with default case
        {
            printf("%s", "Membership for how many months? ");
            scanf("%d", &months);

            // Compute the charges
            switch (choice)
            {
            case 1:
                charges = months * ADULTRATE;
                break;                          // In C, we need break, otherwise it goes through all cases
            case 2:
                charges = months * CHILDRATE;
                break;
            case 3:
                charges = months * SENIORRATE;
                break;
            default:
                puts("The value you entered is invalid");
                break;
            } // end switch
            // Display the total charges
            printf("The total charges are $%.2f\n\n", charges);
        } // end if

    } while (choice != 4);

    return 0;
}
