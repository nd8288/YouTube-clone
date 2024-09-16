#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float weight,height,BMI;
    cout<<"Enter your weight: ";
    cin>>weight;
    cout<<"Enter your height: ";
    cin>>height;
    BMI=weight/pow(height,2);
    cout<<"Your BMI is "<<BMI;


    return 0;
}