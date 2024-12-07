#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 3, 1, 4, 2};
    std::vector<int> result(3);
    std::partial_sort_copy(vec.begin(), vec.end(), result.begin(), result.end());
    for (int val : result) std::cout << val << " "; // Output: 1 2 3
    return 0;
}

