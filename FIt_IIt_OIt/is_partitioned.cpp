#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {2, 4, 1, 3, 5};
    bool result = std::is_partitioned(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });
    std::cout << std::boolalpha << result << "\n"; // Output: true
    return 0;
}

