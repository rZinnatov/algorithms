#include <stdio.h>

#include "MergeSort.h"

int* merge(
	int *left,
	const unsigned int left_length,
	int *right,
	const unsigned int right_length
) {
	int merged_length = left_length + right_length;
	int *merged = (int*)malloc(merged_length * sizeof(int));

	int left_index = 0;
	int right_index = 0;
	int merged_index = 0;
	while (left_index < left_length || right_index < right_length) {
		if (left[left_index] < right[right_index]) {
			merged[merged_index] = left[left_index];
			left_index++;
		} else {
			merged[merged_index] = right[right_index];
			right_index++;
		}
		merged_index++;
	}

	return merged;
}
int* merge_sort(int *input, const unsigned int size) {
	if (size == 1) {
		return input;
	}

	int left_index = 0;
	int right_index = size / 2;

	int left_length = right_index;
	int right_length = size - left_length;

	int* left = merge_sort(&input[left_index], left_length);
	int* right = merge_sort(&input[right_index], right_length);
	return merge(left, left_length, right, right_length);
}
