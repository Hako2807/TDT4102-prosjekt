#ifndef RECTANGLE
#define RECTANGLE

#include "shape.h"
#include "include/state.h"

class RectangleShape : public Shape {
    private:
        int _width;
        int _height;
    public:
     virtual void place(State& img, const Point topLeft, TDT4102::Color color);
    
     RectangleShape(int width, int height);
};

#endif