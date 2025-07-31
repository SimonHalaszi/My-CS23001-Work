#ifndef DARRAY_HPP_
#define DARRAY_HPP_

#include <iostream>

class Darray {
    public:
        // Constructors
        Darray() : array(0), size(0) {}
        Darray(int);

        // Destructor
        ~Darray();

        // Copy Constructor
        Darray(const Darray&);

        // Bad way of doing it
        // Darray& operator=(const Darray&);
        
        // Operator =
        void swap(Darray&);
        Darray& operator=(Darray);

        int operator[](int) const;
        int& operator[](int);

        int capacity() const;
        void resize(int);

        friend std::ostream& operator<<(std::ostream&, const Darray&);

    private:
        int *array;
        int size;
};

void print(Darray, int);

#endif