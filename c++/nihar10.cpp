#include <iostream>
using namespace std;
int main()
{string m;
cout<<"enter the month:";
cin>>m;
if(m=="january"||m=="march"||m=="may"||m=="july"||m=="august"||m=="october"||m=="december")
 {cout<<m<<" has 31 days";
 }
 else if(m== "april"||m=="june"||m=="september"||m=="november")
 {cout<<m<<" has 30 days";
 }
 else if(m=="february")cout << m <<" has 28/29 days";
 else
 {
    cout<<"Given Is Not A Month";
    }
    return 0;
    }