#ifndef RECTANGLE
#define RECTANGLE

#include "shape.h"
#include "include/state.h"

class RectangleShape : public Shape {
    private:
        int _width;
        int _height;
    public:
        virtual void place(State& img, const Point& topLeft, const TDT4102::Color& color) override;
        virtual long getScoreIfPlaced(const State& img, const Point& topLeft, const TDT4102::Color& color, const State& realImage) override;
    
     RectangleShape(int width, int height);
};

#endif