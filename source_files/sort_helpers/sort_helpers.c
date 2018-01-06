#include <time.h>

#include "sort_helpers.h"

// How many comparisons are made between neighbor element
int count_ncomp;

// Assignment operation count
int count_assign;

clock_t begin;
clock_t end;

double clocks;
double time_spent;


void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_three(int* a, int* b, int* c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}


