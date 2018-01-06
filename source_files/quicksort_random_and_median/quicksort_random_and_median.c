#include <stdio.h>
#include <stdlib.h>

#include "sort_helpers.h"
#include "quicksort_random_and_median.h"

int* QuickSortRandomAndMedian(int* a,int start,int end) {
    int q;
    count_ncomp++;
    if (end-start<2) return;
    q=RandomAndMedianPartition(a,start,end);
    count_assign++;
    QuickSortRandomAndMedian(a,start,q);
    QuickSortRandomAndMedian(a,q,end);
    return a;
}

int RandomAndMedianPartition(int a[],int p, int r) {
    int t,x=a[t=((rand()%(r-p))/2)+p+(r-p)/4],y=a[t+1],z=a[t-1],i=p-1,j=r;
    if (y>x && y<z || y>z && y<x ) x=y;
    else if (z>x && z<y || z>y && z<x ) x=z;
    while (1) {
        do  {j--;count_ncomp++;} while (a[j] > x);
        do  {i++;count_ncomp++;} while (a[i] < x);
        if  (i < j)  {
            swap(&a[i],&a[j]);
            count_assign += 3;
        }
        else return j+1;
    }
}
