#include <iostream>

int main() {
    int m, n, k;
    std::cin >> m >> n >> k;

    if (m > n) {
        std::cout << "invalid input" << std::endl;
        return 0;
    }

    for (int i = m; i <= n; i++) {
        if (i % k == 0) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
