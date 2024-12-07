#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> result(5);

    std::transform(source.begin(), source.end(), result.begin(), [](int x) { return x * x; });

    std::cout << "Squared elements: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << '\n';
    return 0;
}
