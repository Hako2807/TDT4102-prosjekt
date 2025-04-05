#ifndef WINDOW
#define WINDOW

#include <AnimationWindow.h>
#include <image.h>
#include <include/state.h>


template<int rows, int cols>
class Window : public TDT4102::AnimationWindow {
private:
    int _rows;
    int _cols;
public:
    Window() : TDT4102::AnimationWindow {100, 100, rows, cols, "Prosjekt TDT4102"}{
        this->_rows = rows;
        this->_cols = cols;
    };

    void drawImage(const State<rows, cols>& state){
        for (int i = 0; i < this->_rows; i++) {
            for (int j = 0; j < this->_cols; j++) {
                this->draw_rectangle({i,j}, 1, 1, state.getColor(i, j));
            }
        }
    }
};

#endif WINDOW