//
// Created by mosch on 10/19/17.
//
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string firstName, lastName;
    int weight;
public:
    explicit Person (string f, string l, int w = 0) : firstName(f), lastName(l), weight(w) {}
    // set name method
    Person& setName (string l, string f) {
        lastName = l;
        firstName = f;
    }
    // overload the + operator
    friend Person operator + (const Person& dickhead, const Person& b) {
        return Person("", "", dickhead.weight + b.weight);
    }
    // overload the << operator
    friend ostream& operator << (ostream& s, const Person& a) {
        return s << a.lastName << ' ' << a.firstName << ' ' << a.weight;
    }
};

int main() {
    Person a("Donald", "Trump", 250);
    Person b("Ivanka", "Trump", 190);
    Person c = a + b; // create baby with mass 250+190
    c.setName("Satan", "Trump");
    cout << c << endl; // output should be “Satan Trump 440”
}