#include <iostream>
#include <string>
#include <cmath>
#include <cstdint>
using namespace std;

//function review
// (x, y) --> (r, theta)
// for hw wright polar2rect
void rect2polar (double x, double y, double& r, double& theta) {
    r = sqrt(x*x + y*y); // pow is slower
    theta = atan2(y, x); // NEVER USE ATAN since it doesnt account for x == 0 or close to zero
}

// instead of function calls jumping to the stack inline moves this below based on keywords! like a macro in a microproc
inline int f(int x) {
    int y = 2 * x;
    x = 19;
    return y;
}

//this will change the result as x is passed by REFERENCE and no COPY IS MADE
int g(int& x) {
    int y = 2 * x;
    x = 19;
    return y;
}
// all because you say inline does not mean it is inline. Compile with optimize where it wants

//can see this in assembly code with -S at compile time! this will show how using non inline results in value of 4 being moved around which is inefficeient
//can run time ./a.out to see how long the process takes!


// this oop is NOT on the first test. WATCH OUT FOR DATA TYPES!

int main() {
    /*
    // i messed up on the quiz...should not have used type int on the ageInSeconds question...
    // parenthesis around (365 * 24 * 60 * 60) will make code substantially faster since compiler will make constant
    uint8_t a = 0; // 0 to 255
    uint16_t b = 0; // 0 to 65535
    uint32_t c = 0; // compile with -std=c++11
    uint64_t d = 0;

    int32_t i = -12;
    bool j = false;
    j = true;

    cout << sizeof(j) << '\n';
    double d1 = 23.452; // sizeof(d1) == 8 but it may be 1 on another computer
    char y = 'x';
    y = '\n';   //endl char
    y = '\t';   //tab char
    y = '\\';
    y = '\'';
    float f = 1.5f;
    long double d2 = 1.2343L;

     int y = f(2);
     cout << y << '\n';

    int y;
    for (uint64_t i = 0; i < 1000000000LL; i++) {
        y = f(2);
    }
    cout << y << '\n';
    */

    // not passed by reference so a doesnt change
    int a = 2;
    cout << f(a) << endl;
    cout << f(a) << endl;
    cout << g(a) << endl;
    cout << g(a) << endl;

    double x, y, r, theta;
    cout << "Enter x, y." << endl;
    cin >> x >> y;
    // r, theta passed by reference
    rect2polar(x, y, r, theta);
    cout << "R: " << r << ", Theta: " << theta << endl;

    return 0;
}