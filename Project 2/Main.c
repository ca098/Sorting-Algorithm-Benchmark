#include <stdlib.h>
#include <stdio.h>
#include "bubbleSort.h"
#include "shellSort.h"
#include "quickSort.h"


int main() {

printf("This program compares the speed of various sorted list algorithms\n\n Enter the size of an array to compare");
scanf("%d", &s);

bubbleSort();
shellSort();
quickSort();

  return 0;
}
