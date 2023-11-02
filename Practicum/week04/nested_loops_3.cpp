#include <iostream>

#include <iomanip>

int countDigits(int num) {
    int digits = 1;

    while (num >= 10) {
        digits += 1;
        num /= 10;
    }

    return digits;
}

int main() {
    int from, to;
    std::cin >> from >> to;

    int digitsInTo = countDigits(to - 1);
    int maxDigits = countDigits((to - 1) * (to - 1));

    std::cout << "| " << std::setw(digitsInTo) << "X"
              << " |";

    for (int i = from; i < to; i++) {
        std::cout << " " << std::setw(maxDigits) << i << " |";
    }

    std::cout << std::endl;

    for (int i = from; i < to; i++) {
        std::cout << "| " << std::setw(digitsInTo) << i << " |";

        for (int j = from; j < to; j++) {
            std::cout << " " << std::setw(maxDigits) << (i * j) << " |";
        }

        std::cout << std::endl;
    }

    return 0;
}
