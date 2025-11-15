#include <iostream>
#include <string>
using namespace std;

class emp {
private:
    string name;
    int id;
    static int count;  // Shared among all objects

public:
    // Parameterized Constructor
    emp(string empName, int empId) : name(empName), id(empId) {
        count++;
        cout << "Employee " << name << " (ID: " << id << ") joined. ";
        disp_count();
    }

    // Destructor
    ~emp() {
        count--;
        cout << "Employee " << name << " (ID: " << id << ") left. ";
        disp_count();
    }

    // Display employee details
    void disp_emp() const {
        cout << "Name: " << name << ", ID: " << id << endl;
    }

    // Static function to display current count
    static void disp_count() {
        cout << "Active Employees: " << count << endl;
    }
};

// Definition of static member
int emp::count = 0;

int main() {
    cout << "Company Employee Tracker\n\n";

    // Step 1: Create employee objects
    emp e1("Robins", 101);
    emp e2("Pranav", 102);

    // Step 2: Display individual details
    cout << "\nEmployee Details:\n";
    e1.disp_emp();
    e2.disp_emp();

    // Step 3: Create a scoped employee
    {
        emp e3("Rudrakshi", 103);
        e3.disp_emp();
        // e3 will be destroyed at the end of this block
    }

    // Step 4: Display count after destruction
    cout << "\nAfter Rudrakshi leaves:\n";
    emp::disp_count();

    // Step 5: Demonstrate shared static counter
    cout << "\nCreating another employee:\n";
    emp e4("Jass", 104);
    emp::disp_count();

    return 0;
}