#ifndef BIGINT_HPP_
#define BIGINT_HPP_

#include <iostream>
#include <cassert>

void runBigintDemo();

const int maxBigintSize = 128;

class Bigint{
    public:
        //Constructors
        Bigint();
        Bigint(int);
        Bigint(const char[]);

        // Printing Functions
        void debugPrint(std::ostream& out) const;
        friend std::ostream& operator<<(std::ostream&, const Bigint&);

        // Equal Operator
        bool operator==(const Bigint&) const;

        // Input Operator
        friend std::istream& operator>>(std::istream&, Bigint&);

        // Addition
        Bigint operator+(const Bigint&) const;

        // Subscripts
        int operator[](int) const;
        int& operator[](int);

        // Multiplying
        Bigint timesDigit(int) const;
        Bigint timesTenToPower(int) const;
        Bigint operator*(const Bigint&) const;

        // Trailing Zeros
        int trailingZeros() const;

    private:
        int digits[maxBigintSize];
};

// Factorial
Bigint factorial(int);

#endif