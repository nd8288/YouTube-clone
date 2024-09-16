#include <iostream>
using namespace std;
int main()
{
    int m,n,a[4][3];
    cout << "Enter number of rows and columns:\n";
    cin >> m >> n;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {a[i][j]=i*j;
        cout<<a[i][j]<<" ";}
    }
    return 0;
    