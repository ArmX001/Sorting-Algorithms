template <class T>
int partition(T* arr, int low, int high) {
	T pivot = arr[high];
	int i = low - 1;

	for (int j = low; j < high; ++j) {
		if (arr[j] < pivot) {
			++i;
			std::swap(arr[i], arr[j]);
		}
	}

	++i;
	std::swap(arr[i], arr[high]);
	return i;
}

template <class T>
void quickSort(T* arr, int low, int high) {
	if(low < high){
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}