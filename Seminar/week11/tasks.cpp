#include <iostream>

constexpr int ALPHABET_SIZE = 26;

char getMostFrequentSymbol(const char* str) {
	unsigned int frequencies[ALPHABET_SIZE];
	for (int i = 0; i < ALPHABET_SIZE; i++) {
		frequencies[i] = 0;
	}

	if (!str) {
		return '\0';
	}

	while (*str) {
		frequencies[*str - 'a']++;
		str++;
	}

	// TODO find max element in array
}


int getDigitFromChar(char ch) {
	if (ch >= '0' && ch <= '9') {
		return ch - '0';
	}
	return -1;
}

unsigned int getNumberFromChar(const char* str) {
	if (!str) {
		return 0;
	}
	unsigned int number = 0;
	while (*str) {
		int currentDigit = getDigitFromChar(*str);
		number *= 10;
		number += currentDigit;
		str++;
	}
	return number;
}

int getNumberFromCharSigned(const char* str) {
	if (!str) {
		return 0;
	}
	if (*str == '-') {
		str++;
		return getNumberFromChar(str) * (-1);
	}
	else {
		return getNumberFromChar(str);
	}
}

int getLength(const char* pstr) {
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

bool startsWith(const char* text, const char* pattern) {
	if (!text || !pattern) {
		return false;
	}

	while (*text != '\0' && *pattern != '\0') {
		if (*text != *pattern) {
			return false;
		}
		text++;
		pattern++;
	}
	return *pattern == '\0'
}

bool isSubstring(const char* text, const char* pattern) {
	if (!text || !pattern) {
		return false;
	}
	
	int textLength = getLength(text);
	int patternLength = getLength(pattern);

	while (textLength >= patternLength) {
		if (startsWith(text, pattern)) {
			return true;
		}
		text++;
		textLength--;
	}
	return false;
}

bool isAlpha(char ch) {
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
		return true;
	}
	return false;
}

unsigned int countAlphas(const char* str) {
	if (!str) {
		return 0;
	}
	unsigned int alphaCount = 0;
	while (*str) {
		if (isAlpha(*str)) {
			alphaCount++;
		}
		str++;
 	}
	return alphaCount;
}

char* getOnlyAlphaFromString(const char* str) {
	if (!str) {
		return nullptr;
	}
	unsigned int alphaCount = countAlphas(str);
	char* alphaString = new char[alphaCount + 1];
	int index = 0;
	while (*str) {
		if (isAlpha(*str)) {
			alphaString[index] = *str;
			index++;
		}
		str++;
	}
	alphaString[index] = '\0';
	return alphaString;
}

int main() {
	char myStr[] = { "Duas123k" };
	char* myStrAlpha = getOnlyAlphaFromString(myStr);
	std::cout << myStrAlpha << std::endl;
	// other manipulations
	delete[] myStrAlpha;
	return 0;
}