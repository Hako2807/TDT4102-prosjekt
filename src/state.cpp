#include <include/state.h>

State::State(const int rows, const int cols) : Image(rows, cols) {
}

double State::getScore() const {
    return score;
}

void State::updateScore(double x) {
    score += x;
}