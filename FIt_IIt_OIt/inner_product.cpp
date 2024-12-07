#include <iostream>
#include <vector>
#include <numeric> // for inner_product

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    // 計算內積
    int dot_product = std::inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0);

    std::cout << "內積結果為: " << dot_product << '\n'; // 1*4 + 2*5 + 3*6 = 32

    return 0;
}

