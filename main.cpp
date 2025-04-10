#include <include/image.h>
#include <include/image_file.h>
#include <include/getPixelsFromImageFile.h>
#include <include/window.h>
#include <include/rectangleShape.h>
#include <include/circleShape.h>

int main() {
    int valg = 0;
    do{
        std::cout << "------------------MENY------------------" << std::endl;
        std::cout << "0) Avslutt" << std::endl;
        std::cout << "1) Run programmet" << std::endl;
        std::cout << "2) Test å skriv piksler til fil" << std::endl;
        std::cout << "3) Test å les bilde fra fil" << std::endl;
        std::cout << "4) Test AnimationWindow" << std::endl;
        std::cout << "5) Test få piksler fra utenom bilde" << std::endl;
        std::cout << "6) Test shapes" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Velg et program (0-10): ";
        std::cin >> valg;

        if (valg == 1) {
            std::cout << "Welcome to this project!!!!!!" << std::endl;
            int choice;
            do {
                std::cout << "Choose what to do: " << std::endl;
                std::cout << "      0) Exit :(" << std::endl;
                std::cout << "      1) Show previous image" << std::endl;
                std::cout << "      2) Generate new image" << std::endl;
                std::cout << "Choise: ";
                std::cin >> choice;

                if (choice == 1) {

                } else if (choice == 2) {

                }

            } while (choice != 0);

            
        } else if (valg == 2) {
            Image m {50, 50};
            ImageFile file {"data/img2.txt"};
            file.write(m);
        } else if (valg == 3) {
            ImageFile file {"data/img2"};
            Image img = file.read();
            std::cout << "PRINTING OUT IMAGE FROM FILE!!" << std::endl;
            std::cout << img << std::endl;
        } else if (valg == 4) {
            Window win {50, 50};
            State s {50, 50};
            win.drawImage(s);
            win.wait_for_close();
        } else if (valg == 5) {
            const char* path = "assets/cpp_test_image.png";
            GetPixelsFromImageFile handle {path};
            State state = handle.getPixels();
            Window win {handle.getWidth(), handle.getHeight()};
            win.drawImage(state);
            win.wait_for_close();
        } else if (valg == 6) {
            Window win {200, 200};
            State img {200, 200};
            RectangleShape rect {20, 20};
            CircleShape circ {25};
            rect.place(img, {5, 5}, TDT4102::Color::blue);
            rect.place(img, {10, 15}, TDT4102::Color::bisque);
            rect.place(img, {40, 45}, TDT4102::Color::bisque);
            circ.place(img, {20, 20}, TDT4102::Color::black);

            win.drawImage(img);
            win.wait_for_close();
        }

    }while (valg != 0);
    
    return 0;
}

//------------------------------------------------------------------------------
