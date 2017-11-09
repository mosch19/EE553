//
// Created by mosch on 10/20/17.
//
#include <iostream>

// two objects can never be colocated in memory, this serves as their unique id like UUID in database
// parent class, super class in Java(object oriented technology)
// base class in C++ and Java
// concrete classes can be instantiated (like cars & trucks)
// abstract classes cannot be instantiated
class Vehicle {
private:
    double speed;
    double weight;
    static int count; // this does not get copied to children
public:
    double getSpeed() { return speed; }
    Vehicle(double speed, double weight) : speed(speed), weight(weight) { count++; }
    virtual void payToll() const = 0;  // will call the appropriate toll based on childs virtual function table // pure virtual function for abstract class // virtual forces abstract
    virtual ~Vehicle() {} // needed so that the specific destructor for each object is called even if created in the traffic sim...clever
};

class Car : public Vehicle {
private:
    std::string color;
    int* p;
public:
    Car(double speed, double weight, const std::string& color) : Vehicle(speed, weight) {}
    void payToll() const {
        std::cout << "Car pays: " << 15 << '\n';
    }
    ~Car() {
            std::cout << "Destructor of car" << '\n';
    };

};

class Bus : public Vehicle {
private:
    int numPassengers;
public:
    Bus(double speed, double weight, int numPassengers) : Vehicle(speed, weight), numPassengers(numPassengers) {}
    void payToll() const {
        std::cout << "Bus pays: " << 5 << '\n';
    }
    ~Bus() {
        std::cout << "Destructor of bus" << '\n';
    }
};

class Truck : public Vehicle {
private:
    int axles;
public:
    Truck(double speed, double weight, int axles) : Vehicle(speed, weight), axles(axles) {}
    void payToll() const {
        std::cout << "Truck pays: " << 20 * axles << '\n';
    }
    ~Truck() {
        std::cout << "Destructor of truck" << '\n';
    }
};

class TrafficSim {
private:
    Vehicle* vehicles[10]; // pointers to 10 vehicles
    int n;
public:
    TrafficSim() {
        n = 0;
    }
    ~TrafficSim() {
        for (int i = 0; i < n; i++) {
            delete vehicles[i];
        }
    }
    void addCar() {
        vehicles[n++] = new Car(55, 1200, "red");
    }
    void addBus() {
        vehicles[n++] = new Bus(40, 1600, 35);
    }
    void addTruck() {
        vehicles[n++] = new Truck(20, 5000, 8);
    }
    void payToll() {
        for (int i = 0; i < n; i++) {
            vehicles[i]->payToll();
        }
    }
};

int Vehicle::count = 0;

int main() {
    //Vehicle v(55, 1000); // vehicles no longer exist, children are replacing the paytoll method of the parent
    Car c(90, 500, "red");
    Bus b(40, 1200, 30);
    Truck t(30, 2000, 4);
    t.payToll();
    c.payToll();
    b.payToll();
    // v.payToll();
    // this pointer does not know what it is pointing to?
    Vehicle* p;
    p = &t;
    p->payToll();
    TrafficSim traffic;
    traffic.addCar();
    traffic.addBus();
    traffic.addBus();
    traffic.addTruck();
    traffic.payToll();

    /*
    std::cout << sizeof(v) << '\n';
    std::cout << sizeof(c) << '\n';
    std::cout << sizeof(b) << '\n';
    */
     return 0;
}