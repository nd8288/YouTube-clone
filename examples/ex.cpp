#include <iostream>
using namespace std;
class MyClass{
    public:
    int x;
    private:
    int y;
    public:
    void get()
    { 
        y=45;
        cout<<y;
    }


};
int main()
{

 MyClass obj;  

    obj.get();
    return 0;
}