/*
* Simon Halaszi
* string project
* CS23001
*/

// Testing copy constructor

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
        String stringOne = 'A';
        String stringTwo = stringOne;

        // Verify
        assert(stringOne == 'A');
        std::cout << "'A' == 'A'" << std::endl;

        assert(stringTwo == 'A');
        assert(stringTwo == stringOne);
        std::cout << "'A' == 'A'" << std::endl;
    }    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 2: " << std::endl;

        // Test 
        String stringOne = "ABCDEFGHIJKLMNOP";
        String stringTwo = stringOne;

        // Verify
        assert(stringOne == "ABCDEFGHIJKLMNOP");
        std::cout << "'ABCDEFGHIJKLMNOP' == 'ABCDEFGHIJKLMNOP'" << std::endl;

        assert(stringTwo == "ABCDEFGHIJKLMNOP");
        assert(stringTwo == stringOne);
        std::cout << "'ABCDEFGHIJKLMNOP' == 'ABCDEFGHIJKLMNOP'" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 3: " << std::endl;

        // Test 
        String stringOne = "ABCD";
        String stringTwo = "WXYZ";

        // Verify
        assert(stringOne == "ABCD");
        std::cout << "'ABCD' == 'ABCD'" << std::endl;
        assert(stringTwo == "WXYZ");
        std::cout << "'WXYZ' == 'WXYZ'" << std::endl;

        stringOne.swap(stringTwo);
        std::cout << "--SWAP--" << std::endl;

        assert(stringOne == "WXYZ");
        std::cout << "'WXYZ' == 'WXYZ'" << std::endl;
        assert(stringTwo == "ABCD");
        std::cout << "'ABCD' == 'ABCD'" << std::endl;       
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 4 (EMPTY): " << std::endl;

        // Test 
        String stringOne;
        String stringTwo = "WXYZ";

        // Verify
        assert(stringOne == '\0');
        std::cout << "'' == ''" << std::endl;
        assert(stringTwo == "WXYZ");
        std::cout << "'WXYZ' == 'WXYZ'" << std::endl;

        stringOne.swap(stringTwo);
        std::cout << "--SWAP--" << std::endl;

        assert(stringOne == "WXYZ");
        std::cout << "'WXYZ' == 'WXYZ'" << std::endl;
        assert(stringTwo == '\0');
        std::cout << "'' == ''" << std::endl;       
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 5 (EMPTY & OLD CAPACITY): " << std::endl;

        // Test 
        String stringOne;
        String stringTwo = "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!";

        // Verify
        assert(stringOne == '\0');
        std::cout << "'' == ''" << std::endl;
        assert(stringTwo == "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!");
        std::cout << "'longString' == 'longString'" << std::endl;

        stringOne.swap(stringTwo);
        std::cout << "--SWAP--" << std::endl;

        assert(stringOne == "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!");
        std::cout << "'longString' == 'longString'" << std::endl;
        assert(stringTwo == '\0');
        std::cout << "'' == ''" << std::endl;       
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 6 (EMPTY): " << std::endl;

        // Test 
        String stringOne;
        String stringTwo;

        // Verify
        assert(stringOne == '\0');
        std::cout << "'' == ''" << std::endl;
        assert(stringTwo == '\0');
        std::cout << "'' == ''" << std::endl;

        stringOne.swap(stringTwo);
        std::cout << "--SWAP--" << std::endl;

        assert(stringOne == '\0');
        std::cout << "'' == ''" << std::endl;
        assert(stringTwo == '\0');
        std::cout << "'' == ''" << std::endl;       
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 7 (OLD CAPACITY): " << std::endl;

        // Test 
        String stringOne = "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!";
        String stringTwo = stringOne;

        // Verify
        assert(stringOne == "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!");
        std::cout << "'longString' == 'longString'" << std::endl;

        assert(stringTwo == "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!");
        assert(stringTwo == stringOne);
        std::cout << "'longString' == 'longString'" << std::endl;
    }  
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 8 (EMPTY): " << std::endl;

        // Test 
        String stringOne;
        String stringTwo = stringOne;

        // Verify
        assert(stringOne == '\0');
        std::cout << "'' == ''" << std::endl;

        assert(stringTwo == '\0');
        assert(stringTwo == stringOne);
        std::cout << "'' == ''" << std::endl;
    }    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 9 (SAME): " << std::endl;

        // Test 
        String stringOne = "ABCD";

        // Verify
        assert(stringOne == "ABCD");
        std::cout << "'ABCD' == 'ABCD'" << std::endl;

        stringOne.swap(stringOne);
        std::cout << "--SWAP--" << std::endl;

        assert(stringOne == "ABCD");
        std::cout << "'ABCD' == 'ABCD'" << std::endl;       
    }

    std::cout << std::endl << "Dont testing swap and swap assign." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;

}