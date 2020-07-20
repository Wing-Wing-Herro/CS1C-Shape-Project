#include "rectangle.h"

Rectangle::Rectangle()
{
    setShape(RECTANGLE);
}

Rectangle::Rectangle(int xC, int yC, int width, int length)
    :Rectangle()
{
    w = width;
    l = length;
    x = xC;
    y = yC;
}

Rectangle::Rectangle(ShapeBuffer sb)
    :Rectangle()
{
    l = sb.qRect.height();
    w = sb.qRect.width();
    QPoint p = sb.qRect.topLeft();
    x = p.x();
    y = p.y();
}

void Rectangle::draw()
{
    getQPainter()->drawRect(x,y,w,l);
}

void Rectangle::move(const int x, const int y)
{
    QPoint p(x,y);
    getQPainter()->translate(p);
}

double Rectangle::area() const
{
    return l * w;
}

double Rectangle::perimeter() const
{
    return (l * 2) + (w * 2);
}




