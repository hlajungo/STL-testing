#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {2, 3, 4};
    std::vector<int> result;

    set_difference(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::back_inserter(result));

    for (int x : result) {
        std::cout << x << " ";
    }

    return 0;
}

