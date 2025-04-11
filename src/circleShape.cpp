#include <include/circleShape.h>
#include <include/solve.h>
CircleShape::CircleShape(int radius) : _radius {radius} {}

void CircleShape::place(State& img, const Point& top_left, const TDT4102::Color& color) {
    Point center = top_left;
    center.x += _radius;
    center.y += _radius;
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

long CircleShape::getScoreIfPlaced(const State& img, const Point& topLeft, const TDT4102::Color& color, const State& realImage) {
    Point center = topLeft;
    center.x += _radius;
    center.y += _radius;
    TDT4102::Color avg_c;

    long score = 0;
    for (int i = - _radius; i <= _radius; i++) {
        for (int j = - _radius; j <= _radius; j++) {
            if (i * i + j * j > _radius * _radius) { continue;}
            if (0 <= center.x + i && center.x + i < img.getCols() && 0 <= center.y + j && center.y + j < img.getRows()) {
                avg_c = blend_colors(color, img.getPixel(i+center.x, j+center.y));
                score += getColorDiff(avg_c, realImage.getPixel(i, j));
            }
        }
    }
    return score;
}

