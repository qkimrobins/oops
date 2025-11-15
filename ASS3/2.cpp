#include<iostream>
using namespace std;

double power(double n, int p = 2) {
    double result = 1.0; 
    for (int i = 0; i < p; ++i) {
        result *= n;}
    return result;
}

int main() {
    double N,n;
    int p;
    cout << "Enter the number to be squared: ";
    cin >> n;
    N = power(n);
    cout << "The square of the above given number is " << N << endl;
    return 0;
}