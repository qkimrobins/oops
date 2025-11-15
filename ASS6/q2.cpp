#include <iostream>
#include <string>
using namespace std;

class musician {
public:
    void String() {
        cout << "veena, guitar, sitar, sarod and mandolin" << endl;
    }
    void wind() {
        cout << "flute, clarinet, saxophone, nadhaswaram, and piccolo" << endl;
    }
    void perc() {
        cout << "tabla, mridangam, bongos, drums and tambour" << endl;
    }
};

class Typeins : public musician {
public:
    void get() {
        cout << "Type of instrument to be displayed:" << endl;
        cout << "a. String instrument" << endl;
        cout << "b. Wind instrument" << endl;
        cout << "c. Percussion instrument" << endl;
    }

    void show() {
        char ch;
        cout << "Enter your choice (a/b/c): ";
        cin >> ch;

        if (ch == 'a' || ch == 'A') {
            cout << "The string instruments are: ";
            String();
        }
        else if (ch == 'b' || ch == 'B') {
            cout << "The wind instruments are: ";
            wind();
        }
        else if (ch == 'c' || ch == 'C') {
            cout << "The percussion instruments are: ";
            perc();
        }
        else {
            cout << "Invalid input" << endl;
        }
    }
};

int main() {
    Typeins obj;
    obj.get();
    obj.show();
    return 0;
}
