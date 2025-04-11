#include <include/solve.h>
#include <include/getPixelsFromImageFile.h>
#include <include/state.h>

Solver::Solver(std::vector<std::shared_ptr<Shape>> shapes, const char* path) : 
                            inputState {GetPixelsFromImageFile {path}.getPixels()}, 
                            generatedState {inputState.getRows(), inputState.getCols()}, 
                            _shapes {shapes} {
    long s = 0;
    for (int i = 0; i < inputState.getRows(); i++) {
        for (int j = 0; j < inputState.getCols(); j++) {
            s += getColorDiff(TDT4102::Color::transparent, inputState[i][j]);
        }
    }
    generatedState.setScore(s);
}

long Solver::getScore(const std::shared_ptr<Shape>& shape, const Point& point, const TDT4102::Color& c) const {
    return shape->getScoreIfPlaced(this->generatedState, point, c, inputState);
}


void Solver::tryShapeAt(const std::shared_ptr<Shape>& shape, const Point& point) {

    long score = 1;
}

void Solver::step() {
    long best_score = 100000000000;
    long curr_score;
    TDT4102::Color best_color;
    Point best_point;
    std::shared_ptr<Shape> best_shape;



    std::vector<TDT4102::Color> colors {TDT4102::Color::white, TDT4102::Color::black, TDT4102::Color::red, TDT4102::Color::green, TDT4102::Color::blue};

    int stepSize = 1;
    for (int i = 0; i < _shapes.size(); i++) {
        for (int row = 0; row < generatedState.getRows(); row+=stepSize) {
            for (int col = 0; col < generatedState.getCols(); col+=stepSize) {
                for (auto c : colors) {
                    curr_score = getScore(_shapes.at(i), {row, col}, c);
                    if (curr_score < best_score) {
                        best_score = curr_score;
                        best_color = c;
                        best_point = {row, col};
                        best_shape = _shapes.at(i);
                    }
                }
            }
        }
    }

    best_shape->place(generatedState, best_point, best_color);
    generatedState.setScore(best_score);
    std::cout << generatedState.getScore() << std::endl;
}

State Solver::getGenerated() const {
    return generatedState;
}

State Solver::getInput() const {
    return inputState;
}


long getColorDiff(const TDT4102::Color& c1, const TDT4102::Color& c2) {
    return (c2.redChannel - c1.redChannel)*(c2.redChannel - c1.redChannel) + (c2.greenChannel - c1.greenChannel)*(c2.greenChannel - c1.greenChannel) + 
            (c2.blueChannel - c1.blueChannel)*(c2.blueChannel - c1.blueChannel);
}