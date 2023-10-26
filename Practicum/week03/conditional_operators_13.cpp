#include <iostream>

int main() {
    int day, month, year;
    std::cin >> day >> month >> year;

    day += 1;

    if (month == 12 && day > 31) {
        day = 1;
        month = 1;
        year += 1;
    } else {
        int lastDayOfMonth = 0;

        switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            lastDayOfMonth = 31;
            break;

        case 2: {
            bool isLeap =
                (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
            lastDayOfMonth = (isLeap) ? 29 : 28;
            break;
        }

        default:
            lastDayOfMonth = 30;
            break;
        }

        if (day > lastDayOfMonth) {
            day = 1;
            month += 1;
        }
    }

    std::cout << day << " " << month << " " << year << std::endl;

    return 0;
}
