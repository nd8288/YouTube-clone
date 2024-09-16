#include <iostream>
using namespace std;
int main()
{
    double salary,newsalary,raisesalary;
    int rating;
    cout<<"Enter the performance rating\n 1.excellent 2.good 3.poor\n";
    cin>>rating;
    cout<<"Enter the salary :";
    cin>>salary;
    switch(rating)
    {
        case 1:
        raisesalary=0.06*salary;
        break;
        case 2:
        raisesalary=0.04*salary;
        break;
        case 3:
        raisesalary=0.015*salary;
        break;
    }
newsalary=salary+raisesalary;

cout<<"New salary of employee is :"<<newsalary<<endl;
cout<<"Rasie salary of employee is :"<<raisesalary;


    return 0;
}