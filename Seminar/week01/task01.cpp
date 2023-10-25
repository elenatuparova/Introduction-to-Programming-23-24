#include <iostream>

int main() {
	int number = 0;
	std::cin >> number;

	int ratio = number / 3;
	int remainder = number % 3;

	std::cout << ratio << std::endl;
	std::cout << remainder << std::endl;

	return 0;
}