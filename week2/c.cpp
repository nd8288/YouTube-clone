#include <iostream>
using namespace std;
class number{
    public:
    float sum;
    number(int a , int b){
    sum = a+b;
    cout<<"distructer"<<endl;
}
void add(int a,int b){
    sum=a+b;
    cout<<"sum ="<<sum<<endl;
}
void add(double a,double b)
{
    sum=a+b;
cout<<"sum ="<<sum;
}
};
int main(){
    number obj(0,0);
obj.add(5,5);
obj.add(5.3,6.2);


    return 0;
}



