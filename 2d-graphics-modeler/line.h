#ifndef LINE_H
#define LINE_H

#include "shape.h"


class Line : public Shape
{
private:
    int x1;
    int x2;
    int y1;
    int y2;
public:
    void draw();
    void move(const int, const int);
    double area() const;
    double perimeter() const;
    Line();
    Line(int,int,int,int);
    Line(ShapeBuffer);
    ~Line();
};

#endif // LINE_H
