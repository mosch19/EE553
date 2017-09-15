//
// Created by mosch on 9/15/17.
//
#include <iostream>
using namespace std;

// in C++ all declarations and definitions must end with ;
// a type of object called fraction
class Fraction {
    // always make data PRIVATE
private:
    int numerator;
    int denominator;
public:
    // constructor must be same name as class. this happens every time object is CREATED! can't be const since whole point is assignment
    Fraction() { numerator = 0; denominator = 1; }
    Fraction(int n, int d) {
        if (d == 0) {
            throw "Divide by zero!";
        }
        numerator = n;
        denominator = d;
    }
    // make read only. This will not change the object
    int getNum() const {
        return numerator;
    }
    int getDen() const {
        return denominator;
    }
    // cant be const since assignment is made
    void setNum(int n) {
        numerator = n;
    }
    void setDen(int d) {
        denominator = d;
    }
    void print() const {
        // cout << this->numerator << "/" << this->denominator << endl;
        cout << numerator << "/" << denominator << endl;
    }
    Fraction add(Fraction y) {
        Fraction ans;
        ans.numerator = numerator * y.denominator + denominator * y.numerator;
        ans.denominator = denominator * y.denominator;
        return ans;
    }
    // ONLY YOUR FRIENDS CAN TOUCH YOUR PRIVATE PARTS!
    friend Fraction add(Fraction x, Fraction y);
};

// friend to the faction class
Fraction add(Fraction x, Fraction y) {
    Fraction ans;
    ans.numerator = x.numerator * y.denominator + x.denominator * y.numerator;
    ans.denominator = x.denominator * y.denominator;
    return ans;
}

// you must declare before you can use it!
int main() {
    // Fraction a; // create an object of a type Fraction --> sizeof(Fraction) = 1;
    // Fraction b[100]; // object identity. a and b must have different identitiies. the location in memory is the identitiy
    // Fraction c; // want to be 1/2
    // uninitialized so its printing nonsense
    // methods are function for object in java, member functions are for objects in c++
    // a.getNum() sending object a a message
    // for (int i = 0; i < 100; i++) {
    //    cout << b[i].getNumerator() << "/" << b[i].getDenominator() << endl;
    // }
    /*
    const int x = 5;
    x++;
    cout << x << endl;

    Fraction c;
    const Fraction e(1, 2); // 1/2
    // change this to a.print();
    cout << c.getNum() << "/" << c.getDen() << endl;
    cout << e.getNum() << "/" << e.getDen() << endl;
    c.setNum(34);
    // e.setNum(12);
    cout << c.getNum() << "/" << c.getDen() << endl;
    c.print();
    c.setNum(45);
    c.print();
    */

    Fraction a(1, 2);
    Fraction b(1, 3);
    a.print();
    b.print();
    Fraction c = add(a, b);
    c.print();
    Fraction d = a.add(b);
    d.print();
    // operator overloading! can't do this in java!
    // Fraction e = a + b;

    return 0;
}
