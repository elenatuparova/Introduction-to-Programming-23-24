#include <iostream>

int main() {
    int year;
    std::cin >> year;

    bool result = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    
    std::cout << result << std::endl;

    return 0;
}
