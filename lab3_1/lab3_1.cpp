#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    
    Rectangle(double l, double w) : length(l), width(w) {}

    
    double calculatePerimeter() const {
        return 2 * (length + width);
    }

    
    double calculateArea() const {
        return length * width;
    }

    
    bool comparePerimeter(const Rectangle& other) const {
        return calculatePerimeter() == other.calculatePerimeter();
    }

    
    bool compareArea(const Rectangle& other) const {
        return calculateArea() == other.calculateArea();
    }
};

int main() {
    
    Rectangle rectangle1(5.0, 3.0);
    Rectangle rectangle2(4.0, 6.0);

    
    std::cout << "Perimeter of Rectangle 1: " << rectangle1.calculatePerimeter() << std::endl;
    std::cout << "Perimeter of Rectangle 2: " << rectangle2.calculatePerimeter() << std::endl;

    if (rectangle1.comparePerimeter(rectangle2)) {
        std::cout << "The perimeters are equal." << std::endl;
    }
    else {
        std::cout << "The perimeters are not equal." << std::endl;
    }

    
    std::cout << "Area of Rectangle 1: " << rectangle1.calculateArea() << std::endl;
    std::cout << "Area of Rectangle 2: " << rectangle2.calculateArea() << std::endl;

    if (rectangle1.compareArea(rectangle2)) {
        std::cout << "The areas are equal." << std::endl;
    }
    else {
        std::cout << "The areas are not equal." << std::endl;
    }

    return 0;
}
