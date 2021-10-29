#include <iostream>
#include "rect.h"
using namespace std;
Rectangle::Rectangle(int width, int heigth)
{
    wid_=width;
    hei_=heigth;
}
int Rectangle::getArea()
{
    return wid_*hei_;
}
int Rectangle::getPerimeter()
{
    return 2*wid_+2*hei_;
}
Square::Square(int width):
    Rectangle(width,width)
{
}
void Square::print()
{
    cout << wid_ << "x" << hei_ << " Square" << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Perimeter: " << getPerimeter() << endl;
}
NonSquare::NonSquare(int width, int heigth):
    Rectangle(width, heigth)
{
}
void NonSquare::print()
{
    cout << wid_ << "x" << hei_ << " NonSquare" << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Perimeter: " << getPerimeter() << endl;
}