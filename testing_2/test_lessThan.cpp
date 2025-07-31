#include <iostream>
#include "string.hpp"

int main (){

	{
        //------------------------------------------------------
        // Setup fixture
        std::cout << "---------------------Test 1 (EMPTY)--------------------- " << std::endl;

        // Test 
        String emptyA;
        String emptyB;

		std::cout << "emptyA: " << emptyA << std::endl;
		std::cout << "emptyB: " << emptyB << std::endl;

        assert(!(emptyA < emptyB));

        std::cout << "emptyA !< emptyB" << std::endl;	

		assert(emptyA <= emptyB);

		std::cout << "emptyA <= emptyB" << std::endl;

		assert('\0' <= emptyB);

		std::cout << "'' <= emptyB" << std::endl;

		assert("" <= emptyB);

		std::cout << "'' <= emptyB" << std::endl;		
	}
	{
        //------------------------------------------------------
        // Setup fixture
        std::cout << "---------------------Test 2 (CAPACITY)--------------------- " << std::endl;

        // Test 
        String fullOfAs = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
        String fullOfZs = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";

		std::cout << "fullOfAs: " << fullOfAs << std::endl;
		std::cout << "fullOfZs: " << fullOfZs << std::endl;

        assert(fullOfAs < fullOfZs);

        std::cout << "fullOfAs < fullOfZs" << std::endl;	

		assert(fullOfAs <= fullOfZs);

		std::cout << "fullOfAs <= fullOfZs" << std::endl;

		assert("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" <= fullOfAs);

		std::cout << "(cStringFullOfAs) <= fullOfAs" << std::endl;

		assert("Z" <= fullOfZs);

		std::cout << "'Z' <= fullOfZs" << std::endl;
	}
	{
        //------------------------------------------------------
        // Setup fixture
        std::cout << "---------------------Test 3 (SPECIAL)--------------------- " << std::endl;

        // Test 
        String specialOne = "!@#&(%!(@$&^)!^&@#&%&!@&*)!@#";
		String specialTwo = "{|}{{>?<?><>%(@#)/*/*/*/*}";

		std::cout << "specialOne: " << specialOne << std::endl;
		std::cout << "specialTwo: " << specialTwo << std::endl;		

        assert(specialOne < specialTwo);

        std::cout << "specialOne < specialTwo" << std::endl;	

		assert(specialOne <= specialTwo);

		std::cout << "specialOne <= specialTwo" << std::endl;

		assert(' ' <= specialOne);

		std::cout << "' ' <= specialOne" << std::endl;

		assert("%~}~}~}~" < specialTwo);

		std::cout << "'%~}~}~}~' <= specialTwo" << std::endl;		
	}
	{
        //------------------------------------------------------
        // Setup fixture
        std::cout << "---------------------Test 4 (Normal)--------------------- " << std::endl;

        // Test 
        String stringOne = "Hello, World!";
		String stringTwo = "Boom! I love Strings!";

		std::cout << "stringOne: " << stringOne << std::endl;
		std::cout << "stringTwo: " << stringTwo << std::endl;	

        assert(stringTwo < stringOne);

        std::cout << "stringTwo < stringOne" << std::endl;	

		assert(stringTwo <= stringOne);

		std::cout << "stringTwo <= stringOne" << std::endl;

		assert('A' <= stringOne);

		std::cout << "'A' <= stringOne" << std::endl;

		assert("Awesome" < stringTwo);

		std::cout << "'Awesome' <= stringTwo" << std::endl;		
	}


return 0;
}
