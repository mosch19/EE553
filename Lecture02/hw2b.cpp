//
// Created by Michael Moschetti on 9/11/17.
// Sources: https://en.wikipedia.org/wiki/Prime_number (for stopping at sqrt(n))
// https://stackoverflow.com/questions/28852159/unsigned-long-long-variable-initialized-with-negative-value
// http://www.cplusplus.com/reference/istream/istream/peek/
//
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(unsigned long long p) {
    if (p == 4) {
        return false;
    }
    for (int i = 2; i <= sqrt(p); i++) {
        if (p % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string result;
    unsigned long long choice = 0;
    bool a;

    cout << "Please enter a number to see if it is prime." << endl;
    cin >> ws;
    if (cin.peek() == '-') {
        cout << "You entered a negative value..." << endl;
        a = true;
    } else {a = false;}
    cin >> choice;
    while(cin.fail() || a || choice <= 1) {
        cout << "Please enter something reasonable!" << endl;
        cin.clear();
        cin.ignore(255, '\n');
        cin >> ws;
        if (cin.peek() == '-') {
            cout << "You entered a negative value..." << endl;
            a = true;
        } else {a = false;}
        cin >> choice;
    }

    (isPrime(choice)) ? result = "is prime.":result = "is not prime.";
    cout << "The value " << choice << ' ' << result << endl;

    return 0;
}

