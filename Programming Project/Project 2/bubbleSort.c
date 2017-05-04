  #include <stdio.h>
  #include <stdlib.h>
  #include <stdbool.h>
  #include "algorithms.h"
  #include "arrays.h"
  /*
  This aglorithm is the least efficent, in such that every time you double the number of
  algorithms to be sorted it increases the time factor by 4.
  */

  void bubbleSort(int list[], int temp, int n)
  {
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++){
      swapped = false;
      /* Swaps the incremented for loop into the empty array 'list' */
      for (j = 0; j < n-i-1; j++){
        if (list[j] > list[j+1]){
          swap(&list[j], &list[j+1]);
          swapped = true;
        }
      }

      if (swapped == false)
      /* Ends the algorithm sort once the number is in incremental order. */
      break;
    }
  }
