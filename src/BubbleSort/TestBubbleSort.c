#include "TestBubbleSort.h"

int test_bubbleSort_mainSuccess() {
    const int size = 6;
	int input[] = { 4, 7, 2, 5, 3, 8 };
    
    bubble_sort(input, size);

    int expected[] = { 2, 3, 4, 5, 7, 8 };
    for (int i = 0; i < size; i++) {
        if (input[i] != expected[i]) {
            return 0;
        }
    }

    return 1;
}