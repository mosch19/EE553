//
// Created by Michael Moschetti on 9/5/17.
//
#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    int64_t choice;
    cout << "Please enter an integer > 0." << endl;
    cin >> choice;
    while (cin.fail() || choice <= 0) {
        cout << "Please enter something reasonable." << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> choice;
    }

    while (choice != 1) {
        if (choice % 2 == 0) {
            choice /= 2;
        } else {
            choice = choice * 3 + 1;
        }
        cout << choice << ' ';
    }

    return 0;
}
