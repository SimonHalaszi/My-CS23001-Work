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
       
        bigint bi(1);
        
        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == "1");
        std::cout << "1 x 1 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 2: " << std::endl;        
        
       
        bigint bi(123);
        
        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == "123");
        std::cout << "123 x 1 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }  
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 3: " << std::endl;        
       
        bigint bi(0);
        
        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "0");
        std::cout << "0 x 9 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }  
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 4: " << std::endl;        
       
        bigint bi(9);
        
        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == "0");
        std::cout << "9 x 0 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 5: " << std::endl;        
       
        bigint bi(96453454);
        
        // Test 
        bi = bi.timesDigit(3);

        // Verify
        assert(bi == "289360362");
        std::cout << "96453454 x 3 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 6: " << std::endl;        
       
        bigint bi("9653463457467345234357457845673452346357453454");
        
        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "86881171117206107109217120611061071117217081086");
        std::cout << "9653463457467345234357457845673452346357453454 x 9 \n==\n" << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        // AN AT CAPACITY TEST
        // Setup fixture
        std::cout << "-     Test 7: " << std::endl;        
       
        bigint bi("16482006617718618424335195934235231489829198131634651832133971958492715576310637344349805656188088782066486824301962839221451660938582410831304261394557270730242662010387710402730427570274807999379948");
        bigint product;

        // Test 
        product = bi.timesDigit(5);

        // Verify
        assert(product == "82410033088593092121675979671176157449145990658173259160669859792463577881553186721749028280940443910332434121509814196107258304692912054156521306972786353651213310051938552013652137851374039996899740");
        std::cout << bi << " * 5\n==\n" << product << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 8: " << std::endl;        
       
        bigint bi(25);
        
        // Test 
        bi = bi.timesDigit(4);

        // Verify
        assert(bi == 100);
        std::cout << "25 x 4 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 9: " << std::endl;        
       
        bigint bi(20);
        
        // Test 
        bi = bi.timesDigit(5);

        // Verify
        assert(bi == 100);
        std::cout << "20 x 5 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 10: " << std::endl;        
       
        bigint bi(2063454);
        
        // Test 
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 4126908);
        std::cout << "2063454 x 2 == " << bi << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }

    //Add test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    return 0;
}
