#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int integer;
    long long_integer;
    char character;
    float float_num;
    double double_num;
    cin>>integer>>long_integer>>character>>float_num>>double_num;
    cout<<fixed<<setprecision(3);
    cout<<integer<<" "<<long_integer<<" "<<character<<" "<<float_num<<" ";
    cout<<fixed<<setprecision(9);
    cout<<double_num;

    return 0;
}