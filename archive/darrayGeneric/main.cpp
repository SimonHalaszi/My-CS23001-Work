#include <iostream>
#include "darrayGeneric.hpp"

int main() {
    Darray<int> x(10);

    for(int i = 0; i < x.capacity(); ++i) {
        x[i] = i;
    }
    x.print();
    std::cout << std::endl;

    Darray<char> y(12);

    for(int i = 0; i < y.capacity(); ++i) {
        y[i] = char('Z' - i);
    }
    y.print();
    std::cout << std::endl;
}