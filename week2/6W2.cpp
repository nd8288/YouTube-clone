#include <iostream>
using namespace std;
int main()
{
int n,quan=0,dis;
cout<<"Enter the quantity that you purchased :";
cin>>n;
quan=n*100;
if(quan>=1000)
{
    dis=quan-(quan/10);
}
cout<<"The total cost of user is :"<<dis;
    return 0;
}