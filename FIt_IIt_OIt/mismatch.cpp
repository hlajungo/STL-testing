#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 4};
    auto result = std::mismatch(vec1.begin(), vec1.end(), vec2.begin());
    if (result.first != vec1.end()) {
        std::cout << "Mismatch: " << *result.first << " and " << *result.second << '\n';
    }
    return 0;
}

