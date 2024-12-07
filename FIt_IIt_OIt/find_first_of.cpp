#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> targets = {3, 6};
    auto it = std::find_first_of(vec.begin(), vec.end(), targets.begin(), targets.end());
    if (it != vec.end()) {
        std::cout << "Found: " << *it << '\n';
    }
    return 0;
}

