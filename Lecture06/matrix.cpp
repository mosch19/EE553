//
// Created by mosch on 10/6/17.
//
#include <iostream>
#include <vector>
using namespace std;

class BadSize {
private:
    const char* filename;
    int linenum;
public:
    BadSize(const char* filename, int linenum)
            : filename(filename), linenum(linenum) {}
    friend ostream& operator <<(ostream& s, const BadSize& b) {
        return s << "BadSize: " << b.filename << ": " << b.linenum << endl;
    }
};

class Matrix {
private:
    double* p;
    int rows;
    int cols;
public:
    // initializer list is super useful. if you don't specify double init == 0
    Matrix (int r, int c, double init = 0) : p(new double[r*c]), rows(r), cols(c) {
        // more efficient with 1 loop
        for (int i = 0; i < r * c; i++) {
            p[i] = init;
        }
    }
    ~Matrix() {
        delete [] p;
    }
    double& operator () (int i, int j) {
        return p[i * cols + j];
    }
    double operator () (int i, int j) const {
        return p[i * cols + j];
    }
    // can do this which is pretty cool. WHich is like how the chinese embassy in NY is technically in china...
    friend Matrix operator + (const Matrix& a, const Matrix& b) {
        if (a.rows != b.rows || a.cols != b.cols) {
            // cerr << " AAAAAAGH ";
            // can't use return to exit need to break out with an exception
            throw BadSize(__FILE__, __LINE__);  // symbols that start with two underscores are reserved by the language; 1 underscore belongs to the compiler
        }
    }
};

int main() {

    Matrix m1(3, 4);  // initialize all to zero
    m1(1, 2) = 1.5;
    m1(2, 2) = -1.0;
    const Matrix m2(3, 4, 3.0);
    try {
        cout << m2(1, 1);
        Matrix m3 = m1 + m2;
        Matrix m4(2, 2);
        Matrix m5 = m1 + m4; // not the same size. should not be able to add these
    } catch(const BadSize& e) {
        cout << e << endl;
    }


    return 0;
}
