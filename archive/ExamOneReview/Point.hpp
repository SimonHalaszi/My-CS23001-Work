#ifndef POINT_HPP_
#define POINT_HPP_

#include <iostream>
#include <cmath>
#include <cassert>

void runPointDemo();

class Point{
    public:
        // Default Constructor
        Point();
        // Constructor Given Two Doubles
        Point(double, double);

        // Adds Two Points
        Point operator+(const Point&) const;
        // Subtracts Two Points
        Point operator-(const Point&) const;
        // Multiplies Two Points
        Point operator*(const Point&) const;
        // Divides Two Points
        Point operator/(const Point&) const;

        // Equality
        bool operator==(const Point&) const;
        // Greater Than
        bool operator>(const Point&) const;

        // Reads In a Point
        friend std::istream& operator>>(std::istream&, Point&);
        // Prints Out a Point
        friend std::ostream& operator<<(std::ostream&, const Point&);

        // Find Distance Between Two Points
        double distance(const Point&) const;
        // Find Midway Point Between Two Points
        Point midway(const Point&) const;
        // Find Slope Between Two Points
        double slope(const Point&) const;       
    
        // Accessing Functions
        double getX() const {return x;}
        double getY() const {return y;}
    private:
        // Private Members
        double x, y;
};

// Other Four Comparison Operators
bool operator!=(const Point& lhs, const Point& rhs);
bool operator<(const Point& lhs, const Point& rhs);
bool operator<=(const Point& lhs, const Point& rhs);
bool operator>=(const Point& lhs, const Point& rhs);

#endif