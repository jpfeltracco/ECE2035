#include <stdio.h>
#include <stdlib.h>

/*                    Letter Histogram
Student Name: Jeremy Feltracco
Date: 2015-01-23

ECE 2035 Homework 2-1

This program computes and displays a letter usage histogram in a text file.

(This is the only file that should be modified for the C implementation
of Homework 2.)

*/

#include <stdio.h>

int main(int argc, char *argv[]) {
   FILE		*FP;
   void		LetterHistogram(FILE *);
   void		exit(int);

   if (argc != 2) {
     printf("usage: %s valuefile\n", argv[0]);
     exit(1);
   }
   FP = fopen(argv[1], "r");
   if (FP == NULL) {
      printf("%s could not be opened; check the filename\n", argv[1]);
      exit(1);
   } else {
      LetterHistogram(FP);
      fclose(FP);
      exit(0);
   }
}

/* This routine counts the frequency of letters in a text file. The final
   count is used to print a letter usage histogram. */

void LetterHistogram(FILE *FP) {

    int letters[26];

    unsigned i;
    // Initialize all vals to 0 in array
    for (i = 0; i < sizeof(letters) / sizeof(int); i++)
        letters[i] = 0;

    int ch;
    
    // Loop through array adding 1 to respective index whenever that char is found.
    while ((ch = fgetc(FP)) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) // See if it is alphabetical
        {
            if (ch >= 'a' && ch <= 'z') ch -= 'a' - 'A'; // Account for lowercases
            letters[ch - 'A']++;
        }
    }
    
    // Find the sum of the array (for calculating percentages)
    unsigned sum = 0;
    for (i = 0; i < sizeof(letters) / sizeof(int); i++)
        sum += letters[i];

    printf("Letter Occurrence Histogram\n");
    
    // Loop through printing [letter], amt, percentage
    for (i = 0; i < sizeof(letters) / sizeof(int); i++)
        printf("[%c] %5d, %4.1f%%\n", i + 'A', letters[i], 100 * (letters[i] / ((double) sum)));
     
}
