#include <iostream>

int gcd(int a, int b) {
    if (a < b) {
        std::swap(a, b);
    }

    // Euclidean algorithm

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int lcm(int a, int b) { return a * b / gcd(a, b); }

int main() {
    std::cout << gcd(15, 7) << std::endl;
    std::cout << lcm(15, 7) << std::endl;

    return 0;
}
