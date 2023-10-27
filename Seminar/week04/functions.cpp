#include <iostream>
#include <cmath>

// example 1
bool isPrime(unsigned int number) {
	unsigned int sqrtNum = sqrt(number);

	for (int i = 2; i <= sqrtNum; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

void printPrimeFactorsUtil(unsigned int myNumber, unsigned int factor) {
	while (myNumber % factor == 0) {
		std::cout << factor << std::endl;
		myNumber /= factor;
	}
}

void printPrimeFactors(unsigned int myNumber) {
	for (int n = myNumber; n > 1; n--) {
		if (!isPrime(n)) {
			continue;
		}
		printPrimeFactorsUtil(myNumber, n);
	}
}


// example 2
double findMax(double a, double b, double c) {
	double maxAB = a > b ? a : b;
	double max = maxAB > c ? maxAB : c;
	return max;
}

// task 1
void printFibbonaci(unsigned int n) {
	if (n < 1) {
		std::cout << "invalid";
		return;
	}
	if (n == 1) {
		std::cout << 0;
		return;
	}
	if (n == 2) {
		std::cout << 0;
		std::cout << 1;
		return;
	}

	int previous = 0;
	int current = 1;

	std::cout << previous << std::endl << current << std::endl;
	
	int next;
	for (int i = 0; i < n - 2; i++) {
		next = current + previous;
		previous = current;
		current = next;
		std::cout << next << std::endl;
	}
}

// task 5
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

// task 6
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

bool isSuffix1(unsigned n, unsigned k) {
	if (n < k) {
		return false;
	}

	unsigned int diff = n - k;
	int digitCountK = countDigits(k);

	if (diff % power(10, digitCountK) == 0) {
		return true;
	}
	return false;
}

bool isSuffix2(unsigned int n, unsigned int k) {
	if (n < k) {
		return false;
	}

	int lastDigitN = 0;
	int lastDigitK = 0;

	while (k != 0) {
		lastDigitN = n % 10;
		lastDigitK = k % 10;

		if (lastDigitN != lastDigitK) {
			return 0;
		}

		k /= 10;
		n /= 10;
	}
	return true;
}

int main() {
	unsigned int myNumber = 0;
	std::cin >> myNumber;
	
	printFibbonaci(myNumber);

	std::cout << power(3, 2);

	return 0;
}