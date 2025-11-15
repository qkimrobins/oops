#include <iostream>
#include <string>
using namespace std;
class Employee {
  public:
    string empName;
    string empID;
    int basic;
    void Entry() {
        cout << "Enter the name of the employee: " << endl;
        cin >> empName;
        cout << "Enter the employee ID: " << endl;
        cin >> empID;
        cout << "Enter the basic pay: " << endl;
        cin >> basic;
    }
    void display() {
        cout << "\n Employee Details " << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Final Salary (with 10% bonus): " << basic << endl;
    }
};
class payroll : public Employee {
  public:
    void bonus() {
        int b = (basic * 10) / 100;
        basic = basic + b;
    }
};
int main() {
    int x;
    cout << "Enter how many entries you want to make: " << endl;
    cin >> x;
    payroll p[x];
    for (int i = 0; i < x; i++) {
        cout << "\nEntering details for Employee " << i + 1 << ":" << endl;
        p[i].Entry();
        p[i].bonus();
    }
    cout << "\n Employee Payroll Summary " << endl;
    for (int i = 0; i < x; i++) {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        p[i].display();
    }
    return 0;
}
