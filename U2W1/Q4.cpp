#include <iostream>
using namespace std;
class function{
    public:
    float sum;
    function(int a,int b){

        sum=(a+b);
    }
    void disp(int a,int b){
        cout<<sum<<endl;
    }
    function(double a,double b){
        sum=a+b;
    }
    void disp(double a,double b){
        cout<<sum;
    }
};
int main(){

    function o(5,4);
    function o2(12.5,13.4);
    o.disp(10,5);
    o2.disp(12.5,13.5);

    return 0;
}