#include <iostream>

int main() {
	int first = 0;
	int second = 0;

	std::cin >> first >> second;

	double average = (first + second) / 2.0;

	std::cout << average << std::endl;

	return 0;
}