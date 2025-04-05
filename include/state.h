#ifndef STATE
#define STATE

#include <include/image.h>

template<int Rows, int Columns>
class State {
private:
    Image<Rows, Columns> board;
    int score;
public:
    State<Rows, Columns>() {}

    int getScore() const {
        return score;
    }
    void updateScore(int n) {
        score += n;
    }
    ColorValues getPixel(int x, int y) const {
        return board.getPixel(x, y);
    }
    void setPixel(int x, int y, ColorValues c) {
        board.setPixel(x, y, c);
    }
};

#endif