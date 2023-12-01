#include <iostream>

int main() {
	int number = 5;

	int& referenceToNumber = number;
	std::cout << referenceToNumber << std::endl;

	int* pointerToNumber = &number;
	std::cout << pointerToNumber << std::endl;

	std::cout << *pointerToNumber << std::endl;

	int arr[3] = {1, 2, 3};
	int* arrPtr = arr;
	arrPtr++;
	std::cout << *arrPtr << std::endl;
	std::cout << *(arrPtr + 1) << std::endl;

	int matrix[2][2];
	std::cout << matrix << std::endl;
	std::cout << matrix[1] << std::endl;
	std::cout << matrix[0][0] << std::endl;

}