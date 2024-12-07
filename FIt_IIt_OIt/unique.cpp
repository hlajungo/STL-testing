#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 1, 2, 2, 3, 3};

    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());

    std::cout << "After unique: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

