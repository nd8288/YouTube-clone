#include <iostream>
#include <iomanip>
using namespace std;
int main()
#define i  3.1416
{   int status_number=0;
    bool status_alphabet=false;
    cout<<"The value of pi : "<<i;
    cout<<"\nThe value of pi 4 decimal place of total width 8 : "<<"|"<<setw(8)<<i<<"|";
    cout<<"\nThe value of pi 4 decimal place of total width 10 : "<<"|"<<setw(10)<<i<<"|";
    cout<<"\nThe value of pi 4 decimal place of total width 8 : "<<"|"<<setfill('-')<<setw(8)<<i<<"|";
    cout<<"\nThe value of pi 4 decimal place of total width 10 : "<<"|"<<setfill('-')<<setw(10)<<i<<"|";
    cout<<"\nThe value of pi in scientific format is : "<< std::scientific <<i;
    cout<<"\nStatus in number : "<<status_number;
    cout<<"\nStatus in alphabet : "<<std::boolalpha <<status_alphabet;




return 0;
}
