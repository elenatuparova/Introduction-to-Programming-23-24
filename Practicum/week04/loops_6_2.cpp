#include <iostream>

int main() {
    // m + (m + 1) + (m + 2) + ... + (m + n)

    int m, n;
    std::cin >> m >> n;

    int sum = 0;

    for (int i = 0; i <= n; i++) {
        sum = sum + (m + i);
    }

    std::cout << sum << std::endl;

    return 0;
}
