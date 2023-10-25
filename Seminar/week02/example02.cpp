#include <iostream>

int main() {
	int height = 0;
	int width = 0;

	std::cin >> height >> width;

	if (height < 0 || width < 0) {
		std::cout << "invalid input" << std::endl;
		return 1;
	}

	int P = 2 * (height + width);
	int S = height * width;

	std::cout << "P = " << P << std::endl;
	std::cout << "S = " << S << std::endl;

	return 0;
}