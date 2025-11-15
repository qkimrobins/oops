#include <iostream>

using namespace std;
struct libf {
private:
    double days; 
    double fine;

public:
    void inp() {
        cout << "Enter the number of late days: ";
        cin >> days;
    }
    
    void calc() {
        if (days <= 5) {
            fine = 0.50;
            cout << "The fine is " << fine << " rupees." << endl;
        } else if (days >= 6 && days <= 10) {
            fine = 1;
            cout << "The fine is " << fine << " rupee." << endl;
        } else if (days > 10 && days <= 30) {
            fine = 5;
            cout << "The fine is " << fine << " rupees." << endl;
        } else if (days > 30) {
            cout << "Your membership is canceled." << endl;
        }
    }
};

int main() {
    
    libf lf;
    lf.inp();
    lf.calc();

    return 0;
}