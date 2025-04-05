#ifndef MATRIX
#define MATRIX

#include<array>
#include<iostream>
#include<ostream>

struct ColorValues {
    u_char redChannel;
    u_char greenChannel;
    u_char blueChannel;
    u_char alphaChannel;
};

template<typename T, int Rows, int Cols>
class Matrix {
    private:
        std::array<std::array<T, Cols>, Rows> matrix;

    public:
        Matrix<T, Rows, Cols>(){
            for (int i = 0; i < Rows; i++){
                for (int j = 0; j < Cols; j++) {
                    matrix.at(i).at(j) = T(1, 2, 3, 4);
                }
            }
        };
        T getVal(int row, int col) const{
            return matrix.at(row).at(col);
        }
        int getNumRows() const{
            return Rows;
        }
        int getNumCols() const{
            return Cols;
        }
        void setVal(int row, int col, T val) {
            matrix.at(row).at(col) = val;
        }

};
template<typename T, int Rows, int Cols>
std::ostream& operator<<(std::ostream& os, const Matrix<T, Rows, Cols>& m) {
    for (int i = 0; i < m.getNumRows(); i++){
        for (int j = 0; j < m.getNumCols(); j++) {
            std::cout << m.getVal(i, j) << " ";
        }
        std::cout << std::endl;
    }
    return os;
}


std::ostream& operator<<(std::ostream& os, const ColorValues& c) {
    std::cout << "(" << c.redChannel << ", " << c.greenChannel << ", " << c.blueChannel << ", " << c.alphaChannel << ")";
    return os;
}

#endif