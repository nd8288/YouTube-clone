#include <iostream>
using namespace std;
class rectangle{
    public:
    int length;
    int width;
    public:
    rectangle(int l,int w){
        length=l;
        width=w;
        cout<<"Rectangle object created "<<endl;
    }
~rectangle(){

    cout<<"object destruction "<<endl;
}
};
int main(){

    rectangle rec(10,20);
    return 0;
}