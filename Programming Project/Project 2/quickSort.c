#include <stdlib.h>
#include <stdio.h>
#include "algorithms.h"
#include "arrays.h"


int choose_pivot(int selectionOne,int selectionTwo)
{
    return((selectionOne+selectionTwo) /2);
}
/* Determining highest index value. */
void quicksort(int list[],int c,int d)
{
    int key,a,b,i;
    if(c < d)
    {
      /* Choosing the highest index value as the pivot, whilst choosing two variables to point either way.  */
        b = choose_pivot(c,d);
        swap(&list[c],&list[b]);
        key = list[c];
        i = c+1;
        a = d;
        /* When item is greater than or equal to the right instance change pivot location. */
        while(i <= a)
        {
            while((i <= d) && (list[i] <= key))
                i++;
            while((a >= c) && (list[a] > key))
                a--;
            if( i < a)
                swap(&list[i],&list[a]);
        }
        swap(&list[c],&list[a]);
/* Swaps are used to switch the way's in which it's sorting if the value is greater than on the left or less than on the right.  */
        quicksort(list,c,a-1);
        quicksort(list,a+1,d);
    }
}
