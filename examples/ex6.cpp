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

class B
{
public:
int y;

    void get(){
        cout<<"Enter the value of y ";
        cin>>y;
    }
    void put(){
        cout<<"The value of y is "<<y;
    }

};

class C:public B{           //change A and B to get different output in public 
};

int main(){

 C obj;
 obj.get();
 obj.put();

 return 0;
}