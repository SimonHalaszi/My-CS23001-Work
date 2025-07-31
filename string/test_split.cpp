/*
* Simon Halaszi
* string project
* CS23001
*/

// Testing split

#include <iostream> 
#include <cassert>
#include "string.hpp"

//===========================================================================
int main () {
    std::cout << "----------------------------------------------------" << std::endl;
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 1: " << std::endl;

        // Test 
        String test = "Hello,World";
        char splitChar = ',';
        std::cout << "Splitting String: '" << test << "'" << std::endl;
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        // Verify
        std::vector<String> testV = test.split(splitChar);
        std::vector<String>::iterator it = testV.begin();
        
        assert(*it == "Hello");
        std::cout << "'Hello' == 'Hello'" << std::endl;

        ++it;
        assert(*it == "World");
        std::cout << "'World' == 'World'" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 2 (EMPTY): " << std::endl;

        // Test 
        String test;
        char splitChar = ',';
        std::cout << "Splitting String: '" << test << "'" << std::endl;
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        // Verify
        std::vector<String> testV = test.split(splitChar);
        std::vector<String>::iterator it = testV.begin();
        
        assert(*it == String());
        std::cout << "'' == ''" << std::endl;
        
        assert(*it != "Something");
        std::cout << "'' != 'Something'" << std::endl;

        splitChar = '\0';
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        testV = test.split(splitChar);
        it = testV.begin();

        assert(*it == String());
        std::cout << "'' == ''" << std::endl;

        ++it;
        assert(*it == String());
        std::cout << "'' == ''" << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 3 (SPECIAL): " << std::endl;

        // Test 
        String test = "!@#&*(%!*&(!*@#*&%!^))";
        char splitChar = '!';
        std::cout << "Splitting String: '" << test << "'" << std::endl;
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        // Verify
        std::vector<String> testV = test.split(splitChar);
        std::vector<String>::iterator it = testV.begin();
        
        assert(*it == String());
        std::cout << "'' == ''" << std::endl;
        
        ++it;
        assert(*it == "@#&*(%");
        std::cout << "'@#&*(%' == '@#&*(%'" << std::endl;

        ++it;
        assert(*it == "*&(");
        std::cout << "'*&(' == '*&('" << std::endl;

        ++it;
        assert(*it == "*@#*&%");
        std::cout << "'*@#*&%' == '*@#*&%'" << std::endl;  

        ++it;
        assert(*it == "^))");
        std::cout << "'^))' == '^))'" << std::endl;                   
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 4 (OLD CAPACITY): " << std::endl;

        // Test 
        String test = "Hello World, this is my very long String used for at-capacity testing. This String is two hundred and fifty-six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!";
        char splitChar = '.';
        std::cout << "Splitting String: '" << test << "'" << std::endl;
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        // Verify
        std::vector<String> testV = test.split(splitChar);
        std::vector<String>::iterator it = testV.begin();
        
        assert(*it == "Hello World, this is my very long String used for at-capacity testing");
        std::cout << "'Hello World, this is my very long String used for at-capacity testing' == 'Hello World, this is my very long String used for at-capacity testing'" << std::endl;
        
        ++it;
        assert(*it == " This String is two hundred and fifty-six characters long");
        std::cout << "' This String is two hundred and fifty-six characters long' == ' This String is two hundred and fifty-six characters long'" << std::endl;

        ++it;
        assert(*it == " That is including the null character at the end of the string");
        std::cout << "' That is including the null character at the end of the string' == ' That is including the null character at the end of the string'" << std::endl;

        ++it;
        assert(*it == " There isn't much else to say here about this string");
        std::cout << "' There isn't much else to say here about this string' == ' There isn't much else to say here about this string'" << std::endl;  

        ++it;
        assert(*it == " I love CS!");
        std::cout << "' I love CS!' == ' I love CS!'" << std::endl;   

        splitChar = '-';
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        testV = test.split(splitChar);
        it = testV.begin();

        assert(*it == "Hello World, this is my very long String used for at");
        std::cout << "'Hello World, this is my very long String used for at' == 'Hello World, this is my very long String used for at'" << std::endl;

        ++it;
        assert(*it == "capacity testing. This String is two hundred and fifty");
        std::cout << "'capacity testing. This String is two hundred and fifty' == 'capacity testing. This String is two hundred and fifty'" << std::endl; 

        ++it;
        assert(*it == "six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!");
        std::cout << "'six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!' == 'six characters long. That is including the null character at the end of the string. There isn't much else to say here about this string. I love CS!'" << std::endl;                
    }    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 5: " << std::endl;

        // Test 
        String test = "-----";
        char splitChar = '-';
        std::cout << "Splitting String: '" << test << "'" << std::endl;
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        // Verify
        std::vector<String> testV = test.split(splitChar);
        std::vector<String>::iterator it = testV.begin();
        
        assert(*it == String());
        std::cout << "'' == ''" << std::endl;
        
        ++it;
        assert(*it == String());
        std::cout << "'' == ''" << std::endl;

        ++it;
        assert(*it == String());
        std::cout << "'' == ''" << std::endl;

        ++it;
        assert(*it == String());
        std::cout << "'' == ''" << std::endl; 

        ++it;
        assert(*it == String());
        std::cout << "'' == ''" << std::endl;   

        ++it;
        assert(*it == String());
        std::cout << "'' == ''" << std::endl; 

        splitChar = '@';
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        testV = test.split(splitChar);
        it = testV.begin();

        assert(*it == test);
        std::cout << "'-----' == '-----'" << std::endl;                                
    }    
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 6: " << std::endl;

        // Test 
        String test = "+WWWWW+SSSSS-DDDDD+AAAAA+";
        char splitChar = '+';
        std::cout << "Splitting String: '" << test << "'" << std::endl;
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        // Verify
        std::vector<String> testV = test.split(splitChar);
        std::vector<String>::iterator it = testV.begin();
        
        assert(*it == String());
        std::cout << "'' == ''" << std::endl;
        
        ++it;
        assert(*it == "WWWWW");
        std::cout << "'WWWWW' == 'WWWWW'" << std::endl;

        ++it;
        assert(*it == "SSSSS-DDDDD");
        std::cout << "'SSSSS-DDDDD' == 'SSSSS-DDDDD'" << std::endl;

        ++it;
        assert(*it == "AAAAA");
        std::cout << "'AAAAA' == 'AAAAA'" << std::endl; 

        ++it;
        assert(*it == String());
        std::cout << "'' == ''" << std::endl;   

        splitChar = '-';
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        testV = test.split(splitChar);
        it = testV.begin();

        assert(*it == "+WWWWW+SSSSS");
        std::cout << "'+WWWWW+SSSSS' == '+WWWWW+SSSSS'" << std::endl;   

        ++it;
        assert(*it == "DDDDD+AAAAA+");
        std::cout << "'DDDDD+AAAAA+' == 'DDDDD+AAAAA+'" << std::endl;                              
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 7: " << std::endl;

        // Test 
        String test = "123.53.213.643.123.63424.123";
        char splitChar = '.';
        std::cout << "Splitting String: '" << test << "'" << std::endl;
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        // Verify
        std::vector<String> testV = test.split(splitChar);
        std::vector<String>::iterator it = testV.begin();
        
        assert(*it == "123");
        std::cout << "'123' == '123'" << std::endl;
        
        ++it;
        assert(*it == "53");
        std::cout << "'53' == '53'" << std::endl;

        ++it;
        assert(*it == "213");
        std::cout << "'213' == '213'" << std::endl;

        ++it;
        assert(*it == "643");
        std::cout << "'643' == '643'" << std::endl; 

        ++it;
        assert(*it == "123");
        std::cout << "'123' == '123'" << std::endl;   

        ++it;
        assert(*it == "63424");
        std::cout << "'63424' == '63424'" << std::endl; 

        ++it;
        assert(*it == "123");
        std::cout << "'123' == '123'" << std::endl;                                       
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 8: " << std::endl;

        // Test 
        String test = "123321123321";
        char splitChar = '3';
        std::cout << "Splitting String: '" << test << "'" << std::endl;
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        // Verify
        std::vector<String> testV = test.split(splitChar);
        std::vector<String>::iterator it = testV.begin();
        
        assert(*it == "12");
        std::cout << "'12' == '12'" << std::endl;
        
        ++it;
        assert(*it == String());
        std::cout << "'' == ''" << std::endl;

        ++it;
        assert(*it == "2112");
        std::cout << "'2112' == '2112'" << std::endl;

        ++it;
        assert(*it == String());
        std::cout << "'' == ''" << std::endl;

        ++it;
        assert(*it == "21");
        std::cout << "'21' == '21'" << std::endl;                                         
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 9: " << std::endl;

        // Test 
        String test = "Hello Lets Seperate This Sentence";
        char splitChar = ' ';
        std::cout << "Splitting String: '" << test << "'" << std::endl;
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        // Verify
        std::vector<String> testV = test.split(splitChar);
        std::vector<String>::iterator it = testV.begin();
        
        assert(*it == "Hello");
        std::cout << "'Hello' == 'Hello'" << std::endl;
        
        ++it;
        assert(*it == "Lets");
        std::cout << "'Lets' == 'Lets'" << std::endl;

        ++it;
        assert(*it == "Seperate");
        std::cout << "'Seperate' == 'Seperate'" << std::endl;

        ++it;
        assert(*it == "This");
        std::cout << "'This' == 'This'" << std::endl;

        ++it;
        assert(*it == "Sentence");
        std::cout << "'Sentence' == 'Sentence'" << std::endl;                                         
    }
    {
        //------------------------------------------------------
        // Setup fixture
        std::cout << "-     Test 10: " << std::endl;

        // Test 
        String test = "Destiny 2 Is My Favourite Video Game :(";
        char splitChar = ' ';
        std::cout << "Splitting String: '" << test << "'" << std::endl;
        std::cout << "At the occurance of character: '" << splitChar << "'" << std::endl;

        // Verify
        std::vector<String> testV = test.split(splitChar);
        std::vector<String>::iterator it = testV.begin();
        
        assert(*it == "Destiny");
        std::cout << "'Destiny' == 'Destiny'" << std::endl;
        
        ++it;
        assert(*it == "2");
        std::cout << "'2' == '2'" << std::endl;

        ++it;
        assert(*it == "Is");
        std::cout << "'Is' == 'Is'" << std::endl;

        ++it;
        assert(*it == "My");
        std::cout << "'My' == 'My'" << std::endl;

        ++it;
        assert(*it == "Favourite");
        std::cout << "'Favourite' == 'Favourite'" << std::endl;  

        ++it;
        assert(*it == "Video");
        std::cout << "'Video' == 'Video'" << std::endl;

        ++it;
        assert(*it == "Game");
        std::cout << "'Game' == 'Game'" << std::endl;   

        ++it;
        assert(*it == ":(");
        std::cout << "':(' == ':('" << std::endl;                                                                 
    }

    std::cout << std::endl << "Dont testing split." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;

}