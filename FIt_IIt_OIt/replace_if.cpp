#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};

    std::replace_if(source.begin(), source.end(), [](int x) { return x % 2 == 0; }, 99);

    std::cout << "Replaced if even: ";
    for (int num : source) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}

