#include "String.hpp"

// Constructors
String::String::String() {
    content[0] = '\0';
}

String::String(char character) {
    content[0] = character;
    content[1] = '\0';
}

String::String(const char cString[]) {
    int i;
    for(i = 0; cString[i] != '\0'; ++i)
        content[i] = cString[i];
    content[i] = '\0';
}

// Function for Finding Length
int String::length() const {
    int len;
    for(len = 0; content[len] != '\0'; ++len);
    return len;
} 

// Subscript Overloading
char String::operator[](int index) const {
    assert(index <= maxStringSize - 1);
    return content[index];
}

char& String::operator[](int index) {
    assert(index <= maxStringSize - 1);
    return content[index];
}

// Concatenation
String String::operator+(const String& rhs) const {
    String result = *this;
    int len = result.length();
    int i;
    for(i = len; i - len < rhs.length(); ++i)
        result.content[i] = rhs.content[i - len];
    result.content[i] = '\0';
    return result;
}

String& String::operator+=(const String& rhs) {
    int len = length();
    int i;
    for(i = len; i - len < rhs.length(); ++i)
        content[i] = rhs.content[i - len];
    content[i] = '\0';
    return *this;
}

// Comparison
bool String::operator==(const String& rhs) const {
    int i = 0;
    while(content[i] == rhs.content[i] && content[i] != '\0' && rhs.content[i] != '\0') {
        ++i;
    }
    return content[i] == rhs.content[i];
}

bool String::operator<(const String& rhs) const {
    int i = 0;
    while(content[i] == rhs.content[i] && content[i] != '\0' && rhs.content[i] != '\0') {
        ++i;
    }
    return content[i] < rhs.content[i];
}

// Returns Sub String of String
String String::subString(int start, int end) const {
    if(end > length())
        end = length();
    if(start < 0)
        start = 0;
    
    String subString;
    int i;
    for(i = start; i < end; ++i)
        subString[i - start] = content[i];
    subString[i - start] = '\0';
    return subString;
}

// Finds First Appearance of Character
int String::findChar(char findChar) const {
    for(int i = 0; content[i] != '\0'; ++i) {
        if(content[i] == findChar)
            return i;
    }
    return -1;
}

// I/O Overloaders
std::istream& operator>>(std::istream& in, String& rhs) {
    char readChar, cString[maxStringSize];
    int i = 0;

    in >> std::noskipws;

    while(in >> readChar) {
        if(readChar == ';')
            break;
        if(readChar == '\n')
            continue;
        cString[i] = readChar;
        ++i;
    }
    
    cString[i] = '\0';
    rhs = cString;

    in >> std::skipws;
    return in;
}

// Four Other Comparison Operators
std::ostream& operator<<(std::ostream& out, const String& rhs) {
	for(int i = 0; rhs.content[i] != '\0'; ++i)
		out << rhs.content[i];
	return out;
}

bool operator!=(const String& lhs, const String& rhs) {
    return !(lhs == rhs);
}

bool operator>(const String& lhs, const String& rhs) {
    return !(lhs < rhs);
}

bool operator<=(const String& lhs, const String& rhs) {
    return (lhs == rhs) || (lhs < rhs);
}

bool operator>=(const String& lhs, const String& rhs) {
    return (lhs == rhs) || (lhs > rhs);
}


void runStringDemo() {
    String stringOne, stringTwo;

    std::cout << "Enter some text for String One (End with a semi-colon): ";
    std::cin >> stringOne;
    std::cout << "Your string reprinted: " << stringOne << std::endl;
    
    std::cout << "Enter some text for String Two (End with a semi-colon): ";
    std::cin >> stringTwo;
    std::cout << "Your string reprinted: " << stringTwo<< std::endl;

    std::cout << "-----------------------------------------------" << std::endl;
    
    std::cout << "Testing Comparisons: " << std::endl;
    std::cout << "Is your first string greater than your second?: ";

    if (stringOne > stringTwo) 
        std::cout << "Yes it is!" << std::endl;
    else
        std::cout << "No it is not." << std::endl; 
        
    String AAA = "AAA";
    String ZZZ = "ZZZ";

    std::cout << "stringOne < AAA (Should be 0): " << (stringOne < AAA) << std::endl;
    std::cout << "stringOne != AAA (Should be 1): " << (stringOne != AAA) << std::endl;
    std::cout << "stringOne <= AAA (Should be 0): " << (stringOne <= AAA) << std::endl;    
    std::cout << "stringOne == AAA (Should be 0): " << (stringOne == AAA) << std::endl;    
    std::cout << "stringOne > AAA (Should be 1): " << (stringOne > AAA) << std::endl;
    std::cout << "stringOne >= AAA (Should be 1): " << (stringOne >= AAA) << std::endl;

    std::cout << "Testing other end: " << std::endl;

    std::cout << "stringOne < ZZZ (Should be 1): " << (stringOne < ZZZ) << std::endl;
    std::cout << "stringOne != ZZZ (Should be 1): " << (stringOne != ZZZ) << std::endl;
    std::cout << "stringOne <= ZZZ (Should be 1): " << (stringOne <= ZZZ) << std::endl;    
    std::cout << "stringOne == ZZZ (Should be 0): " << (stringOne == ZZZ) << std::endl;    
    std::cout << "stringOne > ZZZ (Should be 0): " << (stringOne > ZZZ) << std::endl;
    std::cout << "stringOne >= ZZZ (Should be 0): " << (stringOne >= ZZZ) << std::endl;
    
    
    std::cout << "-----------------------------------------------" << std::endl;

    std::cout << "Testing everything else: " << std::endl;
    int start, end;
        
    std::cout << "Enter two numbers to find subString of your strings: ";
    std::cin >> start;
    std::cin >> end;
    std::cout << "String One subString: " << stringOne.subString(start, end) << std::endl;
    std::cout << "String Two subString: " << stringTwo.subString(start, end) << std::endl;

    char find;

    std::cout << "Enter a character to find it in your strings: ";      
    std::cin >> find;
    std::cout << "String One Location: " << stringOne.findChar(find) << std::endl;
    std::cout << "String Two Location: " << stringTwo.findChar(find) << std::endl;  

    String concat;

    std::cout << "Enter a string to concatenate onto your strings: ";      
    std::cin >> concat;
    std::cout << "New String One: " << stringOne + concat << std::endl;
        
    stringTwo += concat;
        
    std::cout << "New String Two: " << stringTwo << std::endl;

    std::cout << "String One Length: " << stringOne.length() << std::endl;               
    std::cout << "String Two Length: " << stringTwo.length() << std::endl;        
    
    
    std::cout << "-----------------------------------------------" << std::endl;    

    {
        std::cout << "Reading a file to test operator>>" << std::endl;    
        
        std::ifstream in;               // Define input stream
        in.open("data.txt");            // Open a file
        if(!in) {                       // Make sure file opened correctly
            std::cerr << "File not found: data1-1.txt" << std::endl;
            exit(1);
        }
        
        String string;

        while (in >> string) {
            std::cout << string << std::endl;
        }
    
        in.close();
    }
    std::cout << "-----------------------------------------------" << std::endl;
}
