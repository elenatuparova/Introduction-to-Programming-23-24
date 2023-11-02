#include <iostream>

int main() {
    // 1 + 2 + 3 + 4 + ... + 100

    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum += i;
    }

    std::cout << sum << std::endl;

    return 0;
}
