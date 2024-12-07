#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {1, 3, 6, 10};
    std::vector<int> result(4);
    std::adjacent_difference(vec.begin(), vec.end(), result.begin());
    for (int val : result) std::cout << val << " "; // Output: 1 2 3 4
    return 0;
}

