#include <iostream>
#include <string>
using namespace std;
class staff {
public:
    string name;
    string staffID;
    int basic;
    void entry1() {
        cout << "Enter the staff name: " << endl;
        cin >> name;
        cout << "Enter the staff staffID: " << endl;
        cin >> staffID;
        cout << "Enter the basic pay: " << endl;
        cin >> basic;
    }
};

class dept {
public:
    string deptname;
    int allw;
    void entry2() {
        cout << "Enter the department of the doctor: " << endl;
        cin >> deptname;
        cout << "Enter the allowance of the doctor: " << endl;
        cin >> allw;
    }
};

class doctor : public staff, public dept {
public:
    int total;
    void comp() {
        total = basic + allw;
    }
    void disp() {
        cout << "The staff name: " << name << endl;
        cout << "The staffID: " << staffID << endl;
        cout << "The basic pay: " << basic << endl;
        cout << "The department: " << deptname << endl;
        cout << "The allowances: " << allw << endl;
        cout << "The final salary: " << total << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of entries: " << endl;
    cin >> n;
    doctor d[100];

    for (int i = 0; i < n; i++) {
        cout << "\n--- Entry " << i + 1 << " ---\n";
        d[i].entry1();
        d[i].entry2();
        d[i].comp();
    }

    cout << "\n--- Displaying Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nDoctor " << i + 1 << ":\n";
        d[i].disp();
    }
    return 0;
}
