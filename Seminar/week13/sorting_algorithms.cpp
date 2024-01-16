#include <iostream>

void swap(int& a, int& b) {
	int temp = a;
	a = b; 
	b = temp;
}


// bubble sort
void bubbleSort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		bool swapped = false;
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (!swapped) {
			return;
		}
	}
}


// selection sort
int findNextMinIndex(const int* arr, int size, int lowerBound) {
	int minIndex = lowerBound;
	for (int i = lowerBound + 1; i < size; i++) {
		if (arr[minIndex] > arr[i]) {
			minIndex = i;
		}
	}
	return minIndex;
}

void selectionSort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		int minIndex = findNextMinIndex(arr, size, i);
		if (minIndex != i) {
			swap(arr[minIndex], arr[i]);
		}
	}
}


// insertion sort
void insert(int* arr, int currentElementIndex) {
	int currentElement = arr[currentElementIndex];
	int currentIdx = currentElementIndex - 1;

	while (currentIdx >= 0 && arr[currentIdx] > currentElement) {
		arr[currentIdx + 1] = arr[currentIdx];
		currentIdx--;
	}
	arr[currentIdx] = currentElement;
}

void insertionSort(int* arr, int size) {
	for (int i = 1; i < size; i++) {
		insert(arr, i);
	}
}