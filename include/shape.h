#ifndef SHAPE
#define SHAPE

#include <image.h>

struct Point {
    int x;
    int y;
};

class Shape {
    private:
       
    public:
        Shape();
        virtual void place(Image<50, 50>& img, const Point& topLeft, const TDT4102::Color& color); // Make these to template
        virtual std::vector<Point> get_locations();

};
#endif