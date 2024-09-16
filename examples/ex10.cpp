#include <iostream>
using namespace std;                    //Virtual function
class A{
    public:
  virtual void show(){
        cout<<"show AAAA";
    }
    void print(){
        cout<<"print AAAA";
    }
};

class B{
    public:
    void show(){
        cout<<"show BBBB";
    }
    void print(){
        cout<<"print BBBB";
    }
};

int main(){

    A  *a1;
    B b1;
    a1=&b1;
    a1->show();
    a1->print();

return 0;
}