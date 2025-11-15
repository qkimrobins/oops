#include <iostream>
#include <string>
using namespace std;
class stud {
public:
    int roll;
    string name;
    void entry() {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the roll number of the student: ";
        cin >> roll;
    }
};
class marks : public stud {
public:
    int n[3];
    void num() {
        for (int i = 0; i < 3; i++) {
            cout << "Enter the marks in subject " << (i + 1) << ": ";
            cin >> n[i];
        }
    }
};
class result : public marks {
public:
    int sum = 0;
    float average;
    void total() {
        sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += n[i];
        }
        cout << "\nTotal Marks = " << sum << endl;
    }
    void avg() {
        average = sum / 3.0;
        cout << "Average Marks = " << average << endl;
    }
    void grade() {
        cout << "Grade: ";
        if (average >= 90)
            cout << "A+";
        else if (average >= 75)
            cout << "A";
        else if (average >= 60)
            cout << "B";
        else if (average >= 50)
            cout << "C";
        else
            cout << "Fail";
        cout << endl;
    }
    void display() {
        cout << "\n Student Result \n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        total();
        avg();
        grade();
    }
};
int main() {
    result r;
    r.entry();
    r.num();
    r.display();
    return 0;
}
