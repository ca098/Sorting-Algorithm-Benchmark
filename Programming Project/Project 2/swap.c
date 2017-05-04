#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"

/* Stored here is the swap needed for bubbleSort and quicksort.  */
void swap(int *x,int *y)
{
    int store;
    store = *x;
    *x = *y;
    *y = store;
}
/* Also the display void used in printing out the ordered and unordered list.  */
void display(int list[],const int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d\t",list[i]);

}

// void gnuplot(Node *head){
//   FILE *fp = fopen("quick.out", "w");
//   display(fp,head);
//   fclose(fp);
//   return;
// }
