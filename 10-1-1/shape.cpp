#include "shape.h"
Shape::Shape(double w, double h)
{
    wid=w;
    hei=h;
}
Triangle::Triangle(double w,double h)
:Shape(w,h)
{}
double Triangle::getArea()
{
    return wid*hei/2;
}
Rectangle::Rectangle(double w, double h)
:Shape(w,h)
{}
double Rectangle::getArea()
{
    return wid*hei;
}
