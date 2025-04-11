#ifndef WINDOW
#define WINDOW

#include <AnimationWindow.h>
#include <image.h>
#include <include/state.h>
#include "widgets/Button.h"


class Window : public TDT4102::AnimationWindow {
private:
    int _rows;
    int _cols;
public:
    Window(int rows, int cols);

    void drawImage(const State& state);

    TDT4102::Button startButton;
    void buttonCb();
};

#endif