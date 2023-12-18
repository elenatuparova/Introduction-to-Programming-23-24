#include <climits>
#include <iostream>

void readArray(int arr[], int n);

int main() {
    int nums[50];
    int n = 0;
    std::cin >> n;

    readArray(nums, n);

    int maxNumber = INT_MIN;
    int index = -1;

    for (int i = 0; i < n; ++i) {
        if (nums[i] > maxNumber) {
            maxNumber = nums[i];
            index = i;
        }
    }

    std::cout << "Max number is: " << maxNumber;
    std::cout << " at index: " << index << std::endl;
}

void readArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
}
