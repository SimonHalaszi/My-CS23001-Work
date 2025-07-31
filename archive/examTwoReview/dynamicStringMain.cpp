#include "dynamicString.hpp"
// COMPILE: clang++ -Wall stringMain.cpp dynamicString.hpp dynamicString.cpp

int main() {
    {
    String empty;
    std::cout << "- empty: " << empty << std::endl;
    
    String emptyCharString('\0');
    std::cout << "- emptyCharString: " << emptyCharString << std::endl;

    String aCharString('a');
    std::cout << "- aCharString: " << aCharString << std::endl;    

    String string("Hello There");
    std::cout << "- string: " << string << std::endl; 
    std::cout << "string.capacity(): " << string.capacity() << std::endl;
    std::cout << "string.length(): " << string.length() << std::endl;

    String copyString(string);
    std::cout << "- copyString: " << copyString << std::endl; 

    String subString = string.substr(0, 4);
    std::cout << "- string.substr(0, 4): " << subString << std::endl;

    std::vector<String> split = string.split(' ');
    std::cout << "- string.split(' '): " << std::endl;
    std::cout << split[0] << std::endl;
    std::cout << split[1] << std::endl;

    String assignOverload = split[0];
    std::cout << "- assignOverload = split[0]: " << assignOverload << std::endl;

    assignOverload += " There!";
    std::cout << "- assignOverload += ' There!': " << assignOverload << std::endl;

    if(split[0] == subString)
        std::cout << "- split[0] == subString: TRUE!" << std::endl;
    
    if(!(assignOverload < string))
        std::cout << "- !(assignOverload < string): TRUE!" << std::endl;
    
    String entered;
    std::cout << "Enter String: ";
    std::cin >> entered;
    std::cout << "Your entered string: " << entered << std::endl;
    }
}