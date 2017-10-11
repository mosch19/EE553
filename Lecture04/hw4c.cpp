//
// Created by Michael Moschetti on 10/11/17.
//
#include <iostream>
#include <cstdint>
#include <iomanip>
using namespace std;

class Bitmap {
private:
    uint32_t* rgba;
    uint32_t rows,cols;
public:
    // CONSTRUCTOR
    Bitmap(uint32_t r, uint32_t c, uint32_t init = 0) : rgba(new uint32_t[c*r]), cols(c), rows(r) {
        for (uint32_t i = 0; i < c*r; i++) {
            rgba[i] = init;
        }
    }
    // DECONSTRUCTOR
    ~Bitmap() {
        delete [] rgba;
    }
    // COPY CONSTRUCTOR
    Bitmap(const Bitmap& orig) : rgba(new uint32_t[orig.cols*orig.rows]), cols(orig.cols), rows(orig.rows) {
        for (uint32_t i = 0; i < orig.cols*orig.rows; i++) {
            rgba[i] = orig.rgba[i];
        }
    }
    Bitmap horizLine(uint32_t x1, uint32_t x2, uint32_t y, double color) {
        for (uint32_t i = x1; i < x2; i++) {
            rgba[i+rows*y] = color;
        }
    }
    Bitmap vertLine(uint32_t y1, uint32_t y2, uint32_t x, double color) {
        for (uint32_t i = y1; i < y2; i++) {
            rgba[x+cols*i] = color;
        }
    }
    friend ostream& operator << (ostream& s, const Bitmap& b) {
        int count = 0;
        for (uint32_t i = 0; i < b.cols*b.rows; i++) {
            if (count == b.cols) {
                count = 0;
                s << endl;
            }
            s << setw(4) << b.rgba[i] << setw(4);
            count++;
        }
        s << endl;
        return s;
    }

};

int main() {

    Bitmap b1(3,5); // rows,cols or y,x (NOT x,y)
    cout << b1;
    /*
    r,g,b   rgb = ((r*256 + g)*256 + b
    this is the same as:
    rgb = ((r << 8) + g) << 8) + b
    use setw(4) in iomanip
        0,0,0     0,0,0   255,0,255    0,0,0   255,0,0
        0,0,0     0,0,0   255,0,255    0,0,0   255,0,0
        0,0,0     0,0,0   255,0,255    0,0,0   255,0,0
    */
    Bitmap b2(10,20);
    cout << b2;

    b2.horizLine(3, 15, 0, 1);//0xFF00FF); // go from (3,0) to (15,0) writing color
    b2.vertLine(0, 8, 0, 1);//0x000100);// go from (0,0) to (0,8) writing color

    cout << b2;

    return 0;
}

