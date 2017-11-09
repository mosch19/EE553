//
// Created by mosch on 10/27/17.
//
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    vector<int> a;
    a.push_back(5);
    for (int i = 0; i < 10; i++) {
        a.push_back(i);
    }
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    vector<string> b;
    b.push_back("abc");
    b.push_back("def");
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << ' ';
    }
    // the new c++ 11 way of making a quick for loop. workes even if type changes of b
    for (auto x : b ) {
        cout << x << ' ';
    }

    int d = 1, e = 3;
    // swap(d, e); determines the type at compile time which is really cool

    return 0;
}
