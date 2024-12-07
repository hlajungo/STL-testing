#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 2, 3};
    std::vector<int> target = {2, 3};
    auto it = std::search(vec.begin(), vec.end(), target.begin(), target.end());
    if (it != vec.end()) {
        std::cout << "Found at position: " << std::distance(vec.begin(), it) << '\n';
    }
    return 0;
}

