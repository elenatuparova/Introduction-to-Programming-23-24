#include <iostream>
#include <cmath>

int main() {
	int myNumber = 0;
	std::cin >> myNumber;

	if (myNumber < 0) {
		std::cout << "positive number required" << std::endl;
		return 1;
	}

	int sqrtNum = sqrt(myNumber);

	bool isPrime = true;
	for (int i = 2; i <= sqrtNum; i++) {
		if (myNumber % i == 0) {
			isPrime = false;
			break;
		}
	}

	if (isPrime) {
		std::cout << "prime" << std::endl;
	}
	else {
		std::cout << "not prime" << std::endl;
	}
}