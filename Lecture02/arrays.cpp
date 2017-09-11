//
// Created by mosch on 9/8/17.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    int x[5];
    const int size = 10;
    int w[3] = {3, 4, 5};
    int b[size] = {0};
    double m[4][4] = {
            {1.0, 0, 0, 0},
            {0, 1, 0, 0},
            {0, 0, 1, 0},
            {0, 0, 0, 1}
    };

    for (int i = 0; i < size; i++) {
        b[i] = i;
    }

    for (int i = 0; i < sizeof(b)/sizeof(int); i ++) {
        b[i] = size - i;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            m[i][j] *= 2;
        }
    }
    int n;
    cout << "Please enter matrix size" << endl;
    cin >> n;
    double m2[n];   //dynamic memory!
    for (int i = 0; i < n; i++) {
        m2[i] = 0;
    }
    double m3[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m3[i][j] << ' ';
        }
    }
    return 0;
}
