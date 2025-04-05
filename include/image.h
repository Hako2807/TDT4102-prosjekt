#ifndef IMAGE
#define IMAGE

#include <AnimationWindow.h>
#include <include/matrix.h>


TDT4102::Color transformToColor(ColorValues color) {
    TDT4102::Color transformed;
    transformed.redChannel = color.redChannel;
    transformed.greenChannel = color.greenChannel;
    transformed.blueChannel = color.blueChannel;
    transformed.alphaChannel = color.alphaChannel;

    return transformed;
}

template<int Rows, int Cols>
class Image : public Matrix<ColorValues, Rows, Cols>,  public TDT4102::AnimationWindow {
    private:
        Matrix<ColorValues, Rows, Cols> pixels;
    public:
        Image() : TDT4102::AnimationWindow {100, 100, Rows, Cols, "HALLO!"} {}
        ColorValues getPixel(int x, int y) const {
            return pixels.getVal(x, y);
        }
        void setPixel(int x, int y, ColorValues c) {
            pixels.setVal(x, y, c);
        }

        void drawScreen() {
            for (int i = 0; i < Rows; i++) {
                for (int j = 0; j < Cols; j++) {
                    TDT4102::Color c = transformToColor(getPixel(i, j));
                    this->draw_rectangle({i, j}, 1, 1, c);
                }
            }
        }
};


#endif