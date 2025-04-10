#ifndef IMAGE
#define IMAGE

#include <AnimationWindow.h>
#include <include/matrix.h>
#include <cassert>


class Image {
    private:
        int _rows, _cols;
        TDT4102::Color** pixels;
    public:
        Image(int rows, int cols);
        ~Image();

        TDT4102::Color* operator[](int i) const;

        TDT4102::Color getPixel(int i, int j) const;

        void setPixel(int i, int j, TDT4102::Color c);

        const int getRows() const; 
        const int getCols() const; 

        Image& operator=(Image other);

};

std::ostream& operator<<(std::ostream& os, const Image& m);


#endif