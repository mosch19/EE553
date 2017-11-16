#include <iostream>
#include <vector>
using namespace std;

// polymorphism: send the same method to different objects and execute different methods at compile time
class Vehicle {
    public:
    virtual void payToll() const = 0;
    friend ostream& operator << (ostream& s, const Vehicle& v) {
        return s << "what";
    }
};

class Car : public Vehicle {
    public:
    void payToll() const { cout << "Car"; }
};

class Truck : public Vehicle {
    public:
    void payToll() const { cout << "Truck"; }
};

int main() {
    
    Car c1;
    c1.payToll();
    
    Truck t1;
    t1.payToll();

    Vehicle* pv = &c1;    // pointer to Vehicle. But what type?
    pv->payToll();         // this is polymorphism. if was looping through vector or something. Compiler does not know what this is pointing at.

    vector<Vehicle*> vehicles;
    
    vehicles.push_back(new Car());
    vehicles.push_back(new Truck());
    vehicles.push_back(new Car());
    vehicles.push_back(new Car());
    vehicles.push_back(new Car());
    vehicles.push_back(new Truck());

    // auto is shorthand for the iterator below
    for (auto s : vehicles) {
        s->payToll();
    }

    // can also use iterator for this loop. Can use to walk through something I don't understand
    // details are hidden (encapsaluted)
    for(vector<Vehicle*>::iterator i = vehicles.begin(); i != vehicles.end(); i++) {
        cout << *i << ' '; // will only print location in memory. Need to print **i is the actual vehicle
        (*i)->payToll();
    }

    return 0;
}