#ifndef SET_HPP_
#define SET_HPP_

#include <iostream>
#include <cassert>

void runSetDemo();

const int maxSetSize = 8;

class Set{
    public:
        // Default Constructor
        Set();
        // Some Constructor Given Ints
        Set(int);
        Set(int,int);
        // Constructor Given Array of Bools
        Set(bool[maxSetSize]);

        // Equality
        bool operator==(const Set&) const;
        
        // Add an Element
        void operator+(int);
        
        // Subset, Is a Subset may be Equal
        bool subset(const Set&) const;
        
        // Proper Subset, Is a Subset but Isnt Equal
        bool properSubset(const Set&) const;

        // Element of Subset
        bool elementOfSet(int) const;

        // Intersection, Elements in Common
        Set intersection(const Set&) const;
        // Symmetric Difference, All the Elements That Arnt Shared
        Set symmetricDifference(const Set&) const;
        // Union, All Elements of Two Sets
        Set setUnion(const Set&) const;
        // Difference, Excluding Elements that Appear in Other Set
        Set difference(const Set&) const;

        // I/O Overloading
        friend std::istream& operator>>(std::istream&, Set&);
        friend std::ostream& operator<<(std::ostream&, const Set&);

    private:
        bool elements[maxSetSize];
};

#endif