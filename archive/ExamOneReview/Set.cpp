#include "Set.hpp"

// Default Constructor
Set::Set() {
    for(int i = 0; i < maxSetSize; ++i)
        elements[i] = false;
}

// Some Constructor Given an Int
Set::Set(int element) : Set() {
    elements[element] = true;
}

Set::Set(int elementOne, int elementTwo) : Set() {
    elements[elementOne] = true;
    elements[elementTwo] = true;
}

Set::Set(bool elementList[maxSetSize]) {
    for(int i = 0; i < maxSetSize; ++i)
        elements[i] = elementList[i];
}

// Equality
bool Set::operator==(const Set& rhs) const {
    for(int i = 0; i < maxSetSize; ++i)
        if(elements[i] != rhs.elements[i])
            return false;
    return true;
}
        
// Add an Element
void Set::operator+(int element) {
    elements[element] = true;
}
        
// Subset, Is a Subset may be Equal
bool Set::subset(const Set& rhs) const {
    for(int i = 0; i < maxSetSize; ++i) {
        if(elements[i])
            if(elements[i] != rhs.elements[i])
                return false;
    }
    return true;
}
        
// Proper Subset, Is a Subset but Isnt Equal
bool Set::properSubset(const Set& rhs) const {
    if(subset(rhs))
        if(!(*this == rhs))
            return true;
    return false;
}

// Element of Subset
bool Set::elementOfSet(int element) const {
    return elements[element];
}

// Intersection, Elements in Common
Set Set::intersection(const Set& rhs) const {
    Set intersection;
    for(int i = 0; i < maxSetSize; ++i)
        if(elements[i] && rhs.elements[i])
            intersection.elements[i] = true;
    return intersection;
}

// Symmetric Difference, All the Elements That Arnt Shared
Set Set::symmetricDifference(const Set& rhs) const {
    Set symmetricDifference;
    for(int i = 0; i < maxSetSize; ++i) {
        if (elements[i] || rhs.elements[i])
            symmetricDifference.elements[i] = true;
        if(elements[i] && rhs.elements[i])
            symmetricDifference.elements[i] = false;    
    }
    return symmetricDifference;
}

// Union, All Elements of Two Sets
Set Set::setUnion(const Set& rhs) const {
    Set setUnion;
    for(int i = 0; i < maxSetSize; ++i)
        if (elements[i] || rhs.elements[i])
            setUnion.elements[i] = true;
    return setUnion;
}

// Difference, Excluding Elements that Appear in Other Set
Set Set::difference(const Set& rhs) const {
    Set difference;
    for(int i = 0; i < maxSetSize; ++i)
        if(rhs.elements[i])
            difference.elements[i] = false;
    return difference;
}

std::istream& operator>>(std::istream& in, Set& rhs) {
    int input;
    while(in >> input) {
        if(input < maxSetSize && input > 0)
            rhs.elements[input] = true;
        if(input == -1)
            break;
    }
    return in;
}

std::ostream& operator<<(std::ostream& out, const Set& rhs) {
    out << "{";
    for(int i = 0; i < maxSetSize; ++i)
        if(rhs.elements[i])
            out << i << ", ";
    out << "}";
    return out;
}

void runSetDemo() {
    Set setOne, setTwo;
    
    std::cout << "List numbers of Set One (0 - " << maxSetSize - 1 << "), End inputs with -1: ";
    std::cin >> setOne;
    std::cout << setOne << std::endl;
    
    std::cout << "List numbers of Set Two (0 - " << maxSetSize - 1 << "), End inputs with -1: ";
    std::cin >> setTwo;
    std::cout << setTwo << std::endl;
    
    std::cout << "-----------------------------------------------" << std::endl;
    {
    Set intersection, symmetricDifference, setUnion, difference;

    intersection = setOne.intersection(setTwo);
    symmetricDifference = setOne.symmetricDifference(setTwo);
    setUnion = setOne.setUnion(setTwo);
    difference = setOne.difference(setTwo);

    std::cout << "The intersection of your two sets: " << intersection << std::endl;
    std::cout << "The symmetric difference of your two sets: " << symmetricDifference << std::endl;
    std::cout << "The union of your two sets: " << setUnion << std::endl;
    std::cout << "The difference of your two sets: " << difference << std::endl;

    }
    std::cout << "-----------------------------------------------" << std::endl;
    {
    
    std::cout << "Is Set One a subset of Set Two?: ";
    if(setOne.subset(setTwo))
        std::cout << "Yes it is!" << std::endl;
    else
        std::cout << "No it is not." << std::endl; 
    
    std::cout << "Is Set One a proper subset of Set Two?: ";
    if(setOne.properSubset(setTwo))
        std::cout << "Yes it is!" << std::endl;
    else
        std::cout << "No it is not." << std::endl;     

    int isElement;

    std::cout << "Enter a number to see if it is in your sets: ";
    std::cin >> isElement;

    std::cout << "Is your number an element of setOne?: ";
    if(setOne.elementOfSet(isElement))
        std::cout << "Yes it is!" << std::endl;
    else
        std::cout << "No it is not." << std::endl; 
    
    std::cout << "Is your number an element of setTwo?: ";
    if(setTwo.elementOfSet(isElement))
        std::cout << "Yes it is!" << std::endl;
    else
        std::cout << "No it is not." << std::endl;

    int addElement;

    std::cout << "Enter a number to add to Set One: ";
    std::cin >> addElement;

    setOne + addElement;

    std::cout << "Your new setOne: " << setOne << std::endl;
    
    }
    std::cout << "-----------------------------------------------" << std::endl;
}