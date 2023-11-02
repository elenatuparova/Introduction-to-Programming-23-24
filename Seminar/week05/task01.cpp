#include <iostream>

int countDigits(int myNumber) {
    if (myNumber == 0) {
        return 1;
    }

    int digitCount = 0;

    while (myNumber != 0) {
        myNumber /= 10;
        digitCount++;
    }

    return digitCount;
}

long long power(unsigned int n, unsigned int k) {
    if (k == 0) {
        return 1;
    }

    long long multiply = n;
    for (int i = 1; i < k; i++) {
        multiply *= n;
    }

    return multiply;
}

int swapDigits(int number) {
	int lastDigit = number % 10;
    if (number == 0) {
        return number;
    }

    int digitCount = countDigits(number);
    int firstDigit = number / power(10, digitCount - 1);
    int middlePart = (number / 10) % power(10, digitCount - 2);

    int newNumber = lastDigit * power(10, digitCount) + middlePart * 10 + firstDigit;
    return newNumber;
}

int main() {
    int num = 0;
    std::cin >> num;

    std::cout << swapDigits(num) << std::endl;

    return 0;
}