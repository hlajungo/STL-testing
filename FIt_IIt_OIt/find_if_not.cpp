#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto it = std::find_if_not(vec.begin(), vec.end(), [](int x) { return x < 4; });
    if (it != vec.end()) {
        std::cout << "First not less than 4: " << *it << '\n';
    }
    return 0;
}
