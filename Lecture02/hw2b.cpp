//
// Created by mosch on 9/11/17.
//
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(unsigned long long p) {
    if (p == 4) {
        return false;
    }
    for (int i = 2; i < sqrt(p); i++) {
        if (p % i == 0) {
            return false;
        }
        cout << i << ' ';
    }
    cout << endl;
    return true;
}

int main() {
    string result;
    unsigned long long choice = 0;

    cout << "Please enter a number to see if it is prime." << endl;
    cin >> choice;
    while(cin.fail() || choice <= 1) {
        cout << "Please enter something reasonable!" << endl;
        cin.clear();
        cin.ignore(255, '\n');
        cin >> choice;
    }

    (isPrime(choice)) ? result = "is prime.":result = "is not prime.";
    cout << "The value " << choice << ' ' << result << endl;

    return 0;
}

