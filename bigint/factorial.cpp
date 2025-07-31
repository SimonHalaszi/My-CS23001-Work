/*
* Simon Halaszi
* bigint project
* CS23001
*/

// factorial.cpp for extra credit

#include <iostream> 
#include <cassert>
#include "bigint.hpp"

int main() {
    std::cout   << "----------------------------------------------------" << std::endl;
    
    bigint hundoFactorial = nfact(100);
    std::cout << "100! == " << hundoFactorial << std::endl;
    
    assert(hundoFactorial == "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000");

    std::cout   << "----------------------------------------------------" << std::endl;

    std::cout   << "The factorial of a given integer input can be found" << std::endl
                << "by recursively calling the multiplication function in" << std::endl
                << "which every recursion is called using the previous" << std::endl
                << "input - 1. When input = 1 this is the stopping case" << std::endl
                << "as the defintion of factorial is the product of an" << std::endl
                << "integer * all the positive integers below it." << std::endl;

    std::cout   << "----------------------------------------------------" << std::endl;

    std::cout   << "The amount of trailing zeros in 100! == " << hundoFactorial.trailingZeros() << std::endl;

    assert(hundoFactorial.trailingZeros() == 24);

    std::cout   << "----------------------------------------------------" << std::endl;

    std::cout   << "This was computed using a for loop which will increment" << std::endl
                << "trailZeros until bigintArr[trailZeros] != 0; then" << std::endl
                << "trailZeros is returned. For a more mathmatical way of" << std::endl
                << "finding this number look at TrailingZerosWriteUp.txt" << std::endl 
                << "in this directory." << std::endl;

    std::cout   << "----------------------------------------------------" << std::endl;

    // More tests of Factorial
    {
        bigint fiveFactorial = nfact(5);
        bigint fourFactorial = nfact(4);
        bigint tenFactorial = nfact(10);

        assert(fiveFactorial == 120);     
        assert(fourFactorial == 24); 
        assert(tenFactorial == 3628800);

        assert(fiveFactorial.trailingZeros() == 1);     
        assert(fourFactorial.trailingZeros() == 0); 
        assert(tenFactorial.trailingZeros() == 2);
    }
}