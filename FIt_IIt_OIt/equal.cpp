#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};
    if (std::equal(vec1.begin(), vec1.end(), vec2.begin())) {
        std::cout << "Ranges are equal\n";
    } else {
        std::cout << "Ranges are not equal\n";
    }
    return 0;
}

