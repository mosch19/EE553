#include <iostream>
using namespace std;

class JulianDate {
private:
    double jd;  // each 1 is 1 day
    static JulianDate J2000;
public:
    JulianDate(int year, int month, int day, int hour, int minute, int second) {}
};

JulianDate JulianDate::J2000 = "???";

int main() {
    JulianDate today;   // get date right now
    JulianDate a(2000, 1, 1, 00, 00, 00);   // midnight, January 1, 2000
    JulianDate b(2000, 2, 28, 00, 00, 00);  // minight Febrary 28, 2000
    JulianDate c(2000, 3, 5, 04, 30, 00);

    /*
    how many days in a year?    365
    if year mod 4 == 0 LEAP YEAR (+1) Beb. 29
    EXCEPT if year mod 100 == 0 NOT LEAP YEAR (1904 leap year 1900 not)
    EXCEPT IF year mod 400 == 0 LEAP YEAR (2000 leap year 2400, etc)
    if J2000 = January 1, 2000 = 0  January 2, 2000 = 1
    JulianDate(2016, 3, 1)
    */

    return 0;
}