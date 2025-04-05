#ifndef SOLVE
#define SOLVE
#include <vector>
#include <include/shape.h>


class Solver {
    private:
        std::vector<Shape> shapes;
        std::unordered_map<Shape, std::pair<Point, float>> scores;
        Image<50, 50> image;
    public:
        Solver(std::vector<Shape> shapes);
        void step();
        void try_shape_at(const Shape& shape, const Point& point);
        float get_score(const Shape& shape, const Point& point);

};

#endif