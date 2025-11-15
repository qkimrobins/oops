#include <iostream>

namespace A {
    int value = 100;
    int display() {
        std::cout << "From A: The value is " << value << std::endl;
        return 0;
    }
}
namespace B {
    int value = 200;
    void display() {
        std::cout << "From B: The value is " << value << std::endl;
    }
}

int value = 300;
void display() {
    std::cout << "From Global: The value is " << value << std::endl;
}
int main() {
    std::cout << "Accessing A members:" << std::endl;
    std::cout << "Value: " << A::value << std::endl;
    A::display();

    std::cout << "\n";
    std::cout << "Accessing B members:" << std::endl;
    std::cout << "Value: " << B::value << std::endl;
    B::display();

    std::cout << "\n";
    std::cout << "Accessing Global members:" << std::endl;
    std::cout << "Value: " << ::value << std::endl;
    ::display(); 

    return 0;
}