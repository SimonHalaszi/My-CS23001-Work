/*
* Simon Halaszi
* dynamicString Study
* CS23001
*/

// string.cpp for milestone 2

#ifndef CS23001_STRING_INTERFACE_HPP
#define CS23001_STRING_INTERFACE_HPP

#include <iostream>
#include <vector>
#include <cassert>


// CLASS INV: str[length()] == 0             &&
//            length()      == capacity()    &&
//            capacity()    == stringSize - 1
class String {
public:
    // Constructors
    String();                                       
    String(char);                                   
    String(const char[]);  
    
    // Copy Constructor                         
    String(const String&);                         
    
    // Destructor
    ~String();                                      
    
    // Assignment Overloading
    void swap(String&);                     
    String& operator=(String);                      

    int capacity() const;                           
    int length() const;                             
    char& operator[](int);                          
    char operator[](int) const;                     
    
    String& operator+=(const String&);
    bool operator==(const String&) const;
    bool operator<(const String&) const;
    String substr(int, int) const;                 
    int findch(int, char) const;                    
    int findstr(int, const String&) const;          

    friend std::ostream&operator<<(std::ostream&, const String&);
    friend std::istream&operator>>(std::istream&, String&);

    std::vector<String> split(char) const;

private:
    char *str;                                     
    int stringSize;      
};

String operator+ (String, const String&);
bool operator== (const char[], const String&);
bool operator== (char, const String&);
bool operator< (const char[], const String&);
bool operator< (char, const String&);
bool operator<= (const String&, const String&);
bool operator!= (const String&, const String&);
bool operator>= (const String&, const String&);
bool operator> (const String&, const String&);

#endif
