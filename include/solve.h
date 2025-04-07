#ifndef SOLVE
#define SOLVE
#include <vector>
#include <include/shape.h>


class Solver {
    private:
        std::vector<Shape> _shapes;
        Image image;
    public:
        Solver(std::vector<Shape> shapes);
        void step();
        void tryShapeAt(const Shape& shape, const Point& point);
        float getScore(const Shape& shape, const Point& point);

};

#endif