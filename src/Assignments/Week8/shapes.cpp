#include "shapes.h"
#include <cmath>

Shape::Shape() {}

Rectangle::Rectangle(double height, double width){
    x = height;
    y = width;
}

double Rectangle::area(){
    return x * y;
}

double Rectangle::perimeter()
{
    return 2 * (x + y);
}

double Rectangle::height()
{
    return x;
}

double Rectangle::width(){
    return y;
}

void Rectangle::rotate(){
    double temp = x;
    x = y;
    y = temp;
}

Square::Square(double x){
    length = x;
}

double Square::area(){
    return length * length;
}

double Square::perimeter(){
    return 4 * length;
}

double Square::height(){
    return length;
}

double Square::width(){
    return length;
}

void Square::rotate(){
    //do nothing
}

Circle::Circle(double x){
    radius = x;
}

double Circle::area(){
    return 3.14 * radius * radius;
}

double Circle::perimeter(){
    return 2 * 3.14 * radius;
}

double Circle::height(){
    return 2 * radius;
}

double Circle::width(){
    return height();
}

void Circle::rotate(){
    //do nothing
}