#include <iostream>
#include <cmath>
using namespace std;
int main()
#define r 6371
{
    float a,b,c,d,dist,e;
    float p= 0.017453292519943295;
    cout<<"Print the distance between two points on the surface of earth:";
    cout<<"\n--------------------------------------------------------";
    cout<<"\nInput the latitude of coordinate 1: ";
    cin>>a;
    cout<<"\nInput the longitude of coordinate 1: ";
    cin>>b;
    cout<<"\nInput the latitude of coordinate 2: ";
    cin>>c;
    cout<<"\nInput the longitude of coordinate 2: ";
    cin>>d;
    e = 0.5-cos((c-a)*p)/2 + cos(a*p)*cos(c*p) * (1-cos((d-b)*p)) / 2;
    dist= 2 * r * asin(sqrt(e));
    cout<<"\nThe distance between those points is: "<<dist;
return 0;
}
