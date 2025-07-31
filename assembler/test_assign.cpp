//  Stack class test program
//
//  Tests: Assign 
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
        
        for(int i = 0; i < 3; ++i) {
            stackOne.push(i + i);
        }

        stack<int> stackTwo;
        
        stackTwo = stackOne;

        std::cout << "- Assigning stackTwo to stackOne values:" << std::endl;

        while(!stackOne.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackOne.top());
            std::cout << stackTwo.pop() << " == " << stackOne.pop() << std::endl;
        }

        stack<int> stackThree;
        
        for(int i = 0; i < 5; ++i) {
            stackThree.push(i + i);
        }

        std::cout << "- Assigning stackTwo to stackThree values:" << std::endl;

        stackTwo = stackThree; 

        while(!stackThree.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackThree.top());
            std::cout << stackTwo.pop() << " == " << stackThree.pop() << std::endl;
        }

        stack<int> stackFour;

        stackFour = stackThree;

        std::cout << "- Assigning stackTwo to stackFour values: " << std::endl;

        stackTwo = stackFour;

        do {
            if(stackFour.empty() && stackTwo.empty()) {
                std::cout << "Nothing Printed! StackFour was an empty stack." << std::endl;
                break;
            }

            assert(stackTwo.top() == stackFour.top());
            std::cout << stackTwo.pop() << " == " << stackFour.pop() << std::endl;
        } while(!stackFour.empty() && !stackTwo.empty());
    }
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "- Testing stack<float> :" << std::endl << std::endl;
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<float> stackOne;
        
        for(int i = 0; i < 3; ++i) {
            stackOne.push(i * 1.2343);
        }

        stack<float> stackTwo;
        
        stackTwo = stackOne;

        std::cout << "- Assigning stackTwo to stackOne values:" << std::endl;

        while(!stackOne.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackOne.top());
            std::cout << stackTwo.pop() << " == " << stackOne.pop() << std::endl;
        }

        stack<float> stackThree;
        
        for(int i = 0; i < 5; ++i) {
            stackThree.push(i * 1.2343);
        }

        std::cout << "- Assigning stackTwo to stackThree values:" << std::endl;

        stackTwo = stackThree; 

        while(!stackThree.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackThree.top());
            std::cout << stackTwo.pop() << " == " << stackThree.pop() << std::endl;
        }

        stack<float> stackFour;

        stackFour = stackThree;

        std::cout << "- Assigning stackTwo to stackFour values: " << std::endl;

        stackTwo = stackFour;

        do {
            if(stackFour.empty() && stackTwo.empty()) {
                std::cout << "Nothing Printed! StackFour was an empty stack." << std::endl;
                break;
            }

            assert(stackTwo.top() == stackFour.top());
            std::cout << stackTwo.pop() << " == " << stackFour.pop() << std::endl;
        } while(!stackFour.empty() && !stackTwo.empty());
    }    
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "- Testing stack<char> :" << std::endl << std::endl;
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> stackOne;
        
        for(int i = 0; i < 7; ++i) {
            stackOne.push('a' + i);
        }

        stack<char> stackTwo;
        
        stackTwo = stackOne;

        std::cout << "- Assigning stackTwo to stackOne values:" << std::endl;

        while(!stackOne.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackOne.top());
            std::cout << stackTwo.pop() << " == " << stackOne.pop() << std::endl;
        }

        stack<char> stackThree;
        
        for(int i = 0; i < 3; ++i) {
            stackThree.push('a' + i);
        }

        std::cout << "- Assigning stackTwo to stackThree values:" << std::endl;

        stackTwo = stackThree; 

        while(!stackThree.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackThree.top());
            std::cout << stackTwo.pop() << " == " << stackThree.pop() << std::endl;
        }

        stack<char> stackFour;

        stackFour = stackThree;
        
        std::cout << "- Assigning stackTwo to stackFour values: " << std::endl;

        stackTwo = stackFour;

        do {
            if(stackFour.empty() && stackTwo.empty()) {
                std::cout << "Nothing Printed! StackFour was an empty stack." << std::endl;
                break;
            }

            assert(stackTwo.top() == stackFour.top());
            std::cout << stackTwo.pop() << " == " << stackFour.pop() << std::endl;
        } while(!stackFour.empty() && !stackTwo.empty());
    }
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "- Testing stack<bool> :" << std::endl << std::endl;
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<bool> stackOne;
        
        for(int i = 0; i < 7; ++i) {
            stackOne.push(i % 2);
        }

        stack<bool> stackTwo;
        
        stackTwo = stackOne;

        std::cout << "- Assigning stackTwo to stackOne values:" << std::endl;

        while(!stackOne.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackOne.top());
            std::cout << stackTwo.pop() << " == " << stackOne.pop() << std::endl;
        }

        stack<bool> stackThree;
        
        for(int i = 0; i < 3; ++i) {
            stackThree.push(i % 2);
        }

        std::cout << "- Assigning stackTwo to stackThree values:" << std::endl;

        stackTwo = stackThree; 

        while(!stackThree.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackThree.top());
            std::cout << stackTwo.pop() << " == " << stackThree.pop() << std::endl;
        }

        stack<bool> stackFour;

        stackFour = stackThree;
        
        std::cout << "- Assigning stackTwo to stackFour values: " << std::endl;

        stackTwo = stackFour;

        do {
            if(stackFour.empty() && stackTwo.empty()) {
                std::cout << "Nothing Printed! StackFour was an empty stack." << std::endl;
                break;
            }

            assert(stackTwo.top() == stackFour.top());
            std::cout << stackTwo.pop() << " == " << stackFour.pop() << std::endl;
        } while(!stackFour.empty() && !stackTwo.empty());
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

        stack<String> stackTwo;
        
        stackTwo = stackOne;

        std::cout << "- Assigning stackTwo to stackOne values:" << std::endl;

        while(!stackOne.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackOne.top());
            std::cout << stackTwo.pop() << " == " << stackOne.pop() << std::endl;
        }

        stack<String> stackThree;
        
        stackThree.push("Well");
        stackThree.push("Hello");
        stackThree.push("There");
        stackThree.push(String());
        stackThree.push("!");

        std::cout << "- Assigning stackTwo to stackThree values:" << std::endl;

        stackTwo = stackThree; 

        while(!stackThree.empty() && !stackTwo.empty()) {
            assert(stackTwo.top() == stackThree.top());
            std::cout << stackTwo.pop() << " == " << stackThree.pop() << std::endl;
        }

        stack<String> stackFour;

        stackFour = stackThree;
        
        std::cout << "- Assigning stackTwo to stackFour values: " << std::endl;

        stackTwo = stackFour;

        do {
            if(stackFour.empty() && stackTwo.empty()) {
                std::cout << "Nothing Printed! StackFour was an empty stack." << std::endl;
                break;
            }

            assert(stackTwo.top() == stackFour.top());
            std::cout << stackTwo.pop() << " == " << stackFour.pop() << std::endl;
        } while(!stackFour.empty() && !stackTwo.empty());
    }
    
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << "Done testing Assign." << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
    return 0;
}

