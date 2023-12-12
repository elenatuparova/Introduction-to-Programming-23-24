#include <iostream>

void readArray(char arr[], int n);

bool isSymmetric(char arr[], int length);

int main() {
    char arr[50];
    int n = 0;
    std::cin >> n;
    readArray(arr, n);

    std::cout << isSymmetric(arr, n) << std::endl;
}

bool isSymmetric(char arr[], int length) {
    for (int i = 0; i < length / 2; ++i) {
        if (arr[i] != arr[length - i - 1]) {
            return false;
        }
    }

    return true;
}

void readArray(char arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
}
