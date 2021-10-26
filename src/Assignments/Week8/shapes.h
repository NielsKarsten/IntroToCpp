#define __Shape__
#define __Rectangle__
#define __Square__
#define __Circle__


class Shape
{
    public:
        Shape();
        // Returns the area of the shape
        virtual double area() = 0;

        // Returns the perimeter of the shape
        virtual double perimeter() = 0;

        // Return the height of the shape
        virtual double height() = 0;

        // Returns the width of the shape
        virtual double width() = 0;

        // Rotates the shape by 90 degrees -- Not implemented
        virtual void rotate() = 0;    
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
        void rotate();

    private : 
        double x;
        double y;

};

//Class square which inherits from shape
class Square : public Shape {
    public:
        Square(double x);
        double area();
        double perimeter();
        double height();
        double width();
        void rotate();

    private : 
        double length;
};

//class circle which inherits from shape
class Circle : public Shape {
    public:
        Circle(double x);
        double area();
        double perimeter();
        double height();
        double width();
        void rotate();

    private:
        double radius;
};