#include <stdio.h>
#include <stdlib.h>

#include "sort_helpers.h"
#include "bubble_sort_c_and_e.h"


int* bubble_sort_c_and_e(int* target, int size)
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
                if (target[j + 1] < target[j + 2]) {
                    count_operations++;

                    swap(&target[j], &target[j + 1]);

                    count_ncomp++;
                    count_assign += 3;
                } else {
                    swap_three(&target[j], &target[j + 1], &target[j + 2]);

                    count_operations++;

                    count_ncomp++;
                    count_assign += 4;
                }
            }
        }
    }

    return target;
}
