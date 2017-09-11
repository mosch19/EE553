#include <iostream>
#include <string>
using namespace std;

//  print out the string n times   cout << msg will print
void print(string msg, int n) {
    for (int i = 0; i < n; i ++)
        cout << msg << ' ';
    cout << '\n';
}

// this copy of msg does NOT affect the one from main
string repeat(string msg, int n) {
    string big = msg + ' ';
    for (int i = 0; i < n; i++) {
        big += msg + ' ';
    }
    return big;
}

string reverse(string msg) {    // hello --> olleh
    string reverse = msg;
    for (int i = 0; i < msg.length() + 1; i++) {
        reverse[i - 1] = msg[msg.length() - i];
    }
    return reverse;
}

char nextChar(char c) {
    return int(c) + 1;
}

int factorial(int n) {
    int factorial = 1;
    while (n != 1) {
        factorial *= n;
        n--;
    }
    return factorial;
}


int main() {
    print("hello", 3);
    string big = repeat("yo", 9);
    cout << big << endl;
    cout << nextChar('a') << '\n';
    cout << factorial(5) << '\n'; // 5*4*3*2*1 = 120
    cout << reverse("Hello") << '\n';
    //	cout << factorial2(21) << '\n'; // 5*4*3*2*1 = 120
    //	cout << factorial2(51) << '\n'; // 5*4*3*2*1 = 120
    //	cout << choose(52, 6) << '\n';  //52! / (6!(52-6)!)  52C0 = 1 52C1 = 52
}
