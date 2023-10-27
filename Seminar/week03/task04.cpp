#include <iostream>
#include <cmath>

int main() {
	int myNumber = 0;
	std::cin >> myNumber;

	if (myNumber < 0) {
		std::cout << "positive number required" << std::endl;
		return 1;
	}

	// ascending
	for (int n = 2; n <= myNumber; n++) {
		while (myNumber % n == 0) {
			std::cout << n << std::endl;
			myNumber /= n;
		}
	}

	// descending
	/*for (int n = myNumber; n > 1; n--) {
		int sqrtNum = sqrt(myNumber);

		for (int i = 2; i <= sqrtNum; i++) {
			if (myNumber % i == 0) {
				continue;
			}
		}

		while (myNumber % n == 0) {
			std::cout << n << std::endl;
			myNumber /= n;
		}
	}*/

	return 0;
}