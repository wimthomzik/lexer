#include <iostream>
#include <fstream>
#include <cctype>

int main() {
    std::ifstream file("input.txt");

    if (!file) {
        std::cout << "Error opening file." << std::endl;
        return 1;
    }

    char ch;
    while (file.get(ch)) {
        // Process the character
        if (std::isdigit(ch)) {
            std::cout << "Digit: " << ch << std::endl;
        } else if (std::isalpha(ch)) {
            std::cout << "Letter: " << ch << std::endl;
        } else if (std::isspace(ch)) {
            std::cout << "Whitespace: " << ch << std::endl;
        } else {
            std::cout << "Symbol: " << ch << std::endl;
        }
    }

    file.close();

    return 0;
}