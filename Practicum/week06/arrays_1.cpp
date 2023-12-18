#include <iostream>

int sumGrades(int grades[], int length);
double averageGrade(int grades[], int length);

int main() {
    const int MAX_GRADES = 50;
    int grades[MAX_GRADES];
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> grades[i];
    }

    double average = averageGrade(grades, n);
    std::cout << average << std::endl;

    return 0;
}

double averageGrade(int grades[], int length) {
    int arrSum = sumGrades(grades, length);
    return (double)arrSum / length;
}

int sumGrades(int grades[], int length) {
    int sum = 0;

    for (int i = 0; i < length; ++i) {
        sum += grades[i];
    }

    return sum;
}
