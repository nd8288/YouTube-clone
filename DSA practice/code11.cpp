#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];                                   //  3 1 5 6 2 4       value
    for( int i=0;i<n;i++){                        //  1 3 5 6 2 4       i=0
        cin>>arr[i];                              //  1 3 5 6 2 4       i=1
    }                                             //  1 3 5 6 2 4       i=2
    for(int i=0;i<n;i++)                          //  1 3 5 2 6 4       i=3                                                 
   {                                              //  1 3 5 2 4 6       i=4    4 3 1 5 6 2
            int temp=arr[i];
            arr[i]=arr[n-1];
            arr[n-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}