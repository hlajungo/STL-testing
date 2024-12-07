#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 2, 3, 4, 5};

    auto range = std::equal_range(vec.begin(), vec.end(), 2);

    std::cout << "範圍起始: " << (range.first - vec.begin()) << "\n";
    std::cout << "範圍結束: " << (range.second - vec.begin()) << "\n";

    return 0;
}

