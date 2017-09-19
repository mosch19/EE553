//
// Created by Michael Moschetti on 9/15/17.
//
#include <iostream>
#include <cmath>
using namespace std;

void rect2polar (double x, double y, double& r, double& theta) {
    r = sqrt(x*x + y*y); // pow is slower
    theta = atan2(y, x); // NEVER USE ATAN since it doesnt account for x == 0 or close to zero
}

void polar2rect(double r, double theta, double& x, double& y) {
    x = r * cos(theta);
    y = r * sin(theta);
}

int main() {
    bool choice;
    double x, y, r, theta;
    cout << "Enter 0 for rect2polar or 1 for polar2rect." << endl;
    cin >> choice;
    if (choice) {
        cout << "Enter r, theta." << endl;
        cin >> r >> theta;
        polar2rect(r, theta, x, y);
        cout << "X: " << x << ", Y: " << y << endl;
    } else {
        cout << "Enter x, y." << endl;
        cin >> x >> y;
        // r, theta passed by reference
        rect2polar(x, y, r, theta);
        cout << "R: " << r << ", Theta: " << theta << endl;
    }

    return 0;
}
