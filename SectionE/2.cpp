#include <iostream>
#include <string>

int main() {
    std::string line;
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, line);
    std::cout << "You entered: " << line << std::endl;
    return 0;
}

