#ifndef DARRAY_GEN_HPP_
#define DARRAY_GEN_HPP_

#include <cassert>
#include <iostream>

template <typename T>
class Darray {
    public:
        // Constructors
        Darray() : cap(0), ptr(0) {}
        Darray(int);

        // Destructor
        ~Darray() { delete [] ptr; }

        // Copy Constructor
        Darray(const Darray<T>&);

        void swap(Darray<T>&);
        Darray& operator=(Darray<T> rhs) { swap(rhs); return *this; }

        T operator[](int i) const {return ptr[i]; }
        T& operator[](int i) { return ptr[i]; }

        int capacity() const { return cap; }
        void resize(int);

        void print();

    private:
        T* ptr;
        int cap;
};

template <typename T>
Darray<T>::Darray(int n) {
    assert(n >= 0);
    cap = n;
    ptr = new T[cap];
}

template <typename T>
Darray<T>::Darray(const Darray<T>& copy) {
    cap = copy.cap;
    ptr = new T[cap];
    for(int i = 0; i < 0; ++i) {
        ptr[i] = copy.ptr[i];
    }
}

template <typename T>
void Darray<T>::swap(Darray<T>& other) {
    int tempCap = cap;
    cap = other.cap;
    other.cap = tempCap;

    T* tempPtr = ptr;
    ptr = other.ptr;
    other.ptr = tempPtr;
}

template <typename T>
void Darray<T>::resize(int n) {
    int smaller = cap;
    if (n < cap) {
        smaller = n;
    }

    T* temp = new T[n];
    for(int i = 0; i < smaller; ++i) {
        temp[i] = ptr[i];
    }
        
    cap = n;
    delete [] ptr;
    ptr = temp;
}

template <typename T>
void Darray<T>::print() {
    for(int i = 0; i < cap; ++i) {
        std::cout << ptr[i] << ", ";
    }
}


#endif