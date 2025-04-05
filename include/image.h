#ifndef IMAGE
#define IMAGE

#include <AnimationWindow.h>
#include <include/matrix.h>


inline TDT4102::Color transformToColor(ColorValues color) {
    TDT4102::Color transformed;
    transformed.redChannel = color.redChannel;
    transformed.greenChannel = color.greenChannel;
    transformed.blueChannel = color.blueChannel;
    transformed.alphaChannel = color.alphaChannel;

    return transformed;
}

template<int Rows, int Cols>
class Image : public Matrix<ColorValues, Rows, Cols> {
    private:
        Matrix<ColorValues, Rows, Cols> pixels;
    public:
        Image<Rows, Cols>() {}
        ColorValues getPixel(int x, int y) const {
            return pixels.getVal(x, y);
        }
        void setPixel(int x, int y, ColorValues c) {
            pixels.setVal(x, y, c);
        }

};


#endif