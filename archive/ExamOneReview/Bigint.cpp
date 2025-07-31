#include "Bigint.hpp"

//Constructors
Bigint::Bigint() {
    for(int i = 0; i < maxBigintSize; ++i)
        digits[i] = 0;
}

Bigint::Bigint(int inputInt) : Bigint() {  
    for(int i = 0; i < maxBigintSize; ++i) {
        if(inputInt == 0)
            break;
        digits[i] = inputInt % 10;
        inputInt /= 10;
    }
}

Bigint::Bigint(const char cString[]) : Bigint() {
    int cStringSize = 0;                                

    while(cString[cStringSize] != '\0')
        ++cStringSize; 

    for (int inputIndex = cStringSize - 1, bigintIndex = 0; inputIndex >= 0; inputIndex--, bigintIndex++)
        digits[bigintIndex] = cString[inputIndex] - '0';
}

// Printing Functions
void Bigint::debugPrint(std::ostream& out) const {
    for(int i = 0; i < maxBigintSize; ++i)
        out << digits[i] << '|';
}

std::ostream& operator<<(std::ostream& out, const Bigint& rhs) {
    int startPrint = maxBigintSize - 1;

    while(startPrint > 0 && rhs.digits[startPrint] == 0)
        --startPrint;

    // for (startPrint = maxBigintSize - 1; startPrint > 0 && rhs.digits[startPrint] == 0; --startPrint);
    
    for (int i = startPrint, endLine = 0; i >= 0; --i, ++endLine){
        if (endLine == 64) {
            out << std::endl << rhs.digits[i];
            endLine = 0;
        }
        else
            out << rhs.digits[i];
    }
    return out;
}

// Equal Operator
bool Bigint::operator==(const Bigint& rhs) const {
    for(int i = 0; i < maxBigintSize; ++i)
        if(digits[i] != rhs.digits[i])
            return false;
    return true;
}

// Input Operator
std::istream& operator>>(std::istream& in, Bigint& rhs) {
    char ch, readString[maxBigintSize];
    
    for (int i = 0; i < maxBigintSize; ++i)
        readString[i] = 0;

    
    int index = 0;

    while(in >> ch) {
        if(ch == ';')
            break;
        readString[index] = ch;
        ++index;
    }

    rhs = readString;
    return in;
}

// Addition
Bigint Bigint::operator+(const Bigint& rhs) const {
    Bigint sumBi;
    int remainder = 0, sum = 0;

    for(int i = 0; i < maxBigintSize; ++i) {
        sum = digits[i] + rhs.digits[i] + remainder;
        sumBi.digits[i] = sum % 10;
        remainder = sum / 10;
    }
    
    return sumBi;
}

// Subscripts
int Bigint::operator[](int index) const {
    return digits[index];
}

int& Bigint::operator[](int index) {
    return digits[index];
}

// Multiplying
Bigint Bigint::timesDigit(int digit) const {
    Bigint productBi;
    int remainder = 0, product = 0;

    for(int i = 0; i < maxBigintSize; ++i) {
        product = (digits[i] * digit) + remainder;
        productBi.digits[i] = product % 10;
        remainder = product / 10;
    }
    
    return productBi;
}

Bigint Bigint::timesTenToPower(int offset) const {
    Bigint resultBi;
    for(int i = 0; i < maxBigintSize; ++i) 
        resultBi.digits[i + offset] = digits[i];
    return resultBi;
}

Bigint Bigint::operator*(const Bigint& rhs) const {
    Bigint productBi;
    Bigint tempBi;
    for(int i = 0; i < maxBigintSize; ++i) {
        tempBi = timesDigit(rhs.digits[i]);
        productBi = productBi + tempBi.timesTenToPower(i);
    }
    return productBi;
}

// Trailing Zeros
int Bigint::trailingZeros() const {
    int trailZeroCount;
    for(trailZeroCount = 0; digits[trailZeroCount] == 0; ++trailZeroCount);
    return trailZeroCount;
}

// Factorial
Bigint factorial(int num) {
    Bigint resultBi = num;
    if (num == 1)
        return 1;
    resultBi = resultBi * factorial(num - 1);
    return resultBi;
}

void runBigintDemo() {
    // Testing >>, <<, and String Constructor
    Bigint biOne;
    Bigint biTwo;
    
    std::cout << "Enter a Bigint (Input ending with semicolon): ";
    std::cin >> biOne;
    std::cout << "Your first Bigint: " << biOne << std::endl;
    std::cout << "Enter a second Bigint (Input ending with semicolon): ";
    std::cin >> biTwo;
    std::cout << "Your second Bigint: " << biTwo << std::endl;

    // Testing Int Constructor
    Bigint ott(123);
    std::cout << "123: " << ott << std::endl;

    // Testind Default Constructor
    Bigint zero;
    std::cout << "0: " << zero << std::endl;

    std::cout << "Are your Bigints equal?: ";
    if(biOne == biTwo) {
        std::cout << "Yes they are!" << std::endl;
    } else {
        std::cout << "No they are not." << std::endl;
    }

    std::cout << "The sum of your Bigints: " << (biOne + biTwo) << std::endl;
    std::cout << "The product of your Bigints: " << (biOne * biTwo) << std::endl;

    std::cout << "Your first Bigint * 10^3: " << (biOne.timesTenToPower(3)) << std::endl;   
    std::cout << "Your first Bigint * 3: " << (biOne.timesDigit(3)) << std::endl; 

    std::cout << "The number at the first index of your first Bigint: " << (biOne[1]) << std::endl; 
    std::cout << "The number at the first index of your first Bigint changed to 3: ";
    biOne[1] = 3; 
    std::cout <<  biOne << std::endl; 

    int factMe;

    std::cout << "Enter an integer to factorial: ";
    std::cin >> factMe;
    Bigint factMeFact = factorial(factMe);
    std::cout << "Factorial result: " << factMeFact << std::endl;

    std::cout << "This factorial result has " << factMeFact.trailingZeros() << " trailing zeros" << std::endl;

}