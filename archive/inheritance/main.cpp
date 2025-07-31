#include "shape.hpp"

int main() {
    Circle c(4);
    Rectangle r(10, 5);
    Triangle t(4, 7);
    Square s(3);

    c.draw();
    r.draw();
    t.draw();
    s.draw();

    Shape* shapePtr = new Rectangle(3, 6);
    Rectangle* rectPtr = new Square(3);

    shapePtr->draw();
    rectPtr->draw();
}