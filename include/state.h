#ifndef STATE
#define STATE

#include <include/image.h>


class State : public Image {
private:
    double score;
public:
    State(int rows, int cols);

    double getScore() const;
    void updateScore(double x);
};

#endif