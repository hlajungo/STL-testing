#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto it = std::find_if(vec.begin(), vec.end(), [](int x) { return x > 3; });
    if (it != vec.end()) {
        std::cout << "First greater than 3: " << *it << '\n';
    }
    return 0;
}

