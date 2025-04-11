#ifndef STATE
#define STATE

#include <include/image.h>


class State : public Image {
private:
    long score;
public:
    State(int rows, int cols);

    long getScore() const;
    void updateScore(long x);
};

#endif