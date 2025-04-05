#ifndef IMAGE_FILE
#define IMAGE_FILE

#include <string>
#include <include/matrix.h>
#include <include/image.h>
#include <fstream>
#include <iostream>

class ImageFile {
    private:
        const std::string fileName;
    
    public:
        ImageFile(const std::string fileName);
        void write(Image<50, 50> img) const;
        Image<50, 50> read();
};

# endif