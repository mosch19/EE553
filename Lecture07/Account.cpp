//
// Created by mosch on 10/13/17.
//
#include "Account.h"
using namespace std;

Account::Account(const string& firstName, const string& lastName, uint64_t id)
        : firstName(firstName), lastName(lastName), id(id), balance(0) {
}

// this function should be inline since it is so simple. rule is that if it is two lines or less it should be inline. NOT LOOPS
void Account::deposit(double amount) {
    balance += amount;
}

// this should not be inline since it is a lot of assembly for this
ostream& operator << (ostream& s, const Account& a) {
    return s << a.firstName << "\t" << a.lastName << "\t" << a.id << "\t" << a.balance;
}
