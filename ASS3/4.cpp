#include <iostream>
using namespace std;
// vol of a cube
double vol(double a) {return a * a * a;}
// vol of a cuboid
double vol(double l, double b, double h) {return l * b * h;}
// vol of a sphere
double vol(double r, bool isSphere) {return (4.0 / 3.0) * 3.14159 * r * r * r;}
int main() {
    int shape;
    cout << "This program computes volume based on shape\n";
    cout << "1. Cube\n2. Cuboid\n3. Sphere\n";
    cout << "Choose the shape to find volume of: ";
    cin >> shape;
    if (shape == 1) {
        double a;
        cout << "Enter a of the cube: ";
        cin >> a;
        cout << "vol of the cube is: " << vol(a) << endl;
    }
    else if (shape == 2) {
        double l, b, h;
        cout << "Enter l of the cuboid: ";
        cin >> l;
        cout << "Enter b of the cuboid: ";
        cin >> b;
        cout << "Enter h of the cuboid: ";
        cin >> h;
        cout << "vol of the cuboid is: " << vol(l, b, h) << endl;
    }
    else if (shape == 3) {
        double r;
        cout << "Enter r of the sphere: ";
        cin >> r;
        cout << "vol of the sphere is: " << vol(r, true) << endl;
    }
    else {
        cout << "Invalid option" << endl;
    }
    return 0;
}
