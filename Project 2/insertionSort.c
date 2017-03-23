#include <stdlib.h>
#include <stdio.h>
#include "insertionSort.h"

/*
Is another 'N squared' method.
*/

void insertionSort() {
  int x, array[2000], a, b, c;

  for (a = 0; a < x; a++) {
    scanf("%d", &array[a]);
  }

  for (a = 1 ; a <= x - 1; a++) {
    b = a;

    while ( b > 0 && array[b] < array[b-1]) {
      c = array[b];
      array[b] = array[b-1];
      array[b-1] = c;

      b--;
    }
  }

}
