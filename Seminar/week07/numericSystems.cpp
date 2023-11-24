#include <iostream>

unsigned int fromBinaryToDecimal(unsigned int binaryNum) {
	unsigned int decimalNumber = 0;
	unsigned int multiplier = 1;

	while (binaryNum != 0) {
		decimalNumber += (binaryNum % 10) * multiplier;
		binaryNum /= 10;
		multiplier *= 2;
	}

	return decimalNumber;
}

unsigned int fromDecimalToBinary(unsigned int decimalNumber) {
	unsigned int binaryNumber = 0;
	unsigned int multiplier = 1;

	while (decimalNumber != 0) {
		binaryNumber += (decimalNumber % 2) * multiplier;
		decimalNumber /= 2;
		multiplier *= 10;
	}

	return binaryNumber;
}

int convertCharToNum(char ch) {
	if (ch >= '0' && ch <= '9') {
		return ch - '0';
	}
	if (ch >= 'A' && ch <= 'F') {
		return ch - 'A' + 10;
	}
    return -1;
}

char convertNumToChar(int num) {
    if (num >= 0 && num <= 9) {
        return num + '0';
    }
    if (num >= 10) {
        return (num - 10) + 'A';
	}
    return 0;
}

unsigned int fromRandomToDecimal(const char kNum[], int size, int k) {
	unsigned int decimalNumber = 0;
	unsigned multiplier = 1;

	for (int i = size - 1; i >= 0; i--) {
		decimalNumber += convertCharToNum(kNum[i]) * multiplier;
		multiplier *= k;
	}

	return decimalNumber;
}

void fromDecimalToRandom(unsigned decimalNum, char kNum[], int size, int k) {
    for (int i = size - 1; i >= 0; i--) {
        int num = decimalNum % k;
        char current = getSymbolFromIndex(num);
        kNum[i] = current;
        decimalNum /= k;
    }
}

void fromRandomToRandom(const char from[], int fromSize, int k, char to[], int toSize, int n) {
    unsigned int decimalNum = fromRandomToDecimal(from, fromSize, k);
    fromDecimalToRandom(decimalNum, to, toSize, n);
}


int main() {
	std::cout << fromBinaryToDecimal(101101) << std::endl;

	std::cout << fromDecimalToBinary(45) << std::endl;


	constexpr int SIZE = 3;
	char hexNum[SIZE] = { '5', '1', 'B' };

	std::cout << fromRandomToDecimal(hexNum, SIZE, 16);

	return 0;
}