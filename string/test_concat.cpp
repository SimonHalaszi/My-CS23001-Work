/*
* Simon Halaszi
* string project
* CS23001
*/

// Testing concatenation

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
        String stringOne = "Woo";
        String stringTwo = "Foo";

        // Verify
        assert(stringOne == "Woo");
        std::cout << "Woo == Woo" << std::endl;

        assert(stringTwo == "Foo");
        std::cout << "Foo == Foo" << std::endl;

        stringOne += stringTwo;

        assert(stringOne == "WooFoo");
        std::cout << "WooFoo == WooFoo" << std::endl;

        assert(stringTwo == "Foo");
        std::cout << "Foo == Foo" << std::endl;

        stringTwo += stringOne;
        
        assert(stringTwo == "FooWooFoo");
        std::cout << "FooWooFoo == FooWooFoo" << std::endl;

        assert(stringOne == "WooFoo");
        std::cout << "WooFoo == WooFoo" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 2: " << std::endl;

        // Test 
        String stringOne = "Woo";

        // Verify
        assert(stringOne == "Woo");
        std::cout << "Woo == Woo" << std::endl;

        stringOne += 'f';

        assert(stringOne == "Woof");
        std::cout << "Woof == Woof" << std::endl;

        stringOne += "oot";

        assert(stringOne == "Woofoot");
        std::cout << "Woofoot == Woofoot" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 3: " << std::endl;

        // Test 
        String stringOne = "Twent";

        // Verify
        stringOne += 'y';

        assert(stringOne == "Twenty");
        std::cout << "Twenty == Twenty" << std::endl;

        stringOne += "Two";

        assert(stringOne == "TwentyTwo");
        std::cout << "TwentyTwo == TwentyTwo" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 4: " << std::endl;
        
        String stringOne = 'A';
        String stringTwo = " String";

        std::cout << stringOne << " +" << stringTwo << " = ";

        String stringThree = stringOne + stringTwo;

        assert(stringOne == 'A');
        assert(stringTwo == " String");
        assert(stringThree == "A String");

        std::cout << stringThree << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 5: " << std::endl;
        
        String stringOne = 'A';
        String stringTwo = " String";

        std::cout << stringOne << " +=" << stringTwo << " = ";

        stringOne += stringTwo;

        assert(stringOne == "A String");
        assert(stringTwo == " String");

        std::cout << stringOne << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 6: " << std::endl;
        
        String stringOne = 'A';
        String stringTwo = 'B';

        std::cout << stringOne << " + " << stringTwo << " = ";

        String stringThree = 'A' + stringTwo;

        assert(stringOne == 'A');
        assert(stringTwo == 'B');
        assert(stringThree == "AB");

        std::cout << stringThree << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 7 (WEIRD): " << std::endl;
        
        String stringOne = 'A';
        String stringTwo = 'B';

        std::cout << stringOne << " += " << stringTwo << " = ";

        stringOne += stringTwo;

        assert(stringOne == "AB");
        assert(stringTwo == 'B');

        std::cout << stringOne << std::endl;

        std::cout << stringOne << " += " << stringOne << " = ";

        stringOne += stringOne;

        assert(stringOne == "ABAB");

        std::cout << stringOne << std::endl;

        std::cout << stringOne << " + " << stringOne << " = ";

        stringOne = stringOne + stringOne;

        assert(stringOne == "ABABABAB");

        std::cout << stringOne << std::endl;

    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 8: " << std::endl;
        
        String stringOne = "Awesome";
        String stringTwo = " String!";

        std::cout << stringOne << " + " << stringTwo << " = ";

        String stringThree = stringOne + stringTwo;

        assert(stringOne == "Awesome");
        assert(stringTwo == " String!");
        assert(stringThree == "Awesome String!");

        std::cout << stringThree << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 9 (EMPTY): " << std::endl;
        
        String stringOne;
        String stringTwo;

        std::cout << stringOne << " + " << stringTwo << " = ";

        String stringThree = stringOne + stringTwo;

        std::cout << stringThree << std::endl;

        assert(stringOne == '\0');
        assert(stringTwo == '\0');
        assert(stringThree == '\0');

        std::cout << stringOne << " += " << stringTwo << " = ";

        stringOne += stringTwo;
        stringTwo += stringOne;
        stringThree += stringOne;

        assert(stringOne == '\0');
        assert(stringTwo == '\0');
        assert(stringThree == '\0');

        std::cout << stringOne << std::endl;

        String testOne = '\0' + stringOne;
        String testTwo = "" + stringOne;

        assert(testOne == '\0');
        assert(testTwo == '\0');

        String capacityString = "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!";
        stringOne += capacityString;
        stringTwo = stringThree + capacityString;
        assert(stringOne.length() == stringOne.capacity());
        assert(stringTwo.length() == stringTwo.capacity());

    }
    {
        std::cout << "-     Test 10 (AT CAPACITY): " << std::endl;

        // Its 256 characters after adding the '!'
        String capacityStringOne = "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS";

        capacityStringOne += "!";
        
        String capacityStringTwo = "ello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!";
        String capacityStringThree = "World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!";

        String hello = "Hello ";
        String testTwo = 'H' + capacityStringTwo;
        String testThree = hello + capacityStringThree;

        assert(capacityStringOne == "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!");
        assert(testTwo == "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!");
        assert(testThree == "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!");
        
        assert(capacityStringOne.length() == capacityStringOne.capacity());
        assert(testTwo.length() == testTwo.capacity());
        assert(testThree.length() == testThree.capacity());
        std::cout << capacityStringOne << std::endl;
    }

    std::cout << std::endl << "Dont testing concatenation." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
}