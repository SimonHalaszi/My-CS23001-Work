/*
* Simon Halaszi
* string project
* CS23001
*/

// Testing character constructor

#include <iostream> 
#include <cassert>
#include "string.hpp"

//===========================================================================
int main () {
    std::cout << "----------------------------------------------------" << std::endl;
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 1: " << std::endl;

        // Test 
        String stringA = 'A';
        String stringB('B');
        String stringC = String('C');
        String stringEmpty = '\0';

        // Verify
        assert(stringA == 'A');
        std::cout << "'A' == 'A'" << std::endl;

        assert(stringB == 'B');
        std::cout << "'B' == 'B'" << std::endl;

        assert(stringC == 'C');
        std::cout << "'C' == 'C'" << std::endl;

        assert(stringEmpty == String());
        assert(stringEmpty == '\0');
        std::cout << "'' == ''" << std::endl;


    }

    std::cout << std::endl << "Dont testing char constructor." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;

}