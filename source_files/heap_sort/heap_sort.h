#ifndef HEAP_SORT
#define HEAP_SORT

#include <stdio.h>

extern struct MaxHeap
{
    int size;
    int* array;
};

// The main function to heapify a Max Heap. The function
// assumes that everything under given root (element at
// index idx) is already heapified
void maxHeapify(struct MaxHeap* maxHeap, int idx);

// A utility function to create a max heap of given capacity
struct MaxHeap* createAndBuildHeap(int *array, int size);

// The main function to sort an array of given size
int* heapSort(int* array, int size);

#endif

