#pragma once

#include <stdlib.h>

void copy(
	int *destination,
	int *source,
	unsigned int length
);
int* merge(
	int *left,
	const unsigned int left_length,
	int *right,
	const unsigned int right_length
);
int* merge_sort(int *input, const unsigned int size);