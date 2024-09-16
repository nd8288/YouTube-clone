#include <iostream>
using namespace std;
int main()
#define acceleration 32
{
float time,distance;
cout<<"Enter the time: ";
cin>>time;
distance = 0.5*acceleration*time*time;

cout<<"Distance travel by the object is "<<distance;

    return 0;
}