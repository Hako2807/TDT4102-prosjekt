#ifndef STATE
#define STATE

#include <include/image.h>


class State : public Image {
private:
    long _score;
public:
    State(int rows, int cols);

    long getScore() const;
    void setScore(long x);
};

#endif