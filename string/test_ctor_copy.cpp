/*
* Simon Halaszi
* string project
* CS23001
*/

// Testing copy constructor

#include <iostream> 
#include <cassert>
#include "string.hpp"

String passByValue(String rhs) {
    rhs += "called copy constructor";
    return rhs;
}
String passByValueSpecial(String rhs) {
    rhs += "!!@@##$$^^&&**";
    return rhs;
}

//===========================================================================
int main () {
    std::cout << "----------------------------------------------------" << std::endl;
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 1: " << std::endl;

        // Test 
        String stringOne = 'A';
        String stringTwo(stringOne);

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
        String stringTwo(stringOne);

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
        std::cout << "-     Test 3 (EMPTY): " << std::endl;

        // Test 
        String stringOne;
        String stringTwo(stringOne);

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
        std::cout << "-     Test 4 (Pass by Value): " << std::endl;

        // Test 
        String stringOne = "Hello, we ";
        String stringTwo;

        // Verify
        assert(stringOne == "Hello, we ");
        std::cout << "'Hello, we ' == 'Hello, we '" << std::endl;

        stringTwo = passByValue(stringOne);

        assert(stringTwo == "Hello, we called copy constructor");
        assert(stringOne == "Hello, we ");

        std::cout << "'Hello, we called copy constructor' == 'Hello, we called copy constructor'" << std::endl;
        std::cout << "Used function that passes by value. Calls copy constructor for this." << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 5 (Pass by Value EMPTY): " << std::endl;

        // Test 
        String stringOne;
        String stringTwo;

        // Verify
        assert(stringOne == '\0');
        std::cout << "'' == ''" << std::endl;

        stringTwo = passByValue(stringOne);

        assert(stringTwo == "called copy constructor");
        assert(stringOne == '\0');

        std::cout << "'called copy constructor' == 'called copy constructor'" << std::endl;
        std::cout << "Used function that passes by value. Calls copy constructor for this." << std::endl;
    }        
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 6 (OLD CAPACITY): " << std::endl;

        // Test 
        String stringOne = "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!";
        String stringTwo(stringOne);

        // Verify
        assert(stringOne == "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!");
        std::cout << "'stringOne' == 'stringOne'" << std::endl;

        assert(stringTwo == "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!");
        assert(stringTwo == stringOne);

        std::cout << "'stringOne' == 'stringTwo'" << std::endl;
    }  
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 7 (MAKING SURE COPY CONSTRUCTOR MAKES DIF POINTERS): " << std::endl;

        // Test 
        String stringOne = "ABCDEFGHIJKLMNOP";
        String stringTwo(stringOne);

        // Verify
        assert(stringOne == "ABCDEFGHIJKLMNOP");
        std::cout << "'ABCDEFGHIJKLMNOP' == 'ABCDEFGHIJKLMNOP'" << std::endl;

        assert(stringTwo == "ABCDEFGHIJKLMNOP");
        assert(stringTwo == stringOne);
        std::cout << "'ABCDEFGHIJKLMNOP' == 'ABCDEFGHIJKLMNOP'" << std::endl;

        stringTwo += "QRSTUVWXYZ";
        assert(stringTwo != stringOne);
        std::cout << "'ABCDEFGHIJKLMNOP' != 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 8 (SPECIAL CHARACTERS): " << std::endl;

        // Test 
        String stringOne = "ASDY&*#$@H)!@#*YF&S(@#G())";
        String stringTwo(stringOne);

        // Verify
        assert(stringOne == "ASDY&*#$@H)!@#*YF&S(@#G())");
        std::cout << "'ASDY&*#$@H)!@#*YF&S(@#G())' == 'ASDY&*#$@H)!@#*YF&S(@#G())'" << std::endl;

        assert(stringTwo == "ASDY&*#$@H)!@#*YF&S(@#G())");
        assert(stringTwo == stringOne);
        std::cout << "'ASDY&*#$@H)!@#*YF&S(@#G())' == 'ASDY&*#$@H)!@#*YF&S(@#G())'" << std::endl;

        stringTwo += "Q%#$TSDF@#$%$^F";
        assert(stringTwo != stringOne);
        std::cout << "'ASDY&*#$@H)!@#*YF&S(@#G())' != 'ASDY&*#$@H)!@#*YF&S(@#G())Q%#$TSDF@#$%$^F'" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 9 (Pass by Value SPECIAL): " << std::endl;

        // Test 
        String stringOne = "!!@@##$$^^&&**";
        String stringTwo;

        // Verify
        assert(stringOne == "!!@@##$$^^&&**");
        std::cout << "'!!@@##$$^^&&**' == '!!@@##$$^^&&**'" << std::endl;

        stringTwo = passByValueSpecial(stringOne);

        assert(stringTwo == "!!@@##$$^^&&**!!@@##$$^^&&**");
        assert(stringOne == "!!@@##$$^^&&**");

        std::cout << "'!!@@##$$^^&&**' == '!!@@##$$^^&&**'" << std::endl;
        std::cout << "Used function that passes by value. Calls copy constructor for this." << std::endl;
    }  
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 10 (Pass by Value EMPTY & SPECIAL): " << std::endl;

        // Test 
        String stringOne;
        String stringTwo;

        // Verify
        assert(stringOne == '\0');
        std::cout << "'' == ''" << std::endl;

        stringTwo = passByValueSpecial(stringOne);

        assert(stringTwo == "!!@@##$$^^&&**");
        assert(stringOne == '\0');

        std::cout << "'!!@@##$$^^&&**' == '!!@@##$$^^&&**'" << std::endl;
        std::cout << "Used function that passes by value. Calls copy constructor for this." << std::endl;
    }         

    std::cout << std::endl << "Dont testing copy constructor." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
}