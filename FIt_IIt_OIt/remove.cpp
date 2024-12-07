#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 2, 4};

    //vec.erase(std::remove(vec.begin(), vec.end(), 2), vec.end());
    remove(vec.begin(), vec.end(), 2);

    std::cout << "After remove: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

