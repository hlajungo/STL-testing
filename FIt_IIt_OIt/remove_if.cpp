#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    vec.erase(std::remove_if(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; }), vec.end());

    std::cout << "After remove if even: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

