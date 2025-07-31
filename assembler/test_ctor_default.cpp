//  Stack class test program
//
//  Tests: Default Ctor 
//

#include "stack.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "- Testing stack<int> :" << std::endl << std::endl;
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> stackOne;

        assert(stackOne.empty());
        std::cout << "Default Constructor Makes an Empty Stack!" << std::endl;
    }
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "- Testing stack<float> :" << std::endl << std::endl;
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<float> stackOne;

        assert(stackOne.empty());
        std::cout << "Default Constructor Makes an Empty Stack!" << std::endl;
    }    
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "- Testing stack<char> :" << std::endl << std::endl;
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> stackOne;

        assert(stackOne.empty());
        std::cout << "Default Constructor Makes an Empty Stack!" << std::endl;
    }
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "- Testing stack<bool> :" << std::endl << std::endl;
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<bool> stackOne;

        assert(stackOne.empty());
        std::cout << "Default Constructor Makes an Empty Stack!" << std::endl;
    }       
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "- Testing stack<String> :" << std::endl << std::endl;
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String> stackOne;

        assert(stackOne.empty());
        std::cout << "Default Constructor Makes an Empty Stack!" << std::endl;
    }

    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << "Done testing Default Constructor." << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
}
