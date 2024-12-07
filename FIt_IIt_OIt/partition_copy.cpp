#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> even(5), odd(5);
    auto it = std::partition_copy(vec.begin(), vec.end(), even.begin(), odd.begin(), [](int x) { return x % 2 == 0; });
    even.resize(it.first - even.begin());
    odd.resize(it.second - odd.begin());
    for (int val : even) std::cout << val << " "; // Output: 2 4
    std::cout << "\n";
    for (int val : odd) std::cout << val << " ";  // Output: 1 3 5
    return 0;
}

