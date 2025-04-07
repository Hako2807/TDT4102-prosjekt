#include<include/image.h>

Image::Image(int rows, int cols) : _rows {rows}, _cols {cols} {
    pixels = new TDT4102::Color*[rows];
    for (int i = 0; i < _rows; i++) {

        pixels[i] = new TDT4102::Color[cols];

        for (int j = 0; j < _cols; j++) {
            pixels[i][j] = TDT4102::Color::transparent;
        }
    }
}

Image::~Image() {
    for (int i = 0; i < _rows; i++) {
        delete[] pixels[i];
    }

    delete[] pixels;
    pixels = nullptr;
}

TDT4102::Color* Image::operator[](int i) const {
    return pixels[i];
}

TDT4102::Color Image::getPixel(int i, int j) const {
    return pixels[i][j];
}

void Image::setPixel(int i, int j, TDT4102::Color c) {
    pixels[i][j] = c;
}

const int Image::getRows() const {
    return _rows;
}

const int Image::getCols() const {
    return _cols;
}

Image& Image::operator=(Image other) {
    std::swap(pixels, other.pixels);
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Image& m) {
    for (int i = 0; i < m.getRows(); i++){
        for (int j = 0; j < m.getCols(); j++) {
            std::cout << m.getPixel(i, j) << " ";
        }
        std::cout << std::endl;
    }
    return os;
}
