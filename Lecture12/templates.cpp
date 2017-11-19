#include <iostream>
#include <string>
using namespace std;

int f(int x) {
    return 2*x;
}

double f(double x) {
    return 2*x;
}

template <typename T>
void swapVars(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    
    int y = f(2);
    double y2 = f(2.5);
    cout << f(2.2f);    // doesn't match either function. need templates!
    cout << f(double(2.2f));
    
    int a = 2, b = 3;
    cout << a << ' ' << b << '\n';
    swapVars(a, b);
    cout << a << ' ' << b << '\n';
    
    string c = "abc", d = "def";
    cout << c << ' ' << d << '\n';
    swapVars(c, d);
    cout << c << ' ' << d << '\n';

    return 0;
}