#include<iostream>
using namespace std;

class A {
    int a, square;

public:
    void display() {
        cout << "Enter an integer number : " << endl;
        cin >> a;
        square = a * a;
        cout << "Square of " << a << " is : " << square << endl;
    }
};

class B {
    int b, cube;

public:
    void show() {
        cout << "Enter an integer number : " << endl;
        cin >> b;
        cube = b * b * b;
        cout << "Cube of " << b << " is : " << cube << endl;
    }
};

class C : public A, public B {
public:
    void print() {
        A::display(); // Call display() from class A
        B::show();    // Call show() from class B
    }
};

int main() {
    C obj;
    obj.print();
    return 0;
}
