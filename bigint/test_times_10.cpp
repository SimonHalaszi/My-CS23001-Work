// bigint Test Program
//
// Tests:  times_10, uses ==
//
// 
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 1: " << std::endl;        
        bigint bi(343);

        // Test 
        bi = bi.times10(2);

        // Verify
        assert(bi == 34300);
        std::cout << "343 x 10^2 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;

    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 2: " << std::endl;        
       
        bigint bi("343453463465346");
        
        // Test 
        bi = bi.times10(26);

        // Verify
        assert(bi == "34345346346534600000000000000000000000000");
        std::cout << "343453463465346 x 10^26 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        // AN AT CAPACITY TEST
        // Setup fixture
        std::cout << "-     Test 3: " << std::endl;        
       
        bigint bi("3");
        
        // Test 
        bi = bi.times10(199);

        // Verify
        assert(bi == "30000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
        std::cout << "3 x 10^199 \n==\n" << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 4: " << std::endl;        
       
        bigint bi("3");
        
        // Test 
        bi = bi.times10(0);

        // Verify
        assert(bi == "3");
        std::cout << "3 x 10^0 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 5: " << std::endl;        
       
        bigint bi("765045");
        
        // Test 
        bi = bi.times10(4);

        // Verify
        assert(bi == "7650450000");
        std::cout << "765045 x 10^4 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 6: " << std::endl;        
       
        bigint bi(0);
        
        // Test 
        bi = bi.times10(48);

        // Verify
        assert(bi == 0);
        std::cout << "0 x 10^48 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 7: " << std::endl;        
       
        bigint bi(10);
        
        // Test 
        bi = bi.times10(1);

        // Verify
        assert(bi == 100);
        std::cout << "10 x 10^1 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 8: " << std::endl;        
       
        bigint bi(43406897);
        
        // Test 
        bi = bi.times10(11);

        // Verify
        assert(bi == "4340689700000000000");
        std::cout << "43406897 x 10^11 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 9: " << std::endl;        
       
        bigint bi(1);
        
        // Test 
        bi = bi.times10(1);

        // Verify
        assert(bi == 10);
        std::cout << "1 x 10^1 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 10: " << std::endl;        
       
        bigint bi(1);
        
        // Test 
        bi = bi.times10(16);

        // Verify
        assert(bi == "10000000000000000");
        std::cout << "1 x 10^16 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }

    std::cout << "Done testing times_10" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    return 0;
}

