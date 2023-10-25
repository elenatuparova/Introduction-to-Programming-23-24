#include <iostream>

int main() {
	int number = 0;
	std::cin >> number;

	if (number % 4 == 0 && number % 7 == 0) {
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

	return 0;
}