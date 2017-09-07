//
// Created by Michael Moschetti on 9/5/17.
//
#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    int64_t factorial = 1;
    int value;

    cout << "Enter a number to determine the factorial." << endl;
    cin >> value;
    while (cin.fail() || value <= 0) {
        cout << "Please enter something reasonable." << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> value;
    }

    //  Still not enough space to store 30!
    while (value > 1) {
        factorial *= value;
        value --;
    }
    cout << "Result: " << factorial << endl;

    return 0;
}
