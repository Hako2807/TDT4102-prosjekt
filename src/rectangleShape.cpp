#include <include/rectangleShape.h>
#include <include/solve.h>
RectangleShape::RectangleShape(int width, int height) : _width {width}, _height{height} {}

void RectangleShape::place(State& img, const Point topLeft, TDT4102::Color color) {
    TDT4102::Color avg_c;
    for (int i = topLeft.x; i < topLeft.x + _width; i++) {
        for (int j = topLeft.y; j < topLeft.y + _height; j++) {
            if (0 <= i && i < img.getCols() && 0 <= j && j < img.getRows()) {
                avg_c = blend_colors(color, img.getPixel(i, j));
                img.setPixel(i, j, avg_c);
            }
        }
    }
}

double RectangleShape::getScoreIfPlaced(const State& img, const Point& topLeft, const TDT4102::Color& color, const State& realImage) {
    TDT4102::Color avg_c;
    double score = 0;
    for (int i = topLeft.x; i < topLeft.x + _width; i++) {
        for (int j = topLeft.y; j < topLeft.y + _height; j++) {
            if (0 <= i && i < img.getCols() && 0 <= j && j < img.getRows()) {
                avg_c = blend_colors(color, img.getPixel(i, j));
                score += getColorDiff(avg_c, realImage.getPixel(i, j));
            }
        }
    }
    return score;
}