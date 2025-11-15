#include <iostream>
using namespace std;
int main() {
    int item, bill = 0,f=1;
    cout << "Welcome to RobMart!!!" << endl;
    cout << "Enter the price of items one by one " ;
    cout << "To checkout, enter 0." << endl;
    while (f!=0) {
        cout << "Enter item price: ";
        cin >> item;
        if (item == 0) {
            break;}bill += item;}
            if(bill>5000){
                bill=bill-(15*bill/100);
                cout << "Your total bill after (15% discount)is: " << bill << endl;
                cout << "Thank you for shopping with RobMart!" << endl;
    } 
    else{
    cout << "Your total bill is: " << bill << endl;
    cout << "Thank you for shopping with RobMart!" << endl;}
        return 0;
}