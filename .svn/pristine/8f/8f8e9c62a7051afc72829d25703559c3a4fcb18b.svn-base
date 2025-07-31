#include "object_construction.hpp"

// Default Constructor
Dynamo::Dynamo() {
    std::cout << "Default Constructor Called: " << std::endl;
    size = 0;
    ptrArr = 0;
}

// Another Constructor
Dynamo::Dynamo(int s) {
    std::cout << "Int Constructor Called: " << std::endl;
    size = s;
    ptrArr = new int[size];
    for( int i = 0; i < size; ++i) {
        ptrArr[i] = i;
    }
}
        
// Copy Constructor
Dynamo::Dynamo(const Dynamo& copyMe) {
    std::cout << "Copy Constructor Called: " << std::endl;
    size = copyMe.size;
    ptrArr = new int[size];

    for(int i = 0; i < size; ++i)
        ptrArr[i] = copyMe.ptrArr[i];    
}
        
// Destructor
Dynamo::~Dynamo() {
    std::cout << "Destructor Called: " << std::endl;
    delete [] ptrArr;
}
        
// Operator=
Dynamo& Dynamo::operator=(Dynamo rhs) {
    std::cout << "Operator= Called: " << std::endl;
    swap(rhs);
    return *this;
}
        
// Swap
void Dynamo::swap(Dynamo& rhs) {
    int tempSize = size;
    size = rhs.size;
    rhs.size = tempSize;

    int* tempPtrArr = ptrArr;
    ptrArr = rhs.ptrArr;
    rhs.ptrArr = tempPtrArr;
}