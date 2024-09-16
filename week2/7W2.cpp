#include <iostream>
using namespace std;
int main ()
{
int mark;
char grade;
cout<<"Enter your mark : ";
cin>>mark;
if(mark<25)
grade='F';
else if(mark>25 && mark<45)
grade='E';
else if(mark>45&& mark<50)
grade='D';
else if(mark>50 && mark<60)
grade='C';
else if(mark>60 && mark<80)
grade='B';
else if(mark>80)
grade='A';
{
cout<<"Student grade is : "<<grade;
}
    return 0;
}