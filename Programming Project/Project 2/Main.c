#include <stdlib.h>
#include <stdio.h>

#include "algorithms.h"
#include "arrays.h"

#include <sys/time.h>

int main( int argc, char **argv) {
long int arrSize;
printf("Enter the size for the array: ");
scanf("%ld", &arrSize);

/* Struct called further down for the time intervals on each algorithm. */
  struct timeval tvalBefore, tvalAfter;

  const int SIZE = arrSize; /* Sets the size of the array to a desired figure */
  int list[SIZE], listCopy[SIZE];

  int i = 0;

  /* generates random integers from 1 - 99999 */
  for(i = 0; i < SIZE; i++)
  list[i] = rand() % 99999;
  for(i = 0; i < SIZE; i++)
  listCopy[i] = list[i];
/* The listCopy makes a copy of list[i] so that each algorithm sorts the random list of numbers
   not the sorted list. */
  printf("The list BEFORE bubble-sort is:\n");
  display(list,SIZE);
  bubbleSort(list,0,SIZE);
  printf("\nThe list AFTER bubble-sort is:\n");
  display(list,SIZE);

  for(i = 0; i < SIZE; i++)
  list[i] = listCopy[i];


  printf("\nThe list BEFORE quick-sort is:\n");
  display(list,SIZE);
  quicksort(list,0,SIZE-1);
  printf("\nThe list AFTER quick-sort is:\n");
  display(list,SIZE);

  for(i = 0; i < SIZE; i++)
  list[i] = listCopy[i];
  /* This for loop resets the list for the next algorithm, and is repeated multiple times
   in the file for the same purpose. */

  printf("\nThe list BEFORE insertion-sort is:\n");
  display(list,SIZE);
  insertionSort(list,0,SIZE);

  printf("\nThe list AFTER insertion-sort is:\n");
  display(list,SIZE);

  for(i = 0; i < SIZE; i++)
  list[i] = listCopy[i];

  gettimeofday (&tvalBefore, NULL);

  quicksort(list,0,SIZE-1);
/* Utilises the <sys/time.h> library to use system time which displays the time taken in microseconds. */
  gettimeofday (&tvalAfter, NULL);
  long time_taken1 = ((tvalAfter.tv_sec - tvalBefore.tv_sec)*1000000L +tvalAfter.tv_usec) - tvalBefore.tv_usec;
  printf("\nQuickSort:       %ld microseconds", time_taken1);

  for(i = 0; i < SIZE; i++)
  list[i] = listCopy[i];

  gettimeofday (&tvalBefore, NULL);

  insertionSort(list,0,SIZE);

  gettimeofday (&tvalAfter, NULL);
  long time_taken2 = ((tvalAfter.tv_sec - tvalBefore.tv_sec)*1000000L +tvalAfter.tv_usec) - tvalBefore.tv_usec;
  printf("\nInsertionSort:   %ld microseconds", time_taken2);

  for(i = 0; i < SIZE; i++)
  list[i] = listCopy[i];

  gettimeofday (&tvalBefore, NULL);

  bubbleSort(list,0,SIZE);

  gettimeofday (&tvalAfter, NULL);
  long time_taken3 = ((tvalAfter.tv_sec - tvalBefore.tv_sec)*1000000L +tvalAfter.tv_usec) - tvalBefore.tv_usec;
  printf("\nBubbleSort:      %ld microseconds\n", time_taken3);



  return 0;

}
