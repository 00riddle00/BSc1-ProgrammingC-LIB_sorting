#include <stdio.h>
#include <stdlib.h>

#include "sort_helpers.h"
#include "quicksort.h"

int* quicksort(int* target, int start, int end)
{
    int last = --end;
    int pivot, j, i;

    if (start < last) {
        pivot = start;
        i = start;
        j = last;

        count_assign += 3;

        while (i < j) {
            while (target[i] <= target[pivot] && i < last) {
                i++;

                count_ncomp += 2;
            }
            while (target[j] > target[pivot]) {
                j--;

                count_ncomp++;
            }
            if (i < j) {
                swap(&target[i], &target[j]);

                count_assign += 3;
            }
        }

        swap(&target[pivot], &target[j]);

        quicksort(target, start, j);
        quicksort(target, j + 1, last + 1);

        count_assign += 3;
    }
    return target;
}

