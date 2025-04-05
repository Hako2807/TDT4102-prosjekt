#include <include/image.h>
#include <include/image_file.h>
#include <include/getPixelsFromImageFile.h>
#include <include/window.h>

int main() {
    int valg = 0;
    do{
        std::cout << "------------------MENY------------------" << std::endl;
        std::cout << "0) Avslutt" << std::endl;
        std::cout << "1) Test å tegne" << std::endl;
        std::cout << "2) Test å skriv piksler til fil" << std::endl;
        std::cout << "3) Test å les bilde fra fil" << std::endl;
        std::cout << "4) Test AnimationWindow" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Velg et program (0-5): ";
        std::cin >> valg;

        if (valg == 1) {
            TDT4102::Color c;
            c.redChannel = 10;
            c.greenChannel = 200;
            c.blueChannel = 155;
            c.alphaChannel = 34;
            Image<100, 100> m {};
            m.setVal(4, 3, c);
            
        } else if (valg == 2) {
            Image<50, 50> m;
            ImageFile file {"data/img2.txt"};
            file.write(m);
        } else if (valg == 3) {
            ImageFile file {"data/img2"};
            Image<50, 50> img = file.read();
            std::cout << "PRINTING OUT IMAGE FROM FILE!!" << std::endl;
            std::cout << img << std::endl;
        } else if (valg == 4) {
            Window<50, 50> win {};
            State<50,50> s {};
            win.drawImage(s);
            win.wait_for_close();
        } else if (valg == 5) {
            GetPixelsFromImageFile<400, 400> handle;
            handle.getPixels();
        }
    }while (valg != 0);
    
    return 0;
}

//------------------------------------------------------------------------------
