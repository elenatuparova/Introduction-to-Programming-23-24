#include <iostream>

int main() {
    // Solution 1
    for (int i = 5; i <= 100; i++) {
        if (i % 5 == 0) {
            std::cout << i << std::endl;
        }
    }

    // Solution 2 (better)
    for (int i = 5; i <= 100; i += 5) {
        std::cout << i << std::endl;
    }

    return 0;
}
