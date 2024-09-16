#include <iostream>
using namespace std;
int main()
{int i;
char word[50];
cout<<"Enter word:\n";
cin>>word;
for(i=0;word[i]!=NULL;i++);
for(i=i-1;i>=0;i--)
{cout<<word[i];
}
return 0;
}