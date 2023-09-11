/*

Filename: main.c
Author: Alex Kinch
Date: Sep. 5, 2023
Purpose: To demonstrate the structure and basic elements of a C program.

*/
/* This is a multi line comment, as above. */
// This is a single line comment. It can be usded as an end of line comment.

// The following statement is a preprocessor directive.
#include <stdio.h>
#include <stdlib.h>

int main(void)  // The main() function is the entry point of the program. This is the header of main()
{   // The body of main() starts here.
    printf("Hello world!\n");   // Instuction to send a string to the console. String = anything in double quotes
    printf("This is a C programming class\n");
    printf("We are using\nthe deitel Text\nfor this course.\n");
    return 0;    // This is the end of the main() function.
}   // This is the end of the main() function
