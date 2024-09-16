#include <iostream>
using namespace std;
template <class T1,class T2>class Myclass
{
    T1 p1;
    T2 p2;
    public:
    int i;
    Myclass(T1 x,T2 y)
    {
        p1=x;
        p2=y;
    }
    void display()
    {
      
        for(int i=1;i<=p2;i++)
        {
            cout<<p1<<endl;
        }
    }
};

int main() 
{
    //
    Myclass<int,int> obj1(45,2);
    obj1.display();
    Myclass<string,int>obj2("join",5);
    obj2.display();
    return 0;
}