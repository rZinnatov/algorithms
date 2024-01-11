void bubble_sort(int *input, const unsigned int size) {
	for (unsigned int j = size; j > 0; j--) {
		for (unsigned int i = 0; i < j - 1; i++) {
			if (input[i] <= input[i + 1]) {
                continue;
            }

			int swapTemp = input[i];
			input[i] = input[i + 1];
			input[i + 1] = swapTemp;
		}
	}
}

// -------------- TESTS --------------

int test_bubbleSort_mainSuccess() {
    const unsigned int size = 6;
	int input[] = { 4, 7, 2, 5, 3, 8 };
    
    bubble_sort(input, size);

    int expected[] = { 2, 3, 4, 5, 7, 8 };
    
    for (unsigned int i = 0; i < size; i++) {
        if (input[i] != expected[i]) {
            return 0;
        }
    }

    return 1;
}