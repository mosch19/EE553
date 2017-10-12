//
// Created by Michael Moschetti on 10/11/17.
// Sources: BadSize class pulled from lecture...
//
#include <iostream>
#include <cstdint>
#include <iomanip>
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
    double* m;
    uint32_t rows, cols;
public:
    // CONSTRUCTOR
    Matrix (uint32_t r, uint32_t c, double init = 0) : m(new double[c*r]), cols(c), rows(r)  {
        for (uint32_t i = 0; i < r*c; i++) {
            m[i] = init;
        }
    }
    // DECONSTRUCTOR
    ~Matrix() {
        delete [] m;
    }
    // COPY CONSTRUCTOR
    Matrix(const Matrix& orig) : m(new double[orig.cols*orig.rows]), cols(orig.cols), rows(orig.rows) {
        for (uint32_t i = 0; i < orig.cols*orig.rows; i++) {
            m[i] = orig.m[i];
        }
    }
    // OPERATOR =
    Matrix& operator = (const Matrix& orig) {
        Matrix copy(orig);
        swap(copy.m, m);
        swap(copy.rows, rows);
        swap(copy.cols, cols);
    }
    // OPERATOR ()
    double operator () (uint32_t r, uint32_t c) const {
        return m[r * c + c];
    }
    // this one is not read only
    double& operator () (uint32_t r, uint32_t c) {
        return m[r * c + c];
    }
    // OPERATOR <<
    friend ostream& operator << (ostream& s, Matrix& m) {
        int count = 0;
        for (uint32_t i = 0; i < m.rows*m.cols; i++) {
            if (count == m.cols) {
                count = 0;
                s << endl;
            }
            s << setw(4) << m.m[i] << setw(4);
            count++;
        }
        s << endl;
        return s;
    }
    // OPERATOR +
    friend Matrix operator + (const Matrix& a, const Matrix& b) {
        // added for future changes to assignment
        if (a.rows != b.rows || a.cols != b.cols) {
            throw BadSize(__FILE__, __LINE__);
        }
        Matrix result(a.rows, b.cols);
        for (uint32_t i = 0; i < result.cols*result.rows; i++) {
            result.m[i] = a.m[i] + b.m[i];
        }
        return result;
    }
    // OPERATOR -
    friend Matrix operator - (const Matrix& a, const Matrix& b) {
        // added for future changes to assignment
        if (a.rows != b.rows || a.cols != b.cols) {
            throw BadSize(__FILE__, __LINE__);
        }
        Matrix result(a.rows, b.cols);
        for (uint32_t i = 0; i < result.cols*result.rows; i++) {
            result.m[i] = a.m[i] - b.m[i];
        }
        return result;
    }
    // OPERATOR *
    friend Matrix operator * (const Matrix& a, const Matrix& b) {
        // added for future changes to assignment
        if (a.rows != b.rows || a.cols != b.cols) {
            throw BadSize(__FILE__, __LINE__);
        }
        Matrix result(a.rows, b.cols);
        for (uint32_t i = 0; i < result.cols*result.rows; i++) {
            result.m[i] = a.m[i] - b.m[i];
        }
        return result;
    }
};

int main() {
    Matrix a(3,4, 5.2); // create 3 rows of 4 columns containing 5.2
    Matrix b(3,4); // defaults to 0.0
    cout << a << '\n';
    /*
        5.2 5.2 5.2 5.2
        5.2 5.2 5.2 5.2
        5.2 5.2 5.2 5.2

     */

    Matrix c(3,4,1.2);

    cout << c(2,2);
    c(0,0) = -1.5;
    /*
c=
        -1.5 1.2 1.2 1.2
         1.2 1.2 1.2 1.2
         1.2 1.2 1.2 1.2

     */
    Matrix d = a + c;
    /*
        3.7 6.4 6.4 6.4
        6.4 6.4 6.4 6.4
        6.4 6.4 6.4 6.4
     */
    cout << d;
    Matrix e = a - c;

    /* OPTIONAL
    Matrix f(4,3,1.5);
    Matrix g = f * b; // matrix multiplication
    */
    return 0;
}
