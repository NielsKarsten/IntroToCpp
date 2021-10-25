
#define __Shape__
#define __Rectangle__
#define __Square__
#define __Circle__


class Shape
{
    public:
        // Returns the area of the shape
        virtual double area() = 0;

        // Returns the perimeter of the shape
        virtual double perimeter() = 0;

        // Return the height of the shape
        virtual double height() = 0;

        // Returns the width of the shape
        virtual double width() = 0;

        // Rotates the shape by 90 degrees -- Not implemented
        void rotate();    
};

//class rectangle which inherits from shape
class Rectangle : public Shape
{
    public:
        Rectangle(double height, double width);
        double area();
        double perimeter();
        double height();
        double width();

    private:
        double x;
        double y;

};

//Class square which inherits from shape
class Square : public Shape {
    public:
        Square(double length);
        double area();
        double perimeter();
        double height();
        double width();

    private:
        double length;
};

//class circle which inherits from shape
class Circle : public Shape {
    public:
        Circle(double radius);
        double area();
        double perimeter();
        double height();
        double width();

    private:
        double radius;
};