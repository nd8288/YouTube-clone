#include<iostream>
using namespace std;
class cube{
    public:
    int side;
    cube(){
        side=10;
    }
};
int main()
{
    cube c;
    cube c1;
    cout<<c.side;
    cout<<c1.side;
    return 0;
}