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
    x1 = xC;
    y1 = yC;
}

Rectangle::Rectangle(ShapeBuffer sb)
    :Rectangle()
{
    setPen(sb.getPen());
    setBrush(sb.getBrush());
    l = sb.qRect.height();
    w = sb.qRect.width();
    QPoint p = sb.qRect.topLeft();
    x1 = p.x();
    y1 = p.y();
        
}

void Rectangle::draw()
{
    getQPainter()->drawRect(x1,y1,w,l);
}

void Rectangle::move(const int x, const int y)
{
    QPoint p(x,y);
    getQPainter()->translate(p);
}

double Rectangle::area() const
{
    return (double)l * (double)w;
}

double Rectangle::perimeter() const
{
    return (double)(l * 2) + (double)(w * 2);
}




