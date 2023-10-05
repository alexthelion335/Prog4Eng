/*
Filename: cStorageClass.c
Author: Alex Kinch
Date: Oct. 5, 2023
Purpose: To demonstrate the concept of storage class, i.e., scope and lifetime
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void useLocal();
void useStaticLocal();
void useGlobal();

int x = 1; // Global variable

int main()
{
    int x = 5; // Local to main()

    printf("Local x in outer scope of main() is %d\n", x);

    // A block
    {
        int x = 7; // Local to the block
        printf("Local x in inner scope of main() is %d\n", x);
    } // end block

    printf("Local x in inner scope of main() is %d\n", x);

    // Call other functions
    useLocal();         // This function has automatic local x
    useStaticLocal();   // This function has a static local x
    useGlobal();        // This fucntion uses global x
    useStaticLocal();   // Static local x retains its prior value
    useGlobal();        // Global x also retains its value
    useLocal();         // Second call to useLocal()

    printf("\nLocal x in main is %d\n", x);

    return 0;
}

void useLocal()
{
    int x = 25; // init each time useLocal() is called

    printf("\nLocal x in useLocal() is %d after entering useLocal() \n", x);
    ++x;
    printf("\nLocal x in useLocal() is %d before exiting useLocal() \n", x);
} // end useLocal()

// useStaticLocal() initializes local variable x only the first time the function is called
// value of x is saved between calls to this function
void useStaticLocal()
{
    static int x = 50;
    printf("\nLocal static x is %d on entering useStaticLocal() \n", x);
    ++x;
    printf("\nLocal static x is %d on exiting useStaticLocal() \n", x);
} // end useStaticLocal()

void useGlobal()
{
    printf("\nGlobal x is %d on entering useGlobal()\n", x);
    x *= 10;
    printf("\nGlobal x is %d on exiting useGlobal()\n", x);
}   // end useGlobal()
