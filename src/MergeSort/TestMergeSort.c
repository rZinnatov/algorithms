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

int test_mergeSort_merge_equalLength() {
    const unsigned int size = 6;
	int input1[] = { 2, 4, 6 };
	int input2[] = { 3, 5, 7 };
    
    int *actual = merge(input1, 3, input2, 3);

    int expected[] = { 2, 3, 4, 5, 6, 7 };
    for (unsigned int i = 0; i < size; i++) {
        if (actual[i] != expected[i]) {
            return 0;
        }
    }

    return 1;
}
int test_mergeSort_merge_firstIsLonger() {
	int input1[] = { 2, 4, 6, 9, 10 };
	int input2[] = { 3, 5, 7 };
    
    int *actual = merge(input1, 5, input2, 3);

    int expected[] = { 2, 3, 4, 5, 6, 7, 9, 10 };
    for (unsigned int i = 0; i < 8; i++) {
        if (actual[i] != expected[i]) {
            return 0;
        }
    }

    return 1;
}
int test_mergeSort_merge_secondIsLonger() {
	int input1[] = { 2, 4, 6 };
	int input2[] = { 3, 5, 7, 9, 10 };
    
    int *actual = merge(input1, 3, input2, 5);

    int expected[] = { 2, 3, 4, 5, 6, 7, 9, 10 };
    for (unsigned int i = 0; i < 8; i++) {
        if (actual[i] != expected[i]) {
            return 0;
        }
    }

    return 1;
}

int test_mergeSort_copy_mainSuccess() {
	int destination[] = { 2, 4, 6, 0, 0 };
	int source[] = { 3, 5, 7, 9, 10 };
    
    copy(&destination[3], &source[2], 2);

    int expected[] = { 2, 4, 6, 7, 9 };
    for (unsigned int i = 0; i < 5; i++) {
        if (destination[i] != expected[i]) {
            return 0;
        }
    }

    return 1;
}