// bigint Test Program
//
// Tests:  int constructor, uses ==
// 
// NEED TO IMPLEMENT
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
        result = left + right;

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
        result = left + right;

        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 1);
        std::cout << result;
        std::cout << " == ";
        std::cout << "1";
        std::cout << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 3: " << std::endl;        
        
        bigint left(1);
        bigint right(1);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == 1);
        assert(right  == 1);
        assert(result == 2);
        std::cout << result;
        std::cout << " == ";
        std::cout << "2";
        std::cout << std::endl; 
        std::cout << "----------------------------------------------------" << std::endl;    
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 4: " << std::endl;       
       
        bigint left(6123);
        bigint right(125);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == 6123);
        assert(right  == 125);
        assert(result == 6248);
        std::cout << result;
        std::cout << " == ";
        std::cout << "6248";
        std::cout << std::endl;   
        std::cout << "----------------------------------------------------" << std::endl;   
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 5: " << std::endl;        
        
        bigint left(9);
        bigint right(5);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == 9);
        assert(right  == 5);
        assert(result == 14);
        std::cout << result;
        std::cout << " == ";
        std::cout << "14";
        std::cout << std::endl; 
        std::cout << "----------------------------------------------------" << std::endl;     
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 6: " << std::endl;

        bigint left(99);
        bigint right(55);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == 99);
        assert(right  == 55);
        assert(result == 154);
        std::cout << result;
        std::cout << " == ";
        std::cout << "154";
        std::cout << std::endl;   
        std::cout << "----------------------------------------------------" << std::endl;   
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 7: " << std::endl;

        bigint left(9999);
        bigint right(5555);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == 9999);
        assert(right  == 5555);
        assert(result == 15554);
        std::cout << result;
        std::cout << " == ";
        std::cout << "15554";
        std::cout << std::endl;    
        std::cout << "----------------------------------------------------" << std::endl;  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 8: " << std::endl;

        bigint left(9999);
        bigint right(0000);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == 9999);
        assert(right  == 0000);
        assert(result == 9999);
        std::cout << result;
        std::cout << " == ";
        std::cout << "9999";
        std::cout << std::endl;   
        std::cout << "----------------------------------------------------" << std::endl;   
    }    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 9: " << std::endl;

        bigint left("1000");
        bigint right("1000");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == 1000);
        assert(right  == 1000);
        assert(result == 2000);
        std::cout << result;
        std::cout << " == ";
        std::cout << "2000";
        std::cout << std::endl;  
        std::cout << "----------------------------------------------------" << std::endl;    
    }    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 10: " << std::endl;

        bigint left("1034576547345347354345672346500");
        bigint right("105745683452345234756756756856800");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "1034576547345347354345672346500");
        assert(right  == "105745683452345234756756756856800");
        assert(result == "106780259999690582111102429203300");
        std::cout << result;
        std::cout << " == ";
        std::cout << "106780259999690582111102429203300";
        std::cout << std::endl;   
        std::cout << "----------------------------------------------------" << std::endl;   
    }     
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 11: " << std::endl;

        bigint left("1234567890123456789012345678901234567890123456789012345678901234567890453745634575645");
        bigint right("457983476098234785902309857234906573924857390247598437589203456092367890263459082634");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "1234567890123456789012345678901234567890123456789012345678901234567890453745634575645");
        assert(right  == "457983476098234785902309857234906573924857390247598437589203456092367890263459082634");
        assert(result == "1692551366221691574914655536136141141814980847036610783268104690660258344009093658279");
        std::cout << result;
        std::cout << "\n== \n";
        std::cout << "1692551366221691574914655536136141141814980847036610783268104690660258\n344009093658279";
        std::cout << std::endl;     
        std::cout << "----------------------------------------------------" << std::endl; 
    }     
    {
        //AT CAPACITY
        // Setup fixture
        std::cout << "-     Test 12: " << std::endl;

        bigint left("68596499635123729254924987573987000158118768005648566148601285988413880498863439288899602319576763138311484726443867239060433681338997487081428924482903924252396304022557490585412295762143051695299358");
        bigint right("13813533453469362866750992097189157291027222652524693012068573804049697382689747432849425961363680772020949395065946957046824623353914567075092382489882429398817006029381061428239842089230988301600382");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "68596499635123729254924987573987000158118768005648566148601285988413880498863439288899602319576763138311484726443867239060433681338997487081428924482903924252396304022557490585412295762143051695299358");
        assert(right  == "13813533453469362866750992097189157291027222652524693012068573804049697382689747432849425961363680772020949395065946957046824623353914567075092382489882429398817006029381061428239842089230988301600382");
        assert(result == "82410033088593092121675979671176157449145990658173259160669859792463577881553186721749028280940443910332434121509814196107258304692912054156521306972786353651213310051938552013652137851374039996899740");
        std::cout << result;
        std::cout << "\n== \n";
        std::cout << "8241003308859309212167597967117615744914599065817325916066985979246357\n7881553186721749028280940443910332434121509814196107258304692912054156\n521306972786353651213310051938552013652137851374039996899740";
        std::cout << std::endl;   
        std::cout << "----------------------------------------------------" << std::endl;   
    }    
    {
        // // Adding two bigints that will result in a 201 digit bigint (WONT RUN DUE TO ASSERTION IN DEFINITION)
        // // Setup fixture
        // std::cout << "-      Test 13: " << std::endl;

        // bigint left("68596499635123729254924987573987000158118768005648566148601285988413880498863439288899602319576763138311484726443867239060433681338997487081428924482903924252396304022557490585412295762143051695299358");
        // bigint right("43813533453469362866750992097189157291027222652524693012068573804049697382689747432849425961363680772020949395065946957046824623353914567075092382489882429398817006029381061428239842089230988301600382");
        // bigint result;

        // // Test
        // result = left + right;

        // // Verify
        // assert(left   == "68596499635123729254924987573987000158118768005648566148601285988413880498863439288899602319576763138311484726443867239060433681338997487081428924482903924252396304022557490585412295762143051695299358");
        // assert(right  == "43813533453469362866750992097189157291027222652524693012068573804049697382689747432849425961363680772020949395065946957046824623353914567075092382489882429398817006029381061428239842089230988301600382");
        // assert(result == "12410033088593092121675979671176157449145990658173259160669859792463577881553186721749028280940443910332434121509814196107258304692912054156521306972786353651213310051938552013652137851374039996899740");
        // std::cout << result;
        // std::cout << "\n== \n";
        // std::cout << "1241003308859309212167597967117615744914599065817325916066985979246357\n7881553186721749028280940443910332434121509814196107258304692912054156\n521306972786353651213310051938552013652137851374039996899740";
        // std::cout << std::endl;      
    }    
    std::cout << "Done with testing addition." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    return 0;
}

