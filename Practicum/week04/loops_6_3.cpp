#include <iostream>

int main() {
    // 1 + 1/2 + 1/3 + 1/4 + … + 1/10

    double sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum = sum + 1.0 / i;
    }

    std::cout << sum << std::endl;

    return 0;
}
