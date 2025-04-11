#include <include/image.h>
#include <include/image_file.h>
#include <include/getPixelsFromImageFile.h>
#include <include/window.h>
#include <include/solve.h>

#include <include/rectangleShape.h>
#include <include/circleShape.h>

#include <memory>


int main() {

    std::shared_ptr<Shape> shape1 = std::make_shared<RectangleShape>(5, 5);
    std::shared_ptr<Shape> shape2 = std::make_shared<RectangleShape>(2, 2);
    std::vector<std::shared_ptr<Shape>> shapes;
    shapes.push_back(std::move(shape1));
    shapes.push_back(std::move(shape2));
    Solver solve {shapes, "assets/medium.png"};
    Window win {solve.getInput().getRows(), solve.getInput().getCols()};

    for (int i = 0; i < 200; i++) {
        solve.step();
        win.next_frame();
        win.drawImage(solve.getGenerated());
        std::string filename = "data/frame" + std::to_string(i);
        ImageFile fil {filename};
        fil.write(solve.getGenerated());
        
    }
    
    win.wait_for_close();

    return 0;
}
