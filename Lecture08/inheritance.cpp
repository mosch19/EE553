//
// Created by mosch on 10/20/17.
//
#include <iostream>
using namespace std;

// parent class, super class (object oriented technology)
// base class in C++ and Java
// in programming parents dont say who their children are. children say who their parents are
// there is no control on who your children are. anyone can say they are your child
class Vehicle {
private:
    int speed;
public:
    Vehicle(int speed) : speed(speed) {}
    void setSpeed(int s){ speed = s }
    friend ostream& operator << (ostream& s, Vehicle& v) {
        return s << v.speed;
    }
};

// carries cargo : a truck is a vehicle : inherits from vehicle but will be unable to see speed
class Truck : public Vehicle {
private:
    double weight;
public:
    void setSpeed(int s) {}
    friend ostream& operator << (ostream& s, const Truck& t) {
        return s << "I am a truck and my speed is: " << (const Vehicle&)t;
    }
};

// carries passengers
class Bus : public Vehicle {
private:
    int numPassengers;
public:

};

// has color and speed
class Car : public Vehicle {
private:
    int speed;
    string color;
public:
    Car(const string& color, int s) : Vehicle(s), color(color) {}
    friend ostream& operator << (ostream& s, Car& c) {
        return s << "I am a car and my speed is: " << (const Vehicle&)c;
    }

};

int main() {

    Car c1("yellow", 99);
    Bus b1(28, 35);
    Truck t1(18000, 42);

    return 0;
}