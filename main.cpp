#include <include/image.h>

int main() {
    ColorValues c;
    c.redChannel = 10;
    c.greenChannel = 200;
    c.blueChannel = 155;
    c.alphaChannel = 34;
    Image<100, 100> m {};
    m.setVal(4, 3, c);
    std::cout << m << std::endl;
    m.drawScreen();
    m.wait_for_close();
    return 0;
}

//------------------------------------------------------------------------------
