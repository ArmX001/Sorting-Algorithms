void countingSort(int* arr, int n) {
	const int range = 15; // range is 0 - 14
	int counter[range] = {0};

	for (int i = 0; i < n; i++)
		++counter[arr[i]];

	for (int i = 1; i < range; i++)
		counter[i] += counter[i - 1];

	int* output = new int[n];
	for (int i = 0; i < n ; i++) {
		output[counter[arr[i]] - 1] = arr[i];
		--counter[arr[i]];
	}

	for (int i = 0; i < n ; i++) {
		arr[i] = output[i];
	}

	delete output;
}