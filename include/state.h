#ifndef STATE
#define STATE

#include <matrix.h>

template<typename T, int Rows, int Columns>
class State {
private:
    Matrix<T, rows, columns> board;
    int score;
public:
    State() {}

    int getScore() const {
        return score;
    }
    void updateScore(int n) {
        score += n;
    }
    T getPixel(int x, int y) const {
        return pixels.at(x).at(y);
    }
    void setPixel(int x, int y, T val) {
        pixels.setVal(x, y, val);
    }
};

#endif