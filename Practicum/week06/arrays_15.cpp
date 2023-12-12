#include <iostream>

void readArray(int arr[], int n);

void copyArr(int source[], int destination[], int sourceLength,
             int sourceStartIndex, int destinationStartIndex);

int main() {
    const int ARR_SIZE = 50;
    const int RESULT_ARR_SIZE = 2 * ARR_SIZE;

    int firstArr[ARR_SIZE];
    int secondArr[ARR_SIZE];

    int firstArrLength = 0, secondArrLength = 0;
    std::cin >> firstArrLength;
    readArray(firstArr, firstArrLength);

    std::cin >> secondArrLength;
    readArray(secondArr, secondArrLength);

    int firstIndex = 0, secondIndex = 0, resultIndex = 0;
    int result[RESULT_ARR_SIZE];

    while (firstIndex < firstArrLength && secondIndex < secondArrLength) {
        if (firstArr[firstIndex] < secondArr[secondIndex]) {
            result[resultIndex] = firstArr[firstIndex];
            firstIndex++;
        } else {
            result[resultIndex] = secondArr[secondIndex];
            secondIndex++;
        }

        resultIndex++;
    }

    copyArr(firstArr, result, firstArrLength, firstIndex, resultIndex);
    copyArr(secondArr, result, secondArrLength, secondIndex, resultIndex);

    for (int i = 0; i < firstArrLength + secondArrLength; ++i) {
        std::cout << result[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}

void copyArr(int source[], int destination[], int sourceLength,
             int sourceStartIndex, int destinationStartIndex) {
    while (sourceStartIndex < sourceLength) {
        destination[destinationStartIndex++] = source[sourceStartIndex++];
    }
}

void readArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
}
