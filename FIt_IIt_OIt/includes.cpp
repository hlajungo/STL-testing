#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {2, 4};

    if (std::includes(vec1.begin(), vec1.end(), vec2.begin(), vec2.end())) {
        std::cout << "vec1 包含 vec2\n";
    } else {
        std::cout << "vec1 不包含 vec2\n";
    }

    return 0;
}

