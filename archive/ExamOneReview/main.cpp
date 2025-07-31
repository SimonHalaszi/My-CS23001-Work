#include "Point.hpp"
#include "Set.hpp"
#include "String.hpp"
#include "Bigint.hpp"

// Compile with clang++ -Wall main.cpp Point.hpp Set.hpp String.hpp Bigint.hpp Point.cpp Set.cpp String.cpp Bigint.cpp

int main() {
    int runDemo;
    
    std::cout << "What demo do you want to run? (Enter list number)" << std::endl;
    std::cout << "1.) Point Demo" << std::endl;
    std::cout << "2.) Set Demo" << std::endl;  
    std::cout << "3.) String Demo" << std::endl;        
    std::cout << "4.) Bigint Demo" << std::endl;
    std::cout << "Choice: ";            
    std::cin >> runDemo;

    std::cout << "-----------------------------------------------" << std::endl;
    
    switch (runDemo) {
        case 1:
            runPointDemo();
            break;
        case 2:
            runSetDemo();
            break;
        case 3:
            runStringDemo();
            break;          
        case 4:
            runBigintDemo();
            break;                 
        default:
            break;
    }
}