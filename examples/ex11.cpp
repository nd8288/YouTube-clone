#include <iostream>
using namespace std;
class A
{ 
int x=10;
friend class B;
};
class B 
{ public:
void display(A &a)
{
cout<<a.x;} 
};
int main()
{ A a1;
B b1;
b1.display(a1);
return 0;
}
