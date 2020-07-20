#include "line.h"

Line::Line()
{
    setShape(LINE);
}

Line::Line(int xOne, int xTwo, int yOne, int yTwo)
    :Line()
{
    x1 = xOne;
    x2 = xTwo;
    y1 = yOne;
    y2 = yTwo;
}

Line::Line(ShapeBuffer sb)
    :Line()
{
    setPen(sb.getPen());
    setBrush(sb.getBrush());
    x1 = sb.one.x();
    x2 = sb.two.x();
    y1 = sb.one.y();
    y2 = sb.two.y();
}

void Line::draw()
{
    getQPainter()->drawLine(x1,y1,x2,y2);
}

void Line::move(const int x, const int y)
{
    QPoint p(x,y);
    getQPainter()->translate(p);
}

double Line::area() const
{
    return 0;
}

double Line::perimeter() const
{
    return sqrt(pow(2,((double)x2 - (double)x1)) + pow(2,((double)y2 - (double)y1)));
}



