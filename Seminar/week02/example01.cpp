#include <iostream>

int main() {
	int number = 0;
	std::cin >> number;

	if (number % 2 == 0) {
		std::cout << "even" << std::endl;
	}
	else {
		std::cout << "odd" << std::endl;
	}

	return 0;
}