#include <iostream>

int main() {
    double a, eps;
    std::cin >> a >> eps;

    double curr = a;
    double next, diff, absDiff;

    do {
        next = 0.5 * (curr + a / curr);

        diff = next - curr;
        absDiff = (diff >= 0) ? diff : -diff;

        curr = next;
    } while (absDiff >= eps);

    std::cout << curr << std::endl;

    return 0;
}
