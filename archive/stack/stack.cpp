#include "stack.hpp"

#include <iostream>

int main() {
    
    stack<int> intStack;

    std::cout << "intStack: " << std::endl << intStack; 

    intStack.push(10);

    std::cout << "intStack: " << std::endl << intStack; 

    intStack.push(20);

    std::cout << "intStack: " << std::endl << intStack; 

    intStack.pop();
    
    std::cout << "intStack: " << std::endl << intStack; 

}