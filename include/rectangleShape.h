#ifndef RECTANGLE
#define RECTANGLE

#include "shape.h"
#include "include/state.h"

class RectangleShape : public Shape {
    private:
        int _width;
        int _height;
    public:
     virtual State<50, 50> place(State<50, 50>& img, const Point topLeft, TDT4102::Color color) {
        TDT4102::Color avg_c;
        for (int i = topLeft.x; i < topLeft.x + _width; i++) {
            for (int j = topLeft.y; j < topLeft.y + _height; j++) {
                avg_c = blend_colors(color, img.getColor(i, j));
                img.setColor(i, j, avg_c);
            }
        }
        return img;
     };
    
     RectangleShape(int width, int height) : _width {width}, _height{height} {

     };
};

#endif