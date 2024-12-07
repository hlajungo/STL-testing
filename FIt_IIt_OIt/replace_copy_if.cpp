#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> result(5);

    std::replace_copy_if(source.begin(), source.end(), result.begin(), [](int x) { return x % 2 == 0; }, 99);

    std::cout << "Replaced copy if even: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

