#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3};

    std::iter_swap(vec.begin(), vec.begin() + 2); // 交換第一個與第三個元素

    std::cout << "Vector after iter_swap: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

