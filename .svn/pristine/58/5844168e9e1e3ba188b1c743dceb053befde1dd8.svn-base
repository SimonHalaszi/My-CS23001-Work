/*
* Simon Halaszi
* bigint project
* CS23001
*/

// Header file for bigint project

#ifndef BIGINT_HPP_
#define BIGINT_HPP_

#include <iostream>
#include <cassert>

const int maxSize = 256;

class bigint {
public:
    bigint();
	bigint(int);
    bigint(const char[]);
    
    bool operator==(const bigint&) const;
    
    bigint operator+(const bigint&) const;

    // For Milestone 3
    bigint timesDigit(int) const;
    bigint times10(int) const;
    bigint operator*(const bigint&) const;
    
    int operator[](int) const;
    int& operator[](int);

    void debugPrint(std::ostream&) const;
    friend std::ostream& operator<<(std::ostream&, const bigint&);
    friend std::istream& operator>>(std::istream&, bigint&);

    int trailingZeros();

private:
    int bigintArr[maxSize];
};

bigint nfact(int);

#endif