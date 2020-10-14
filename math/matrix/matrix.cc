#include "matrix.h"

Matrix::Matrix(size_t rows, size_t cols)
{
    this->mRow = rows;
    this->mCol = cols;
    vector< vector<double> > v(rows);
    for(int i=0; i < rows; i++)
    {
        vector<double> rows_v(cols);
        v[i] = rows_v;
    }
    this->mData = v;
}

vector<double>& Matrix::operator[](int i)
{
    return this->mData[i];
}

void Matrix::display()
{
    for(int i=0; i < this->mRow; i++)
    {
        for (int j=0; j < this->mCol; j++)
        {
            cout << this->mData[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    Matrix a(2,2);
    a[0][0] = 1;
    a[0][1] = 3;
    a[1][0] = 5;
    a[1][1] = 7;
    cout << "Size: " << a.getRow() << " " << a.getCol() << endl;
    a.display();
    return 0;
}
