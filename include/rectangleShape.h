#ifndef RECTANGLE
#define RECTANGLE

#include "shape.h"

class RectangleShape : public Shape {
    private:
        int _width;
        int _height;
    public:
     virtual void place(Image<50, 50>& img, const Point topLeft, TDT4102::Color color) {
        for (int i = topLeft.x; i < topLeft.x - _width; i++) {
            for (int j = topLeft.y; j < topLeft.y - _height; j++) {
                img.setPixel(i, j, color);
            }
        }
     };
    
     RectangleShape(int width, int height) : Shape(), _width {width}, _height{height} {

     };
};

#endif