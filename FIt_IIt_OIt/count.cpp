#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 2, 3, 4};
    int count = std::count(vec.begin(), vec.end(), 2);
    std::cout << "Count of 2: " << count << '\n';
    return 0;
}

