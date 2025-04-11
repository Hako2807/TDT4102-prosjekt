#ifndef CIRCLE
#define CIRCLE

#include "shape.h"
#include "include/state.h"

class CircleShape : public Shape {
    private:
        int _radius;
    public:
        virtual void place(State& img, const Point& topLeft, const TDT4102::Color& color) override;
        virtual long getScoreIfPlaced(const State& img, const Point& topLeft, const TDT4102::Color& color, const State& realImage) override;
        CircleShape(int radius);
};


#endif