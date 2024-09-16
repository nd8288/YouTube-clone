#include <iostream>
using namespace std;
class add{
public:
int x,y;
void get()
{
cout<<"Enter any two value";
cin>>x>>y;
}
int sum(){

return x + y;
}
};
int main()
{

    add obj;
    obj.get();
    cout<<"sum of two number is: "<<obj.sum();
    return 0;
}








