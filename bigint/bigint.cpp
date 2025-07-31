/*
* Simon Halaszi
* bigint project
* CS23001
*/

// CPP file that defines prototypes found in header file

#include "bigint.hpp"

    
// Fills bigint array with all zeros
bigint::bigint(){
    for (int i = 0; i < maxSize; ++i)       
        bigintArr[i] = 0;                            
}

// Sets a bigint to an inputted int
bigint::bigint(int orgInt) : bigint() {                            
    for (int i = 0; i < maxSize; ++i){
        if (orgInt != 0){
            bigintArr[i] = orgInt % 10;          
            orgInt /= 10;      
        }              
    }   
}

// Sets bigint equal to a string of numbers
bigint::bigint(const char inputString[]) : bigint() {    
    int size;                                

    for (size = 0; inputString[size] != '\0'; ++size);           

    for (int inputIndex = size - 1, bigintIndex = 0; inputIndex >= 0; inputIndex--, bigintIndex++)
        bigintArr[bigintIndex] = inputString[inputIndex] - '0';
}

// Prints all digits of a bigint with a | between them all
void bigint::debugPrint(std::ostream& out) const {
    for(int i = maxSize - 1; i == 0; --i)
        out << bigintArr[i] << '|' << std::endl;
}

// Checks if two 'bigints' are equal to eachother, overloads equality operator
bool bigint::operator==(const bigint& rhs) const {  
    for (int i = 0; i < maxSize; ++i)          
        if (bigintArr[i] != rhs.bigintArr[i])   
            return false;                       
    return true;
}

// Outputs a given 'bigint', overloads insertion operator
std::ostream& operator<<(std::ostream& out, const bigint& inputBigInt){ 
    int startPrint;

    for (startPrint = maxSize - 1; startPrint > 0 && inputBigInt.bigintArr[startPrint] == 0; --startPrint);
    
    for (int i = startPrint, endLine = 0; i >= 0; --i, ++endLine){
        if (endLine == 70){
            out << std::endl << inputBigInt.bigintArr[i];
            endLine = 0;
        }
        else
            out << inputBigInt.bigintArr[i];
    }
    return out;
}

// Adds two bigints together and returns result
bigint bigint::operator+(const bigint& rhs) const {
    // Preventing additions in which the sum will be 201 digits. Information will be lost.
    assert(bigintArr[maxSize - 1] + rhs.bigintArr[maxSize - 1] < 10);
    
    bigint result;
    int carry = 0;
    int currentSum;
    
    for (int i = 0; i < maxSize; ++i) {
        currentSum = bigintArr[i] + rhs.bigintArr[i] + carry;
            result.bigintArr[i] = currentSum % 10;
            carry = currentSum/10;
    }
    return result;
}

// Overloads subscript operator, returns digit at 10^index position
int bigint::operator[](int index) const{
    // Making sure index is inside of bigintArr    
    assert(index <= maxSize - 1);
    return bigintArr[index];
}

// Overloads subscript operator, allows for manipulation of data
int& bigint::operator[](int index){
    // Making sure index is inside of bigintArr
    assert(index <= maxSize - 1);
    return bigintArr[index];
}

// Overloads extraction operator. Reads from inputed file and sets value of inputed bigint
std::istream& operator>>(std::istream& in, bigint& takenBigInt) {
    char ch, readString[maxSize];
    
    for (int i =0; i < maxSize; ++i)
        readString[i] = 0;

    in >> ch;
    
    for (int i = 0; i < maxSize && ch != ';'; ++i) {
        readString[i] = ch;
        in >> ch;
    }
    
    takenBigInt = readString;
    return in;
}

// Multiplies to bigints
bigint bigint::operator*(const bigint& rhs) const{
    bigint product;
    bigint temp;
    for(int i = 0; i < maxSize; ++i) {
        temp = timesDigit(rhs[i]);
        product = product + temp.times10(i);
    }
    return product;
}

// Takes bigint and multiplies it by arguement
bigint bigint::timesDigit(int digit) const {
    bigint product;
    int temp;
    int remainder = 0;
    
    for(int i = 0; i < maxSize; ++i){
        temp = (bigintArr[i] * digit) + remainder;
        product.bigintArr[i] = temp % 10;
        remainder = temp / 10;
    }
    return product;
}

// Takes bigint and multiplies by 10 to the power of the arguement
bigint bigint::times10(int toPower) const {
    bigint product;
    for(int i = 0; i < maxSize; ++i)
        product.bigintArr[i + toPower] = bigintArr[i];
    return product;
}

// Factorial Function
bigint nfact(int num) {
    bigint result = num;
    if (num == 1)
        return 1;
    result = result * nfact(num - 1);
    return result;
}

// Trailing Zeros
int bigint::trailingZeros() {
    int trailZeros;
    for(trailZeros = 0; bigintArr[trailZeros] == 0; ++trailZeros);
    return trailZeros;
}