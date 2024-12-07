#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 2, 2, 3};
    auto it = std::search_n(vec.begin(), vec.end(), 3, 2); // 連續出現 3 次的 2
    if (it != vec.end()) {
        std::cout << "Found at position: " << std::distance(vec.begin(), it) << '\n';
    }
    return 0;
}

