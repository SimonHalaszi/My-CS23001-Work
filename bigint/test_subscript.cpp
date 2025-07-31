// bigint Test Program
//
// Tests:  subscript, uses ==
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
        // Setup
        std::cout << "-     Test 1: " << std::endl;        
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4); 
        std::cout << bi << " == 4" << std::endl;
        assert(digit == 4);
        std::cout << "digit" << " == 4" << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------        
        // Setup
        std::cout << "-     Test 2: " << std::endl;        
        bigint bi("9876543210");

        // Test 
        int digit = bi[5];

        // Verify
        assert(bi    == "9876543210"); 
        std::cout << bi << " == 9876543210" << std::endl;
        assert(digit == 5);
        std::cout << "digit" << " == 5" << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------        
        // Setup
        std::cout << "-     Test 3: " << std::endl;        
        bigint bi(987650);

        // Test 
        int digit = bi[2];

        // Verify
        assert(bi    == 987650); 
        std::cout << bi << " == 987650" << std::endl;
        assert(digit == 6);
        std::cout << "digit" << " == 6" << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------       
        // Setup
        std::cout << "-     Test 4: " << std::endl;        
        bigint bi(987650);

        // Test 
        bi[2] = 5;

        // Verify
        assert(bi    == 987550); 
        std::cout << bi << " == 987550" << std::endl;
        assert(bi[2] == 5);
        std::cout << "bi[2] == " << bi[2] << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------        
        // Setup
        std::cout << "-     Test 5: " << std::endl;        
        bigint bi(111111);

        // Test 
        bi[4] = 6;

        // Verify
        assert(bi    == 161111); 
        std::cout << bi << " == 161111" << std::endl;
        assert(bi[4] == 6);
        std::cout << "bi[4] == " << bi[4] << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------        
        // Setup
        std::cout << "-     Test 6: " << std::endl;        
        bigint bi("754834559769467823498");

        // Test 
        bi[0] = 1;
        bi[10] = 9;
        bi[21] = 6;

        // Verify
        assert(bi    == "6754834559799467823491"); 
        std::cout << bi << " == 6754834559799467823491" << std::endl;
        assert(bi[21] == 6);
        std::cout << "bi[21] == " << bi[21] << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        // AT CAPACITY
        // Setup fixture
        std::cout << "-     Test 6: " << std::endl;

        bigint bi("68596429963512372925492498757398700015811876800564856614860128598841388049886343928889960231957676313831148472644386723906043368133899748708142892448290392425239630402255749058541229576214305169529935");
        
        assert(bi[199] == 6);

        std::cout << "bi[maxSize - 1] == " << bi[maxSize - 1] << std::endl;

        bi[199] = 9;

        assert(bi[199] == 9);

        std::cout << "bi[maxSize - 1] == " << bi[maxSize - 1] << std::endl;

        assert(bi == "98596429963512372925492498757398700015811876800564856614860128598841388049886343928889960231957676313831148472644386723906043368133899748708142892448290392425239630402255749058541229576214305169529935");

        std::cout << bi << std::endl << "==" << std::endl << "9859642996351237292549249875739870001581187680056485661486012859884138\n8049886343928889960231957676313831148472644386723906043368133899748708\n142892448290392425239630402255749058541229576214305169529935" << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;

    }
    std::cout << "Done testing subscript." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    return 0;
}

