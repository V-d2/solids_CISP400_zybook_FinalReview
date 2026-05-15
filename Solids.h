#ifndef SOLIDS
#define SOLIDS
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
    virtual double getVolume() override{
        return width * length * height;
    }
    virtual double getSurfaceArea() override{
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
    virtual double getVolume() override{
        return PI * radius * radius * height;
    }

    virtual double getSurfaceArea() override{
        return 2 * PI * radius * radius + 2 * PI * radius * height;
    }
private:
    double height;
    double radius;
	const double PI;
};

class Sphere : public Solid {
public:
    Sphere(double r) : Solid("Sphere"), PI(3.14159265359) {
        radius = r;
    }
    virtual double getVolume() override {
        return 4.0 / 3.0 * PI * radius * radius * radius;
    }
    virtual double getSurfaceArea() override {
		return 4 * PI * radius * radius;
    }
private:
	double radius;
    double PI;
};



#endif