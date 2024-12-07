#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::partition(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });
    for (int val : vec) std::cout << val << " "; // Output: 2 4 1 3 5 (順序可能不同)
    return 0;
}

