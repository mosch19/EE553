//
// Created by Michael Moschetti on 9/30/17.
//
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex() {
        real = 0.0;
        imag = 0.0;
    }
    // CLION didn't like this not being explicit
    explicit Complex(double r) {
        real = r;
        imag = 0.0;
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

    // overload the - operator to unary - why is this allowed to be in the class?
    Complex operator - () {
        Complex result;
        result.real = -real;
        result.imag = -imag;
        return result;
    }

    friend ostream& operator << (ostream& result, const Complex& a);
    friend Complex operator + (const Complex&a, const Complex& b);
};

// overload the + operator
Complex operator + (const Complex& a, const Complex& b) {
    Complex result;
    result.imag = a.imag + b.imag;
    result.real = a.real + b.real;
    return result;
}

// overload the << operator
ostream& operator << (ostream& result, const Complex& a) {
    result << "(" << a.real << " + " << a.imag << "i)";
    return result;
}

int main() {

    Complex c1(1.5,2.0);
    Complex c2(-1.3); // -1.3 + 0.0i
    Complex c5;  // 0+0i
    Complex c3 = c1 + c2;
    Complex c4 = -c1; // unary operator has only one parameter
    cout << c1 << c3 << c4 << '\n';

    return 0;
}

