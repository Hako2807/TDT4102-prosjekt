#include <include/rectangleShape.h>

RectangleShape::RectangleShape(int width, int height) : _width {width}, _height{height} {}

State RectangleShape::place(State& img, const Point topLeft, TDT4102::Color color) {
    TDT4102::Color avg_c;
    for (int i = topLeft.x; i < topLeft.x + _width; i++) {
        for (int j = topLeft.y; j < topLeft.y + _height; j++) {
            if (0 <= i && i < img.getCols() && 0 <= j && j < img.getRows()) {
                avg_c = blend_colors(color, img.getPixel(i, j));
                img.setPixel(i, j, avg_c);
            }
        }
    }
    
    return img;
}