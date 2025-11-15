#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string pass;
    int len;
    int lw = 0, up = 0, dig = 0, sp = 0;

    cout << "Enter the password: ";
    cin >> pass;

    len = pass.length();

    for (char chr : pass) {
        if (islower(chr)) lw++;
        else if (isupper(chr)) up++;
        else if (isdigit(chr)) dig++;
        else sp++;
    }

    cout << "Lowercase letters in password = " << lw << endl;
    cout << "Uppercase letters in password = " << up << endl;
    cout << "Digits in password = " << dig << endl;
    cout << "Special characters in password = " << sp << endl;

    cout << "\nNow we will calculate password strength..." << endl;

    if (len < 6 && ((lw > 0 && up == 0 && dig == 0 && sp == 0) ||(lw == 0 && up > 0 && dig == 0 && sp == 0) ||(lw == 0 && up == 0 && dig > 0 && sp == 0) ||(lw == 0 && up == 0 && dig == 0 && sp > 0)))
     {
        cout << "Weak password: Too short and only one character type!" << endl;
    } 
    else if (len >= 8 && lw > 0 && up > 0 && dig > 0 && sp > 0) {
        cout << "Strong password!" << endl;
    } 
    else if ((lw > 0 && up > 0) || (dig > 0 && sp > 0)) {
        cout << "Medium strength password!" << endl;
    } 
    else {
        cout << "Weak password!" << endl;
    }

    return 0;
}