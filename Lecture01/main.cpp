//  this is preprocessing directives NOT C++; cstdint must be on C++11
#include <iostream>
#include <cstdint>
#include <iomanip>
using namespace std;

int main() {

    cout << "Hello, World!" << endl;
    cout << 5 << 1.5 << 'x' << endl;
    //  causes overflow but still produces answer
    cout << 4 + 5 << " " << 2000000 * 2000000L << endl;
    //type promotion with the L to make one of them long

    /*
    int = 32 bits on typical laptop/desktop but int on Arduino is 16 bits
     portability issues
     3 bit int
            unsinged    signed
     000    0           0
     001    1           1
     010    2           2
     011    3           3
     100    4           -4
     101    5           -3
     110    6           -2
     111    7           -1

     7 + 1 unisgned = 1000
     32-bit signed int approx -21000000000 to + 210000000000 (usually a sign of overflow)
    sample problem: compute number of seconds in day, year, your age, 68 years (will hit overflow)
     */

    int a = 1;
    int b = 123456789;  // ok or not?
    int c = -123456789; //  ok or not?

    short int x;
    int y;  //  sizeof(int) >= 16
    long int z;
    long long int w;    //  sizeof(x) <= sizeof(y) <= sizeof(z)

    int32_t aa = 1; //  definitily 32 bits
    int64_t bb = 342345624345234;

    int32_t cc = -1;
    uint64_t dd = 0;

    cout << "HERE" << endl;
    cout << cc << endl;

    float f = 1.0f;
    double d = 1.0;
    long double e = 1.234523452345; //  not standard

    //  NEVER USE FLOATING POINT ONLY DOUBLE
    cout << setprecision(30);
    cout << e << endl;

    //  floating point communitve property holds but associativity does NOT hold!

    int count = 0;

    while (count < 10) {
        cout << count << ' ';
        count++;
    }
    cout << endl;
    for (int i = 1; i < 100; i+=2) {
        cout << i << ' ';
    }
    cout << endl;
    for (int i = 0; i < 100; i=i+3) {
        cout << i << ' ';
    }
    cout << endl;
    int sum = 0;
    for (int i = 1; i <= 10; i++)
        sum += i;
    //  single line for does not need braces
    cout << sum << endl;
    return 0;
}