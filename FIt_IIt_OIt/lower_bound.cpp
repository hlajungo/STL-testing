#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 2, 3, 4, 5};

    //auto lower = std::lower_bound(vec.begin(), vec.end(), 2);
    //auto upper = std::upper_bound(vec.begin(), vec.end(), 2);

    auto lower = std::lower_bound(vec.begin(), vec.end(), 3);
    auto upper = std::upper_bound(vec.begin(), vec.end(), 3);
    std::cout << "lower_bound: " << (lower - vec.begin()) << "\n";
    std::cout << "upper_bound: " << (upper - vec.begin()) << "\n";

    return 0;
}
