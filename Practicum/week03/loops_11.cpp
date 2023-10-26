#include <iostream>

int main() {
    int num;
    std::cin >> num;

    int result = 0;

    while (num != 0) {
        int digit = num % 10;
        result = 10 * result + digit;
        num /= 10; // equivalent to: num = num / 10
    }

    std::cout << result << std::endl;

    return 0;
}
