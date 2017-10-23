//
// Created by Michael Moschetti on 10/16/17.
//
#include <iostream>
#include <cmath>

using namespace std;

class Vec3d {
private:
    double x, y, z;
public:
    explicit Vec3d(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
    // print method for the vector, operator overloading not necessary
    void print() {
        cout << '<' << x << ", " << y << ", " << z << '>' << '\n';
    }
    double getX() const {
        return x;
    }
    double getY() const {
        return y;
    }
    double getZ() const {
        return z;
    }
    // dot product method
    double dot(const Vec3d& a) {
        return x*a.x + y*a.y + z*a.z;
    }
    // dist method
    double dist(const Vec3d& a) {
        return sqrt(pow(x-a.x, 2) + pow(y-a.y, 2) + pow(z-a.z, 2));
    }
    // scalar multiplication
    friend Vec3d operator * (const Vec3d& a, int b) {
        Vec3d result(a.x*b, a.y*b, a.z*b);
        return result;
    }
    friend Vec3d operator * (int b, const Vec3d& a) {
        return a * b;
    }
    friend Vec3d operator + (const Vec3d& a, const Vec3d& b) {
        Vec3d result(a.x+b.x, a.y+b.y, a.z+b.z);
        return result;
    }
    friend Vec3d operator - (const Vec3d& a, const Vec3d& b) {
        Vec3d result(a.x-b.x, a.y-b.y, a.z-b.z);
        return result;
    }

};
// function dot product
double dot(const Vec3d& a, const Vec3d& b) {
    return a.getX()*b.getX() + a.getY()*b.getY() + a.getZ()*b.getZ();
}
// function dist
double dist(const Vec3d& a, const Vec3d& b) {
    return sqrt(pow(a.getX()-b.getX(), 2) + pow(a.getY()-b.getY(), 2) + pow(a.getZ()-b.getZ(), 2));
}

int main() {

    Vec3d a(1.0, 2.5, 3.0);
    Vec3d b(1.0, 2.5); // z=0
    Vec3d c(1.0); // y,z = 0
    Vec3d d; // x,y,z=0
    //	Vec3d e(); //THIS IS A FUNCTION!!!
    Vec3d e = a * 2; // scalar multiplication
    Vec3d f = 2 * a; // reverse direction
    Vec3d g = a + b; // vector addition
    Vec3d h = a - b; // vector subtraction
    double z1 = dot(a,b); // function
    double z2 = a.dot(b); // method
    // add static later
    double w1 = a.dist(b);
    double w2 = dist(a,b);

    return 0;
}
