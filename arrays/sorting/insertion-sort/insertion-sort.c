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

// -------------- TESTS --------------

int test_insertionSort_mainSuccess() {
    const unsigned int size = 6;
	int input[] = { 4, 7, 2, 5, 3, 8 };
    
    insertion_sort(input, size);

    int expected[] = { 2, 3, 4, 5, 7, 8 };
    
    for (unsigned int i = 0; i < size; i++) {
        if (input[i] != expected[i]) {
            return 0;
        }
    }

    return 1;
}
