#include <iostream>
using namespace std;
class A
{
protected:
int x;
public:
int y;

void get(){
    cout<<"Enter the value ";
    cin>>x>>y;
}
void put()
{
cout<<"The value of x and y is "<<x<<" and "<<y;

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