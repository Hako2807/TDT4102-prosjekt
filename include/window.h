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

    void draw_image(T matrix){
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                screen.draw();
            }
    }
}
};

#endif WINDOW