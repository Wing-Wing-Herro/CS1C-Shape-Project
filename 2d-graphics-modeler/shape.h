#ifndef SHAPE_H
#define SHAPE_H



#include <Qt>
#include <QFont>
#include <QPainter>
#include "vector.h"
#include <cmath>
#include "shapebuffer.h"


class Shape
{
public:
      
    Shape(): painter{nullptr}, shapeId {getCount()}{}

    Shape(Shape&) = delete;

    Shape& operator =(Shape&)= delete;

    Shape(const ShapeBuffer&);

    bool operator ==(Shape& rhs){return (shapeId==rhs.shapeId);}

    bool operator <(Shape& rhs){return (shapeId<rhs.shapeId);}

    virtual ~Shape();

    int getID()const{return shapeId;}
    
    ShapeType getShape() const;

    const QBrush& getBrush()const;

   
    const QPen& getPen()const;

    virtual void setShapeBuffer(ShapeBuffer&);
 
    void passQPainter(QPainter* arg ){painter=arg;}

    void setShape(ShapeType arg);

    void setPen(Qt::GlobalColor gc1, int width,\
                 Qt::PenStyle ps, Qt::PenCapStyle pcs, Qt::PenJoinStyle pjs);

    void setPen(QPen qP){pen= qP;}
 
    void setBrush(QColor gc2, Qt::BrushStyle bs);


    void setBrush(QBrush qB){brush = qB;}

    //!Pure virtual function- allows for operator overloading of derived classes
    virtual void draw(const int x, const int y) = 0;

    //!Pure virtual function- allows for operator overloading of derived classes
    virtual void draw()=0;

    //!Pure virtual function- allows for operator overloading of derived classes
    virtual void move(const int x,const int y) = 0;

    //!Pure virtual function- allows for operator overloading of derived classes
    virtual double area() const = 0;

    //!Pure virtual function- allows for operator overloading of derived classes
    virtual double perimeter() const =0;

    //!Function that returns the x value
    virtual int getX() const = 0;

    //!Function that returns the y value
    virtual int getY() const = 0;
protected:

    //!Function returns *this pointer, a pointer of type QPainter
    QPainter* getQPainter();
private:
    //! A pointer of type QPainter
    QPainter* painter;
    //! int shapeId assigns shape based on value
    int shapeId;
    //! Shapetype object created, passed to derived classes and shapeBuffer
    ShapeType shape;
    //! QPen object to set the pen styles
    QPen pen;
    //! QBrush object to set the brush styles
    QBrush brush;
    //! Static member function, returns integer value referred to as count
      /*!Each function call increases count by one
      */
    static int getCount();

};


#endif // SHAPE_H
