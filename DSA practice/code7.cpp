#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    
    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            cout<<"the word is not the palindrome"<<endl;
            break;
        }
        else{
            cout<<"the word is the palindrome"<<endl;
            break;
        }
    }
    return 0;
}