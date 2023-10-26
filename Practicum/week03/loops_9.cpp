#include <iostream>

#include <climits>

int main() {
    int count;
    std::cin >> count;

    int currentMax = INT_MIN;

    for (int i = 0; i < count; i++) {
        int num;
        std::cin >> num;

        if (num > currentMax) {
            currentMax = num;
        }
    }

    std::cout << currentMax << std::endl;

    return 0;
}
