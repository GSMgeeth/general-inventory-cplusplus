#include <iostream>

int func(int const &x) {

    return x * x;
}

int main() {
    std::cout << "Inventory" << std::endl;

    int a = 5;

    std::cout << func(a) << std::endl;
}
