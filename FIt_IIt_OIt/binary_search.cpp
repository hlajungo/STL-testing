#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    if (std::binary_search(vec.begin(), vec.end(), 3)) {
        std::cout << "找到 3\n";
    } else {
        std::cout << "未找到 3\n";
    }

    return 0;
}

