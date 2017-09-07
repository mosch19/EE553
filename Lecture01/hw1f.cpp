//
// Created by Michael Moschetti on 9/1/17.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float s1 = 0.0f;
    float s2 = 0.0f;
    float prev = 1.0f;

    for (float i = 1.0; i < 10001.0; i++) {
        s1 += (1.0 / (i * i));
    }
    cout << "Forward: " << sqrt(6 * s1) << endl;

    for (float i = 10000.0; i > 0.0; i--) {
        s2 += (1.0 / (i * i));
    }
    cout << "Backwards: " << sqrt(6 * s2) << endl;

    float i = 1.0;
    float s3 = 0.0f;
    int finished = 0;
    while (prev != s3) {
        prev = s3;
        s3 += (1.0 / (i * i));
        // cout << s3 << ' ';
        finished = i;
        i++;
    }
    cout << "While loop finished in iteration: " << finished << endl;
    cout << "Value: " << sqrt(6 * s3) << endl;

    return 0;
}
