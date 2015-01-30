#include <stdio.h>
#include <stdlib.h>

/* 
 Student Name: Jeremy Feltracco
 Date: 2015-01-15

ECE 2035 Homework 1-2

This is the only file that should be modified for the C implementation
of Homework 1.

This program computes and prints the span of a set of ten integers, Set.
*/

int Set[] = {9, 17, -7, 3, -27, 25, 42, 26, 8, -60};

int main() {
  unsigned Span;

  int size = sizeof(Set) / sizeof(int);
  int min, max = Set[0];
  unsigned i = 0;
  for (i = 0; i < size; i++) {
    if (Set[i] > max)
      max = Set[i];
    else if (Set[i] < min)
      min = Set[i];
  }
  
  Span = max - min;

  printf("Span: %d\n", Span);
  
  return 0;
}
