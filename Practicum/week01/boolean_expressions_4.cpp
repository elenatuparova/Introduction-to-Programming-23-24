#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    bool result = (a * a == b);

    std::cout << result << std::endl;

    return 0;
}
