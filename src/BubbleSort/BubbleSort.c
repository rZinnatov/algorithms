#include "BubbleSort.h"

void bubble_sort(int *input, const unsigned int size) {
	for (unsigned int j = size; j > 0; j--) {
		for (unsigned int i = 0; i < j - 1; i++) {
			if (input[i] <= input[i + 1]) continue;

			int swapTemp = input[i];
			input[i] = input[i + 1];
			input[i + 1] = swapTemp;
		}
	}
}
