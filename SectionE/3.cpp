#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    std::cout << "Vector elements: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
