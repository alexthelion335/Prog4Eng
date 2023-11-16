/*
Filename: cStruct01.c
Author: Alex Kinch
Date: Nov. 16, 2023
Purpose: To display a software timer. The timing of this program is adjusted by changing the definition of DELAY.
*/

#include <stdio.h>
#include <stdlib.h>
#define DELAY 38668099

struct my_time {
    int hours;
    int minutes;
    int seconds;
};

// Function Prototypes
void display(struct my_time *);
void update(struct my_time *);
void delay(void);

int main()
{
    struct my_time systime; // Declaration of structure variable

    systime.hours = 0;      // Initialization of members
    systime.minutes = 0;
    systime.seconds = 0;

    for(;;)
    {
        update(&systime);
        display(&systime);
    }

    return 0;
}   //end main()

void update(struct my_time* t)
{
    t->seconds++;

    if (t->seconds == 60)
    {
        t->seconds = 0;
        t->minutes++;
    }   // end if

    if (t->minutes == 60)
    {
        t->minutes = 0;
        t->hours++;
    }   // end if

    if (t->hours == 24)
    {
        t->hours = 0;
    }
    delay();
}   //end update()

// The display() function
void display(struct my_time* t)
{
    printf("%02d:", t->hours);      // Formatted output with 2 digits for hours, mins, and secs with leading zeros if needed
    printf("%02d:", t->minutes);
    printf("%02d\n", t->seconds);
}   // end display()

// The delay() function
void delay()
{
    long int t;

    // Change this as needed
    for (t = 1; t<DELAY; ++t);      // For loop with no body with the purpose to just pass time
}   // end delay()
