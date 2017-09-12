//
// Created by mosch on 9/11/17.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int i = 5; i < 61; i += 5) {
        for (signed int j = 40; j > -46; j -= 5) {
            cout << int(35.74 + (0.6215 * j) - (35.75 * pow(i, 0.16)) + ((0.4275 * j) * pow(i, 0.16))) << ' ';
        }
        cout << endl;
    }
    return 0;
}
