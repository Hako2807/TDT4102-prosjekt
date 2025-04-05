#ifndef RECTANGLE
#define RECTANGLE

#include "shape.h"

class RectangleShape : public Shape {
    public:
     virtual void place(Image<double, 50, 50>& img, const Point topLeft, ColorValues color); 
    
     RectangleShape() : Shape() {};
};

#endif