// bigint Test Program
//
// Tests:  multiply, uses ==
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
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
        std::cout << result;
        std::cout << " == ";
        std::cout << "0";
        std::cout << std::endl;  
        std::cout << "----------------------------------------------------" << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 2: " << std::endl;        
        bigint left(1);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 0);
        std::cout << result;
        std::cout << " == ";
        std::cout << "0";
        std::cout << std::endl; 
        std::cout << "----------------------------------------------------" << std::endl; 
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 3: " << std::endl;        
        bigint left(0);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 1);
        assert(result == 0);
        std::cout << result;
        std::cout << " == ";
        std::cout << "0";
        std::cout << std::endl;  
        std::cout << "----------------------------------------------------" << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 4: " << std::endl;        
        bigint left(123);
        bigint right(56);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  123);
        assert(right  ==   56);
        assert(result == 6888);
        std::cout << result;
        std::cout << " == ";
        std::cout << "6888";
        std::cout << std::endl;  
        std::cout << "----------------------------------------------------" << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 5: " << std::endl;        
        bigint left(65);
        bigint right(321);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==    65);
        assert(right  ==   321);
        assert(result == 20865);
        std::cout << result;
        std::cout << " == ";
        std::cout << "20865";
        std::cout << std::endl;  
        std::cout << "----------------------------------------------------" << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 6: " << std::endl;        
        bigint left(9999);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  9999);
        assert(right  ==     2);
        assert(result == 19998);
        std::cout << result;
        std::cout << " == ";
        std::cout << "19998";
        std::cout << std::endl;  
        std::cout << "----------------------------------------------------" << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 7: " << std::endl;        
        bigint left(2);
        bigint right(999999);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==       2);
        assert(right  ==  999999);
        assert(result == 1999998);
        std::cout << result;
        std::cout << " == ";
        std::cout << "1999998";
        std::cout << std::endl;  
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 8: " << std::endl;        
        bigint left(99);
        bigint right(99);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  99);
        assert(right  ==  99);
        assert(result ==  9801);
        std::cout << result;
        std::cout << " == ";
        std::cout << "9801";
        std::cout << std::endl;  
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 9: " << std::endl;        
        bigint left("2222");
        bigint right("888888888888888888888888888888888888");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "2222");
        assert(right  == "888888888888888888888888888888888888");
        assert(result == "1975111111111111111111111111111111109136");
        std::cout << result;
        std::cout << "\n== \n";
        std::cout << "1975111111111111111111111111111111109136";
        std::cout << std::endl;  
        std::cout << "----------------------------------------------------" << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 10: " << std::endl;        
        bigint left("777777777777777777777777777777777777777777777");
        bigint right("333333");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "777777777777777777777777777777777777777777777");
        assert(right  == "333333");
        assert(result == "259258999999999999999999999999999999999999999740741");
        std::cout << result;
        std::cout << "\n== \n";
        std::cout << "259258999999999999999999999999999999999999999740741";
        std::cout << std::endl;  
        std::cout << "----------------------------------------------------" << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 11: " << std::endl;        
        bigint left("111111111111111111111111111111111111111111");
        bigint right("999999999999999999999999999999999999999999");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "111111111111111111111111111111111111111111");
        assert(right  == "999999999999999999999999999999999999999999");
        assert(result == "111111111111111111111111111111111111111110888888888888888888888888888888888888888889");
        std::cout << result;
        std::cout << "\n== \n";
        std::cout << bigint("111111111111111111111111111111111111111110888888888888888888888888888888888888888889");
        std::cout << std::endl;    
        std::cout << "----------------------------------------------------" << std::endl;        
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 12: " << std::endl;        
        bigint left(9953299);
        bigint right(2362);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  9953299);
        assert(right  ==     2362);
        assert(result == "23509692238");
        std::cout << result;
        std::cout << " == ";
        std::cout << "23509692238";
        std::cout << std::endl;   
        std::cout << "----------------------------------------------------" << std::endl;         
    } 
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 13: " << std::endl;        
        bigint left("9953299");
        bigint right("2362");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  "9953299");
        assert(right  ==     "2362");
        assert(result == "23509692238");
        std::cout << result;
        std::cout << " == ";
        std::cout << "23509692238";
        std::cout << std::endl;       
        std::cout << "----------------------------------------------------" << std::endl; 
    }   
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 14: " << std::endl;        
        bigint left("9953299");
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  "9953299");
        assert(right  ==     0);
        assert(result == "0");
        std::cout << result;
        std::cout << " == ";
        std::cout << "0";
        std::cout << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }    

    std::cout << "Done testing multiply" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    return 0;
}
