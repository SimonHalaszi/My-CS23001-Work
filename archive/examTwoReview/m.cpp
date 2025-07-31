#include <iostream>

void whateverOne(int* z) {
    *z = 4;
};

void whateverTwo(int &z) {
    z = 4;
};

int main() {
    {
        int x = 1;
        int y = 1;
        int* p = &y;
        whateverOne(&x);
        whateverOne(p);
    
        std::cout << x << std::endl;
        std::cout << *p << std::endl;
    }
    {
        int x = 1;
        int y = 1;
        int* p = &y;
        whateverTwo(x);
        whateverTwo(*p);

        std::cout << x << std::endl;
        std::cout << *p << std::endl;
    }
}