#include <iostream>
using namespace std;
int main()
{
int mark;
cout<<"Enter the percentage :";
cin>>mark;
if(mark>85)
cout<<"pass with grade E";
else if(mark>75 && mark<85)
cout<<"pass with grade O";
else if(mark>65 && mark<75)
cout<<"pass with grade G";
else if(mark>50 && mark<65)
cout<<"pass with grade S";
else if(mark>33 && mark<50)
cout<<"Fail\nResit";
else if(mark<33)
cout<<"Fail\nRedo course";

    return 0;
}