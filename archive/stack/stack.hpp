#ifndef STACK_HPP_
#define STACK_HPP_

#include <cassert>
#include <iostream>

const int SIZE = 10;

template <typename T>
class stack{
    public:
        stack() : tos(-1) { }
        
        void push(const T& item) { ++tos; assert(!isFull()); s[tos] = item; }
        T pop() { assert(!isEmpty()); --tos; return s[tos + 1]; }
        T top() const { assert(!isEmpty()); s[tos]; }
        
        bool isEmpty() const { return tos == -1; }
        bool isFull() const { return tos == SIZE - 1; } 

    private:
        T s[SIZE];
        int tos;
};


#endif