#include <iostream>

void initialize(bool arr[], int size, bool value) {
	for (int i = 0; i < size; i++) {
		arr[i] = value;
	}
}

void markAsNotPrime(bool sieve[], int size, int currentNum) {
	for (int k = 2; k * currentNum <= size; k++) {
		sieve[k * currentNum] = false;
	}
}

void sieveErathostenes(bool sieve[], int size) {
	for (int i = 2; i <= size; i++) {
		if (sieve[i]) {
			markAsNotPrime(sieve, size, i);
		}
	}
}

void printSolution(const bool sieve[], int size) {
	for (int i = 2; i <= size; i++) {
		if (sieve[i]) {
			std::cout << i << " ";
		}
	}
}

int main() {
	unsigned int N = 0;
	std::cin >> N;

	if (N > 1000) {
		return 1;
	}

	constexpr int SIZE = 1001;
	bool sieve[SIZE];
	initialize(sieve, N, true);
	sieveErathostenes(sieve, N);
	printSolution(sieve, N);

	return 0;
}