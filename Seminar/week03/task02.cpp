#include <iostream>

int main() {

	char symbol = 'a';

	char firstSymbol = 'a';
	std::cin >> firstSymbol;

	int counter = 1;

	do {
		std::cin >> symbol;
		if (symbol == firstSymbol) {
			counter++;
		}
	} while (symbol != '.');

	std::cout << counter << std::endl;

	return 0;
}