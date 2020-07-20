#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class Square : public Shape
{
private:
    int side;
    int x;
    int y;
public:
    Square();
    Square(ShapeBuffer s);
    virtual void draw(const int x, const int y);
    virtual void draw();
    virtual void move(const int x,const int y);
    virtual double area() const;
    virtual double perimeter() const;
    virtual int getX() const;
    virtual int getY() const;
};

#endif // SQUARE_H
