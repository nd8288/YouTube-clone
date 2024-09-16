#include <iostream>
using namespace std;
int main()
{
    string input;
    int l=0,d=0;
    cout << "Please enter a string:\n";
    cin >> input;
    for( char ch : input)
    { 
        if(isdigit(ch))d++;
        else 
        if(isalpha(ch))l++;
        }cout <<"There are " <<l << " letters and " << d << " digits";
        return 0;
        }