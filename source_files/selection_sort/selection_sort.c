#include <stdio.h>
#include <stdlib.h>

#include "sort_helpers.h"
#include "selection_sort.h"


int* selection_sort(int* target, int size)
{
    int i, j;
    /* target[0] to target[size-1] is the array to sort */
    for (j = 0; j < size - 1; j++) {
        /* find the min element in the unsorted target[j .. size-1] */
        /* assume the min is the first element */
        int iMin = j;
        count_assign++;
        /* test against elements after j to find the smallest */
        for (i = j + 1; i < size; i++) {
            /* if this element is less, then it is the new minimum */
            if (target[i] < target[iMin]) {
                /* found new minimum; remember its index */
                iMin = i;

                count_ncomp++;
                count_assign++;
            }
        }
        if (iMin != j) {
            swap(&target[j], &target[iMin]);

            count_assign += 3;
        }
    }
    return target;
}
