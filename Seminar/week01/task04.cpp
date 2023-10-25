#include <iostream>

int main() {
	int number = 0;
	std::cin >> number;

	bool isEven = (number % 2) == 0; // or isEven = !(number % 2)
	std::cout << isEven << std::endl;

	return 0;
}