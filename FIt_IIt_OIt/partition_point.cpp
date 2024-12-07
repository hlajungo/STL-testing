#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {2, 4, 1, 3, 5};
    auto it = std::partition_point(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });
    std::cout << "Partition point: " << *it << "\n"; // Output: 1
    for (int val : vec) std::cout << val << " "; // Output: 2 4 1 3 5 (順序可能不同)

    return 0;
}

