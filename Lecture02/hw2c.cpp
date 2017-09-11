//
// Created by mosch on 9/11/17.
//
#include <iostream>
#include <cmath>
using namespace std;

//  garbage. why am i checking even numbers?
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
    for (int i = low; i <= high; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    unsigned long long low = 0;
    unsigned long long high = 0;

    cout << "Please enter a low value for the prime range." << endl;
    cin >> low;
    while(cin.fail() || low <= 1) {
        cout << "Please enter something reasonable!" << endl;
        cin.clear();
        cin.ignore(255, '\n');
        cin >> low;
    }

    cout << "Please enter a high value for the prime range." << endl;
    cin >> high;
    while(cin.fail() || high <= 1) {
        cout << "Please enter something reasonable!" << endl;
        cin.clear();
        cin.ignore(255, '\n');
        cin >> high;
    }

    if (low >= high) {
        cout << "Enter in new numbers..." << endl;
        exit(0);
    }

    cout << "There are " << countPrimes(low, high) << " prime numbers between " << low << " and " << high << "." << endl;

    return 0;
}
