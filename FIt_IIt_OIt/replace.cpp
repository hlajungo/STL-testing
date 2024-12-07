#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 2, 4};

    std::replace(source.begin(), source.end(), 2, 99);

    std::cout << "Replaced elements: ";
    for (int num : source) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

