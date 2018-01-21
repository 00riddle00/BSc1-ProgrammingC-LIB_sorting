#ifndef HEAP_SORT
#define HEAP_SORT

#include <stdio.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int* heapSort(int arr[], int n);
void heapify(int arr[], int n, int i);
void buildHeap(int arr[], int n);
void printArray(int* arr, int n);

#endif
