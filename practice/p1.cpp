#include<iostream>
using namespace std;
class base{
    public:
    void print(){
        cout<<"This is baase class";
    }
};

class derived : public base{
    public:
    void print(){
        cout<<"derived class"<<endl;
        base::print();
    }
};
int main(){

    derived obj;
    obj.print();
    return 0;
}