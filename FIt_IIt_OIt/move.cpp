#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> source = {"apple", "banana", "cherry"};
    std::vector<std::string> destination(3);

    std::move(source.begin(), source.end(), destination.begin());

    std::cout << "Moved elements: ";
    for (const auto& str : destination) {
        std::cout << str << " ";
    }
    std::cout << "\nSource after move: ";
    for (const auto& str : source) {
        std::cout << str << " "; // 原始向量的內容可能無效
    }
    std::cout << '\n';
    return 0;
}

