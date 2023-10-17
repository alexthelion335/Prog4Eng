// fig06_08.c from the book
// Date: Oct. 17, 2023
// Treating character arrays as strings.
#include <stdio.h>
#define SIZE 20

// function main begins program execution
int main(void) {
   char string1[SIZE] = ""; // reserves 20 characters, null string
   char string2[] = "string literal"; // reserves 15 characters, characters in string, plus string terminating character, \0

   // prompt for string from user then read it into array string1
   printf("%s", "Enter a string (no longer than 19 characters): ");
   scanf("%19s", string1); // input no more than 19 characters, reading up to first white space, space or enter

   // No need for ampersand because it is a pointer

   // output strings
   printf("string1 is: %s\nstring2 is: %s\n", string1, string2);
   puts("string1 with spaces between characters is:");

   // output characters until null character is reached
   for (size_t i = 0; i < SIZE && string1[i] != '\0'; ++i) {
      printf("%c ", string1[i]);
   }

   puts("");

    // Defining with separate characters in an array
    char string3[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("\n\n This is string 3: %s", string3);
}
