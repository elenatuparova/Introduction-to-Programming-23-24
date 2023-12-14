#include <iostream>

int getLength(const char str[]) {
    int length = 0;
    int index = 0;
    while (str[index] != '\0') {
        index++;
        length++;
    }
    return length;
}

int getLengthWithPointers(const char *pstr) {
    if (pstr == nullptr) {
        return 0;
    }

    int length = 0;
    while (*pstr != '\0') {
        pstr++;
        length++;
    }
    return length;
}

int compareStrings(const char *first, const char *second) {
    if (!first || !second) {
        return -1;
    }

    while ((*first) == (*second) && (*first) && (*second)) {
        first++;
        second++;
    }
    return *first - *second;
}

int compareStrings2(const char *first, const char *second) {
    if (!first || !second) {
        return -1;
    }

    int index = 0;
    while (first[index] == second[index] && first[index] && second[index]) {
        index++;
    }
    return first[index] - second[index];
}

void copyString(const char *source, char *dest) {
    if (!source || !dest) {
        return;
    }

    while (*source) {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
}

void concatString(const char *source, char *dest) {
    if (!source || !dest) {
        return;
    }
    int destLength = getLengthWithPointers(dest);
    dest += destLength;
    copyString(source, dest);
}

int main() {
    // char str1[3] = { 'F', 'M' };
    // std::cout << str1 << std::endl;

    char str[] = "Hello!";
    char *pstr = str;
    while (*pstr) {
        std::cout << *pstr;
        pstr++;
    }
}