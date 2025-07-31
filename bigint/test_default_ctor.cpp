// bigint Test Program
// 
// Tests:  default constructor, uses ==
//
//  
#include <iostream> 
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    // Setup

    // Test 
    std::cout << "-     Test 1: " << std::endl;
    bigint bi;

    // Verify
    std::cout << "0 == " << bi << std::endl;
    assert(bi == 0);

    std::cout << "Done testing default constructor." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    return 0;
}

