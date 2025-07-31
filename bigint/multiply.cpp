/*
* Simon Halaszi
* bigint project
* CS23001
*/

// multiply.cpp for milestone 3
// Capacity needs to be higher than the current 200 for this file to run
// Change capacity in bigint.hpp. 200 is used for all at capacity test cases

#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in;            // Define input stream
    in.open("data1-2.txt");      // Open a file
    if(!in) {                    // Make sure file opened correctly
        std::cerr << "File not found: data1-2.txt" << std::endl;
        exit(1);
    }
    
    bigint biOne, biTwo;

    while (in >> biOne && in >> biTwo) {
        std::cout << "bigint One: " << biOne << std::endl;
        std::cout << "bigint Two: " << biTwo << std::endl;

        bigint sum = biOne * biTwo;

        std::cout << "Product of the bigints: " << sum << std::endl; 
        std::cout << "----------------------------------------------------" << std::endl;
    }

    in.close();
    return 0;
}

