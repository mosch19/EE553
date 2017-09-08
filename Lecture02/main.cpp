#include <iostream>
#include <cstdint>
#include <cmath>
using namespace std;

//  DON'T USE MATH.H ANYMORE IT IS OLD NOT FOR C++ 11!

void f() {
        cout << "Hello!" << '\n';
}

int g(int a, int b) {
    return a + b;
}

int hypot(int a, int b) {
    return sqrt(a*a + b*b);
}

int main() {

    /* Data types review
    double a = 3 / 2;
    // 2 is type promoted to 2.0
    // multiplicative operators have same precedence and go left to right
    // data type doesn't matter the numbers involved do
    double b = 3.0 / 2;
    double c = b * 2;
    int d = 3 / 2 * 2;
    int e = 7 % 3 / 3;
    int f = b * 3;
    cout << "A: " << a << ", B: " << b << ", C: " << c << ", D: " << d << ", E: " << e << ", F: " << f << endl;

    int x = 0;
    while (x < 8) {
        cout << x << ' ';
        x++;
    }
    cout << '\n';

    for (int i = 0; i < 5; i++) {
        cout << i << ' ';
    }
    cout << '\n';

    int sum = 0;
    for (int j = 2; j < 12; j +=2)
        sum += j;
    cout << sum << '\n';

    for (int i = 1; i < 1024; i *=2)
        cout << i << ' ';
    cout << '\n';

    for (int j = 2; j < 100; j *=3)
        cout << j << ' ';
    cout << '\n';

    // right hand side first so * 4
    for (int j = 3; j < 100; j *=3 +1)
        cout << j << ' ';
    cout << '\n';

    for (int j = 3; j < 100; j = j * 3 + 1)
        cout << j << ' ';
    cout << '\n';

    for (int k = 1; k < 10; k *= 2)
        cout << k << ' ';
    cout << '\n';
     */

    f; //   this does nothing
    f();
    cout << g(4, 7) << '\n';
    cout << hypot(4, 3) << '\n';

    return 0;
}