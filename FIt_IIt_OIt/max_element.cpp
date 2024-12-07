#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 3, 2, 5, 4};

    auto max_it = std::max_element(vec.begin(), vec.end());
    std::cout << "最大值: " << *max_it << "\n";
    auto min_it = std::min_element(vec.begin(), vec.end());
    std::cout << "最大值: " << *min_it << "\n";
    auto minmax_it = std::minmax_element(vec.begin(), vec.end());
    std::cout << "最大值: " << *minmax_it.first << "\n";

    return 0;
}

