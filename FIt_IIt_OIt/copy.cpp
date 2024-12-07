#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination(5);

    std::copy(source.begin(), source.end(), destination.begin());

    std::cout << "Copied elements: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

