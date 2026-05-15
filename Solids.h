#ifndef SOLIDS
#define SOLIDS
#include <iostream>


using namespace std;

class Solid {
public:
    Solid(string _solidType);
    virtual double getVolume() = 0;
    virtual double getSurfaceArea() = 0;
    string getType();
protected:
    string solidType;
private:
};


class  Cuboid : public Solid {
public:
    Cuboid(double w, double l, double h);
    virtual double getVolume() override;
    virtual double getSurfaceArea() override;
private:
    double width;
    double length;
    double height;
};

class Cylinder : public Solid {
public:
    Cylinder(double h, double r);
    virtual double getVolume() override;
    virtual double getSurfaceArea() override;
private:
    double height;
    double radius;
	const double PI;
};

class Sphere : public Solid {
public:
    Sphere(double r);
    virtual double getVolume() override;
    virtual double getSurfaceArea() override;
private:
	double radius;
    double PI;
};

#endif