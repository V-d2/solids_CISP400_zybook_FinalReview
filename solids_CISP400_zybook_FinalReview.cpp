#include <iostream>
#include <vector>
#include <iomanip>
#include "Solids.h"

using namespace std;


int main()
{
	//Solid* CuboidPtr = new Cuboid(2, 2, 2);
    //Solid* CuboidPtr2 = new Cuboid(3, 4, 5);
    //Solid* CylinderRtr = new Cylinder(3, 2);
    //Solid* SpherePtr = new Sphere(4);

    vector<Solid*> vPtr;
    vPtr.push_back(new Cuboid(2, 2, 2));
    vPtr.push_back(new Cuboid(3, 4, 5));
    vPtr.push_back(new Cylinder(3, 2));
    vPtr.push_back(new Sphere(4));

    for (Solid* ptr : vPtr) {
		cout << setprecision(4) << fixed;
        cout << "Solid type: " << ptr->getType() << endl;
		cout << "Volume: " << ptr->getVolume() << endl;
		cout << "Surface Area: " << ptr->getSurfaceArea() << endl;
		cout << endl;
    }

}
