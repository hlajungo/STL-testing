#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 1, 2, 2, 3, 3};
    std::vector<int> result;

    std::unique_copy(source.begin(), source.end(), std::back_inserter(result));

    std::cout << "Unique copy: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}
