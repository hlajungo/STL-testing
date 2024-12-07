#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> result;

    std::remove_copy_if(source.begin(), source.end(), std::back_inserter(result), [](int x) { return x % 2 == 0; });

    std::cout << "Removed copy if even: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

