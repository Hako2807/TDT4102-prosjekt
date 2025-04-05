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
};

#endif