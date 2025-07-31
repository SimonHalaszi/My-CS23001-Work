/*
* Simon Halaszi
* string project
* CS23001
*/

// string.cpp for milestone 2

#include "string.hpp"
#include <cassert>

//Empty string
String::String() {
    stringSize = 1;
    str = new char[stringSize];
    str[0] = '\0';
}                              

//String('x')
String::String(char ch) {
    if(ch == '\0') {
        stringSize = 1;
        str = new char[stringSize];
        str[0] = '\0';
    }
    else {
        stringSize = 2;
        str = new char[stringSize];
        str[0] = ch;
        str[1] = '\0';
    }
}

//String("abc")
String::String(const char cString[]) {
    int size = 0;
    
    while(cString[size] != '\0') {
        ++size;
    }

    stringSize = size + 1;
    str = new char[stringSize];

    int i = 0;
    while(cString[i] != '\0') {
        str[i] = cString[i];
        ++i;
    }
    str[i] = '\0';
}

//Copy Constructor
String::String(const String& copy) {
    stringSize = copy.stringSize;
    str = new char[stringSize];  
    
    assert(stringSize > 0);
    
    for(int i = 0; i < stringSize; ++i)
        str[i] = copy.str[i];        
}

//Destructor
String::~String() {
    delete [] str;
}

//Constant time swap
void String::swap(String& other) {
    int tempSize = stringSize;
    stringSize = other.stringSize;
    other.stringSize = tempSize;

    char* tempStr = str;
    str = other.str;
    other.str = tempStr;
}

//Assignment Copy
String& String::operator=(String rhs) {
    swap(rhs);
    return *this;
}

//Max chars that can be stored
int String::capacity() const {
    return stringSize - 1;
}

//Actual number of chars in string
int String::length() const {
    int len = 0;
    while(str[len] != '\0') {
        ++len;
    }
    return len;
}

//Accessor/Modifier
char& String::operator[](int index) {
    return str[index];
}

//Accessor
char String::operator[](int index) const {
    return str[index];
}

String& String::operator+=(const String& rhs) {
    // These are just saving computation resources for empty strings
    if(rhs == '\0') {
        return *this;
    }
    if(*this == '\0') {
        *this = rhs;
        return *this;
    }
    
    int rhsLen = rhs.length();
    int len = length();

    String temp = *this;

    delete [] str;
        
    stringSize += rhsLen;
    str = new char[stringSize];

    int i = 0;
    while(i < len) {
        str[i] = temp.str[i];
        ++i;
    }
        
    i = len;
    while(i - len < rhsLen && rhs.str[i - len] != '\0') {
        str[i] = rhs.str[i - len];
        ++i;
    }
    str[i] = '\0';
    return *this;

}

bool String::operator==(const String& rhs) const {
    int i = 0;
    while(str[i] == rhs.str[i] && str[i] != '\0' && rhs.str[i] != '\0') {
        ++i;
    }
    return (str[i] == rhs.str[i]);
}

bool String::operator<(const String& rhs) const {
    int i = 0;
    while(str[i] == rhs.str[i] && str[i] != '\0' && rhs.str[i] != '\0') {
        ++i;
    }
    return (str[i] < rhs.str[i]);
}

//sub from staring to ending position
String String::substr(int start, int end) const {
    String subString;

    // Give slop receive slop
    if(end - start + 1 <= 0) {
        return subString;
    }
    if(start < 0) {
        return subString;
    }
    if(end >= length()) {
        end = length() - 1;
    }    

    int sSize = end - start + 1;

    subString.stringSize = sSize + 1;

    delete [] subString.str;
    subString.str = new char[stringSize];
    
    int i = start;
    while(i <= end && str[i] != '\0') {
        subString[i - start] = str[i];
        ++i;
    }
    subString[sSize] = '\0';

    return subString;
}


//Location of charater starting at position
int String::findch(int start, char findMe) const {
    int i = start;
    int len = length();

    while(i <= len) {
        if(str[i] == findMe)
            return i;
        ++i;
    }
    return -1;
}

//Location of string starting at a position
int String::findstr(int start, const String& findMe) const {
    int startI = start;
    int endI = findMe.length() - 1;
    int len = length();

    if(findMe == '\0') {
        return len;
    }
    
    while(startI + endI <= len) {
        if(substr(startI, endI + startI) == findMe) {
            return startI;
        }
        ++startI;
    }
    return -1;
}

// Splits a string
std::vector<String> String::split(char splitCh) const {
    std::vector<String> result;
    int len = length();
    
    int start = 0;
    int end = findch(start, splitCh);

    while(end != -1) {
        result.push_back(substr(start, end - 1));

        start = end + 1;
        end = findch(start, splitCh);
    }

    result.push_back(substr(start, len - 1));

    return result;
}

int String::toInt() {  
    int result = 0;
    int digit = 1;
    int i = length() - 1;

    while(i >= 0) {
        result = result + (str[i] - '0') * digit;
        digit *= 10;   
        --i;    
    }  
    
    return result;
}

std::istream& operator>>(std::istream& in, String& rhs) {
    char takeIn[2048];

    in >> takeIn;

    rhs = takeIn;

    return in;
}

std::ostream& operator<<(std::ostream& out, const String& rhs) {
    int i = 0;
    while(rhs.str[i] != '\0') {
        out << rhs.str[i];
        ++i;
    }
    return out;
}

String operator+(String lhs, const String& rhs) {
    return lhs += rhs;
}

bool operator==(const char lhs[], const String& rhs) {
    return String(lhs) == rhs;
}

bool operator==(char lhs, const String& rhs) {
    return String(lhs) == rhs;
}

bool operator<(const char lhs[], const String& rhs) {
    return String(lhs) < rhs;
}

bool operator<(char lhs, const String& rhs) {
    return String(lhs) < rhs;
}

bool operator<=(const String& lhs, const String& rhs) {
    return (lhs == rhs || lhs < rhs);
}

bool operator!=(const String& lhs, const String& rhs) {
    return !(lhs == rhs);
}

bool operator>=(const String& lhs, const String& rhs) {
    return (lhs == rhs || lhs > rhs);
}

bool operator>(const String& lhs, const String& rhs) {
    return rhs < lhs;
}
