#ifndef STATE
#define STATE

#include <include/image.h>

template<int Rows, int Columns>
class State {
private:
    Image<Rows, Columns> pixels;
    int score;
public:
    State<Rows, Columns>() {}

    int getScore() const {
        return score;
    }
    void updateScore(int n) {
        score += n;
    }
    TDT4102::Color getColor(int i, int j) const {
        return pixels.getPixel(i, j);
    }
};

#endif