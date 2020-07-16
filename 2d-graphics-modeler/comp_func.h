
#ifndef comp_func_h
#define comp_func_h

#include "shape.h"
class compare_shape_perimeter
{
public:
    bool operator()(Shape* x,Shape* y){ return x->area() < y->area();}
private:
};

class compare_shape_area
{
public:
    bool operator()(Shape* x,Shape* y){ return x->perimeter() < y->perimeter();}
private:
};



#endif /* comp_func_h */
