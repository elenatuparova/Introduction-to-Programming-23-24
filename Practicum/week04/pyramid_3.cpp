#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int lastNumber = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            std::cout << " ";
        }

        for (int k = 1; k <= lastNumber; k++) {
            std::cout << k;
        }

        std::cout << std::endl;

        lastNumber += 2;
    }

    return 0;
}
