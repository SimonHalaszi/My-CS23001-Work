// bigint Test Program
//
// Tests:   ==, uses bigint(int)
//
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        std::cout << "-     Test 1: " << std::endl;
        // Setup
        bigint bi(0);
        // Test 
        assert(bi == 0);
        // Verify
        std::cout << "0 == ";
        std::cout << bi;
        std::cout << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    } 
    {
        std::cout << "-     Test 2: " << std::endl;        
        // Setup
        bigint bi1(1234);
        bigint bi2(1234);
        // Test
        assert(bi1 == bi2);
        // Verify
        std::cout << bi1;
        std::cout << " == ";
        std::cout << bi2;
        std::cout << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        std::cout << "-     Test 3: " << std::endl;        
        // Setup
        bigint bi1(1234);
        bigint bi2(234);
        // Test
        assert(!(bi1 == bi2));
        // Verify
        std::cout << bi1;
        std::cout << " != ";
        std::cout << bi2;
        std::cout << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        std::cout << "-     Test 4: " << std::endl;       
        // Setup
        bigint bi1(1234);
        bigint bi2(123);
        // Test
        assert(!(bi1 == bi2));
        // Verify
        std::cout << bi1;
        std::cout << " != ";
        std::cout << bi2;
        std::cout << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        std::cout << "-     Test 5: " << std::endl;        
        // Setup
        bigint bi1(123);
        bigint bi2(1234);
        // Test
        assert(!(bi1 == bi2));
        // Verify
        std::cout << bi1;
        std::cout << " != ";
        std::cout << bi2;
        std::cout << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //AT CAPACITY
        // Setup fixture
        std::cout << "-     Test 6: " << std::endl;

        bigint bi1("68596429963512372925492498757398700015811876800564856614860128598841388049886343928889960231957676313831148472644386723906043368133899748708142892448290392425239630402255749058541229576214305169529935");
        bigint bi2("13813153345346936286675099209718915729102722265252469301206857380404969738268974743284942596136368077202094939506594695704682462335391456707509238248988242939881700602938106142823984208923098830160038");

        // Test
        assert(bi1 == "68596429963512372925492498757398700015811876800564856614860128598841388049886343928889960231957676313831148472644386723906043368133899748708142892448290392425239630402255749058541229576214305169529935");
        assert(bi2 == "13813153345346936286675099209718915729102722265252469301206857380404969738268974743284942596136368077202094939506594695704682462335391456707509238248988242939881700602938106142823984208923098830160038");
        assert(!(bi1 == bi2));

        std::cout << bi1 << std::endl << "!=" << std::endl << bi2 << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;

    }
    std::cout << "Done testing ==." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    return 0;
}
