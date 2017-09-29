//
// Created by Michael Moschetti on 9/11/17.
//
#include <iostream>
#include <climits>
#include <cstdint>
using namespace std;

//  MUST SUPPORT UP TO N = 30!
double long fact( double long x) {
    double long factorial = 1;
    while (x > 1) {
        factorial *= x;
        x--;
    }
    return factorial;
}

double long fact2(double long x) {
    if (x == 1) {
        return 1;
    } else {
        return x * fact2(x - 1);
    }
}

long int fibo(int f) {
    int result[f] = { 0 };
    result[1] = 1;
    result[2] = 1;
    for (int i = 3; i <= f; i++) {
        result[i] = result[i - 2] + result[i - 1];
    }
    return result[f];
}

long int fibo2(int f) {
    if (f <= 1) {
        return f;
    } else {
        return fibo2(f - 1) + fibo2(f - 2);
    }
}

double long choose(double long n, double long r) {
    return fact2(n) / (fact2(r) * fact2(n - r));
}

int main() {

    // cout automatically compresses to scientific notation
    cout << fact(5) << ' ' << fact2(5) << '\n';
    cout << fact(15) << ' ' << fact2(15) << '\n';
    cout << fibo(5) << ' ' << fibo2(5) << '\n';
    cout << fibo(13) << ' ' << fibo2(13) << '\n';
    cout << choose(52,6) << '\n';

    return 0;
}
