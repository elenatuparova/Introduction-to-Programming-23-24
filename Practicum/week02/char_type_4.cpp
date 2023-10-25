#include <iostream>

int main() {
    char input;
    std::cin >> input;

    const int distance = 'Z' - 'A';
    input = (distance - (input - 'A')) + 'A';

    std::cout << input << std::endl;

    return 0;
}
