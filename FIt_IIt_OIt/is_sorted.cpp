#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    if (std::is_sorted(vec.begin(), vec.end())) {
        std::cout << "序列已排序\n";
    } else {
        std::cout << "序列未排序\n";
    }

    return 0;
}

