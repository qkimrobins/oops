#include <iostream>
#include <conio.h>  
using namespace std;
class tollBooth {
private:
    unsigned int car;
    double cash;

public:
    // Constructor
    tollBooth() : car(0), cash(0.0) {}

    // Member function for paying car
    void paying() {
        car++;
        cash += 0.50;
    }

    // Member function for non-paying car
    void nonpaying() {
        car++;
    }

    // display function
    void disp() const {
       cout << "\nTotal cars passed: " << car <<endl;
       cout << "Total cash collected: $" << cash <<endl;
    }
};

int main() {
    tollBooth booth;
    char ch;

   cout << "TollBooth Interface\n";
   cout << "Press 'p' for paying car, 'n' for non-paying car, 'Esc' to exit and display totals.\n";

    while (true) {
        ch = _getch();  // Get character input without Enter

        if (ch == 27) { // ASCII code for Esc key
            booth.disp();
            break;
        } else if (ch == 'p' || ch == 'P') {
            booth.paying();
           cout << "Paying car recorded.\n";
        } else if (ch == 'n' || ch == 'N') {
            booth.nonpaying();
           cout << "Non-paying car recorded.\n";
        } else {
           cout << "Invalid input. Use 'p', 'n', or Esc.\n";
        }
    }

    return 0;
}