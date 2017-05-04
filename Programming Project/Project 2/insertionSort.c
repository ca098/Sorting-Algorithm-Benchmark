#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "algorithms.h"


void insertionSort(int list[], int temp, int n)
{
  /* integer declaration for the two elements. */
   int j, i;

   for (i = 0; i < n; i++){
   j = i;
/* item is checked against those in the already sorted sublist. */
   while (j > 0 && list[j] < list[j-1]){
       temp = list[j];
       list[j] = list[j-1];
       list[j-1] = temp;
       j--;
       }
   }
}
