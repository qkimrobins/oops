#include <iostream>
using namespace std;

class libf {
private:
    double fine;
    double days;
    void calc() {
        if (days <= 5) {fine = 0.5;disp();} 
        else if (days > 5 && days <= 10) {fine = 1.0;disp();} 
        else if (days > 10 && days <= 30) {fine = 5.0;disp();} 
        else {cancel();}
    }
    
    void disp() {cout << "The fine is " << fine << " rupee." << endl;}
    
    void cancel() {cout << "Your membership is canceled." << endl;}

public:
    void inp() {
        cout << "Enter number of late days: ";
        cin >> days;
        calc();}};

int main() {
    libf mylib;
    mylib.inp();

    return 0;
}
