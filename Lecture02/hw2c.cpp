//
// Created by Michael Moschetti on 9/11/17.
// used functions and sources from my submission of hw2b. (where the .peek & sqrt(p) came from)
//
#include <iostream>
#include <limits>
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

int countPrimes(unsigned long long low, unsigned long long high) {
    int count = 0;
    for (unsigned long long i = low; i <= high; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    unsigned long long low = 0;
    unsigned long long high = 0;
    unsigned long long temp = 0;
    bool a;

    cout << std::numeric_limits<unsigned long long>::max() << '\n';

    cout << "Please enter a low value for the prime range." << endl;
    cin >> ws;
    if (cin.peek() == '-') {
        cout << "You entered a negative value..." << endl;
        a = true;
    } else {a = false;}
    cin >> low;
    while(cin.fail() || low <= 1 || a) {
        cout << "Please enter something reasonable!" << endl;
        cin.clear();
        cin.ignore(255, '\n');
        cin >> ws;
        if (cin.peek() == '-') {
            cout << "You entered a negative value..." << endl;
            a = true;
        } else {a = false;}
        cin >> low;
    }

    cout << "Please enter a high value for the prime range." << endl;
    cin >> ws;
    if (cin.peek() == '-') {
        cout << "You entered a negative value..." << endl;
        a = true;
    } else {a = false;}
    cin >> high;
    while(cin.fail() || high <= 1 || a) {
        cout << "Please enter something reasonable!" << endl;
        cin.clear();
        cin.ignore(255, '\n');
        cin >> ws;
        if (cin.peek() == '-') {
            cout << "You entered a negative value..." << endl;
            a = true;
        } else {a = false;}
        cin >> high;
    }

    // in case user enters higher number first
    if (low > high) {
        cout << "Switching the values..." << endl;
        temp = high;
        high = low;
        low = temp;
    }

    cout << "There are " << countPrimes(low, high) << " prime numbers between " << low << " and " << high << "." << endl;

    return 0;
}
