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

int getLengthWithPointers(const char* pstr) {
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

int main() {
	//char str1[3] = { 'F', 'M' };
	//std::cout << str1 << std::endl;

	char str[] = "Hello!";
	char* pstr = str;
	while (*pstr) {
		std::cout << *pstr;
		pstr++;
	}

}