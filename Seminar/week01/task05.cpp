#include <iostream>

int main() {
	int number = 0;
	std::cin >> number;

	bool isDividedByFourAndSeven = (number % 4) == 0 && (number % 7) == 0;

	std::cout << isDividedByFourAndSeven << std::endl;

	return 0;
}