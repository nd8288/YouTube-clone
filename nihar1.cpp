#include <iostream>
using namespace std;
void reverse(string str)
{
    for(int i=str.length()-1;i>=0;i--)
    cout<<str[i];
}
int main()
{
    string s;
    cout<<"please enter the string:\n";
    cin>>s;
    reverse(s);
    return 0;
}