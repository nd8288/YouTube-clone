#include <iostream>

using namespace std;

template <class T>

void display(T x, T y)
{
cout<<x<<" and "<<y<<endl;

}

template <typename T>T max1(T x,T y)
{
return(x>y)?x:y;

}

int main() {

// Write C++ code here

display(4,2);

display(5.4,4.6);

display("join","learn");

display("C","L");

cout<<"Function return value"<<endl;

cout<<max1(4,5)<<endl;

return 0;

}

