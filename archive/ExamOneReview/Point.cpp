#include "Point.hpp"

// Default Constructor
Point::Point() {
    x = 0;
    y = 0;
}

// Constructor Given Two Doubles
Point::Point(double inpX, double inpY) {
    x = inpX;
    y = inpY;
}

// Adds Two Points
Point Point::operator+(const Point& rhs) const {
    Point sum;
    sum.x = x + rhs.x;
    sum.y = y + rhs.y;
    return sum;
}

// Subtracts Two Points
Point Point::operator-(const Point& rhs) const {
    Point dif;
    dif.x = x - rhs.x;
    dif.y = y - rhs.y;
    return dif;
}

// Multiplies Two Points
Point Point::operator*(const Point& rhs) const {
    Point product;
    product.x = x * rhs.x;
    product.y = y * rhs.y;
    return product;
}

// Divides Two Points
Point Point::operator/(const Point& rhs) const {
    Point quotient;
    quotient.x = x / rhs.x;
    quotient.y = y / rhs.y;
    return quotient;
}

// Equality
bool Point::operator==(const Point& rhs) const {
    return (x == rhs.x && y == rhs.y);
}

// Greater Than
bool Point::operator>(const Point& rhs) const {
    return (x + y > rhs.x + rhs.y);
}

// Reads In a Point
std::istream& operator>>(std::istream& in, Point& rhs) {
    double buffer;
    
    in >> buffer;
    rhs.x = buffer;
    in >> buffer;
    rhs.y = buffer;
    
    return in;
}

// Prints Out a Point
std::ostream& operator<<(std::ostream& out, const Point& rhs) {
    out << "(" << rhs.x << ", " << rhs.y << ")";
    return out;
}

// Find Distance Between Two Points
double Point::distance(const Point& rhs) const {
    return sqrt((rhs.x - x) * (rhs.x - x) + (rhs.y - y) * (rhs.y - y));
}

// Find Midway Point Between Two Points
Point Point::midway(const Point& rhs) const {
    return Point((x + rhs.x) / 2, (y + rhs.y) / 2);
}

// Find Slope Between Two Points
double Point::slope(const Point& rhs) const {
    return ((rhs.y - y) / (rhs.x - x));
}

bool operator!=(const Point& lhs, const Point& rhs) {
    return !(lhs == rhs);
}

bool operator<(const Point& lhs, const Point& rhs) {
    return (rhs > lhs);
}

bool operator<=(const Point& lhs, const Point& rhs) {
    return (lhs == rhs) || (lhs < rhs);
}

bool operator>=(const Point& lhs, const Point& rhs) {
    return (rhs > lhs) || (lhs > rhs);
}

void runPointDemo() {
    Point pointOne;
    Point pointTwo;

    // Using I/O functions
    std::cout << "Input a numbers for Point One (X and Y): ";
    std::cin >> pointOne;
    std::cout << pointOne << std::endl;
    std::cout << "Input a numbers for Point Two (X and Y): ";
    std::cin >> pointTwo;    
    std::cout << pointTwo << std::endl;
    // Making sure equal and greater than work
    Point Three = pointOne;
    assert(Three == pointOne);

    std::cout << "Is your first point bigger than your second point? ";  
    
    if (pointOne > pointTwo) 
        std::cout << "Yes it is!" << std::endl;
    else
        std::cout << "No it is not." << std::endl;  

    std::cout << "-----------------------------------------------" << std::endl;
    {

    std::cout << "Math Operations: " << std::endl;

    // Checking all the math operations
    Point pointSum, pointQuotient, pointProduct, pointDifference;

    pointSum = pointOne + pointTwo;
    pointDifference = pointOne - pointTwo;    
    pointProduct = pointOne * pointTwo;
    pointQuotient = pointOne / pointTwo;    

    std::cout << "Sum of your two points: " << pointSum << std::endl;
    std::cout << "Difference of your two points: " << pointDifference << std::endl;
    std::cout << "Product of your two points: " << pointProduct << std::endl; 
    std::cout << "Quotient of your two points: " << pointQuotient << std::endl;    

    }
    std::cout << "-----------------------------------------------" << std::endl;
    {

    std::cout << "Special Functions: " << std::endl;

    Point pointMidway;
    
    pointMidway = pointOne.midway(pointTwo); 

    double pointDistance, pointSlope;

    pointDistance = pointOne.distance(pointTwo);    
    pointSlope = pointOne.slope(pointTwo);   

    std::cout << "Midway point of your two points: " << pointMidway << std::endl;
    std::cout << "Distance between your two points: " << pointDistance << std::endl;
    std::cout << "Slope between your two points: " << pointSlope << std::endl; 
  
    }
    std::cout << "-----------------------------------------------" << std::endl;
}