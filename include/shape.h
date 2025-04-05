#ifndef SHAPE
#define SHAPE

#include <include/image.h>
#include <include/state.h>

struct Point {
    int x;
    int y;
};

class Shape {
    private:
       
    public:
        Shape();
        virtual State<50, 50> place(State<50, 50>& img, const Point& topLeft, const TDT4102::Color& color); // Make these to template
        TDT4102::Color blend_colors(TDT4102::Color c1, TDT4102::Color c2) const;
};
#endif