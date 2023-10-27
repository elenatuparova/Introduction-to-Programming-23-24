#include <iostream>

const double EPSILON = 0.00001;

int main() {
    double c, f;
    std::cin >> c >> f;

    // Option 1 (`f` must be first)
    double fToC = (f - 32) * 5 / 9;

    // Option 2
    // double fToC = 5.0 / 9.0 * (f - 32);

    // Option 3
    // double fToC = (double)5 / 9 * (f - 32);

    double diff = fToC - c;
    double absDiff = (diff >= 0) ? diff : -diff;

    if (absDiff < EPSILON) {
        std::cout << "The temperatures are the same." << std::endl;
    } else {
        std::cout << "The temperatures are not the same." << std::endl;
    }

    return 0;
}
