#include <iostream>

int main() {
	double a = 0, b = 0, c = 0;
	std::cin >> a >> b >> c;

	if (a < 0 || b < 0 || c < 0) {
		std::cout << "Error! A negative number can't be a side of a triangle." << std::endl;
		return 1;
	}
	
	if (a + b <= c || a + c <= b || b + c <= a) {
		std::cout << "Error! No triangle with sides a, b and c." << std::endl;
		return 2;
	}

	if (a == b && b == c) {
		std::cout << "The triangle is equilateral." << std::endl;
	}
	else if (a == b || b == c) {
		std::cout << "The triangle is isosceles." << std::endl;
	}
	else {
		std::cout << "The triangle is irregular." << std::endl;
	}

	return 0;
}