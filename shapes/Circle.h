#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
    private:
        double radius;
        
    public:
        Circle(double r) : Shape(1), radius(r) {}
        
        double returnArea() override {
            return (3.14159 * radius * radius);
        }
};

#endif
