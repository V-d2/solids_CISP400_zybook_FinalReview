#ifndef SOLID
#define SOLID
#include <iostream>


using namespace std;

class Solid {
public:
    Solid(string _solidType) {
		this->solidType = _solidType;
    }

    virtual double getVolume() = 0;
    virtual double getSurfaceArea() = 0;
    string getType(){
		return solidType;
    }
protected:
    string solidType;
private:
};


class  Cuboid : public Solid {
public:
    Cuboid(double w, double l, double h) : Solid("Cuboid") {
        width = w;
		length = l;
		height = h;
    }
    double getVolume() override {
        return width * length * height;
    }
    double getSurfaceArea() {
		return (width * length + width * height + height * length ) * 2;
    }
private:
    double width;
    double length;
    double height;
};

class Cylinder : public Solid {
public:
    Cylinder(double h, double r) : Solid("Cylinder"), PI(3.14159265359) {
        height = h;
        radius = r;
    }
private:
    double height;
    double radius;
	const double PI;
};




#endif