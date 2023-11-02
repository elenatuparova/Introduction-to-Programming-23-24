#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        std::cout << std::setw(n - i + 1);

        for (int j = i; j > 1; j--) {
            std::cout << j;
        }

        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }

        std::cout << std::endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        std::cout << std::setw(n - i + 1);

        for (int j = i; j > 1; j--) {
            std::cout << j;
        }

        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }

        std::cout << std::endl;
    }

    return 0;
}
