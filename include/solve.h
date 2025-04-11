#ifndef SOLVE
#define SOLVE
#include <vector>
#include <include/shape.h>


class Solver {
    private:
        std::vector<Shape> _shapes;
        State generatedState;
        State inputState;

    public:
        Solver(std::vector<Shape> shapes, const char* path);
        void step();
        void tryShapeAt(const Shape& shape, const Point& point);
        float getScore(const Shape& shape, const Point& point);

};

double getColorDiff(const TDT4102::Color& c1, const TDT4102::Color& c2);

#endif