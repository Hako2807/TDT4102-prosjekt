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
        virtual void place(State& img, const Point& topLeft, const TDT4102::Color& color);
        virtual double getScoreIfPlaced(const State& img, const Point& topLeft, const TDT4102::Color& color, const State& realImage);
        TDT4102::Color blend_colors(TDT4102::Color c1, TDT4102::Color c2) const;
};
#endif