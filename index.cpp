#include <iostream>
#include <fstream>
#include <string>

int main() {

    //open file with input file stream
    std::ifstream inputFile("input.cpp");
    
    //check if file could be opened
    if (!inputFile.is_open()) {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }

    //declare variable for each character
    char character;

    //loop through each digit of input file and print its kind
    while (inputFile.get(character)) {

        // Process the character
        if (std::isdigit(character)) {
            std::cout << "Digit" << std::endl;
        } else if (std::isalpha(character)) {
            std::cout << "Letter"<< std::endl;
        } else if (std::isspace(character)) {
            std::cout << "Whitespace"<< std::endl;
        } else {
            std::cout << "Symbol"<< std::endl;
        }
    }
        


    //close inputFile
    inputFile.close();

    return 0;

}