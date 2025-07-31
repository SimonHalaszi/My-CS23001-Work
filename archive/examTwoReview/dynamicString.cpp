#include "dynamicString.hpp"
    
// Constructors
String::String() {
    stringSize = 1;
    str = new char[stringSize];
    str[0] = '\0';
}         

String::String(char setChar) : String() {
    if(setChar != '\0') {
        delete [] str;
        stringSize = 2;
        str = new char[stringSize];
        str[0] = setChar;
        str[1] = '\0';
    }
}

String::String(const char cString[]) {
    int size = 0;
    while(cString[size] != '\0') {
        ++size;
    }

    stringSize = size + 1;
    str = new char[stringSize];
    for(int i = 0; i <= size; ++i) {
        str[i] = cString[i];
    }
}
    
// Copy Constructor                         
String::String(const String& copy) {
    stringSize = copy.stringSize;
    str = new char[stringSize];

    assert(stringSize > 0);

    for(int i = 0; i < stringSize; ++i) {
        str[i] = copy.str[i];
    }
}                        
    
// Destructor
String::~String() {
    delete [] str;
}                                      
    
// Assignment Overloading
void String::swap(String& rhs) {
    int tempSize = stringSize;
    stringSize = rhs.stringSize;
    rhs.stringSize = tempSize;

    char* tempStr = str;
    str = rhs.str;
    rhs.str = tempStr;   
}

String& String::operator=(String rhs) {
    swap(rhs);
    return *this;
}                     

int String::capacity() const {
    return stringSize - 1;
}             

int String::length() const {
    int len = 0;
    while(str[len] != '\0') {
        ++len;
    }
    return len;
}   

char& String::operator[](int index) {
    return str[index];
}                

char String::operator[](int index) const {
    return str[index];
}                  
    
String& String::operator+=(const String& rhs) {
    int len = length();
    int rhsLen = rhs.length();
    
    String temp = *this;

    stringSize = len + rhsLen + 1;
    delete [] str;
    str = new char[stringSize];

    for(int i = 0; i < len; ++i) {
        str[i] = temp.str[i];
    }

    for(int i = len; i - len <= rhsLen; ++i) {
        str[i] = rhs.str[i - len];
    }

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

String String::substr(int start, int end) const {
    String result;
    int sLength = end - start + 1;
    
    if(start < 0)
        start = 0;
    if(end >= length())
        end = length() - 1;
    if(sLength <= 0)
        return result;
    
    result.stringSize = sLength + 1;
    delete [] result.str;
    result.str = new char[result.stringSize];

    int i = start;
    while(i <= end && str[i] != '\0') {
        result[i - start] = str[i];
        ++i;
    }
    result[sLength] = '\0';
    
    return result;
}  

int String::findch(int start, char findMe) const {
    int i = start;
    while(str[i] != '\0') {
        if(str[i] == findMe)
            return i;
        ++i;
    }
    return -1;
}               

int String::findstr(int start, const String& findMe) const {
    int startI = start;
    int endI = findMe.length() - 1;
    int len = length();

    while(startI + endI <= len) {
        if(substr(startI, endI + startI) == findMe) {
            return startI;
        }
        startI++;
    }
    return -1;
}

std::ostream&operator<<(std::ostream& out, const String& rhs) {
    for(int i = 0; rhs[i] != '\0'; ++i) {
        out << rhs[i];
    }
    return out;
}

std::istream&operator>>(std::istream& in, String& rhs) {
    char cString[2048];
    
    in >> cString;
    
    rhs = cString;
    
    return in;
}

std::vector<String> String::split(char delimiter) const {
    std::vector<String> result;
    
    int start = 0;
    int end = findch(start, delimiter);
    while(end != -1) {
        result.push_back(substr(start, end - 1));

        start = end + 1;
        end = findch(start, delimiter);
    }
    result.push_back(substr(start, length() - 1));

    return result;
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
    return (lhs < rhs || lhs == rhs);
}

bool operator!=(const String& lhs, const String& rhs) {
    return !(lhs == rhs);
}

bool operator>=(const String& lhs, const String& rhs) {
    return (lhs > rhs || lhs == rhs);
}

bool operator>(const String& lhs, const String& rhs) {
    return rhs < lhs;
}