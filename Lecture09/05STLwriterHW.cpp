#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

constexpr double pi = 3.1415926535;

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

class Shape {
protected:
    double x, y, z;
public:
    Shape (double x, double y, double z) : x(x), y(y), z(z) {}
    virtual void print() const = 0;
};

class Cylinder : public Shape{
private:
	double r, h;
	int facets;
public:
    Cylinder(double x, double y, double z, double r, double h, int facets) : Shape(x, y, z), r(r), h(h) {}
    void print() const {
        cout << "R: " << r << ", H: " << h << ", at (" << x << ',' << y << ',' << z << ")" << '\n';
    }
};

class Cube: public Shape {
private:
	double size;
public:
    Cube(double x, double y, double z, double size) : Shape(x, y, z), size(size) {
        // need to create the vectors for the cube
        vector
    }
    void print() const {
        cout << "Size: " << size << ", at (" << x << ',' << y << ',' << z << ")" << '\n';        
    }
};

class CAD {
private:
    vector<Shape*> shapes;
public:
    CAD() : shapes() {}
    ~CAD() {
        for (auto s : shapes) {
            delete s;
        }
    }

    void add(Shape* s) {
        shapes.push_back(s);
    }

    void write(string s) {
        cout << s << '\n';
    }
};

//https://www.stratasysdirect.com/resources/how-to-prepare-stl-files/
//https://www.viewstl.com/
int main() {
	CAD c;
	c.add(new Cube(0,0,0,5));
	c.add(new Cylinder(100,0,0,3, 10, 10));
    c.write("test.stl");
}
