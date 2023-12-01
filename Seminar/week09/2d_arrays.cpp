#include <iostream>

constexpr int MIN_N = 1;
constexpr int MAX_N = 20;
constexpr int MIN_M = 1;
constexpr int MAX_M = 30;
constexpr int MAX_LINEAR_SIZE = 600;

// util functions
void inputMatrix(int matrix[][MAX_M], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			std::cin >> matrix[i][j];
		}
	}
}

void printMatrix(const int matrix[][MAX_M], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

// task 1
void sumMatrixes(const int A[][MAX_M], const int B[][MAX_M], int rows, int columns, int C[][MAX_M]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

// task 3
void linearize(const int matrix[][MAX_M], int rows, int columns, int arr[]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			arr[i * columns + j] = matrix[i][j];
		}
	}
}

// task 4
void deleteColumnK(int matrix[][MAX_M], int rows, int& columns, int k) {
	if (k < 0 || k >= columns) {
		return;
	}

	for (int i = 0; i < rows; i++) {
		for (int j = k; j < columns - 1; j++) {
			matrix[i][j] = matrix[i][j + 1];
		}
	}

	columns--;
}


int main() {
	int n, m;
	std::cin >> n >> m;

	if (n < MIN_N || n > MAX_N || m < MIN_M || m > MAX_M) {
		std::cout << "Invalid matrix size";
		return 1;
	}

	int A[MAX_N][MAX_M];
	inputMatrix(A, n, m);

	int B[MAX_N][MAX_M];
	inputMatrix(B, n, m);

	int C[MAX_N][MAX_M];
	sumMatrixes(A, B, n, m, C);

	printMatrix(C, n, m);

	return 0;
}