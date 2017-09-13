//
// Created by Michael Moschetti on 9/12/17.
//
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int numDigits(int x) {
    int digits = 0;
    while (x) {
        x /= 10;
        digits++;
    }
    return digits;
}

string numtoString(int x) {
    string result;
    string temp;
    int digits = numDigits(x);
    char y[digits];
    for (int i = 0; i < digits; i++) {
        y[i] = x % 10 + '0';
        x /= 10;
        temp += y[i];
    }
    result = temp;
    for (int i = 0; i < digits + 1; i++) {
        result[i - 1] = temp[digits - i];
    }
    return result;
}

int main() {
    int choice;
    cout << "Please enter a number to convert to a string." << endl;
    cin >> choice;
    while (cin.fail() || choice <= 0) {
        cout << "Please enter something reasonable." << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> choice;
    }
    cout << "Result: " << numtoString(choice) << " is of type " << typeid(numtoString(choice)).name() << endl;

    return 0;
}
