#include <iostream>

int main() {
    int a = 6;
    int b = 9;

    // Method 1
    int temp = a;
    a = b;
    b = temp;

    // Method 2 (bad practice!)
    a = a + b;
    b = a - b;
    a = a - b;

    // Method 3 (best)
    std::swap(a, b);

    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;

    return 0;
}
