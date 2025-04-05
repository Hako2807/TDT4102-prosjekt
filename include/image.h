#ifndef IMAGE
#define IMAGE

#include <AnimationWindow.h>
#include <include/matrix.h>



template<int Rows, int Cols>
class Image : public Matrix<TDT4102::Color, Rows, Cols> {
    private:
        Matrix<TDT4102::Color, Rows, Cols> pixels;
    public:
        Image<Rows, Cols>() {}
        TDT4102::Color getPixel(int i, int j) const {
            return pixels.getVal(i, j);
        }
        void setPixel(int i, int j, TDT4102::Color c) {
            pixels.setVal(i, j, c);
        }

};
template<int Rows, int Cols>
inline std::ostream& operator<<(std::ostream& os, const Image<Rows, Cols>& m) {
    for (int i = 0; i < m.getNumRows(); i++){
        for (int j = 0; j < m.getNumCols(); j++) {
            std::cout << m.getPixel(i, j) << " ";
        }
        std::cout << std::endl;
    }
    return os;
}


#endif