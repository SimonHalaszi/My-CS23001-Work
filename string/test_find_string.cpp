/*
* Simon Halaszi
* string project
* CS23001
*/

// Testing finding a string

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
        
        String searchMe = "Hello I am a big big string";
        
        String findOne = "Hello";
        String findTwo = "big";
        String findThree = "N/A";

        std::cout << "Searching string: " << '"' << searchMe << '"' << std::endl;

        int whereFound = searchMe.findstr(0, findOne);
        assert(whereFound == 0);
        std::cout << "Searching for: " << '"' << findOne << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        whereFound = searchMe.findstr(0, findTwo);
        assert(whereFound == 13);
        std::cout << "Searching for: " << '"' << findTwo << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        whereFound = searchMe.findstr(++whereFound, findTwo);
        assert(whereFound == 17);
        std::cout << "Searching for: " << '"' << findTwo << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        whereFound = searchMe.findstr(0, findThree);
        assert(whereFound == -1);
        std::cout << "Searching for: " << '"' << findThree << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        whereFound = searchMe.findch(0, '\0');
        assert(whereFound == searchMe.length());
        std::cout << "Null character found at last index" << std::endl;;           
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 2: " << std::endl;         
        
        String searchMe = "Computer Science Project Two Milestone One.";
        
        String findMeOne = "Computer";
        String findMeTwo = "Project";
        String findMeThree = "One";


        std::cout << "Searching string: " << '"' << searchMe << '"' << std::endl;

        int whereFound = searchMe.findstr(0, findMeOne);
        assert(whereFound == 0);
        std::cout << "Searching for: " << '"' << findMeOne << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;
        
        whereFound = searchMe.findstr(0, findMeTwo);
        assert(whereFound == 17);
        std::cout << "Searching for: " << '"' << findMeTwo << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        std::cout << "all good." << std::endl;
        whereFound = searchMe.findstr(0, findMeThree);
        std::cout << "all good." << std::endl;
        assert(whereFound == searchMe.length() - 4);
        std::cout << "all good." << std::endl;
        std::cout << "Searching for: " << '"' << findMeThree << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        whereFound = searchMe.findch(0, '\0');
        assert(whereFound == searchMe.length());
        std::cout << "Null character found at last index" << std::endl;            
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 3 (SPECIAL CHARACTERS): " << std::endl;         
        
        String searchMe = "!@#^(!@^#(!^@#&(!(^@&%!(^)!*@#^)12376834ASD #@ADF##GS)";
        
        String findMeOne = "(!^@#";
        String findMeTwo = "@#^)123";
        String findMeThree = "@#^(!@^#(!^@#&(!(^@&%!(^)!*@#^)1237683";


        std::cout << "Searching string: " << '"' << searchMe << '"' << std::endl;

        int whereFound = searchMe.findstr(0, findMeOne);
        assert(whereFound == 9);
        std::cout << "Searching for: " << '"' << findMeOne << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;
        
        whereFound = searchMe.findstr(0, findMeTwo);
        assert(whereFound == 28);
        std::cout << "Searching for: " << '"' << findMeTwo << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        whereFound = searchMe.findstr(0, findMeThree);
        assert(whereFound == 1);
        std::cout << "Searching for: " << '"' << findMeThree << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        whereFound = searchMe.findch(0, '\0');
        assert(whereFound == searchMe.length());
        std::cout << "Null character found at last index" << std::endl;            
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 4: " << std::endl;         
        
        String searchMe = "The quick brown fox jumped over the lazy dog";
        
        String findMeOne = "quick";
        String findMeTwo = "fox";
        String findMeThree = "cat";


        std::cout << "Searching string: " << '"' << searchMe << '"' << std::endl;

        int whereFound = searchMe.findstr(0, findMeOne);
        assert(whereFound == 4);
        std::cout << "Searching for: " << '"' << findMeOne << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;
        
        whereFound = searchMe.findstr(0, findMeTwo);
        assert(whereFound == 16);
        std::cout << "Searching for: " << '"' << findMeTwo << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        whereFound = searchMe.findstr(0, findMeThree);
        assert(whereFound == -1);
        std::cout << "Searching for: " << '"' << findMeThree << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        whereFound = searchMe.findch(0, '\0');
        assert(whereFound == searchMe.length());
        std::cout << "Null character found at last index" << std::endl;           
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 5: " << std::endl;         
        
        String searchMe = "!1@2#3$4%5^6&7*8(9)0_-+=QqWwEeRrTtYyUuIiOoPpAaSsDdFfGgHhJjKkLl:;'ZzXxCcVvBbNnMm<,>.?/|";
        
        String findMeOne = "QqWwEeRrTtYy";
        String findMeTwo = "ZzXxCcVv";
        String findMeThree = "1@2#3$4%5";
        String findMeFour = "Im not here. This isnt happening";


        std::cout << "Searching string: " << '"' << searchMe << '"' << std::endl;

        int whereFound = searchMe.findstr(0, findMeOne);
        assert(whereFound == 24);
        std::cout << "Searching for: " << '"' << findMeOne << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;
        
        whereFound = searchMe.findstr(0, findMeTwo);
        assert(whereFound == 65);
        std::cout << "Searching for: " << '"' << findMeTwo << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        whereFound = searchMe.findstr(0, findMeThree);
        assert(whereFound == 1);
        std::cout << "Searching for: " << '"' << findMeThree << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        whereFound = searchMe.findstr(0, findMeFour);
        assert(whereFound == -1);
        std::cout << "Searching for: " << '"' << findMeFour << '"' << std::endl; 
        std::cout << "Found at index: " << whereFound << std::endl;

        whereFound = searchMe.findch(0, '\0');
        assert(whereFound == searchMe.length());
        std::cout << "Null character found at last index" << std::endl;    
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 6 (EMPTY): " << std::endl;

        // Test 
        String searchMe;
        std::cout << "Searching string: " << '"' << searchMe << '"' << std::endl;

        // Verify
        int assertOne = searchMe.findstr(0, String());
        assert(assertOne == 0);
        std::cout << "Null character found at first index" << std::endl;

        assertOne = searchMe.findstr(0, "Not here");
        assert(assertOne == -1);
        std::cout << "Nothing else found in this string" << std::endl;         
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 7 (AT CAPACITY): " << std::endl;

        // Test 
        String searchMe = "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!";
        std::cout << "Searching string: " << '"' << searchMe << '"' << std::endl;

        assert(searchMe.length() == searchMe.capacity());

        // Verify
        int assertOne = searchMe.findstr(0, "Hello");
        assert(assertOne == 0);
        std::cout << "String 'Hello' found at first index" << std::endl;

        assertOne = searchMe.findstr(0, "CS!");
        assert(assertOne == searchMe.capacity() - 3);
        std::cout << "String 'CS!' found at index " << searchMe.capacity() - 3 << std::endl;  

        assertOne = searchMe.findstr(0, "Not here");
        assert(assertOne == -1);
        std::cout << "String 'Not here' wasnt found in string" << std::endl;    

        assertOne = searchMe.findch(0, '\0');
        assert(assertOne == searchMe.length());
        assert(assertOne == searchMe.capacity());
        std::cout << "Null character found at last index" << std::endl;     
    }    

    std::cout << std::endl << "Dont testing find string." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
}