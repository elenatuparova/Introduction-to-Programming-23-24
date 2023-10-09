#include <iostream>

int main() {
    int a;          // This could be an `unsigned int`, too
    std::cin >> a;

    std::cout << "square: ";
    std::cout << "p=" << (4 * a) << " ";
    std::cout << "s=" << (a * a) << std::endl;

    const double PI = 3.14;

    std::cout << "circle: ";
    std::cout << "p=" << (2 * PI * a) << " ";
    std::cout << "s=" << (PI * a * a) << std::endl;

    const double SQRT_3 = 1.73;

    std::cout << "triangle: ";
    std::cout << "p=" << (3 * a) << " ";
    std::cout << "s=" << (SQRT_3 * a) << std::endl;

    return 0;
}
