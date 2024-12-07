#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec(5);
    std::iota(vec.begin(), vec.end(), 10);

    for (int x : vec) {
        std::cout << x << " ";
    }

    return 0;
}
