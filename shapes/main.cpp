#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
    // Create instances of each shape
    Triangle triangle(3.0, 4.0);
    Square square(5.0);
    Circle circle(6.0);
    Rectangle rectangle(4.0, 7.0);

    // Print the areas of each shape
    std::cout << "Area of Triangle: " << triangle.returnArea() << std::endl;
    std::cout << "Area of Square: " << square.returnArea() << std::endl;
    std::cout << "Area of Circle: " << circle.returnArea() << std::endl;
    std::cout << "Area of Rectangle: " << rectangle.returnArea() << std::endl;

    return 0;
}
