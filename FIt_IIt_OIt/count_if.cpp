#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int count = std::count_if(vec.begin(), vec.end(), [](int x) { return x > 3; });
    std::cout << "Count greater than 3: " << count << '\n';
    return 0;
}
