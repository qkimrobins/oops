#include <iostream>
using namespace std;
double area(double l = 10.0, double b = 10.0) {
    return l * b;
}
int main() {
    double len, bred;
    int opt;
    double a = area();
    cout << "The area of the rectangle with default dimensions is: " << a << endl;
    cout << "If you want to perform with custom values, press 1. To exit, press 0." << endl;
    cin >> opt;
    while (opt != 0) {
        cout << "Enter the length: ";
        cin >> len;
        cout << "Enter the breadth: ";
        cin >> bred;
        double a2 = area(len, bred);
        cout << "Then area of the rectangle with a length of " << len << " and a breadth of " << bred << " is: " << a2 << endl;
        cout << "\nDo you want to perform another calculation? Press 1. To exit, press 0." << endl;
        cin >> opt;
    }
    cout << "Exiting program......" << endl;
    return 0;
}