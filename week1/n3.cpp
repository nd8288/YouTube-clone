#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Print the multiplication table of a number upto 10:";
    cout<<"\n-----------------------------------------------";
    cout<<"\nInput a number : ";
    cin>>num;
    for(int i=1;i<=10;i++){
    cout<<num<<" x "<<i<<" = "<<num*i;
    cout<<"\n";}
return 0;
}