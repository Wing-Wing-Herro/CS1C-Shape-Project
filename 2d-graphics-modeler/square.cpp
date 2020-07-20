v#include "Square.h"

Square::Square()
{
    side = 0;
    x = 0;
    y = 0;
    setShape(SQUARE);
}

Square::Square(ShapeBuffer s)
{
    QPoint upperLeft = s.qRect.topLeft();
    side = s.qRect.width();
    x = upperLeft.x();
    y = upperLeft.y();
    setShape(SQUARE);
}

void Square::draw(const int x, const int y)
{
    getQPainter()->drawRect(x, y, side, side);
}

void Square::draw()
{
    getQPainter()->drawRect(this->x, this->y, side, side);
}

void Square::move(const int x,const int y)
{
    QPoint p(x, y);
    getQPainter()->translate(p);
}

double Square::area() const
{
    return pow(2, side);
}

double Square::perimeter() const
{
    return 4 * side;
}

int Square::getX() const
{
    return x;
}

int Square::getY() const
{
    return y;
}
