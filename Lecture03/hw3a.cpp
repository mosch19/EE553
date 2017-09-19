//
// Created by Michael Moschetti on 9/18/17.
//
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex() {
        real = 1.0;
        imag = -1.0;
    }
    Complex(double r, double i) {
        real = r;
        imag = i;
    }
    double getReal() const {
        return real;
    }
    double getImag() const {
        return imag;
    }
    void print() const {
        cout << "(" << real << ", " << imag << 'i' << ")";
    }
    Complex add(Complex c) {
        Complex ans;
        ans.real = real + c.real;
        ans.imag = imag + c.imag;
        return ans;
    }
};

int main() {

    Complex c1(1.0, 2.5); // real=1.0, imag = 2.5
    Complex c2(2.0, 1.5);
    const Complex c3 = c1.add(c2);  // add two complex numbers
    c3.print(); cout << "\n";
    cout << c3.getReal() << ", " << c3.getImag();

    return 0;
}

