#include<iostream>
using namespace std;

double power(double n, int p = 3) {
    double result = 1.0; 
    for (int i = 0; i < p; ++i) {
        result *= n;}
    return result;
}

int main() {
    double N,n;
    int p;
    cout << "Enter the number to be cubed: ";
    cin >> n;
    N = power(n);
    cout << "The cube of the above given number is " << N << endl;
    return 0;
}