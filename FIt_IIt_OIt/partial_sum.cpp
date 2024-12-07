#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};
    std::vector<int> result(4);
    std::partial_sum(vec.begin(), vec.end(), result.begin());
    for (int val : result) std::cout << val << " "; // Output: 1 3 6 10
    return 0;
}

