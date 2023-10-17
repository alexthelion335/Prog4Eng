/*
Filename: cArrays02.c
Author: Alex Kinch
Date: Oct. 12, 2023
Purpose: To introduce arrays. In this example we simulate the rolling of a 6-sided die 60,000,000 times.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7    // Symbolic constant

// Note: this is an example from the book
// function main begins program execution
int main(void) {
   srand(time(NULL)); // seed random number generator, random number generator in stdlib.h

   int frequency[SIZE] = {0}; // initialize all frequency counts to 0

   // roll die 60,000,000 times
   for (int roll = 1; roll <= 60000000; ++roll) {
      size_t face = 1 + rand() % 6; // rand is 0 through 100, mod 6 guarantees 0-5
      ++frequency[face]; // replaces entire switch of Fig. 5.5
   }

   printf("%s%17s\n", "Face", "Frequency");

   // output frequency elements 1-6 in tabular format
   for (size_t face = 1; face < SIZE; ++face) {
      printf("%4zu%17d\n", face, frequency[face]);
   }

   // Display a bar chart for the frequencies (from fig 6-6 in book)
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%7zu%13d%8s", i, frequency[i], "");

      for (int j = 1; j <= (frequency[i]/1000000); ++j) { // print one bar
        printf("%c", '*');
      }

      puts(""); // end a bar with a newline
   }
}
