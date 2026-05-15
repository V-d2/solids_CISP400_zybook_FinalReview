#include "Solids.h"







Solid::Solid(string _solidType) {
    this->solidType = _solidType;
}

string Solid::getType() {
    return solidType;
}


Cuboid::Cuboid(double w, double l, double h) : Solid("Cuboid") {
    width = w;
    length = l;
    height = h;
}
double Cuboid::getVolume() {
    return width * length * height;
}
 double Cuboid::getSurfaceArea()  {
    return (width * length + width * height + height * length) * 2;
}


 Cylinder::Cylinder(double h, double r) : Solid("Cylinder"), PI(3.14159265359) {
    height = h;
    radius = r;
}
double Cylinder::getVolume()  {
    return PI * radius * radius * height;
}

 double Cylinder::getSurfaceArea() {
    return 2 * PI * radius * radius + 2 * PI * radius * height;
}


 Sphere::Sphere(double r) : Solid("Sphere"), PI(3.14159265359) {
    radius = r;
}
double Sphere::getVolume() {
    return 4.0 / 3.0 * PI * radius * radius * radius;
}
double Sphere::getSurfaceArea() {
    return 4 * PI * radius * radius;
}
