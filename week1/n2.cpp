#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<6;i++){
    for(int j=0;j<4;j++){
    if(i==0||i==5||j==0||j==3){
    cout<<"5";
}
else
{
    cout<<" ";
}
    }
cout<<"\n";
    }
    return 0;
}