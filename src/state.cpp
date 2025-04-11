#include <include/state.h>

State::State(int rows, int cols) : Image(rows, cols) {
}

long State::getScore() const {
    return score;
}

void State::updateScore(long x) {
    score += x;
}