#include <include/image.h>
#include <include/image_file.h>

int main() {
    Image<50, 50> m {};
    ImageFile file {"data/img1"};

    std::cout << m << std::endl;
    file.write(m);
    m.drawScreen();
    m.wait_for_close();
    return 0;
}

//------------------------------------------------------------------------------
