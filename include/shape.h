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
        virtual void place(Image<double, 50, 50>& img, const Point topLeft, ColorValues color); // Make these to template
        virtual std::vector<Point> get_locations();

};
#endif