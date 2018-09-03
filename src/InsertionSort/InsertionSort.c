#include <stdio.h>

#include "InsertionSort.h"

void insertion_sort(int *input, const unsigned int size) {
	for (unsigned int i = 1; i < size; i++) {
		int key = input[i];
		int j = i - 1;
		while (j >= 0 && key < input[j]) {
			input[j + 1] = input[j];
			j--;
		}
		input[j + 1] = key;
	}
}
