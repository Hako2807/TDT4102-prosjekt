#include <include/shape.h>

Shape::Shape() {

}

State Shape::place(State& img, const Point& topLeft, const TDT4102::Color& color) {
    std::cout << "Oh no this should not be called!" << std::endl;
    return img;
}

TDT4102::Color Shape::blend_colors(TDT4102::Color c1, TDT4102::Color c2) const {
    TDT4102::Color avg_c;
    avg_c.redChannel = (c1.redChannel + c2.redChannel) / 2;
    avg_c.greenChannel = (c1.greenChannel + c2.greenChannel) / 2;
    avg_c.blueChannel = (c1.blueChannel + c2.blueChannel) / 2;
    avg_c.alphaChannel = (c1.alphaChannel + c2.alphaChannel) / 2;
    return avg_c;
}