#include <iostream>

int main() {
	int number = 0;
	std::cin >> number;

	int ones = number / 100;
	int tens = (number / 10) % 10;
	int hundreds = number % 10;

	int sumDigits = ones + tens + hundreds;
	std::cout << sumDigits << std::endl;

	return 0;
}