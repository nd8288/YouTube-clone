#include <iostream>
using namespace std;
class test
{
    private:
    int num;
    public:
    test(){
        num=2000;
    }

    void operator --()
    {
        num=num/100;
    }
    void print()
    {
        cout<<"the out put is = "<<num;
    }

};
int main()
{
test aa;
--aa;
aa.print();

    return 0;
}