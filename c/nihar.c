#include<stdio.h>
int main(){
int n,m,result;
char num;
printf("enter your character ");
scanf("%c",&num);
printf("enter number ");
scanf("%d%d",&n,&m);
switch (num){
case '+':
    result=n+m;
    printf("%d",result);
    break;
case '-':
    result=n-m;
    printf("%d",result);
    break;
case '*':
    result=n*m;
    printf("%d",result);
    break;
case '/':
    result=n/m;
    printf("%d",result);
    break;
case '%':
    result=n%m;
    printf("%d",result);
    break;
default:
    printf("Enter valid operater");
    }
    return 0;
}