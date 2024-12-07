#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 2, 3, 4};
    std::vector<int> result(5);

    std::replace_copy(source.begin(), source.end(), result.begin(), 2, 99);

    std::cout << "Replaced copy: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}
