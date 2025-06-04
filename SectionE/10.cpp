#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::string reverseWords(const std::string& sentence) {
    std::vector<std::string> words;
    std::stringstream ss(sentence);
    std::string word;
    while (ss >> word) {
        words.push_back(word);
    }
    std::string result;
    for (int i = words.size() - 1; i >= 0; --i) {
        result += words[i];
        if (i > 0) result += " ";
    }
    return result;
}
int main() {
    std::string sentence = "Hello World C Plus Plus";
    std::cout << "Original sentence: " << sentence << std::endl;
    std::cout << "Reversed sentence: " << reverseWords(sentence) << std::endl;
    return 0;
}
