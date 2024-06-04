#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
    private:
        double base;
        double height;
        
    public:
        Triangle(double b, double h) : Shape(3), base(b), height(h) {}
        
        double returnArea() override {
            return (0.5 * base * height);
        }
};

#endif
