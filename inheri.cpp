#include<iostream>
using namespace std;

class B {
    int a;
    public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
    void display();
};

class D : public B {
    int c;
    public:
    void mul();
    void display(); // hides B::display()
};

void D::display() {
    cout << "welcome";
}

void B::display() {
    cout << "welcome 2";
}

int main() {
    D ob1;
    cout << "Size of ob1: " << sizeof(ob1) << endl;
    
    // Call the display method from the derived class
   ob1.B::display(); // Calls the display method of base class B


    return 0;
}
