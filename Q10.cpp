#include <iostream>

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

int main() {
    char inputChar;

    std::cout << "Enter a character: ";
    std::cin >> inputChar;

    if (isDigit(inputChar)) {
        std::cout << inputChar << " is a digit." << std::endl;
    } else {
        std::cout << inputChar << " is not a digit." << std::endl;
    }

    return 0;
}