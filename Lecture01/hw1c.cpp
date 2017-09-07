//
// Created by Michael Moschetti on 9/1/17.
//
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int gauss;
    for (int i = 1; i < 101; i++) {
        sum += i;
    }
    gauss = (100 * (100 + 1)) / 2;
    cout << "Loop sum from 0 to 100: " << sum << endl;
    cout << "Gauss formula result: " << gauss << endl;

    if (sum != gauss) {
        cout << "Answers don't match!" << endl;
    }

    return 0;
}
