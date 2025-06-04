#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> names;
    std::string input;
    std::cout << "Enter 5 names:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Name " << i + 1 << ": ";
        std::getline(std::cin, input);
        names.push_back(input);
    }
    std::cout << "\nNames in reverse order:" << std::endl;
    for (int i = 4; i >= 0; --i) {
        std::cout << names[i] << std::endl;
    }
    return 0;
}