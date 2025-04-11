#include <include/solve.h>
#include <include/getPixelsFromImageFile.h>
#include <include/state.h>

Solver::Solver(std::vector<Shape> shapes, const char* path) : generatedState {1, 1},  inputState {1, 1} {
    GetPixelsFromImageFile inp {path};
    inputState = inp.getPixels();
    State generatedState {inputState.getRows(), inputState.getCols()};
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


double getColorDiff(const TDT4102::Color& c1, const TDT4102::Color& c2) {
    return (c2.redChannel - c1.redChannel)*(c2.redChannel - c1.redChannel) + (c2.greenChannel - c1.greenChannel)*(c2.greenChannel - c1.greenChannel) + 
            (c2.blueChannel - c1.blueChannel)*(c2.blueChannel - c1.blueChannel);
}