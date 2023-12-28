#include <iostream>

// task 1
int* mergeSortedArrays(const int* arr1, const int* arr2, int size1, int size2, int& sizeMerged) {
	sizeMerged = size1 + size2;
	int* merged = new int[sizeMerged];
	
	int index1 = 0;
	int index2 = 0;
	int mergedIndex = 0;

	while (index1 < size1 && index2 < size2) {
		if (arr1[index1] < arr2[index2]) {
			merged[mergedIndex] = arr1[index1];
			index1++;
		}
		else {
			merged[mergedIndex] = arr2[index2];
			index2++;
		}
		mergedIndex++;
	}

	while (index1 < size1) {
		merged[mergedIndex] = arr1[index1];
		index1++;
		mergedIndex++;
	}

	while (index2 < size2) {
		merged[mergedIndex] = arr2[index2];
		index2++;
		mergedIndex++;
	}

	return merged;
}

// task 2
void resize(int*& arr, int& size) {
	size *= 2;
	int* newArr = new int[size];
	
	for (int i = 0; i < size / 2; i++) {
		newArr[i] = arr[i];
	}

	delete[] arr;
	arr = newArr;
}

void addNumberToArray(int* &arr, int number, int& currentNumbersCount, int& size) {
	if (currentNumbersCount < size) {
		arr[currentNumbersCount++] = number;
		return;
	}

	resize(arr, size);
	arr[currentNumbersCount++] = number;
}


int main() {
	/*int arr1[] = { 1, 2, 5, 6 };
	int size1 = 4;
	int arr2[] = { 3, 4, 7, 8, 12 };
	int size2 = 5;
	int sizeMerged = 0;
	int* merged = mergeSortedArrays(arr1, arr2, size1, size2, sizeMerged);
	for (int i = 0; i < sizeMerged; i++) {
		std::cout << merged[i] << std::endl;
	}
	delete[] merged;*/

	int n, m;
	std::cin >> n >> m;

	// dynamic matrix allocation
	// add functions for creation and deletion
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		std::cin >> m;
		matrix[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}