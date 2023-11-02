#include <iostream>

#include <cmath>

int main() {
    double num = sqrt(7);

    int precision = 2;
    double exp = pow(10, precision);

    std::cout << (round(num * exp) / exp) << std::endl;

    return 0;
}
