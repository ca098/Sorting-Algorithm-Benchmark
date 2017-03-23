#include <stdlib.h>
#include <stdio.h>
#include "bubbleSort.h"

/*
This aglorithm is the least efficient, in such that every time you double the number of
algorithms to be sorted it increases the time factor by 4.
*/

void bubbleSort(int a[], int array_size) { // Bubble sort - 'N squared' algorithm.

int x, y, temp;
for (x = 0; x < (array_size - 1); ++x)
{
     for (y = 0; y < array_size - 1 - x; ++y )
     {
          if (a[y] > a[y+1])
          {
               temp = a[y+1];
               a[y+1] = a[y];
               a[y] = temp;
          }
     }
}
}
