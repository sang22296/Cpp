#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Matrix {

public:
    Matrix(size_t rows, size_t cols);
    void display();
    size_t getRow() { return this->mRow; };
    size_t getCol() { return this->mCol; };
    vector<double>& operator[](int i);
private:
    size_t mRow;
    size_t mCol;
    vector< vector<double> > mData;
};
