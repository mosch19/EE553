//
// Created by Michael Moschetti on 9/11/17.
//
#include <iostream>
using namespace std;

//  MUST SUPPORT UP TO N = 30!
unsigned long long fact(int x) {
    unsigned long long factorial = 1;
    while (x > 1) {
        factorial *= x;
        x--;
    }
    return factorial;
}

unsigned long long fact2(unsigned long long x) {
    if (x == 1) {
        return 1;
    } else {
        return x * fact2(x - 1);
    }
}

int fibo(int f) {
    int result[f] = { 0 };
    result[1] = 1;
    result[2] = 1;
    for (int i = 3; i <= f; i++) {
        result[i] = result[i - 2] + result[i - 1];
    }
    return result[f];
}

int fibo2(int f) {
    if (f <= 1) {
        return f;
    } else {
        return fibo2(f - 1) + fibo2(f - 2);
    }
}

unsigned long long choose(unsigned long long n, unsigned long long r) {
    return fact2(n) / (fact2(r) * fact2(n - r));
}

int main() {
    cout << fact(5) << ' ' << fact2(5) << '\n';
    cout << fact(15) << ' ' << fact2(15) << '\n';
    cout << fibo(5) << ' ' << fibo2(5) << '\n';
    cout << fibo(13) << ' ' << fibo2(13) << '\n';
    cout << choose(52,6) << '\n';

    return 0;
}
