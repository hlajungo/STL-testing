#include <iostream>
#include <vector>
#include <algorithm> // for is_permutation

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4};
    std::vector<int> vec2 = {4, 3, 2, 1}; // vec2 是 vec1 的排列組合

    if (std::is_permutation(vec1.begin(), vec1.end(), vec2.begin())) {
        std::cout << "vec2 是 vec1 的排列組合。\n";
    } else {
        std::cout << "vec2 不是 vec1 的排列組合。\n";
    }

    std::vector<int> vec3 = {1, 2, 2, 4}; // vec3 與 vec1 含有不同數量的 3
    if (std::is_permutation(vec1.begin(), vec1.end(), vec3.begin())) {
        std::cout << "vec3 是 vec1 的排列組合。\n";
    } else {
        std::cout << "vec3 不是 vec1 的排列組合。\n";
    }

    return 0;
}

