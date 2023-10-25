#include <iostream>

const double PI = 3.14;

int main() {
	double r = 0;
	std::cin >> r;

	double area = PI * r * r;
	std::cout << area << std::endl;

	return 0;
}