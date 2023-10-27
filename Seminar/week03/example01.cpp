#include <iostream>

int main() {
	int myNumber = 0;
	std::cin >> myNumber;

	if (myNumber < 0) {
		std::cout << "invalid number" << std::endl;
		return 1;
	}

	long long factorial = 1;

	for (int i = 1; i <= myNumber; i++) {
		factorial *= i;
	}

	std::cout << factorial << std::endl;

	return 0;
}