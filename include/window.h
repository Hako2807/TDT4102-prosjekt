#ifndef WINDOW
#define WINDOW

#include <AnimationWindow.h>
#include <image.h>
#include <include/state.h>


class Window : public TDT4102::AnimationWindow {
private:
    int _rows;
    int _cols;
public:
    Window(int rows, int cols);

    void drawImage(const State& state);
};

#endif