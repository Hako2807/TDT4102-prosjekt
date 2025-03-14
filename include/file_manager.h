#ifndef FILE_MANAGER
#define FILEN_MANAGER

#include <string>
template<typename T>
class FileManager {
    private:
        std::string fileName;
    
    public:
        FileManager(std::string fileName) : fileName {fileName}  {};
        void write(std::vector<T> vals) const {} ;
        std::vector<T> read() {};
};

# endif