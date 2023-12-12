#include <iostream>

void readArray(int arr[], int n);

bool isDecreasingSequence(int arr[], int length);

int main() {
    int arr[50];
    int n = 0;
    std::cin >> n;
    readArray(arr, n);

    std::cout << isDecreasingSequence(arr, n) << std::endl;

    return 0;
}

bool isDecreasingSequence(int arr[], int length) {
    for (int i = 0; i < length - 1; ++i) {
        if (arr[i] < arr[i + 1]) {
            return false;
        }
    }

    return true;
}

void readArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
}
