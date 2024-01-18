#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void inputMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }

        std::cout << std::endl;
    }
}

int sumDiagonal(int matrix[][MAX_COLS], int rows, int cols) {
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    return sum;
}

int sumSecondaryDiagonal(int matrix[][MAX_COLS], int rows, int cols) {
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == cols - i - 1) {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

int sumMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    return sum;
}

void transposeMatrix(int matrix[][MAX_COLS], int rows, int cols,
                     int result[][MAX_ROWS]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    std::cin >> rows >> cols;

    inputMatrix(matrix, rows, cols);

    std::cout << sumDiagonal(matrix, rows, cols) << std::endl;
    std::cout << sumSecondaryDiagonal(matrix, rows, cols) << std::endl;
    std::cout << sumMatrix(matrix, rows, cols) << std::endl;

    int transposed[MAX_COLS][MAX_ROWS];
    transposeMatrix(matrix, rows, cols, transposed);
    printMatrix(transposed, cols, rows);

    return 0;
}
