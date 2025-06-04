#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    std::cout << "Initial size: " << vec.size() << ", capacity: " << vec.capacity() << std::endl;
    vec.push_back(1);
    std::cout << "After adding 1 element: size: " << vec.size() << ", capacity: " << vec.capacity() << std::endl;
    vec.push_back(2);
    vec.push_back(3);
    std::cout << "After adding 3 elements: size: " << vec.size() << ", capacity: " << vec.capacity() << std::endl;
    vec.reserve(10);
    std::cout << "After reserve(10): size: " << vec.size() << ", capacity: " << vec.capacity() << std::endl;
    return 0;
}
