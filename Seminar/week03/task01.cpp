#include <iostream>

int main() {
	int myNumber = 0;
	std::cin >> myNumber;

	if (myNumber == 0) {
		std::cout << 1 << std::endl;
		return 0;
	}

	int digitCount = 0;
	double digitSum = 0;

	while (myNumber != 0) {
		digitSum += myNumber % 10;
		myNumber /= 10;
		digitCount++;
	}

	double average = digitSum / digitCount;

	std::cout << average << std::endl;

	return 0;
}