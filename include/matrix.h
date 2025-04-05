#ifndef MATRIX
#define MATRIX

#include<array>
#include<iostream>
#include<ostream>
#include <AnimationWindow.h>


template<typename T, int Rows, int Cols>
class Matrix {
    private:
        std::array<std::array<T, Cols>, Rows> matrix;

    public:
        Matrix<T, Rows, Cols>(){
            for (int i = 0; i < Rows; i++){
                for (int j = 0; j < Cols; j++) {
                    matrix.at(i).at(j) = T(1, 68, 3, 255);
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



inline std::ostream& operator<<(std::ostream& os, const TDT4102::Color& c) {
    std::cout << "(" << c.redChannel << ", " << c.greenChannel << ", " << c.blueChannel << ", " << c.alphaChannel << ")";
    return os;
}

#endif