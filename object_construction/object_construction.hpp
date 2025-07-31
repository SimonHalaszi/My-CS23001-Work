#ifndef OBJ_CON_HPP
#define OBJ_CON_HPP

#include <iostream>

class Dynamo {
    public:
        // Default Constructor
        Dynamo();
        // Another Constructor
        Dynamo(int);
        // Copy Constructor
        Dynamo(const Dynamo&);
        
        // Destructor
        ~Dynamo();
        
        // Operator=
        Dynamo& operator=(Dynamo);
        // Swap
        void swap(Dynamo&);
    private:
        int* ptrArr;
        int size;
};

#endif