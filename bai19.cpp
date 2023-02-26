#include<iostream>
using namespace std;
int main ()
{
    int x,y,z;
    cin>>x>>y>>z;
    bool b;
    if(x>y && x>z && y>z)
    {
        b=true;
    } else if (z>y && z>x && y>x)
    {
        b=true;
    } else {
        b=false;
    }
    cout<<b;
}