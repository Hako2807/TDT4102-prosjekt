#include <include/window.h>

Window::Window(int rows, int cols) :_rows {rows}, _cols{cols}, TDT4102::AnimationWindow {100, 100, rows, cols, "Prosjekt TDT4102"} {}


void Window::drawImage(const State& state){
    for (int i = 0; i < this->_rows; i++) {
        for (int j = 0; j < this->_cols; j++) {
            this->draw_rectangle({i,j}, 1, 1, state.getPixel(i, j));
        }
    }
}