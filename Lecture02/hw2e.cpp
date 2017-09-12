//
// Created by mosch on 9/11/17.
//
#include <iostream>
using namespace std;

//  MUST SUPPORT UP TO N = 30!
int fact(long long int x) {
    int factorial = 1;
    while (x > 1) {
        factorial *= x;
        x--;
    }
    return factorial;
}

int fact2() {

}

int fibo(int f) {
    int result[f] = { 0 };
    result[0] = 1;
    result[1] = 1;
    result[2] = 1;
    for (int i = 3; i < f; i++) {
        result[i] = result[i - 2] + result[i - 1];
    }
    return result[f];
}

int fibo2() {

}

int choose() {

}

int main() {
    cout << fibo(3) << endl;
    /*
    cout << fact(5) << ' ' << fact2(5) << '\n';
    cout << fact(15) << ' ' << fact2(15) << '\n';
    cout << fibo(5) << ' ' << fibo2(5) << '\n';
    cout << fibo(13) << ' ' << fibo2(13) << '\n';
    cout << choose(52,6) << '\n';
    */
    return 0;
}
