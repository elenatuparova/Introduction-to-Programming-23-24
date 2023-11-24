#include <iostream>

// task 1 - check if number is even
// using bitwise AND
bool isEvenAnd(unsigned int n) {
	return !(n & 1);
}

// using bitwise OR
bool isEvenOr(unsigned int n) {
	return (n | 1) > n;
}

// using bitwise XOR
bool isEvenXor(unsigned int n) {
	return (n ^ 1) == n + 1;
}

// task 2 - compute power of 2
unsigned int powOfTwo(unsigned int n) {
	if (n > 31) {
		return 0;
	}
	return 1 << n;
}

// task 3 - check if number is power of 2
bool isPowOfTwo(unsigned int n) {
	if (n == 0) {
		return 0;
	}
	return !(n & (n - 1));
}

// task 4
unsigned int makeBitOne(unsigned int n, int idx) {
	if (idx > 31) {
		return n;
	}
	return n | powOfTwo(idx);
}

// task 5
unsigned int makeBitZero(unsigned int n, int idx) {
	if (idx > 31) {
		return n;
	}
	unsigned int mask = powOfTwo(idx);
	mask = ~mask;
	return n & mask;
}

// task 6
unsigned int findOddElement(unsigned int arr[], int size) {
	unsigned int oddElement = 0;
	for (int i = 0; i < size; i++) {
		oddElement ^= arr[i];
	}
	return oddElement;
}


int main() {
	std::cout << makeBitZero(5, 0) << std::endl;
	std::cout << makeBitZero(5, 1) << std::endl;

	return 0;
}