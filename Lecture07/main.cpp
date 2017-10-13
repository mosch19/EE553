#include <iostream>
#include "Account.h"
#include "Bank.h"
using namespace std;


int main() {

    Account a("Mike", "Moschetti", 123456);
    a.deposit(1000000000);
    cout << a << endl;

    return 0;
}