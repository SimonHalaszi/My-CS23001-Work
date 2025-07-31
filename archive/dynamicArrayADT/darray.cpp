#include "darray.hpp"
#include <cassert>

Darray::Darray(int inputCapacity) : Darray() {
    assert(inputCapacity >= 0);
    size = inputCapacity;
    array = new int[size];
    for(int i = 0; i < size; ++i)
        array[i] = 0;
}

Darray::~Darray() {
    delete [] array;
}

Darray::Darray(const Darray& copy) {    
    size = copy.size;
    array = new int[size];

    for(int i = 0; i < size; ++i)
        array[i] = copy.array[i];
}

// Bad way of doing it
// Darray& Darray::operator=(const Darray& rhs) {
//     if(array != rhs.array) {
//         delete [] array;
//
//         size = rhs.size;
//         array = new int[size];
//
//         for(int i = 0; i < size; ++i)
//             array[i] = rhs.array[i];
//     }
//     return *this;
// }

// Doesnt manipulate RHS memory because we make a copy of RHS when invoking operator=. Using copy constructor.
void Darray::swap(Darray& rhs) {
    int tempSize = size;
    size = rhs.size;
    rhs.size = tempSize;

    int* tempArray = array;
    array = rhs.array;
    rhs.array = tempArray;
}

// How you should do operator=, Using Copy Constructor
// IMPORTANT ALWAYS DO
Darray& Darray::operator=(Darray rhs) {
    swap(rhs);
    return *this;
}

int Darray::operator[](int index) const {
    assert(index >= 0);
    assert(index < size);
    return array[index];
}

int& Darray::operator[](int index) {
    assert(index >= 0);
    assert(index < size);
    return array[index];
}

int Darray::capacity() const {
    return size;
}

void Darray::resize(int newSize) {
    int *temp = new int[newSize];

    int smaller = size;
    if(smaller > newSize)
        smaller = newSize;

    for(int i = 0; i < smaller; ++i)
        temp[i] = array[i];
    
    delete [] array;
    array = temp;
    size = newSize;
}

std::ostream& operator<<(std::ostream& out, const Darray& rhs) {
    for(int i = 0; i < rhs.size; ++i)
        out << rhs.array[i] << ",";
    return out;
}

void print(Darray s, int size) {
	if(size > 0) {
		std::cout << s[size - 1];
		print(s, size - 1);
	}
}