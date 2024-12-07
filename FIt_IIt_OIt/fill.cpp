#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec(5);

    std::fill(vec.begin(), vec.end(), 42);

    std::cout << "Filled elements: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

