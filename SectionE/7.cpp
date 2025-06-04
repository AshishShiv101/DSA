#include <iostream>
#include <vector>

void rotateVector(std::vector<int>& vec, int k) {
    if (vec.empty() || k == 0) return;
    k = k % vec.size();
    if (k < 0) k += vec.size();
    auto reverse = [](std::vector<int>& v, int start, int end) {
        while (start < end) {
            std::swap(v[start++], v[end--]);
        }
    };
    reverse(vec, 0, vec.size() - 1);
    reverse(vec, 0, k - 1);
    reverse(vec, k, vec.size() - 1);
}
int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int k = 2;
    std::cout << "Original vector: ";
    for (int num : vec) std::cout << num << " ";
    std::cout << std::endl;
    rotateVector(vec, k);
    std::cout << "Rotated vector by " << k << ": ";
    for (int num : vec) std::cout << num << " ";
    std::cout << std::endl;
    return 0;
}
