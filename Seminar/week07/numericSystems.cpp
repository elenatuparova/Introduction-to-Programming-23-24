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
}

char convertNumToChar(int num) {
	// TO-DO
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
	// TO-DO
}


int main() {
	std::cout << fromBinaryToDecimal(101101) << std::endl;

	std::cout << fromDecimalToBinary(45) << std::endl;


	constexpr int SIZE = 3;
	char hexNum[SIZE] = { '5', '1', 'B' };

	std::cout << fromRandomToDecimal(hexNum, SIZE, 16);

	return 0;
}