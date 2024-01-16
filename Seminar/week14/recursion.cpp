#include <iostream>

unsigned long long factorial(unsigned num) {
	if (num == 0) {
		return 1;
	}
	return num * factorial(num - 1);
}

unsigned fibbonaciRecursive(unsigned n) {
	if (n == 0 || n == 1) {
		return n;
	}
	return fibbonaciRecursive(n - 1) + fibbonaciRecursive(n - 2);
}

// will execute a total of k operations - O(k)
unsigned long long power(unsigned n, unsigned k) {
	if (k == 0) {
		return 1;
	}
	return n * power(n, k - 1);
}

// will execute a total of log2(k) operations - O(logk) 
unsigned long long fastPower(unsigned n, unsigned k) {
	if (k == 0) {
		return 1;
	}

	if (k % 2 != 0) {
		return n * fastPower(n, k - 1);
	}
	else {
		/*unsigned long long temp = fastPower(n, k / 2);
		return temp * temp;*/

		return fastPower(n * n, k / 2);
	}
}

unsigned linearSearchRecursive(const int* arr, unsigned size, int x) {
	if (size == 0) {
		return -1;
	}
	if (arr[size - 1] == x) {
		return size - 1;
	}
	return linearSearchRecursive(arr, size - 1, x);
}

unsigned binarySearchRecursive(const int* myArray, int x, unsigned left, unsigned right) {
	if (left > right) {
		return -1;
	}
	unsigned middle = left + (right - left) / 2;
	if (myArray[middle] == x) {
		return middle;
	}
	if (myArray[middle] > x) {
		return binarySearchRecursive(myArray, x, left, middle - 1);
	}
	if (myArray[middle] < x) {
		return binarySearchRecursive(myArray, x, middle + 1, right);
	}
}