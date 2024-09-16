#include <iostream>
using namespace std;
int main()
{
int temp;
cout<<"Enter the temperature : ";
cin>>temp;
if(temp>=80)
cout<<"swimming";
else if(temp>=60 && temp<80)
cout<<"tennis";
else if(temp>=40 && temp<60)
cout<<"golf";
else if(temp<40)
cout<<"skiing";


    return 0;
}