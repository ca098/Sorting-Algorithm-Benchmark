#include <stdlib.h>
#include <stdio.h>
#include "bubbleSort.h"
#include "insertionSort.h"
#include "quickSort.h"


int main() {


  int sizeofArray;
  printf("This program compares the speed of various sorted list algorithms\n");
  scanf("%d", &sizeofArray);

  int minRange;
  printf("Enter a minimum range for the array:");
  scanf("%d", &minRange);

  int maxRange;
  printf("Enter a maximum range for the array:");
  scanf("%d", &maxRange);

int arrayToSort[2000];

  bubbleSort(arrayToSort, sizeofArray);
  insertionSort();
  //quickSort(arrayToSort, sizeofArray);

  return 0;
}
