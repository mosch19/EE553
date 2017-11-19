#include <iostream>
using namespace std;

template <typename Precision>
class Complex {
private:
    Precision r, i;
public:
    Complex
}

template <typename T>
int find(T x[], T target, int n) {
    for (int i = 0; i < n; i++) {
        // type must have defined equality
        if(x[i] == target)
            return i;
        return -1;
    }
}

int main() {
    int x[] = { 1, 3, 6, 2, 7, 3, 8 };
    cout << find(x, 6, sizeof(x)/sizeof(x[0])) << '\n';

    string y[] = { "cat", "dog", "wombat" };
    cout << find(y, string("wombat"), 6, sizeof(y)/sizeof(y[0])) << '\n';

    return 0;
}