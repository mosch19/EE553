//
// Created by mosch on 10/13/17.
//

#pragma once
#include <string>

class Account {
private:
    std::string firstName;
    std::string lastName;
    uint64_t id;
    double balance;
public:
    // this function cannot be inline
    Account(const std::string& firstName, const std::string& lastName, uint64_t id);
    void deposit(double amount);
    friend std::ostream& operator << (std::ostream& s, const Account& a);
};
