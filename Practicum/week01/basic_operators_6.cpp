#include <iostream>

int main() {
    int num;
    std::cin >> num;

    int ones = num % 10;                // Imagine this is (num / 1) % 10
    int tens = (num / 10) % 10;
    int hundreds = (num / 100) % 10;
    int thousands = (num / 1000) % 10;

    // int original_num = 1000 * thousands + 100 * hundreds + 10 * tens + ones;
    
    int new_num = 1000 * ones + 100 * tens + 10 * hundreds + thousands;

    std::cout << new_num << std::endl;

    return 0;
}
