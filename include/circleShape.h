#ifndef CIRCLE
#define CIRCLE

#include "shape.h"
#include "include/state.h"

class CircleShape : public Shape {
    private:
        int _radius;
    public:
        virtual State place(State& img, const Point center, TDT4102::Color color);
    
        CircleShape(int radius);
};


#endif