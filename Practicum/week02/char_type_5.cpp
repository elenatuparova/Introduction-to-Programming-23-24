#include <iostream>

int main() {
    char a, b;
    std::cin >> a >> b;

    int aAsInt = a - '0';
    int bAsInt = b - '0';

    int result = aAsInt * bAsInt;

    std::cout << result << std::endl;

    return 0;
}
