#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int num,guess,i;
    srand(time(0));
    num = rand() % 9 + 1;
    do{cin>>guess;
    if(guess==num)
    {cout<<"Well guessed!"<<endl;
    }
    else
    cout<<"Try Again"<<endl;
    }while(guess!=num);
    return 0;
}