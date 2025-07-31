#include <iostream>

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int tailfib(int n, int o = 0, int p = 1) {
    if (n == 0) {
        std::cout << o + p;
        return o;
    }
    if (n == 1) {
        std::cout << o << " " << p;
        return p;
    }
    std::cout << o << " ";
    return tailfib(n - 1, p, o + p);
}

int main() {
    int num;
    
    std::cout << "Give a number: ";
    std::cin >> num;
    
    for(int i = num; i >= 0; --i)
        std::cout << fib(i) << " ";
    std::cout << std::endl;

    std::cout << "Give a number: ";
    std::cin >> num;

    tailfib(num);
    std::cout << std::endl;
}