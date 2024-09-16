#include <iostream>
using namespace std;
class A{
public:
void show(){
cout<<"This is class A";
}


};
class B{


};
class C:public A,public B{
public:  
void show(){
cout<<"This is class C";
}
};
int main(){
C c1;
c1.show();

return 0;
};