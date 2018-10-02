#include <stdio.h>
#include <zz-test.h>

#include "TestInsertionSort.h"

int test_insertionSort_mainSuccess() {
    const unsigned int size = 6;
	int input[] = { 4, 7, 2, 5, 3, 8 };
    
    insertion_sort(input, size);

    int expected[] = { 2, 3, 4, 5, 7, 8 };
    
    return zztest_areEquals_intArray(expected, input, size);
}