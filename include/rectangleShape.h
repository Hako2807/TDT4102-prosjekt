#ifndef RECTANGLE
#define RECTANGLE

#include "shape.h"

class RectangleShape : public Shape {
    public:
     virtual void place(Image<50, 50>& img, const Point topLeft, TDT4102::Color color); 
    
     RectangleShape() : Shape() {};
};

#endif