#ifndef IMAGE
#define IMAGE

#include <AnimationWindow.h>
#include <matrix.h>


template<typename T, int Rows, int Cols>
class Image {
    private:
        Matrix<T, Rows, Cols> pixels;
    public:
        Image();
        T getPixel(int x, int y) const {
            return pixels.at(x).at(y);
        }
        void setPixel(int x, int y, T val) {
            pixels.setVal(x, y, val);
        }
};


#endif