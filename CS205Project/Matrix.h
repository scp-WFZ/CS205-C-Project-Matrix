#include <vector>
#include <complex>

#ifndef CS205PROJECT_MATRIX_H
#define CS205PROJECT_MATRIX_H

using namespace std;

template <typename T>
class Matrix{
private:
    vector<vector<T>> matrix;
public:
    //constructor
    Matrix();
    Matrix(int row, int col);
    Matrix(const Matrix<T> &other);
    Matrix(vector<vector<T>> &other);
    //operator overload
    friend ostream &operator<<(ostream &os, const Matrix<T> &other) {
        for (const auto &i : other.matrix) {
            for (const auto &j : i) {
                os<<j<<" ";
            }
            os<<endl;
        }
        return os;
    }
    Matrix<T> &operator=(const Matrix<T> &mat);
};




template<typename T>
Matrix<T>::Matrix(){
    Matrix(0,0);
}

template<typename T>
Matrix<T>::Matrix(int row, int col) {
    this->matrix = vector<vector<T>>(max(row, 0), vector<T>(max(col, 0)));
}

template<typename T>
Matrix<T>::Matrix(const Matrix<T> &other) {
    this->matrix = vector<vector<T>>(other.matrix);
}

template<typename T>
Matrix<T>::Matrix(vector<vector<T>> &other) {
    this->matrix = vector<vector<T>>(other);
}

template<typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix<T> &other) {
    if (this != &other) {
        this->matrix = vector<vector<T>>(other.matrix);
    }
    return *this;
}


#endif //CS205PROJECT_MATRIX_H
