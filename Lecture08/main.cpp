#include <iostream>
using namespace std;

class Complex {
private:
    double r, i;
    static int count;
public:
    explicit Complex(double r = 0, double i = 0) : r(r), i(i) {}
    Complex operator -() const {
        return Complex(-r, -i);
    }
};

int main() {

    // if there are scope conflicts the most local item is accessed

    return 0;
}