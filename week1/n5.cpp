#include <iostream>
using namespace std;
int main()
{
 int a,b,sum,count;
 cout<<"Enter two number: ";
 cin>>a>>b;
 sum=a+b;
 count=0;
 while(sum!=0){
sum=sum/10;
++count;

 }
 cout<<"Number of digits in the sum: "<<count;
    return 0;
}