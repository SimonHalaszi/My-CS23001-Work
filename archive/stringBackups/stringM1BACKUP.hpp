/*
* Simon Halaszi
* string project
* CS23001
*/

// string.hpp for milestone 1

#ifndef CS23001_STRING_INTERFACE_HPP
#define CS23001_STRING_INTERFACE_HPP

#include <iostream>

const int STRING_SIZE = 256;                      //The size of the String.

// CLASS INV:   str[length()] == 0 &&
//              0 <= length() <= capacity() &&
//              capacity() == STRING_SIZE - 1
class String {
public:
            String        ();                          //Empty string
            String        (char);                      //Stirng('x')
            String        (const char[]);              //String("abcd")

    int     capacity      ()                    const; //Max chars that can be stored
    int     length        ()                    const; //Number of char in string
    char&   operator[]    (int);                       //Accessor/Modifier
    char    operator[]    (int)                 const; //Accessor

    String& operator+=    (const String&);             //Concatenation
    bool    operator==    (const String&)       const;
    bool    operator<     (const String&)       const;
    String  substr        (int, int)            const; //Sub from staring to ending positions
    int     findch        (int,  char)          const; //Location of charater starting at a position
    int     findstr       (int,  const String&) const; //Location of string starting at a position

    friend  std::istream& operator>>(std::istream&, String&);
    friend  std::ostream& operator<<(std::ostream&, const String&);

private:
    char str[STRING_SIZE];
};

String  operator+       (String,        const String&);
bool    operator==      (const char[],  const String&);
bool    operator==      (char,          const String&);
bool    operator<       (const char[],  const String&);
bool    operator<       (char,          const String&);
bool    operator<=      (const String&, const String&);
bool    operator!=      (const String&, const String&);
bool    operator>=      (const String&, const String&);
bool    operator>       (const String&, const String&);

#endif
