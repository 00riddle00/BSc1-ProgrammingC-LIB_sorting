#include <stdio.h>
#include <stdlib.h>

#include "sort_helpers.h"
#include "quicksort_median.h"

int* QuickSortMedian(int* a,int start,int end) {
    int q;
    count_ncomp++;
    if (end-start<2) return;
    q=MedianOfThreePartition(a,start,end);
    count_assign++;
    QuickSortMedian(a,start,q);
    QuickSortMedian(a,q,end);
    return a;
}

int MedianOfThreePartition(int a[],int p, int r) {
    int x=a[p],y=a[(r-p)/2+p],z=a[r-1],i=p-1,j=r;
    if (y>x && y<z || y>z && y<x ) x=y;
    else if (z>x && z<y || z>y && z<x ) x=z;
    while (1) {
        do  {j--;count_ncomp++;} while (a[j] > x);
        do  {i++;count_ncomp++;} while (a[i] < x);
        if  (i < j) {
            swap(&a[i],&a[j]);
            count_assign += 3;
        }
        else return j+1;
    }
}

