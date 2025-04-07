#ifndef SHAPE
#define SHAPE

#include <include/image.h>
#include <include/state.h>

struct Point {
    int x;
    int y;
};

class Shape {
    public:
        Shape();
        virtual State place(State& img, const Point& topLeft, const TDT4102::Color& color);
        TDT4102::Color blend_colors(TDT4102::Color c1, TDT4102::Color c2) const;
};
#endif