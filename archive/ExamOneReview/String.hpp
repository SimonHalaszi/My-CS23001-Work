#ifndef STRING_HPP_
#define STRING_HPP_

#include <iostream>
#include <fstream>
#include <cassert>

const int maxStringSize = 64;

void runStringDemo();

class String{
    public:
        // Constructors
        String();
        String(char);
        String(const char[]);

        // Functions for Finding Stuff
        int length() const;
        int capacity() const {return maxStringSize;}

        // Subscript Overloading
        char operator[](int) const;
        char& operator[](int);

        // Concatenation
        String operator+(const String&) const;
        String& operator+=(const String&);

        // Comparison
        bool operator==(const String&) const;
        bool operator<(const String&) const;

        // Returns Sub String of String
        String subString(int,int) const;
        
        // Finds First Appearance of Character
        int findChar(char) const;

        // I/O Overloaders
        friend std::istream& operator>>(std::istream&, String&);
        friend std::ostream& operator<<(std::ostream&, const String&);

    private:
        char content[maxStringSize];
};

// Four Other Comparison Operators
bool operator!=(const String& lhs, const String& rhs);
bool operator>(const String& lhs, const String& rhs);
bool operator<=(const String& lhs, const String& rhs);
bool operator>=(const String& lhs, const String& rhs);


#endif
