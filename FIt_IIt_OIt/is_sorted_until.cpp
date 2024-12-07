#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 7, 5, 6};

    auto it = std::is_sorted_until(vec.begin(), vec.end());
    std::cout << "未排序的第一個元素是: " << *it <<"編號是" << distance(vec.begin(), it) << "\n";
    std::cout << "未排序的第一個元素是: " << *it <<"編號是" << it - vec.begin() << "\n";

    return 0;
}

