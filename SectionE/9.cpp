#include <iostream>
#include <string>
#include <unordered_map>

char firstNonRepeating(const std::string& str) {
    std::unordered_map<char, int> char_count;
    for (char c : str) {
        char_count[c]++;
    }
    for (char c : str) {
        if (char_count[c] == 1) {
            return c;
        }
    }
    return '#';
}
int main() {
    std::string str = "aabbccde";
    char result = firstNonRepeating(str);
    if (result == '#') {
        std::cout << "No non-repeating character found" << std::endl;
    } else {
        std::cout << "First non-repeating character: " << result << std::endl;
    }
    return 0;
}

