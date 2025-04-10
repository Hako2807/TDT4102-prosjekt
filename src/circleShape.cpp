#include <include/circleShape.h>

CircleShape::CircleShape(int radius) : _radius {radius} {}

void CircleShape::place(State& img, const Point center, TDT4102::Color color) {
    TDT4102::Color avg_c;
    for (int i = - _radius; i <= _radius; i++) {
        for (int j = - _radius; j <= _radius; j++) {
            if (i * i + j * j > _radius * _radius) { continue;}
            if (0 <= center.x + i && center.x + i < img.getCols() && 0 <= center.y + j && center.y + j < img.getRows()) {
                avg_c = blend_colors(color, img.getPixel(i+center.x, j+center.y));
                img.setPixel(i+center.x, j+center.y, avg_c);
            }
        }
    }
}