#ifndef WINDOW
#define WINDOW

#include <AnimationWindow.h>
#include <image.h>

template<typename T, int rows, int cols>
class Window : TDT4102::AnimationWindow {
private:
    TDT4102::AnimationWindow screen;
public:
    Window();
    void draw_image(T matrix);
};

#endif WINDOW