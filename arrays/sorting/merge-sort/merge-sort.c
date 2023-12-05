#include <zz-test.h>

void copy(
	int *destination,
	int *source,
	unsigned int length
) {
	for (unsigned int i = 0; i < length; i++) {
		destination[i] = source[i];
	}
}
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
	while (left_index <= left_length || right_index <= right_length) {
		if (left_index == left_length) {
			copy(
				&merged[merged_index],
				&right[right_index],
				right_length - right_index + 1
			);
			break;
		}
		if (right_index == right_length) {
			copy(
				&merged[merged_index],
				&left[left_index],
				left_length - left_index + 1
			);
			break;
		}

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

// -------------- TESTS --------------

int test_mergeSort_mainSuccess() {
    const unsigned int size = 6;
	int input[] = { 4, 7, 2, 5, 3, 8 };
    
    int *actual = merge_sort(input, size);
    int expected[] = { 2, 3, 4, 5, 7, 8 };
    
    return zztest_areEquals_intArray(expected, actual, size);
}

int test_mergeSort_merge_equalLength() {
    const unsigned int size = 6;
	int input1[] = { 2, 4, 6 };
	int input2[] = { 3, 5, 7 };
    
    int *actual = merge(input1, 3, input2, 3);
    int expected[] = { 2, 3, 4, 5, 6, 7 };

    return zztest_areEquals_intArray(expected, actual, size);
}
int test_mergeSort_merge_firstIsLonger() {
	int input1[] = { 2, 4, 6, 9, 10 };
	int input2[] = { 3, 5, 7 };
    
    int *actual = merge(input1, 5, input2, 3);
    int expected[] = { 2, 3, 4, 5, 6, 7, 9, 10 };
    
    return zztest_areEquals_intArray(expected, actual, 8);
}
int test_mergeSort_merge_secondIsLonger() {
	int input1[] = { 2, 4, 6 };
	int input2[] = { 3, 5, 7, 9, 10 };
    
    int *actual = merge(input1, 3, input2, 5);
    int expected[] = { 2, 3, 4, 5, 6, 7, 9, 10 };
    
    return zztest_areEquals_intArray(expected, actual, 8);
}

int test_mergeSort_copy_mainSuccess() {
	int destination[] = { 2, 4, 6, 0, 0 };
	int source[] = { 3, 5, 7, 9, 10 };
    
    copy(&destination[3], &source[2], 2);

    int expected[] = { 2, 4, 6, 7, 9 };
    
    return zztest_areEquals_intArray(expected, destination, 5);
}