#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 2};
    bool result = std::lexicographical_compare(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
    std::cout << std::boolalpha << result << "\n"; // Output: true
    return 0;
}

