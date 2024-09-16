#include<iostream>      //inheritance
using namespace std;
class A
{
public:
int x;

    void get(){
        cout<<"Enter the value of x ";
        cin>>x;
    }

    void put(){
        cout<<"The value of x is "<<x;
    }

};

class B:public A{
                

};

int main(){

 B obj;
 obj.get();
 obj.put();

 return 0;
}