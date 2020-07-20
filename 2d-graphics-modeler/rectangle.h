#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
private:
    int l; //length
    int w; //width
    int x1;
    int y1;
public:
    void draw();
    void move(const int, const int);
    double area() const;
    double perimeter() const;
    // constructors
    Rectangle();
    Rectangle(int, int, int, int);
    Rectangle(ShapeBuffer);
};

#endif // RECTANGLE_H
