//
// Created by mosch on 9/29/17.
//
#include <iostream>
#include <cstdint>
using namespace std;

class Matrix {
    double* m;
    uint32_t rows, cols;
    // don't make it 2d array because it is slow and poor code...exaclty what Jonah said
public:
    // if unspecified it will be zero. pretty cool
    Matrix (uint32_t rows, uint32_t cols, double value = 0) {

    }
    // need constructor, destructor, copy constructor, and operator equals
    /*
     * 0 1 2 3
     * 4 5 6 7
     * 8 9 10 11
     */

    double operator ()const (uint32_t r, uint32_t c) {
        return m[r * c + c];
    }
    // this one is not read only
    double& operator () (uint32_t r, uint32_t c) {
        return m[r * c + c];
    }

    // try not to use double for loop as single loop is faster for operator +
};

int main() {
    Matrix a(3, 4, 5.2); // create three rows of four columns of 5.2
    Matrix b(3, 4); // default everyting to zero
    cout << a << '\n';
    // cant return void on this or it will fail
    /*
     * 5.2 5.2 5.2
     * 5.2 5.2 5.2
     * 5.2 5.2 5.2
     *
     */
    Matrix c(3, 4, 1.2);
    // need to overload the operator
    c(0, 0) = -1.5;
    cout << c(2, 2);
    Matrix d = a + c;

    return 0;
}