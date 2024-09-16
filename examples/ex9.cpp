#include <iostream>
using namespace std;
class A{
public:
void show()
{
    cout<<"This is class A"<<endl;
}
};

class B:public A{
public:                                               //A is over ride to B
    void show(){
        cout<<"This is class B";
    }
};
int main(){
//A a1;
//a1.show();
B b1;
b1.show();

    return 0;
}