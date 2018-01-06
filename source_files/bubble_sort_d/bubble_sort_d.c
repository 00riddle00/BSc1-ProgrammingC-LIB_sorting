#include <stdio.h>
#include <stdlib.h>

#include "sort_helpers.h"
#include "bubble_sort_d.h"




int* bubble_sort_d(int* target, int size)
{
    int i = 0;
    int j = 0;

    int last = -1;
    int loops = size - 1;

    for (i = 0; i < size; i++) {
        if (last != -1) {
            loops = last;
        }
        last = 0;
        for (j = 0; j < loops; j++) {
            if (target[j] > target[j + 1]) {
                last = j;

                swap(&target[j], &target[j + 1]);

                count_ncomp++;
                count_assign += 3;
            }
        }
    }

    return target;
}
