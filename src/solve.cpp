#include <include/solve.h>

Solver::Solver(std::vector<Shape> shapes) : image {100, 100} {
}

float Solver::getScore(const Shape& shape, const Point& point) {
    return 2;
}


void Solver::tryShapeAt(const Shape& shape, const Point& point) {
    float score = 1;
}

void Solver::step() {
    for (int i = 0; i < _shapes.size(); i++) {
        for (int row = 0; row < 50; row++) {
            for (int col = 0; col < 50; col++) {
                std::cout << "Hallo" << std::endl;
            }
        }
    }
}