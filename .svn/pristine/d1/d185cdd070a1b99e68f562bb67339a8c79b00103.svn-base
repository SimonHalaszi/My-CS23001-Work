/*
* Simon Halaszi
* bigint project
* CS23001
*/

// add.cpp for milestone 2

#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in;            // Define input stream
    in.open("data1-1.txt");      // Open a file
    if(!in) {                    // Make sure file opened correctly
        std::cerr << "File not found: data1-1.txt" << std::endl;
        exit(1);
    }
    
    bigint biOne, biTwo;

    while (in >> biOne && in >> biTwo) {
        std::cout << "bigint One: " << biOne << std::endl;
        std::cout << "bigint Two: " << biTwo << std::endl;

        bigint sum = biOne + biTwo;

        std::cout << "Sum of the two bigints: " << sum << std::endl; 
        std::cout << "----------------------------------------------------" << std::endl;
    }
 
    in.close();
    return 0;
}

