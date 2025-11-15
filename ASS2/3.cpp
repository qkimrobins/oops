#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string sig;
    int len;
    cout << "Enter the colour of the traffic lights:";
    getline(cin, sig);
    len=sig.length();
    for (int i = 0; i < len; i++) {
        sig[i] = tolower(sig[i]);
    }
    if (sig == "red"||sig=="RED") {
        cout << "STOP" << endl;
    } 
    else if (sig == "yellow"|| sig=="YELLOW") {
        cout << "Get Ready" << endl;
    } 
    else if (sig == "green"||sig=="GREEN") {
        cout << "GO" << endl;
    } 
    else {
        cout << "Invalid input!" << endl;
    }

    return 0;
}
