#include <stdio.h>
#include <stdlib.h>

#include "sort_helpers.h"
#include "insertion_sort.h"

int* insertion_sort(int* target, int size)
{
    int i = 1;
    int j;
    while (i < size) {
        j = i;
        while (j > 0 && target[j - 1] > target[j]) {
            swap(&target[j], &target[j - 1]);
            j--;

            count_ncomp++;
            count_assign += 3;
        }
        i++;
    }
    return target;
}
