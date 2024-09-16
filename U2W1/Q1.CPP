#include <iostream>
#include <string>
using namespace std;
class employees{
public:
string name;
int total_salary;
int bonus;
int salary;
public:
employees(string n,int ts,int b,int s){
name=n;
total_salary=ts;
bonus=b;
salary=s;
}
void total(){
    total_salary = bonus+salary;
    cout<<"Employee total salary is "<<total_salary;
}
void display(){
    cout<<"Employees detail : "<<endl;
    cout<<"Employe name is :"<<name<<endl;
    cout<<"Employe salary is : "<<salary<<endl;
    cout<<"Employe bonus is : "<<bonus<<endl; 
}
};
int main(){
    string name;
    int total_salary,bonus,salary;
    cout<<"name of employe is "<<endl;
    cin>>name;
    cout<<"Enter the salary of employee "<<endl;
    cin>>salary;
    cout<<"Enter the bonus of employee "<<endl;
    cin>>bonus;
    employees a1(name ,total_salary,bonus,salary);
    a1.display();
    a1.total();
    return 0;
}