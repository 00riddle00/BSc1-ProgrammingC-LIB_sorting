#include "sort_helpers.h"
#include <stdio.h>
#include <math.h>
#include "heap_sort.h"

/* Main function to do heap sort. This function uses buildHeap()
   and heapify() */
int* heapSort(int arr[], int n)  {
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)  {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
    return arr;
} 


void heapify(int arr[], int n, int j)  {
    int i = n-1;
    while(i>j) {
        if (i%2 == 0) {
            if (arr[(i-2)/2] < MAX(arr[i], arr[i-1])) {
                if (arr[i] < arr[i-1]) swap(&arr[(i-2)/2], &arr[i-1]);
                else swap(&arr[(i-2)/2], &arr[i]);
            }
            i -= 2;
        } else {
            if (arr[(i-1)/2] < arr[i]) swap(&arr[(i-1)/2], &arr[i]);
            i -= 1;
        }
    }
}

void buildHeap(int arr[], int n)  { 
    int i = n-1;
    while(i>0) {
        if (i%2 == 0) {
            if (arr[(i-2)/2] < MAX(arr[i], arr[i-1])) {
                if (arr[i] < arr[i-1]) swap(&arr[(i-2)/2], &arr[i-1]);
                else swap(&arr[(i-2)/2], &arr[i]);
            }
            i -= 2;
        } else {
            if (arr[(i-1)/2] < arr[i]) swap(&arr[(i-1)/2], &arr[i]);
            i -= 1;
        }
    }
}
