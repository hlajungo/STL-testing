#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 2, 3, 4};
    std::vector<int> result;

    std::remove_copy(source.begin(), source.end(), std::back_inserter(result), 2);

    std::cout << "Removed copy: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

