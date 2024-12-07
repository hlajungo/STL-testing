#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> result(5);
    std::rotate_copy(vec.begin(), vec.begin() + 2, vec.end(), result.begin());
    for (int val : result) std::cout << val << " "; // Output: 3 4 5 1 2
    return 0;
}

