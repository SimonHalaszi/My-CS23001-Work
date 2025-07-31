/*
* Simon Halaszi
* string project
* CS23001
*/

// Testing less than and other relational operators

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
        String stringZ = 'Z';


        // Verify
        assert(stringA < stringB);
        std::cout << "'A' < 'B'" << std::endl;

        assert(stringB < stringC);
        std::cout << "'B' < 'C'" << std::endl;

        assert(!(stringC < stringA));
        std::cout << "!('C' < 'A')" << std::endl;

        assert(stringA < stringZ);
        assert(stringB < stringZ);
        assert(stringC < stringZ);
        std::cout << "All Strings less than 'Z'" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 2: " << std::endl;

        // Test 
        String tA = "AAA";
        String qA = "AAAA";
        String tZ = "ZZZ";
        String lcZ = "zzz";
        String tM = "MMM";
        String lcM = "mmm";

        // Verify
        assert(tA < qA);
        std::cout << "AAA < AAAA" << std::endl;
        
        assert(tA < tZ);
        std::cout << "AAA < ZZZ" << std::endl;
        
        assert(tM < tZ);
        std::cout << "MMM < ZZZ" << std::endl;

        assert(tM < lcM);
        std::cout << "MMM < mmm" << std::endl;

        assert(tZ < lcZ);
        std::cout << "ZZZ < zzz" << std::endl;

        assert(tZ < lcM);
        std::cout << "ZZZ < mmm" << std::endl;

        assert('A' < tZ);
        std::cout << "'A' < ZZZ" << std::endl;

        assert("AAA" < tZ);
        std::cout << "AAA < ZZZ" << std::endl;

        assert('A' <= tZ);
        std::cout << "'A' <= ZZZ" << std::endl;

        assert("AAA" <= tZ);
        std::cout << "AAA <= ZZZ" << std::endl;

        assert('Z' > tA);
        std::cout << "'Z' > AAA" << std::endl;

        assert("ZZZ" > tA);
        std::cout << "ZZZ > AAA" << std::endl;

        assert('Z' >= tA);
        std::cout << "'Z' >= AAA" << std::endl;

        assert("ZZZ" >= tA);
        std::cout << "ZZZ > AAA" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 3: " << std::endl;

        // Test 
        String testOne = '{';
        String testTwo = '}';

        std::cout << "testOne = " << testOne << std::endl;
        std::cout << "testTwo = " << testTwo << std::endl;

        // Verify
        assert(testOne < testTwo);
        assert(!(testOne > testTwo));
        std::cout << "testOne < testTwo" << std::endl;
        std::cout << "!(testOne > testTwo)" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 4: " << std::endl;

        // Test 
        String testOne = "CS1";
        String testTwo = "CS2";

        std::cout << "testOne = " << testOne << std::endl;
        std::cout << "testTwo = " << testTwo << std::endl;

        // Verify
        assert(testOne <= testTwo);
        assert(!(testOne > testTwo));
        std::cout << "testOne <= testTwo" << std::endl;
        std::cout << "!(testOne > testTwo)" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 5: " << std::endl;

        // Test 
        String testOne = "546457356";
        String testTwo = "12346536";

        // Verify
        assert(testOne > testTwo);
        assert(!(testOne <= testTwo));
        std::cout << "546457356 > 12346536" << std::endl;
        std::cout << "!(546457356 <= 12346536)" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 6: " << std::endl;

        // Test 
        String testOne = "*(!@(#U&%))";
        String testTwo = "&#$!&(*#^)";

        std::cout << "testOne = " << testOne << std::endl;
        std::cout << "testTwo = " << testTwo << std::endl;

        // Verify
        assert(testOne > testTwo);
        assert(!(testOne <= testTwo));
        std::cout << "testOne > testTwo" << std::endl;
        std::cout << "!(testOne <= testTwo)" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 7: " << std::endl;

        // Test 
        String testOne = "We are testing sentences!";
        String testTwo = "We are testing sentences?";

        std::cout << "testOne = " << testOne << std::endl;
        std::cout << "testTwo = " << testTwo << std::endl;

        // Verify
        assert(testOne < testTwo);
        assert(!(testOne >= testTwo));
        std::cout << "testOne < testTwo" << std::endl;
        std::cout << "!(testOne >= testTwo)" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 8: " << std::endl;

        // Test 
        String ABCD = "ABCD";
        String ABCDE = "ABCDE";

        // Verify
        assert(ABCD < ABCDE);
        assert(!(ABCD > ABCDE));
        std::cout << "ABCD < ABCDE" << std::endl;
        std::cout << "!(ABCD > ABCDE)" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 9 (EMPTY): " << std::endl;

        // Test 
        String emptyA;
        String emptyB;

        // Verify
        assert(!(emptyA < emptyB));
        assert(emptyA <= emptyB);
        std::cout << "!(Empty String < Empty String)" << std::endl;
        std::cout << "Empty String <= Empty String" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 10 (AT CAPACITY): " << std::endl;

        // Test 
        String empty;
        String fullOfAs = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
        String fullOfZs = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";

        assert(fullOfAs.length() == fullOfAs.capacity());
        assert(fullOfZs.length() == fullOfZs.capacity());

        // Verify
        assert(fullOfAs < fullOfZs);
        assert(fullOfZs > fullOfAs);
        assert(empty < fullOfAs);
        std::cout << "fullOfAs < fullOfZs" << std::endl;
        std::cout << "fullOfAs > fullOfZs" << std::endl;
    }

    std::cout << std::endl << "Done testing less than." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;

}