#include <iostream>

constexpr int N = 5;
const int L = 4;
const int NUMBER_OF_PLAYERS = 3;
const char INITIAL_VALUE = ' ';

void initializeBoard(char board[][N]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			board[i][j] = INITIAL_VALUE;
		}
	}
}

void printBoard(const char board[][N]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			std::cout << board[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}

bool isValidSpace(const char board[][N], int x, int y) {
	return (x >= 0 && x < N && y >= 0 && y < N);
}

bool isFreeSpace(const char board[][N], int x, int y) {
	return board[x][y] == INITIAL_VALUE;
}

void inputCoordinates(char board[][N], int& x, int& y) {
	std::cout << "Input coordinates: " << std::endl;
	std::cin >> x >> y;
	while (!isValidSpace(board, x, y) || !isFreeSpace(board, x, y)) {
		std::cout << "Invalid space coordinates or occupied space, try again." << std::endl;
		std::cin >> x >> y;
	}
}

int countConsecutiveChars(const char board[][N], int x, int y, int xMove, int yMove) {
	int consecutiveChars = 0;
	char currentChar = board[x][y];

	while (isValidSpace(board, x, y)) {
		if (board[x][y] != currentChar) {
			break;
		}
		consecutiveChars++;
		x += xMove;
		y += yMove;
	}
	return consecutiveChars;
}

int countConsecutiveCharsOnLine(const char board[][N], int x, int y, int xMove, int yMove) {
	return countConsecutiveChars(board, x, y, xMove, yMove) +
		countConsecutiveChars(board, x, y, -xMove, -yMove) - 1;
}

bool isFinished(const char board[][N], int x, int y) {
	return (countConsecutiveCharsOnLine(board, x, y, 0, 1) >= L) ||
		(countConsecutiveCharsOnLine(board, x, y, 1, 0) >= L) ||
		(countConsecutiveCharsOnLine(board, x, y, 1, 1) >= L) ||
		(countConsecutiveCharsOnLine(board, x, y, 1, -1) >= L);
}

int main() {
	char board[N][N];
	initializeBoard(board);
	printBoard(board);

	int freeSpaces = N * N;
	int currentPlayer = 0;
	while (freeSpaces > 0 ) {
		int x, y;
		std::cout << "Current player: " << currentPlayer << std::endl;
		inputCoordinates(board, x, y);
		board[x][y] = 'A' + currentPlayer;
		printBoard(board);

		if (isFinished(board, x, y)) {
			std::cout << "Player " << currentPlayer << " has won!" << std::endl;
			return 0;
		}

		freeSpaces--;
		currentPlayer++;
		if (currentPlayer >= NUMBER_OF_PLAYERS)
		{
			currentPlayer = 0;
		}
	}
	std::cout << "Tie!" << std::endl;
	return 0;
}