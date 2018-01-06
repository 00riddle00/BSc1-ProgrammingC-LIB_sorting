#ifndef SORT_HELPERS
#define SORT_HELPERS

#include <time.h>

// How many comparisons are made between neighbor element
extern int count_ncomp;

// Assignment operation count
extern int count_assign;

extern clock_t begin;
extern clock_t end;

extern double clocks;
extern double time_spent;

void swap(int* a, int* b);
void swap_three(int* a, int* b, int* c);

#endif
