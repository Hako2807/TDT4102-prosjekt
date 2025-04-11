#ifndef SOLVE
#define SOLVE
#include <vector>
#include <include/shape.h>


class Solver {
    private:
        std::vector<std::shared_ptr<Shape>> _shapes;
        State inputState;
        State generatedState;
        

    public:
        Solver(std::vector<std::shared_ptr<Shape>> shapes, const char* path);
        void step();
        void tryShapeAt(const std::shared_ptr<Shape>& shape, const Point& point);
        long getScore(const std::shared_ptr<Shape>& shape, const Point& point, const TDT4102::Color& c) const;
        State getGenerated() const;
        State getInput() const;
};

long getColorDiff(const TDT4102::Color& c1, const TDT4102::Color& c2);

#endif