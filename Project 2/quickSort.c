#include <stdlib.h>
#include <stdio.h>
#include "quickSort.h"


void quickSort(int number[25],int one,int two) {
int x, y, pivot, temp;

if(one<two){
      pivot=one;
      x=one;
      y=two;

      while(x<y){
         while(number[x]<=number[pivot]&&x<two)
            x++;
         while(number[y]>number[pivot])
            y--;
         if(x<y){
            temp=number[x];



}
