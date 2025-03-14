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
        T getPixel(int x, int y) const;
        void setPixel(T val, int x, int y);
};


#endif