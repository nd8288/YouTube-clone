#include<iostream>
using namespace std;
class X
{
    public:
    int a,b;
    X()
    {
        a=0;b=0;
    }
    int print()
    {
        cout<<a<<"\n"<<b;
    }
};
int main()
{
    X ob;
    ob.print();
    return 0;
}