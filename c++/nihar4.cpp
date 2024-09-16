#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {cout<<"*";}
        cout<<"\n";}
        for(i=1;i<=4;i++)
        {for(j=i;j<=4;j++)
        {cout<<"*";
        }
        cout<<"\n";
        }
        return 0;
        }