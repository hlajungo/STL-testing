#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::rotate(vec.begin(), vec.begin() + 2, vec.end());
    for (int val : vec) std::cout << val << " "; // Output: 3 4 5 1 2
    return 0;
}

