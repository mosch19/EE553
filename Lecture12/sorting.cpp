#include <iostream>
using namespace std;

class Elephant {
private:
    string name;
    int age;
public:
    Elephant(const string name, int age) : name(name), age(age) {}
    friend bool operator > (Elephant& a, Elephant& b) {
        if (a.age > b.age) {
            return true;
        } else if (a.age < b.age) {
            return false;
        } else {
            // equal elements not swapped in bubble sort
            cout << "Some of us are the same age!\n";
            return false;
        }
    }
    
    friend ostream& operator << (ostream& s, const Elephant& a) {
        s << "My name is " << a.name << " and I am " << a.age << " years old.\n";
    }
};

template <typename T>
void bubbleSort(T x[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(x[j] > x[j + 1]) {
                swap(x[j], x[j + 1]);
            }
        }
    }
}

template <typename T>
void print( T x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << x[i] << ' ';
    }
    cout << '\n';
}

int main() {
    
    int x[] = { 1, 2, 3, 4, 5 };
    bubbleSort(x, 5);
    print(x, 5);

    int y[] = { 1, 2, 3, 4, 5, 6 };
    bubbleSort(y, 6);
    print(y, 6);

    string s[] = { "hello", "goodbye", "weasel", "wombat", "cat" };
    bubbleSort(s, 5);
    print(s, 5);
    
    Elephant e[] = { Elephant("Fred", 20), Elephant("Jeff", 56), Elephant("Larry", 36) };
    bubbleSort(e, 3);
    print(e, 3);
    
    return 0;
}