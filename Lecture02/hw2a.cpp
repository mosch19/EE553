//
// Created by mosch on 9/11/17.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (signed int i = -45; i < 41; i += 5) {
        for (int j = 5; j < 61; j += 5) {
            cout << int(35.74 + (0.6215 * i) - (35.75 * pow(j, 0.16)) + ((0.4275 * i) * pow(j, 0.16))) << ' ';
        }
        cout << endl;
    }

    return 0;
}
