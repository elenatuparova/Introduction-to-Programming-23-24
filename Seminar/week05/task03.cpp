#include <iostream>

int myAbs(int number) {
    return number > 0 ? number : number * (-1);
}

void findMinMax(int number, int& min, int& max) {
    number = myAbs(number);

    min = number % 10;
    max = number % 10;
    number /= 10;

    int currentDigit = 0;
    while (number != 0) {
        currentDigit = number % 10;
        if (currentDigit < min) {
            min = currentDigit;
        }
        if (currentDigit > max) {
            max = currentDigit;
        }
        number /= 10;
    }
}

int main() {
    int num = 0;
    std::cin >> num;

    int minDigit = 0;
    int maxDigit = 0;
    findMinMax(num, minDigit, maxDigit);
    std::cout << minDigit << " " << maxDigit << std::endl;

    return 0;
}