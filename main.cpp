#include <include/matrix.h>

int main() {
    ColorValues c;
    c.redChannel = 10;
    c.greenChannel = 200;
    c.blueChannel = 155;
    c.alphaChannel = 34;
    Matrix<ColorValues, 10, 10> m {};
    m.setVal(4, 3, c);
    std::cout << m << std::endl;
    return 0;
}

//------------------------------------------------------------------------------
