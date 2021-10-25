#include "shapes.h"
#include <cmath>


void Shape::rotate()
{
}

Rectangle::Rectangle(double height, double width){
    height = height;
    width = width;
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


Square::Square(double length){
    length = length;
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

Circle::Circle(double radius){
    radius = radius;
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



