#include <iostream>
#include <string>
using namespace std;

class Ticket {
private:
    string pass_name;
    string flight_num;
    string seat_num;

public:
    // Parameterized Constructor
    Ticket(string name, string flight, string seat)
        : pass_name(name), flight_num(flight), seat_num(seat) {
        cout << "Ticket created for " << pass_name << endl;
    }

    // Copy Constructor
    Ticket(const Ticket& original)
        : pass_name(original.pass_name),
          flight_num(original.flight_num),
          seat_num(original.seat_num) {
        cout << "Ticket copied for " << pass_name << endl;
    }

    // Modify passenger name and seat number
    void upd_pass(string name, string seat) {
        pass_name = name;
        seat_num = seat;
    }

    // Display ticket details
    void disp() const {
        cout << "Passenger Name: " << pass_name << endl;
        cout << "Flight Number : " << flight_num << endl;
        cout << "Seat Number   : " << seat_num << endl;
        cout << "     " << endl;
    }

    // Destructor
    ~Ticket() {
        cout << "Ticket for " << pass_name << " is destroyed." << endl;
    }
};

int main() {
    // Step 1: Create primary ticket
    Ticket primary("Robins", "AI202", "12A");

    // Step 2: Use copy constructor for group members
    Ticket m1 = primary;
    Ticket m2 = primary;

    // Step 3: Update passenger name and seat number
    m1.upd_pass("Pranav", "12B");
    m2.upd_pass("Dinesh", "12C");

    // Step 4: Display all ticket details
    cout << "\nGroup Booking Details:\n";
    cout << "       " << endl;
    primary.disp();
    m1.disp();
    m2.disp();

    // Step 5: Destructor messages will appear automatically at program end
    return 0;
}