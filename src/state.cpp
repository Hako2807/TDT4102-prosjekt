#include <include/state.h>
#include <include/solve.h>

State::State(int rows, int cols) : Image(rows, cols), _score {0} {
}

long State::getScore() const {
    return _score;
}

void State::setScore(long x) {
    _score = x;
}