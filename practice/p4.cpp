#include<iostream>
using namespace std;
class operation{
    int a,b,sum,sub,mult;
    float div;
    public:
    void get();
    void sumation();
    void subtract();
    void multiplication();
    void division();
};
inline void operation::get(){
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
}
inline void operation::sumation(){
    sum=a+b;
    cout<<"the sum of a and b is "<<a+b<<endl;
}
inline void operation::subtract(){
    sub=a-b;
    cout<<"the value of a and b is "<<a-b<<endl;
}
inline void operation::multiplication(){
    mult=a*b;
    cout<<mult<<endl;;
}
inline void operation::division(){
    div=a/b;
    cout<<a/b;
}
int main(){

    cout<<"the program using inline functon"<<endl;
    operation s;
    s.get();
    s.sumation();
    s.subtract();
    s.multiplication();
    s.division();
    return 0;
}