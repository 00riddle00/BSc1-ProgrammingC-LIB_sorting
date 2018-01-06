#include <stdio.h>
#include <stdlib.h>

#include "sort_helpers.h"
#include "bubble_sort_c.h"

int* bubble_sort_c(int* target, int size)
{
    int i = 0;
    int j = 0;
    int count_operations;

    for (i = 0; i < size; i++) {
        if (count_operations == 0)
            break;
        count_operations = 0;
        for (j = 0; j < size - 1; j++) {
            if (target[j] > target[j + 1]) {
                swap(&target[j], &target[j + 1]);

                count_operations++;

                count_ncomp++;
                count_assign += 3;
            }
        }
    }

    return target;
}
