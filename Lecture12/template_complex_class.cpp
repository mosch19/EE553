#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
class Complex {
private:
    T real;
    T imag;
public: 
    Complex(T real = 0, T imag = 0) : real(real), imag(imag) {}
    friend Complex operator + (const Complex& a, const Complex& b) {
        return Complex(a.real + b.real, a.imag + b.imag);
    }
    friend ostream& operator << (ostream& s, Complex& a) {
        s << "(" << a.real << ", " << a.imag << "i)";
    }
    T abs() {
        return sqrt(real*real + imag*imag);
    }
};

int main(){
  Complex<float> a(1.0f, 1.5f);
  Complex<double> b(1.0, 1.5);
  Complex<long double> c(1.0L, 2.5L);

  Complex<double> d(1.5, 1.0);
  Complex<double> e = b + d;
  cout << e << '\n';
  cout << a.abs() << '\n'; // compute the absolute value 
  cout << b.abs() << '\n'; // compute the absolute value 
  cout << c.abs() << '\n'; // compute the absolute value 
}