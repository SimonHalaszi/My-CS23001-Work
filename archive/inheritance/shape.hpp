#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>

class Shape {
    public:
        Shape() : x(0), y(0) {}
        void move(int nx, int ny) { x = nx; y = ny; }
        virtual void draw() = 0;
        virtual ~Shape() {}
    protected:
        int x;
        int y;
};

class Circle : public Shape {
    public:
        Circle(int val) : Shape(), r(val) {}
        virtual void draw() { std::cout << "Circle w/ Radius of " << r << "\n\t@: " << x << "," << y << std::endl; }
    private:
        int r;
};

class Triangle : public Shape {
    public:
        Triangle(int base, int height) : Shape(), b(base), h(height) {}
        virtual void draw() { std::cout << "Triangle w/ base of " << b << " and height of " << h << "\n\t@: " << x << "," << y << std::endl; }
    private:
        int b;
        int h;
};

class Rectangle : public Shape {
    public:
        Rectangle(int width, int height) : Shape(), w(width), h(height) {}
        virtual void draw() { 
            std::cout << "Dimensions " << w << ", " << h << std::endl;
            for(int x = 1; x <= w; ++x) {
                for(int y = 1; y <= h; ++y) {
                    if(y == 1 || y == h || x == w || x == 1) {
                        std::cout << "*";
                    } else {
                        std::cout << " ";
                    }
                }
                std::cout << std::endl;
            }
            std::cout << "@: " << x << ", " << y << std::endl;
        }
    protected:
        int w;
        int h;
};

class Square : public Rectangle {
    public:
        Square(int sl) : Rectangle(sl, sl) {}
};

#endif