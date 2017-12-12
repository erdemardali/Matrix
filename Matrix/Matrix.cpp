#include <iostream>
#include "Matrix.h"
using namespace std;
int i;

void Matrix::print() const
{
    int size = rowN * colN;
    for(i = 1; i <= size; i++) {
        if(i % colN != 0) {
            cout << data[i - 1] << "\t";
        }

        else{
            cout << data[i - 1] << "\n";
        }
    }
}

Matrix::Matrix()
: rowN(1), colN(1)
{
    int size = rowN * colN;
    data = new float[size];
    for(i = 0; i < size; i++) {
        data[i] = 0;
    }
}

Matrix::Matrix()