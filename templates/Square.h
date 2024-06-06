#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
    private:
        double side;
        
    public:
        Square(double s) : Shape(4), side(s) {}
        
        double returnArea() const override {
            return (side * side);
        }
};

#endif
