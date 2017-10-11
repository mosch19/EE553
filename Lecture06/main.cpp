#include <iostream>
using namespace std;

int main() {
    int a = 5;  // a may not even be stored in memory, could just be in a register
    cout << a + 2;
    int* p;     // read backward: p is a pointer to an integer
    cout << *p; // probably a seg fault since it likely isnt operating inside the program space
    p = &a;
    cout << p << endl;
    cout << &p << endl;
    int** q; // point to pointer to int
    //  q = &a; // wrong type since it is simply a pointer to a pointer
    q = &p;
    cout << **q;
    return 0;
}