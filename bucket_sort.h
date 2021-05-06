#include <vector>
#include <algorithm>

void bucketSort(double* arr,int n){
	std::vector<double>* b = new std::vector<double>[n];

	for (int i = 0; i < n; i++) {
		int index = n * arr[i];
		b[index].push_back(arr[i]);
	}

	for (int i = 0; i < n; i++) {
		std::sort(b[i].begin(),b[i].end());
	}
	
	int index = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b[i].size(); j++) {
			arr[index++] = b[i].at(j);
		}
	}
}