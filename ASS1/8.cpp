#include<iostream>
#include<string>
using namespace std;
struct student{
    std::string name, roll, deg, hostel;
    float cgpa;
    void add(){
        cout << "Enter student details:" << "\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Roll: ";
        cin >> roll;
        cout << "Degree: ";
        cin >> deg;
        cout << "Hostel: ";
        cin >> hostel;
        cout << "CGPA: ";
        cin >> cgpa;
        cout << "Details added successfully" << "\n";}
    void upd(){
        int f;
        cout << "Which detail do you want to update: 1.Name\n2.Roll\n3.Degree\n4.Hostel\n";
        cin >> f;
        if(f == 1){
            cout << "Enter updated name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Updated successfully\n";}
        else if(f == 2){
            cout << "Enter updated roll: ";
            cin >> roll;
            cout << "Updated successfully\n";}
        else if(f == 3){
            cout << "Enter updated degree: ";
            cin >> deg;
            cout << "Updated successfully\n";}
        else if(f == 4){
            cout << "Enter updated hostel: ";
            cin >> hostel;
            cout << "Updated successfully\n";}
        else{
            cout << "Invalid input\n"; }
    }
    void upd_cgpa(){
        cout << "Enter the new CGPA: ";
        cin >> cgpa;
        cout << "Updated successfully\n";}
    void upd_address(){
        cout << "Enter the new Residence/Hostel: ";
        cin >> hostel;
        cout << "Updated successfully\n";
    }
    void disp(){
        cout << "The Final Details of the student are:\n";
        cout << "Name: " << name << "\n";
        cout << "Roll: " << roll << "\n";
        cout << "Degree: " << deg << "\n";
        cout << "Hostel: " << hostel << "\n";
        cout << "CGPA: " << cgpa << "\n"; }};

int main(){
    int n, f;
    cout << "Enter the number of students: ";
    cin >> n;
    student students[n]; 
    for(int i = 0; i < n; i++){
        students[i].add();
        cout<<"\n";
        students[i].disp(); }
 cout << "If you want to edit any details, enter '1',else enter'0': ";
 cin >> f;

    if(f == 1){
        int studID;
        cout << "Enter the student number (0 to " << n - 1 << ") you want to edit: ";
        cin >> studID;
        if (studID >= 0 && studID < n) {
            students[studID].upd();
            cout<<"\n";
            students[studID].disp();
        } else {
            cout << "Invalid student number.\n";
        }
    }

    return 0;
}