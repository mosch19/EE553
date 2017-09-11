//
// Created by mosch on 9/11/17.
//
#include <iostream>
using namespace std;

int main() {
    int a = 5 % 2;
    double b = 5 % 2 + 3 % 2;
    char c = 'A' + 1;
    float d = 1.0 + 0.5;
    double e = 2.5;
    double f = (int)5.0 / 2.0;
    double g = int(5.0) / 2.0;
    int h = int(5.0/2.0);

    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << f << ' ' << g << ' ' << h << endl;

    return 0;
}
