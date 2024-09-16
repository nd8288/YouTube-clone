#include <iostream>
using namespace std;
class N
{
public:
int x;
N(int a)
{
    x=a;
}
N(N &i)
{
x=i.x;

}

};
int main()
{

    N a1(37);
    N a2(a1);
cout<<a2.x<<endl;
cout<<a1.x;
    return 0;
}
