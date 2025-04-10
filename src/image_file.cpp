#include <include/image_file.h>

ImageFile::ImageFile(const std::string fileName) : fileName {fileName} {
}

void ImageFile::write(const Image& img) const {
    std::ofstream fileStream  {fileName};
    fileStream << 50 << " " << 50 << std::endl;
    TDT4102::Color c;
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) {
            c = img.getPixel(i, j);
            fileStream << c.redChannel << " " << c.greenChannel << " " << c.blueChannel << " " << c.alphaChannel << std::endl;
        }
    }
    fileStream.close();
}

Image ImageFile::read() {
    std::ifstream fileStream {fileName};
    int rows, cols;
    
    TDT4102::Color c;
    fileStream >> rows >> cols;
    Image img {rows, cols};
    for (int i = 0; i < rows; i ++) {
        for (int j = 0; j < cols; j ++) {
            fileStream >> c.redChannel >> c.greenChannel >> c.blueChannel >> c.alphaChannel; 
            img.setPixel(i, j, c);
        }
    }
    fileStream.close();
    return img;

}