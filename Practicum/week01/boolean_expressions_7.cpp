#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int discriminant = b * b - 4 * a * c;
    bool result = (discriminant > 0);

    std::cout << result << std::endl;

    return 0;
}
