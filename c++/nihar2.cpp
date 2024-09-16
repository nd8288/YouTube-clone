#include <iostream>
using namespace std;
int main()
{
int result,n,m,choice;
cout<<"Enter any operater\n 1.add 2.subtract 3.multiplication 4.division 5.modulus";
cin>>choice;
cout<<"Enter any two number: ";
cin>>n>>m;
switch (choice)
{
case 1:
result=n+m;
    break;
case 2:
result=n-m;
    break;
case 3:
    result=n*m;
    break;
case 4:
    result=n/m;
    break;
case 5:
    result=n%m;
    break;

default:
    cout<<"Enter valid operater";
    break;
}
cout<<"answer: "<<result;
return 0;
}