#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination;

    std::copy_if(source.begin(), source.end(), std::back_inserter(destination), [](int x) {
        return x % 2 == 0; // 條件：只複製偶數
    });

    std::cout << "Copied even numbers: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

