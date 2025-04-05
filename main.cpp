#include <include/image.h>
#include <include/image_file.h>
#include <include/getPixelsFromImageFile.h>

int main() {
    int valg = 0;
    do{
        std::cout << "------------------MENY------------------" << std::endl;
        std::cout << "0) Avslutt" << std::endl;
        std::cout << "1) Test å tegne" << std::endl;
        std::cout << "2) Test å få piksler fra fil" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Velg et program (0-5): ";
        std::cin >> valg;

        if (valg == 1) {
            ColorValues c;
            c.redChannel = 10;
            c.greenChannel = 200;
            c.blueChannel = 155;
            c.alphaChannel = 34;
            Image<100, 100> m {};
            m.setVal(4, 3, c);
            std::cout << m << std::endl;
        } else if (valg == 2) {
            GetPixelsFromImageFile<400, 400> handle;
            handle.getPixels();
        }
    }while (valg != 0);
    
    return 0;
}

//------------------------------------------------------------------------------
