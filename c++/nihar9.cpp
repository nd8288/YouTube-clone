#include <iostream>
using namespace std;
int main()
{
    for (int i = 100; i <=400; i++)
    {
        int temp=i;
        int digit=i%10;
        if(digit%2!=0)
        {
            continue;
            }
            else{
                temp=temp/10;
                digit=temp%10;
                }if(digit%2!=0)
                {continue;
                }else
                {temp=temp/10;
                digit=temp%100;
                }if(digit%2!=0)
                {
                    continue;
                    }else
                    {cout<<i<<endl;
                    }
    }
}