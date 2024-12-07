#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec(5);
    int counter = 1;

    std::generate(vec.begin(), vec.end(), [&counter]() { return counter++; });

    std::cout << "Generated elements: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

