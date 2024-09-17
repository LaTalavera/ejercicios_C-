#include "Figure.h"
#include <iostream>
using namespace std;

Circle::Circle(double radius) : radius(radius){}
void Circle::calculateArea()
{
    double PI = 3.14;
    double area = PI * (this->radius * this->radius);
    cout << "The circle area is: " << area << endl;
};

Square::Square(double side) : side(side){}
void Square::calculateArea()
{
    double area = this->side * this->side;
    cout << "The square area is: " << area << endl;
};