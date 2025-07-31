#ifndef STACK_HPP_
#define STACK_HPP_

#include <cassert>
#include <iostream>

const int size = 3;

template <typename T>
class stack{
    public:
        stack() : tos(-1) {}

        T top() { assert(!isEmpty()); return s[tos]; }
        T pop() { assert(!isEmpty()); --tos; return s[tos + 1]; }
        void push(T pushing) { assert(!isFull()); ++tos; s[tos] = pushing; }

        bool isEmpty() { return tos == -1; }
        bool isFull() { return tos == size - 1; }

    private:
        T s[size];
        int tos;
};


#endif