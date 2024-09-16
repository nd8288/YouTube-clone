#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
int*ptr;
int n,i;
n=5;
{
cout<<"Enter the value of element: "<<n<<endl;
ptr=(int*)calloc(n,sizeof(int));
n=10;
cout<<"Enter the new size of array: "<<n;
ptr=(int*)realloc(ptr,n*sizeof(int));
}
return 0;
}