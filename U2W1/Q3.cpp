#include <iostream>
using namespace std;
class constructer{
    public:
    float area;
    constructer(){

        area=0;
    }
    constructer(int a,int b){

        area=a*b;
    }
    void display(){
        cout<<area<<endl;
    }
};
int main()
{
constructer obj;
constructer objt(10,20);
obj.display();
objt.display();
return 1;

}