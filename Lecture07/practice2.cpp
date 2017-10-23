//
// Created by mosch on 10/19/17.
//
#include <iostream>
#include <iomanip>
using namespace std;

class Image {
private:
    uint32_t* rgba;
    int rows, cols;
public:
    // constructor
    Image (int r, int c, double init = 0) : rgba(new uint32_t[r*c]), rows(r), cols(c) {
        for (int i = 0; i < r*c; i++) {
            rgba[i] = init;
        }
    }
    // destructor
    ~ Image () {
        delete [] rgba;
    }
    // copy constructor
    Image (const Image& orig) : rows(orig.rows), cols(orig.cols), rgba(new uint32_t[orig.cols*orig.rows]) {
        for (int i = 0; i < rows*cols; i++) {
            rgba[i] = orig.rgba[i];
        }
    }
    // operator =
    Image& operator = (const Image& orig) {
        Image copy(orig);
        swap(copy.rgba, rgba);
        swap(copy.rows, rows);
        swap(copy.cols, cols);
    }
    Image& operator () (const Image& orig) {    // why does this not have to be a friend
        Image copy(orig);
        swap(copy.rgba, rgba);
        swap(copy.rows, rows);
        swap(copy.cols, cols);
    }
    /* ask someone about returning pointer from this function
    uint32_t operator () (int r, int c) {
        uint32_t* p = rgba[r*c];
    }
     */
    // OPERATOR <<
    friend ostream& operator << (ostream& s, Image& m) {
        int count = 0;
        for (uint32_t i = 0; i < m.rows*m.cols; i++) {
            if (count == m.cols) {
                count = 0;
                s << endl;
            }
            s << setw(4) << m.rgba[i] << setw(4);
            count++;
        }
        s << endl;
        return s;
    }
};
int main() {
    Image a(20, 30, 5); // 20 rows 30 columns each, all pixels rgba = 0
    Image b = a; // copy the image
    Image c(a); // also a copy
    //b(5, 5) = 0xFF00FF; // extra credit 3 points, write the operator...what how to do this since it is not included in parameter...
    c = b; // wipe out whatever was in c, overwrite with b
    cout << a << endl;
    cout << "****************************************" << endl;
    cout << b << endl;
    cout << "****************************************" << endl;
    cout << c << endl;
    cout << "****************************************" << endl;
}