#include <iostream>

int main() {
	int first = 0;
	int second = 0;

	// first way
	if (first > second) {
		std::cout << first << std::endl;
	}
	else {
		std::cout << second << std::endl;
	}

	// second way
	int max = first > second ? first : second;
	std::cout << max << std::endl;

	return 0;
}