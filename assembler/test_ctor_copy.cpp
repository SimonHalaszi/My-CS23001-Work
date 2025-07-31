//  Stack class test program
//
//  Tests: Copy Ctor 
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
        
        for(int i = 0; i < 10; ++i) {
            stackOne.push(i + i);
        }

        stack<int> stackTwo(stackOne);

        while(!stackOne.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackOne.top());
            std::cout << stackTwo.pop() << " == " << stackOne.pop() << std::endl;
        }
    }
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "- Testing stack<float> :" << std::endl << std::endl;
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<float> stackOne;
        
        for(int i = 0; i < 10; ++i) {
            stackOne.push(i * 1.2564);
        }

        stack<float> stackTwo(stackOne);

        while(!stackOne.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackOne.top());
            std::cout << stackTwo.pop() << " == " << stackOne.pop() << std::endl;
        }
    }    
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "- Testing stack<char> :" << std::endl << std::endl;
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> stackOne;
        
        for(int i = 0; i < 10; ++i) {
            stackOne.push('a' + i);
        }

        stack<char> stackTwo(stackOne);

        while(!stackOne.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackOne.top());
            std::cout << "'" << stackTwo.pop() << "' == '" << stackOne.pop() << "'" << std::endl;
        }
    }
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "- Testing stack<bool> :" << std::endl << std::endl;
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<bool> stackOne;
        
        for(int i = 0; i < 4; ++i) {
            stackOne.push(i % 2);
        }

        stack<bool> stackTwo(stackOne);

        while(!stackOne.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackOne.top());
            std::cout << "'" << stackTwo.pop() << "' == '" << stackOne.pop() << "'" << std::endl;
        }
    }    
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "- Testing stack<String> :" << std::endl << std::endl;
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String> stackOne;
        
        stackOne.push('a');
        stackOne.push("Hello");
        stackOne.push(String());
        stackOne.push("12#$^#@23&*$");
        stackOne.push("Cool!");

        stack<String> stackTwo(stackOne);

        while(!stackOne.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackOne.top());
            std::cout << "'" << stackTwo.pop() << "' == '" << stackOne.pop() << "'" << std::endl;
        }
    }
    
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << "Done testing Copy Constructor." << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
    return 0;
}
