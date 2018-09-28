#include <stdio.h>

#include "TestMergeSort.h"

int test_mergeSort_mainSuccess() {
    const unsigned int size = 6;
	int input[] = { 4, 7, 2, 5, 3, 8 };
    
    int *actual = merge_sort(input, size);

    int expected[] = { 2, 3, 4, 5, 7, 8 };
    for (unsigned int i = 0; i < size; i++) {
        if (actual[i] != expected[i]) {
            return 0;
        }
    }

    return 1;
}